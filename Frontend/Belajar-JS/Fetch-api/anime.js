async function getData(keyword) {
    const response = await fetch(`https://api.jikan.moe/v4/anime?q=${keyword}`)

    const data = await response.json()
    return data
}


document.querySelector('.form-search').addEventListener('submit',  async (event) => {
    event.preventDefault()
    const input = document.querySelector('.input-search')
    const keyword = input.value 
    const data = await getData(keyword)
    let animeCards = ""
    data.data.forEach((anime) => {
        // console.log(anime.images.jpg.image_url)
        animeCards += `
        <div class="relative"> 
                <img src="${anime.images.jpg.image_url}" alt="" class="w-full rounded-lg object-cover h-[500px]">
                <h1 class="text-xl font-semibold mt-4">${anime.title}</h1>
                <div class="px-2.5 py-1 rounded-full bg-secondary flex gap-2 items-center absolute top-4 left-4">
                    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" fill="currentColor" class="size-5">
                        <path fill-rule="evenodd" d="M10.788 3.21c.448-1.077 1.976-1.077 2.424 0l2.082 5.006 5.404.434c1.164.093 1.636 1.545.749 2.305l-4.117 3.527 1.257 5.273c.271 1.136-.964 2.033-1.96 1.425L12 18.354 7.373 21.18c-.996.608-2.231-.29-1.96-1.425l1.257-5.273-4.117-3.527c-.887-.76-.415-2.212.749-2.305l5.404-.434 2.082-5.005Z" clip-rule="evenodd" />
                    </svg>                 
                    <span>${anime.score}</span>
                </div>
            </div>
        `
    })
    document.querySelector('.anime-list').innerHTML = animeCards
    input.value = ""
})




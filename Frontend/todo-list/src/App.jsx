import { useState } from 'react'

function App() {
  const [show, setShow] = useState(false)
  function showform() {
    setShow(() => true)
  }

  const [task, setTask] = useState(["buat OASE"])

  return (
    <>
      <div className='m-auto w-[672px] mt-20'>
        <h1 className='font-semibold text-center text-5xl mb-10'>To-do List</h1>
        
        { show ? (
          <form className='w-full flex gap-8' action="#">
            <input className='border rounded-lg w-full py-2.5 px-4' type="text" placeholder='New Task'/>
            <button className='border rounded-lg py-2.5 px-4'>
              <p>Add</p>
            </button>
          </form>
        ) : (
          <div className=''>
          <button onClick={(showform)} className='flex gap-4 border-dashed border-[1.5px] w-full py-2.5 px-4 rounded-lg'>
            <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" fill="currentColor" className="size-6">
            <path fillRule="evenodd" d="M12 3.75a.75.75 0 0 1 .75.75v6.75h6.75a.75.75 0 0 1 0 1.5h-6.75v6.75a.75.75 0 0 1-1.5 0v-6.75H4.5a.75.75 0 0 1 0-1.5h6.75V4.5a.75.75 0 0 1 .75-.75Z" clipRule="evenodd" />
            </svg>
            <p className=''>New Task</p>
          </button>
        </div>
        )}

        <div className='mt-8'>
          {task.map((value) => {
            return (
              <div className='px-4 py-2.5 flex justify-between items-center '>
                <p>
                  {value}
                </p>
                <button>
                  <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" fill="currentColor" className="size-6">
                    <path fillRule="evenodd" d="M16.5 4.478v.227a48.816 48.816 0 0 1 3.878.512.75.75 0 1 1-.256 1.478l-.209-.035-1.005 13.07a3 3 0 0 1-2.991 2.77H8.084a3 3 0 0 1-2.991-2.77L4.087 6.66l-.209.035a.75.75 0 0 1-.256-1.478A48.567 48.567 0 0 1 7.5 4.705v-.227c0-1.564 1.213-2.9 2.816-2.951a52.662 52.662 0 0 1 3.369 0c1.603.051 2.815 1.387 2.815 2.951Zm-6.136-1.452a51.196 51.196 0 0 1 3.273 0C14.39 3.05 15 3.684 15 4.478v.113a49.488 49.488 0 0 0-6 0v-.113c0-.794.609-1.428 1.364-1.452Zm-.355 5.945a.75.75 0 1 0-1.5.058l.347 9a.75.75 0 1 0 1.499-.058l-.346-9Zm5.48.058a.75.75 0 1 0-1.498-.058l-.347 9a.75.75 0 0 0 1.5.058l.345-9Z" clipRule="evenodd" />
                  </svg>
                </button>
              </div>
            )
          })}
        </div>
      </div>
    </>
  )
}

export default App

#pragma once
// IWYU pragma private; include "System/Threading/ThreadPoolGlobals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolGlobals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
inline void System::Threading::ThreadPoolGlobals::setStaticF_processorCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::ThreadPoolGlobals::getStaticF_processorCount()  {
return ::cordl_internals::getStaticField<int32_t, "processorCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_vmTpInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "vmTpInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>(std::forward<bool>(value));
}
inline bool System::Threading::ThreadPoolGlobals::getStaticF_vmTpInitialized()  {
return ::cordl_internals::getStaticField<bool, "vmTpInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_enableWorkerTracking(bool  value)  {
::cordl_internals::setStaticField<bool, "enableWorkerTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>(std::forward<bool>(value));
}
inline bool System::Threading::ThreadPoolGlobals::getStaticF_enableWorkerTracking()  {
return ::cordl_internals::getStaticField<bool, "enableWorkerTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_workQueue(::System::Threading::ThreadPoolWorkQueue*  value)  {
::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueue*, "workQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>(std::forward<::System::Threading::ThreadPoolWorkQueue*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueue* System::Threading::ThreadPoolGlobals::getStaticF_workQueue()  {
return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueue*, "workQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolGlobals*>::get>();
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolGlobals::ThreadPoolGlobals()   {
}

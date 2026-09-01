#pragma once
// IWYU pragma private; include "System\Threading\ThreadPoolGlobals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolGlobals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
inline void System::Threading::ThreadPoolGlobals::setStaticF_processorCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "processorCount", ::System::Threading::ThreadPoolGlobals*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::ThreadPoolGlobals::getStaticF_processorCount() {
  return ::cordl_internals::getStaticField<int32_t, "processorCount", ::System::Threading::ThreadPoolGlobals*>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_vmTpInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "vmTpInitialized", ::System::Threading::ThreadPoolGlobals*>(std::forward<bool>(value));
}
inline bool System::Threading::ThreadPoolGlobals::getStaticF_vmTpInitialized() {
  return ::cordl_internals::getStaticField<bool, "vmTpInitialized", ::System::Threading::ThreadPoolGlobals*>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_enableWorkerTracking(bool value) {
  ::cordl_internals::setStaticField<bool, "enableWorkerTracking", ::System::Threading::ThreadPoolGlobals*>(std::forward<bool>(value));
}
inline bool System::Threading::ThreadPoolGlobals::getStaticF_enableWorkerTracking() {
  return ::cordl_internals::getStaticField<bool, "enableWorkerTracking", ::System::Threading::ThreadPoolGlobals*>();
}
inline void System::Threading::ThreadPoolGlobals::setStaticF_workQueue(::System::Threading::ThreadPoolWorkQueue* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueue*, "workQueue", ::System::Threading::ThreadPoolGlobals*>(std::forward<::System::Threading::ThreadPoolWorkQueue*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueue* System::Threading::ThreadPoolGlobals::getStaticF_workQueue() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueue*, "workQueue", ::System::Threading::ThreadPoolGlobals*>();
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolGlobals::ThreadPoolGlobals() {}

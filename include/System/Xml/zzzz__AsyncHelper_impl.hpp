#pragma once
// IWYU pragma private; include "System\Xml\AsyncHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__AsyncHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
inline void System::Xml::AsyncHelper::setStaticF_DoneTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "DoneTask", ::System::Xml::AsyncHelper*>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* System::Xml::AsyncHelper::getStaticF_DoneTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "DoneTask", ::System::Xml::AsyncHelper*>();
}
inline void System::Xml::AsyncHelper::setStaticF_DoneTaskTrue(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "DoneTaskTrue", ::System::Xml::AsyncHelper*>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Xml::AsyncHelper::getStaticF_DoneTaskTrue() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "DoneTaskTrue", ::System::Xml::AsyncHelper*>();
}
inline void System::Xml::AsyncHelper::setStaticF_DoneTaskFalse(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "DoneTaskFalse", ::System::Xml::AsyncHelper*>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Xml::AsyncHelper::getStaticF_DoneTaskFalse() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "DoneTaskFalse", ::System::Xml::AsyncHelper*>();
}
inline void System::Xml::AsyncHelper::setStaticF_DoneTaskZero(::System::Threading::Tasks::Task_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "DoneTaskZero", ::System::Xml::AsyncHelper*>(std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Xml::AsyncHelper::getStaticF_DoneTaskZero() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "DoneTaskZero", ::System::Xml::AsyncHelper*>();
}
// Ctor Parameters []
constexpr ::System::Xml::AsyncHelper::AsyncHelper() {}

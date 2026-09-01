#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\ManagerUtils.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ManagerUtils_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ManagerUtils_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T>
inline void Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::Invoke(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, T member,
                                                                                           ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                           ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberController, member, attribute, instanceHandle);
}
template <typename T>
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::BeginInvoke(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, T member,
                                                                                                                   ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                                                   ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, memberController, member, attribute, instanceHandle, callback, object);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T>
inline ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>* Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>::ManagerUtils_RegisterMember_1() {}
template <typename T>
inline void
Meta::XR::ImmersiveDebugger::Manager::ManagerUtils::RebuildInspectorForType(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel,
                                                                            ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache, ::System::Type* type,
                                                                            ::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* memberPairs,
                                                                            ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>* memberRegistration) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils*>(),
                          { "RebuildInspectorForType",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>(),
                              ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>(),
                              ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, cache, type, memberPairs, memberRegistration);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils::ManagerUtils() {}

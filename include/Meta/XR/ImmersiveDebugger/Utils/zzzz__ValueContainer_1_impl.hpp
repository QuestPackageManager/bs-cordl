#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ValueContainer_1.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueStruct_1_def.hpp"
template <typename T>
constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*>&
Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_get_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T>
constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*> const&
Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_get_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Values;
}
template <typename T>
constexpr void Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::__cordl_internal_set_Values(
    ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Values, value);
}
template <typename T> inline ::StringW Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>::get(),
                                                                             "get_Path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityW<T> Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::Load(::StringW assetName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>::get(), "Load",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<T>, false>(nullptr, ___internal_method, assetName);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::get_Item(::StringW valueName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>::get(), "get_Item",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, valueName);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::GetValue(::StringW valueName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>::get(), "GetValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, valueName);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>* Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>::ValueContainer_1() {}

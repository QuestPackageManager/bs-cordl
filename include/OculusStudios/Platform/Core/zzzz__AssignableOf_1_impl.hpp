#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/AssignableOf_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__AssignableOf_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TBase> constexpr ::System::Type*& OculusStudios::Platform::Core::AssignableOf_1<TBase>::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TBase> constexpr ::System::Type* const& OculusStudios::Platform::Core::AssignableOf_1<TBase>::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
template <typename TBase> constexpr void OculusStudios::Platform::Core::AssignableOf_1<TBase>::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___type, value);
}
template <typename TBase> inline ::StringW OculusStudios::Platform::Core::AssignableOf_1<TBase>::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get(),
                                                                             "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TBase> inline void OculusStudios::Platform::Core::AssignableOf_1<TBase>::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
template <typename TBase>
inline ::OculusStudios::Platform::Core::AssignableOf_1<TBase>*
OculusStudios::Platform::Core::AssignableOf_1<TBase>::op_Implicit___OculusStudios__Platform__Core__AssignableOf_1_TBase__(::System::Type* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*, false>(nullptr, ___internal_method, obj);
}
template <typename TBase> inline ::System::Type* OculusStudios::Platform::Core::AssignableOf_1<TBase>::op_Implicit___System__Type_(::OculusStudios::Platform::Core::AssignableOf_1<TBase>* wrapper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, wrapper);
}
template <typename TBase> inline ::StringW OculusStudios::Platform::Core::AssignableOf_1<TBase>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TBase> inline ::OculusStudios::Platform::Core::AssignableOf_1<TBase>* OculusStudios::Platform::Core::AssignableOf_1<TBase>::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::AssignableOf_1<TBase>*>(type));
}
// Ctor Parameters []
template <typename TBase> constexpr ::OculusStudios::Platform::Core::AssignableOf_1<TBase>::AssignableOf_1() {}

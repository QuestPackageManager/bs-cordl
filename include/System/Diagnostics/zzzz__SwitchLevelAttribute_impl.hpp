#pragma once
// IWYU pragma private; include "System/Diagnostics/SwitchLevelAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__SwitchLevelAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::SwitchLevelAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SwitchLevelAttribute::*)(::System::Type*)>(
    &::System::Diagnostics::SwitchLevelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x442b6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SwitchLevelAttribute.set_SwitchLevelType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SwitchLevelAttribute::*)(::System::Type*)>(
    &::System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x442b6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(), "set_SwitchLevelType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Diagnostics::SwitchLevelAttribute::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Diagnostics::SwitchLevelAttribute::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Diagnostics::SwitchLevelAttribute::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::SwitchLevelAttribute::_ctor(::System::Type* switchLevelType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, switchLevelType);
}
inline void System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(), "set_SwitchLevelType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::SwitchLevelAttribute* System::Diagnostics::SwitchLevelAttribute::New_ctor(::System::Type* switchLevelType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::SwitchLevelAttribute*>(switchLevelType));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::SwitchLevelAttribute::SwitchLevelAttribute() {}

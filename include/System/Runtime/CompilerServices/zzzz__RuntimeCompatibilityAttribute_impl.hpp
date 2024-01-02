#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeCompatibilityAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)()>(
    &::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24db240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute.set_WrapNonExceptionThrows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)(bool)>(
    &::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24db248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(), "set_WrapNonExceptionThrows",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__get__WrapNonExceptionThrows_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapNonExceptionThrows_k__BackingField;
}
constexpr bool const& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__get__WrapNonExceptionThrows_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapNonExceptionThrows_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__set__WrapNonExceptionThrows_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WrapNonExceptionThrows_k__BackingField = value;
}
inline ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute* System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>());
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(), "set_WrapNonExceptionThrows",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::RuntimeCompatibilityAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

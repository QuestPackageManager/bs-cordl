#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DecimalConstantAttribute_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)(
    uint8_t, uint8_t, uint32_t, uint32_t, uint32_t)>(&::System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25cbd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25cbd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute*>::get(), "get_Value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Decimal& System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_get__dec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dec;
}
constexpr ::System::Decimal const& System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_get__dec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dec;
}
constexpr void System::Runtime::CompilerServices::DecimalConstantAttribute::__cordl_internal_set__dec(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dec = value;
}
inline ::System::Runtime::CompilerServices::DecimalConstantAttribute* System::Runtime::CompilerServices::DecimalConstantAttribute::New_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid,
                                                                                                                                            uint32_t low) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::DecimalConstantAttribute*>(scale, sign, hi, mid, low));
}
inline void System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, sign, hi, mid, low);
}
inline ::System::Decimal System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DecimalConstantAttribute::DecimalConstantAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

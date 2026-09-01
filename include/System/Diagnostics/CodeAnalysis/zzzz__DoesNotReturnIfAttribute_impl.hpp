#pragma once
// IWYU pragma private; include "System\Diagnostics\CodeAnalysis\DoesNotReturnIfAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__DoesNotReturnIfAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::*)(bool)>(
    &::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd2a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute.get_ParameterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::*)()>(
    &::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::get_ParameterValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd2a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(), { "get_ParameterValue", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_get__ParameterValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterValue_k__BackingField;
}
constexpr bool const& System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_get__ParameterValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterValue_k__BackingField;
}
constexpr void System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_set__ParameterValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ParameterValue_k__BackingField = value;
}
inline void System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::_ctor(bool parameterValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterValue);
}
inline bool System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::get_ParameterValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(), { "get_ParameterValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute* System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::New_ctor(bool parameterValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(parameterValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::DoesNotReturnIfAttribute() {}

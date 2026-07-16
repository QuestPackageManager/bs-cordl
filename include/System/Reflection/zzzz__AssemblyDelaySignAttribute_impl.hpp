#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyDelaySignAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyDelaySignAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyDelaySignAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyDelaySignAttribute::*)(bool)>(&::System::Reflection::AssemblyDelaySignAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyDelaySignAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_get__DelaySign_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelaySign_k__BackingField;
}
constexpr bool const& System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_get__DelaySign_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelaySign_k__BackingField;
}
constexpr void System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_set__DelaySign_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DelaySign_k__BackingField = value;
}
inline void System::Reflection::AssemblyDelaySignAttribute::_ctor(bool delaySign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyDelaySignAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delaySign);
}
inline ::System::Reflection::AssemblyDelaySignAttribute* System::Reflection::AssemblyDelaySignAttribute::New_ctor(bool delaySign) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyDelaySignAttribute*>(delaySign));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyDelaySignAttribute::AssemblyDelaySignAttribute() {}

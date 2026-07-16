#pragma once
// IWYU pragma private; include "System/Diagnostics/ConditionalAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__ConditionalAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ConditionalAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::ConditionalAttribute::*)(::StringW)>(&::System::Diagnostics::ConditionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bde7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ConditionalAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::ConditionalAttribute::__cordl_internal_get__ConditionString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionString_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::ConditionalAttribute::__cordl_internal_get__ConditionString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionString_k__BackingField;
}
constexpr void System::Diagnostics::ConditionalAttribute::__cordl_internal_set__ConditionString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConditionString_k__BackingField = value;
}
inline void System::Diagnostics::ConditionalAttribute::_ctor(::StringW conditionString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ConditionalAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionString);
}
inline ::System::Diagnostics::ConditionalAttribute* System::Diagnostics::ConditionalAttribute::New_ctor(::StringW conditionString) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::ConditionalAttribute*>(conditionString));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ConditionalAttribute::ConditionalAttribute() {}

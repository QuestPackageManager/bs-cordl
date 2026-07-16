#pragma once
// IWYU pragma private; include "System/ComponentModel/AmbientValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__AmbientValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AmbientValueAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::AmbientValueAttribute::*)()>(&::System::ComponentModel::AmbientValueAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AmbientValueAttribute*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::AmbientValueAttribute::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::AmbientValueAttribute::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void System::ComponentModel::AmbientValueAttribute::__cordl_internal_set__Value_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline ::System::Object* System::ComponentModel::AmbientValueAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::AmbientValueAttribute*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AmbientValueAttribute::AmbientValueAttribute() {}

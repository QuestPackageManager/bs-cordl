#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyCopyrightAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyCopyrightAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyCopyrightAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyCopyrightAttribute::*)(::StringW)>(&::System::Reflection::AssemblyCopyrightAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7d90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyCopyrightAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyCopyrightAttribute::__cordl_internal_get__Copyright_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Copyright_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyCopyrightAttribute::__cordl_internal_get__Copyright_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Copyright_k__BackingField;
}
constexpr void System::Reflection::AssemblyCopyrightAttribute::__cordl_internal_set__Copyright_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Copyright_k__BackingField = value;
}
inline void System::Reflection::AssemblyCopyrightAttribute::_ctor(::StringW copyright) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyCopyrightAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyright);
}
inline ::System::Reflection::AssemblyCopyrightAttribute* System::Reflection::AssemblyCopyrightAttribute::New_ctor(::StringW copyright) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyCopyrightAttribute*>(copyright));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyCopyrightAttribute::AssemblyCopyrightAttribute() {}

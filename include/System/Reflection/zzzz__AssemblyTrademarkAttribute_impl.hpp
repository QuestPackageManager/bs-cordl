#pragma once
// IWYU pragma private; include "System\Reflection\AssemblyTrademarkAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyTrademarkAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyTrademarkAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyTrademarkAttribute::*)(::StringW)>(&::System::Reflection::AssemblyTrademarkAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7d9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyTrademarkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_get__Trademark_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Trademark_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_get__Trademark_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Trademark_k__BackingField;
}
constexpr void System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_set__Trademark_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Trademark_k__BackingField = value;
}
inline void System::Reflection::AssemblyTrademarkAttribute::_ctor(::StringW trademark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyTrademarkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trademark);
}
inline ::System::Reflection::AssemblyTrademarkAttribute* System::Reflection::AssemblyTrademarkAttribute::New_ctor(::StringW trademark) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyTrademarkAttribute*>(trademark));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyTrademarkAttribute::AssemblyTrademarkAttribute() {}

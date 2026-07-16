#pragma once
// IWYU pragma private; include "GlobalNamespace/DomainReloadInitOutsourceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DomainReloadInitOutsourceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DomainReloadInitOutsourceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DomainReloadInitOutsourceAttribute::*)(::System::Type*)>(
    &::GlobalNamespace::DomainReloadInitOutsourceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DomainReloadInitOutsourceAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DomainReloadInitOutsourceAttribute.get_OutsourceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::DomainReloadInitOutsourceAttribute::*)()>(
    &::GlobalNamespace::DomainReloadInitOutsourceAttribute::get_OutsourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DomainReloadInitOutsourceAttribute*>(), { "get_OutsourceType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::DomainReloadInitOutsourceAttribute::__cordl_internal_get__OutsourceType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OutsourceType_k__BackingField;
}
constexpr ::System::Type* const& GlobalNamespace::DomainReloadInitOutsourceAttribute::__cordl_internal_get__OutsourceType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OutsourceType_k__BackingField;
}
constexpr void GlobalNamespace::DomainReloadInitOutsourceAttribute::__cordl_internal_set__OutsourceType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OutsourceType_k__BackingField = value;
}
inline void GlobalNamespace::DomainReloadInitOutsourceAttribute::_ctor(::System::Type* outsourceType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DomainReloadInitOutsourceAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outsourceType);
}
inline ::System::Type* GlobalNamespace::DomainReloadInitOutsourceAttribute::get_OutsourceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DomainReloadInitOutsourceAttribute*>(), { "get_OutsourceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::GlobalNamespace::DomainReloadInitOutsourceAttribute* GlobalNamespace::DomainReloadInitOutsourceAttribute::New_ctor(::System::Type* outsourceType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DomainReloadInitOutsourceAttribute*>(outsourceType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DomainReloadInitOutsourceAttribute::DomainReloadInitOutsourceAttribute() {}

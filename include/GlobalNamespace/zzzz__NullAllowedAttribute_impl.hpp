#pragma once
// IWYU pragma private; include "GlobalNamespace\NullAllowedAttribute.hpp"
#include "GlobalNamespace/zzzz__NullAllowedContext_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowedAttribute_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowedContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullAllowedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowedAttribute::*)(::GlobalNamespace::NullAllowedContext)>(&::GlobalNamespace::NullAllowedAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x330b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedAttribute.IsNullAllowedFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NullAllowedAttribute::*)(::GlobalNamespace::NullAllowedContext)>(
    &::GlobalNamespace::NullAllowedAttribute::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x330b478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedAttribute*>(), { "IsNullAllowedFor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NullAllowedContext& GlobalNamespace::NullAllowedAttribute::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::GlobalNamespace::NullAllowedContext const& GlobalNamespace::NullAllowedAttribute::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void GlobalNamespace::NullAllowedAttribute::__cordl_internal_set__context(::GlobalNamespace::NullAllowedContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
inline void GlobalNamespace::NullAllowedAttribute::_ctor(::GlobalNamespace::NullAllowedContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool GlobalNamespace::NullAllowedAttribute::IsNullAllowedFor(::GlobalNamespace::NullAllowedContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedAttribute*>(), { "IsNullAllowedFor", {}, { ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::GlobalNamespace::NullAllowedAttribute* GlobalNamespace::NullAllowedAttribute::New_ctor(::GlobalNamespace::NullAllowedContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowedAttribute*>(context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowedAttribute::NullAllowedAttribute() {}

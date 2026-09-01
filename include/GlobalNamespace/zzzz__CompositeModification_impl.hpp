#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeModification.hpp"
#include "GlobalNamespace/zzzz__CompositeModificationFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeModification_def.hpp"
#include "GlobalNamespace/zzzz__CompositeModificationFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeModification.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CompositeModificationFlags (::GlobalNamespace::CompositeModification::*)()>(
    &::GlobalNamespace::CompositeModification::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5993378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeModification.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeModification::*)(::GlobalNamespace::CompositeModificationFlags)>(
    &::GlobalNamespace::CompositeModification::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5993380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { "set_flags", {}, { ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeModification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeModification::*)()>(&::GlobalNamespace::CompositeModification::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59932fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CompositeModificationFlags& GlobalNamespace::CompositeModification::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::GlobalNamespace::CompositeModificationFlags const& GlobalNamespace::CompositeModification::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void GlobalNamespace::CompositeModification::__cordl_internal_set__flags(::GlobalNamespace::CompositeModificationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
inline ::GlobalNamespace::CompositeModificationFlags GlobalNamespace::CompositeModification::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CompositeModificationFlags>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeModification::set_flags(::GlobalNamespace::CompositeModificationFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { "set_flags", {}, { ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CompositeModification::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeModification*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeModification* GlobalNamespace::CompositeModification::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeModification*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeModification::CompositeModification() {}

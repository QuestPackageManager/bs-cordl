#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorTargetsBucket.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorTargetsBucket_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorTargetsBucket.get_targets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> (::GlobalNamespace::ColorTargetsBucket::*)()>(
    &::GlobalNamespace::ColorTargetsBucket::get_targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5993204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTargetsBucket*>(), { "get_targets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorTargetsBucket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorTargetsBucket::*)()>(&::GlobalNamespace::ColorTargetsBucket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTargetsBucket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>& GlobalNamespace::ColorTargetsBucket::__cordl_internal_get__targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> const& GlobalNamespace::ColorTargetsBucket::__cordl_internal_get__targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr void GlobalNamespace::ColorTargetsBucket::__cordl_internal_set__targets(::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targets = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> GlobalNamespace::ColorTargetsBucket::get_targets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTargetsBucket*>(), { "get_targets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>>(this, ___internal_method);
}
inline void GlobalNamespace::ColorTargetsBucket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorTargetsBucket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorTargetsBucket* GlobalNamespace::ColorTargetsBucket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorTargetsBucket*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorTargetsBucket::ColorTargetsBucket() {}

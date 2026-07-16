#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomTimelineTween.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomTimelineTween_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomTimelineTween.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTimelineTween::*)()>(&::GlobalNamespace::CustomTimelineTween::OnValidate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5905dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTimelineTween*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTimelineTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTimelineTween::*)()>(&::GlobalNamespace::CustomTimelineTween::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5905ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTimelineTween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::CustomTimelineTween::__cordl_internal_get_transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::CustomTimelineTween::__cordl_internal_get_transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transforms;
}
constexpr void GlobalNamespace::CustomTimelineTween::__cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transforms = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::CustomTimelineTween::__cordl_internal_get_startPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::CustomTimelineTween::__cordl_internal_get_startPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr void GlobalNamespace::CustomTimelineTween::__cordl_internal_set_startPositions(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPositions = value;
}
inline void GlobalNamespace::CustomTimelineTween::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTimelineTween*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomTimelineTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTimelineTween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomTimelineTween* GlobalNamespace::CustomTimelineTween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomTimelineTween*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomTimelineTween::CustomTimelineTween() {}

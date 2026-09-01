#pragma once
// IWYU pragma private; include "GlobalNamespace\AnchorIntoParent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AnchorIntoParent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnchorIntoParent.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnchorIntoParent::*)()>(&::GlobalNamespace::AnchorIntoParent::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5851a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnchorIntoParent*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnchorIntoParent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnchorIntoParent::*)()>(&::GlobalNamespace::AnchorIntoParent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5851b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnchorIntoParent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnchorIntoParent::__cordl_internal_get__parentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnchorIntoParent::__cordl_internal_get__parentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentTransform;
}
constexpr void GlobalNamespace::AnchorIntoParent::__cordl_internal_set__parentTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AnchorIntoParent::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AnchorIntoParent::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::AnchorIntoParent::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
inline void GlobalNamespace::AnchorIntoParent::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnchorIntoParent*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnchorIntoParent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnchorIntoParent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnchorIntoParent* GlobalNamespace::AnchorIntoParent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnchorIntoParent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnchorIntoParent::AnchorIntoParent() {}

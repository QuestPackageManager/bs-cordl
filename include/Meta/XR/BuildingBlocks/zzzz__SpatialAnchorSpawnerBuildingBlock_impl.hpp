#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorSpawnerBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorSpawnerBuildingBlock_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.get_AnchorPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::get_AnchorPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a34090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "get_AnchorPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.set_AnchorPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)(::UnityEngine::GameObject*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::set_AnchorPrefab)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5a34098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(),
                                                                                           { "set_AnchorPrefab", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.get_FollowHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::get_FollowHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a342ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "get_FollowHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.set_FollowHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)(bool)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::set_FollowHand)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a3419c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "set_FollowHand", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a342f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.SpawnSpatialAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::SpawnSpatialAnchor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a3438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(),
                                                             { "SpawnSpatialAnchor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock.SpawnSpatialAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::SpawnSpatialAnchor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a34520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "SpawnSpatialAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a345e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__anchorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__anchorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPrefab;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__anchorPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorPrefab = value;
}
constexpr bool& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__followHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followHand;
}
constexpr bool const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__followHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followHand;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__followHand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followHand = value;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__spatialAnchorCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__spatialAnchorCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatialAnchorCore = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraRig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__anchorPrefabTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPrefabTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__anchorPrefabTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPrefabTransform;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__anchorPrefabTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorPrefabTransform = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__initialPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPosition;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__initialPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPosition;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__initialPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialPosition = value;
}
constexpr ::UnityEngine::Quaternion& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__initialRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotation;
}
constexpr ::UnityEngine::Quaternion const& Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_get__initialRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotation;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::__cordl_internal_set__initialRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialRotation = value;
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::get_AnchorPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "get_AnchorPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::set_AnchorPrefab(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(),
                                                                                         { "set_AnchorPrefab", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::get_FollowHand() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "get_FollowHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::set_FollowHand(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "set_FollowHand", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::SpawnSpatialAnchor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(),
                                                           { "SpawnSpatialAnchor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::SpawnSpatialAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { "SpawnSpatialAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock::SpatialAnchorSpawnerBuildingBlock() {}

#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AlignCameraToAnchor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AlignCameraToAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor.get_CameraAlignmentAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRSpatialAnchor> (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::get_CameraAlignmentAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a781bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "get_CameraAlignmentAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor.set_CameraAlignmentAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)(::GlobalNamespace::OVRSpatialAnchor*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::set_CameraAlignmentAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a781c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(),
                                                                                           { "set_CameraAlignmentAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a781cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor.RealignToAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::RealignToAnchor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a70258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "RealignToAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor.Align
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)(::UnityEngine::Transform*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::Align)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a781d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "Align", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a783d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::__cordl_internal_get__CameraAlignmentAnchor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraAlignmentAnchor_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::__cordl_internal_get__CameraAlignmentAnchor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraAlignmentAnchor_k__BackingField;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::__cordl_internal_set__CameraAlignmentAnchor_k__BackingField(::UnityW<::GlobalNamespace::OVRSpatialAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CameraAlignmentAnchor_k__BackingField = value;
}
inline ::UnityW<::GlobalNamespace::OVRSpatialAnchor> Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::get_CameraAlignmentAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "get_CameraAlignmentAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::set_CameraAlignmentAnchor(::GlobalNamespace::OVRSpatialAnchor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(),
                                                                                         { "set_CameraAlignmentAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::RealignToAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "RealignToAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::Align(::UnityEngine::Transform* anchorTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { "Align", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorTransform);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor* Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor::AlignCameraToAnchor() {}

#pragma once
// IWYU pragma private; include "VRUIControls\VRLaserPointer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VRUIControls/zzzz__VRLaserPointer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(&::VRUIControls::VRLaserPointer::SetLocalPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e3c35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetLocalPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(&::VRUIControls::VRLaserPointer::SetLocalScale)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e3c3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetLocalScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetFadeDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRLaserPointer::*)(float_t)>(&::VRUIControls::VRLaserPointer::SetFadeDistance)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e3c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetFadeDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRLaserPointer::*)()>(&::VRUIControls::VRLaserPointer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3c518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& VRUIControls::VRLaserPointer::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& VRUIControls::VRLaserPointer::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void VRUIControls::VRLaserPointer::__cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
inline void VRUIControls::VRLaserPointer::setStaticF__fadeStartNormalizedDistanceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::VRUIControls::VRLaserPointer*>(std::forward<int32_t>(value));
}
inline int32_t VRUIControls::VRLaserPointer::getStaticF__fadeStartNormalizedDistanceId() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::VRUIControls::VRLaserPointer*>();
}
inline void VRUIControls::VRLaserPointer::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::VRUIControls::VRLaserPointer*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* VRUIControls::VRLaserPointer::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::VRUIControls::VRLaserPointer*>();
}
inline void VRUIControls::VRLaserPointer::SetLocalPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetLocalPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void VRUIControls::VRLaserPointer::SetLocalScale(::UnityEngine::Vector3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetLocalScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline void VRUIControls::VRLaserPointer::SetFadeDistance(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { "SetFadeDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void VRUIControls::VRLaserPointer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRLaserPointer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::VRLaserPointer* VRUIControls::VRLaserPointer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::VRLaserPointer*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRLaserPointer::VRLaserPointer() {}

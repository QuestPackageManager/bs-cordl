#pragma once
// IWYU pragma private; include "UnityEngine/LightAnchor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__LightAnchor_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LightAnchor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightAnchor_UpDirection::LightAnchor_UpDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightAnchor_UpDirection::LightAnchor_UpDirection() {}
constexpr ::UnityEngine::LightAnchor_UpDirection UnityEngine::LightAnchor_UpDirection::World{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LightAnchor_UpDirection UnityEngine::LightAnchor_UpDirection::Local{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "right", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "forward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightAnchor_Axes::LightAnchor_Axes(::UnityEngine::Vector3 up, ::UnityEngine::Vector3 right, ::UnityEngine::Vector3 forward) noexcept {
  this->up = up;
  this->right = right;
  this->forward = forward;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightAnchor_Axes::LightAnchor_Axes() {}
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_yaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_yaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_yaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_yaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(float_t)>(&::UnityEngine::LightAnchor::set_yaw)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x673e34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_yaw", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_pitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_pitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(float_t)>(&::UnityEngine::LightAnchor::set_pitch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x673e3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_roll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_roll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_roll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_roll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(float_t)>(&::UnityEngine::LightAnchor::set_roll)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x673e400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_roll", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_distance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(float_t)>(&::UnityEngine::LightAnchor::set_distance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x673e440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_distance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_frameSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightAnchor_UpDirection (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_frameSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_frameSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_frameSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::LightAnchor_UpDirection)>(&::UnityEngine::LightAnchor::set_frameSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_frameSpace", {}, { ::i2c::type_of<::UnityEngine::LightAnchor_UpDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_anchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_anchorPosition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x673e474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_anchorPositionOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_anchorPositionOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPositionOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_anchorPositionOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::Transform*)>(&::UnityEngine::LightAnchor::set_anchorPositionOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_anchorPositionOverride", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.get_anchorPositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::get_anchorPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x673e594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPositionOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.set_anchorPositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::Vector3)>(&::UnityEngine::LightAnchor::set_anchorPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x673e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_anchorPositionOffset", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.NormalizeAngleDegree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::LightAnchor::NormalizeAngleDegree)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x673e384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "NormalizeAngleDegree", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.SynchronizeOnTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::Camera*)>(&::UnityEngine::LightAnchor::SynchronizeOnTransform)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x673e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "SynchronizeOnTransform", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.UpdateTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::UnityEngine::LightAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x673f338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "UpdateTransform", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.GetWorldSpaceAxes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightAnchor_Axes (::UnityEngine::LightAnchor::*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::LightAnchor::GetWorldSpaceAxes)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x673eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "GetWorldSpaceAxes", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x673f664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x673f768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor.UpdateTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::LightAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x673f3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "UpdateTransform",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightAnchor::*)()>(&::UnityEngine::LightAnchor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673f844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::LightAnchor::__cordl_internal_get_m_Distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Distance;
}
constexpr float_t const& UnityEngine::LightAnchor::__cordl_internal_get_m_Distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Distance;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_Distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Distance = value;
}
constexpr ::UnityEngine::LightAnchor_UpDirection& UnityEngine::LightAnchor::__cordl_internal_get_m_FrameSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameSpace;
}
constexpr ::UnityEngine::LightAnchor_UpDirection const& UnityEngine::LightAnchor::__cordl_internal_get_m_FrameSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameSpace;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_FrameSpace(::UnityEngine::LightAnchor_UpDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameSpace = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::LightAnchor::__cordl_internal_get_m_AnchorPositionOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorPositionOverride;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::LightAnchor::__cordl_internal_get_m_AnchorPositionOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorPositionOverride;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_AnchorPositionOverride(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnchorPositionOverride = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::LightAnchor::__cordl_internal_get_m_AnchorPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::LightAnchor::__cordl_internal_get_m_AnchorPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnchorPositionOffset;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_AnchorPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnchorPositionOffset = value;
}
constexpr float_t& UnityEngine::LightAnchor::__cordl_internal_get_m_Yaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Yaw;
}
constexpr float_t const& UnityEngine::LightAnchor::__cordl_internal_get_m_Yaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Yaw;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_Yaw(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Yaw = value;
}
constexpr float_t& UnityEngine::LightAnchor::__cordl_internal_get_m_Pitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pitch;
}
constexpr float_t const& UnityEngine::LightAnchor::__cordl_internal_get_m_Pitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pitch;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_Pitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pitch = value;
}
constexpr float_t& UnityEngine::LightAnchor::__cordl_internal_get_m_Roll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Roll;
}
constexpr float_t const& UnityEngine::LightAnchor::__cordl_internal_get_m_Roll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Roll;
}
constexpr void UnityEngine::LightAnchor::__cordl_internal_set_m_Roll(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Roll = value;
}
inline float_t UnityEngine::LightAnchor::get_yaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_yaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_yaw(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_yaw", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::LightAnchor::get_pitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_pitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_pitch(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::LightAnchor::get_roll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_roll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_roll(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_roll", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::LightAnchor::get_distance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_distance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_distance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_distance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LightAnchor_UpDirection UnityEngine::LightAnchor::get_frameSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_frameSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightAnchor_UpDirection>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_frameSpace(::UnityEngine::LightAnchor_UpDirection value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_frameSpace", {}, { ::i2c::type_of<::UnityEngine::LightAnchor_UpDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::LightAnchor::get_anchorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::LightAnchor::get_anchorPositionOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPositionOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_anchorPositionOverride(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_anchorPositionOverride", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::LightAnchor::get_anchorPositionOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "get_anchorPositionOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::set_anchorPositionOffset(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "set_anchorPositionOffset", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::LightAnchor::NormalizeAngleDegree(float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "NormalizeAngleDegree", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angle);
}
inline void UnityEngine::LightAnchor::SynchronizeOnTransform(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "SynchronizeOnTransform", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void UnityEngine::LightAnchor::UpdateTransform(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "UpdateTransform", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, anchor);
}
inline ::UnityEngine::LightAnchor_Axes UnityEngine::LightAnchor::GetWorldSpaceAxes(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "GetWorldSpaceAxes", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightAnchor_Axes>(this, ___internal_method, camera, anchor);
}
inline void UnityEngine::LightAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LightAnchor::UpdateTransform(::UnityEngine::Vector3 up, ::UnityEngine::Vector3 right, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { "UpdateTransform",
                                                                                                {},
                                                                                                { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, up, right, forward, anchor);
}
inline void UnityEngine::LightAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightAnchor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LightAnchor* UnityEngine::LightAnchor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightAnchor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightAnchor::LightAnchor() {}

#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXRaycastBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXRaycastBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXRaycastBinder_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space::VFXRaycastBinder_Space(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space::VFXRaycastBinder_Space() {}
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space UnityEngine::VFX::Utility::VFXRaycastBinder_Space::Local{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space UnityEngine::VFX::Utility::VFXRaycastBinder_Space::World{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.get_TargetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e142c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.set_TargetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69e1444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetPosition", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.get_TargetNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetNormal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e1514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetNormal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.set_TargetNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetNormal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69e152c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetNormal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.get_TargetHit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e1554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetHit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.set_TargetHit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69e156c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetHit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e158c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e15a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.UpdateSubProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::UpdateSubProperties)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69e146c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "UpdateSubProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXRaycastBinder::IsValid)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x69e15a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXRaycastBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x69e1694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::ToString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x69e18dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRaycastBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRaycastBinder::*)()>(&::UnityEngine::VFX::Utility::VFXRaycastBinder::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69e1ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPosition;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPosition;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_TargetPosition(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetPosition = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetNormal;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetNormal;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_TargetNormal(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetNormal = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetHit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetHit;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetHit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetHit;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_TargetHit(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetHit = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetPosition_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPosition_position;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetPosition_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPosition_position;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_TargetPosition_position(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetPosition_position = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetNormal_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetNormal_direction;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_TargetNormal_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetNormal_direction;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_TargetNormal_direction(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetNormal_direction = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastSource;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastSource;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_RaycastSource(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RaycastSource = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastDirection;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_RaycastDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RaycastDirection = value;
}
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastDirectionSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastDirectionSpace;
}
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_RaycastDirectionSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RaycastDirectionSpace;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_RaycastDirectionSpace(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RaycastDirectionSpace = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_Layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Layers;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_Layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Layers;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_Layers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Layers = value;
}
constexpr float_t& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_MaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxDistance;
}
constexpr float_t const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_MaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxDistance;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_MaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxDistance = value;
}
constexpr ::UnityEngine::RaycastHit& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_HitInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitInfo;
}
constexpr ::UnityEngine::RaycastHit const& UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_get_m_HitInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HitInfo;
}
constexpr void UnityEngine::VFX::Utility::VFXRaycastBinder::__cordl_internal_set_m_HitInfo(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HitInfo = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetPosition(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetPosition", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetNormal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetNormal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetNormal(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetNormal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::Utility::VFXRaycastBinder::get_TargetHit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "get_TargetHit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::set_TargetHit(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "set_TargetHit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::UpdateSubProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { "UpdateSubProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::Utility::VFXRaycastBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXRaycastBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXRaycastBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRaycastBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXRaycastBinder* UnityEngine::VFX::Utility::VFXRaycastBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXRaycastBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder::VFXRaycastBinder() {}

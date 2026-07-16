#pragma once
// IWYU pragma private; include "UnityEngine/VFX/SpawnOverDistance.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/VFX/zzzz__SpawnOverDistance_def.hpp"
#include "UnityEngine/VFX/zzzz__SpawnOverDistance_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::SpawnOverDistance_InputProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SpawnOverDistance_InputProperties::*)()>(&::UnityEngine::VFX::SpawnOverDistance_InputProperties::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69cc9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance_InputProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr void UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_set_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Position = value;
}
constexpr float_t& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_RatePerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RatePerUnit;
}
constexpr float_t const& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_RatePerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RatePerUnit;
}
constexpr void UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_set_RatePerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RatePerUnit = value;
}
constexpr float_t& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_VelocityThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VelocityThreshold;
}
constexpr float_t const& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_VelocityThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VelocityThreshold;
}
constexpr void UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_set_VelocityThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VelocityThreshold = value;
}
constexpr bool& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_ClampToOne() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClampToOne;
}
constexpr bool const& UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_get_ClampToOne() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClampToOne;
}
constexpr void UnityEngine::VFX::SpawnOverDistance_InputProperties::__cordl_internal_set_ClampToOne(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClampToOne = value;
}
inline void UnityEngine::VFX::SpawnOverDistance_InputProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance_InputProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::SpawnOverDistance_InputProperties* UnityEngine::VFX::SpawnOverDistance_InputProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SpawnOverDistance_InputProperties*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SpawnOverDistance_InputProperties::SpawnOverDistance_InputProperties() {}
//  Writing Method size for method: ::UnityEngine::VFX::SpawnOverDistance.OnPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SpawnOverDistance::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                       ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SpawnOverDistance::OnPlay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69cc520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                             { "OnPlay",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SpawnOverDistance.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SpawnOverDistance::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                       ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SpawnOverDistance::OnUpdate)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x69cc5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                             { "OnUpdate",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SpawnOverDistance.OnStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SpawnOverDistance::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                       ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::SpawnOverDistance::OnStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cc834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                             { "OnStop",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::SpawnOverDistance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::SpawnOverDistance::*)()>(&::UnityEngine::VFX::SpawnOverDistance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cc838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::SpawnOverDistance::__cordl_internal_get_m_OldPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::SpawnOverDistance::__cordl_internal_get_m_OldPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldPosition;
}
constexpr void UnityEngine::VFX::SpawnOverDistance::__cordl_internal_set_m_OldPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldPosition = value;
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_positionPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "positionPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_positionPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "positionPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_ratePerUnitPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ratePerUnitPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_ratePerUnitPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "ratePerUnitPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_velocityThresholdPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "velocityThresholdPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_velocityThresholdPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "velocityThresholdPropertyId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_clampToOnePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "clampToOnePropertyId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_clampToOnePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "clampToOnePropertyId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_positionAttributeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "positionAttributeId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_positionAttributeId() {
  return ::cordl_internals::getStaticField<int32_t, "positionAttributeId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::setStaticF_oldPositionAttributeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "oldPositionAttributeId", ::UnityEngine::VFX::SpawnOverDistance*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::SpawnOverDistance::getStaticF_oldPositionAttributeId() {
  return ::cordl_internals::getStaticField<int32_t, "oldPositionAttributeId", ::UnityEngine::VFX::SpawnOverDistance*>();
}
inline void UnityEngine::VFX::SpawnOverDistance::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                        ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                           { "OnPlay",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SpawnOverDistance::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                          ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                           { "OnUpdate",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SpawnOverDistance::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                        ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(),
                                                           { "OnStop",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::SpawnOverDistance::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::SpawnOverDistance*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::SpawnOverDistance* UnityEngine::VFX::SpawnOverDistance::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::SpawnOverDistance*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::SpawnOverDistance::SpawnOverDistance() {}

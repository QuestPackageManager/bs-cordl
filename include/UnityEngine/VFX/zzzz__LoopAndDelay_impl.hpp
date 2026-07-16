#pragma once
// IWYU pragma private; include "UnityEngine/VFX/LoopAndDelay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_impl.hpp"
#include "UnityEngine/VFX/zzzz__LoopAndDelay_def.hpp"
#include "UnityEngine/VFX/zzzz__LoopAndDelay_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::LoopAndDelay_InputProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::LoopAndDelay_InputProperties::*)()>(&::UnityEngine::VFX::LoopAndDelay_InputProperties::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69cc3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay_InputProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_LoopCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoopCount;
}
constexpr int32_t const& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_LoopCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoopCount;
}
constexpr void UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_set_LoopCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LoopCount = value;
}
constexpr float_t& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_LoopDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoopDuration;
}
constexpr float_t const& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_LoopDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoopDuration;
}
constexpr void UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_set_LoopDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LoopDuration = value;
}
constexpr float_t& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_Delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delay;
}
constexpr float_t const& UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_get_Delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delay;
}
constexpr void UnityEngine::VFX::LoopAndDelay_InputProperties::__cordl_internal_set_Delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Delay = value;
}
inline void UnityEngine::VFX::LoopAndDelay_InputProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay_InputProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::LoopAndDelay_InputProperties* UnityEngine::VFX::LoopAndDelay_InputProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::LoopAndDelay_InputProperties*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::LoopAndDelay_InputProperties::LoopAndDelay_InputProperties() {}
//  Writing Method size for method: ::UnityEngine::VFX::LoopAndDelay.OnPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::LoopAndDelay::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::LoopAndDelay::OnPlay)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69cc0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(),
                                                             { "OnPlay",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::LoopAndDelay.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::LoopAndDelay::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::LoopAndDelay::OnUpdate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x69cc1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(),
                                                             { "OnUpdate",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::LoopAndDelay.OnStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::LoopAndDelay::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*,
                                                                                                  ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::LoopAndDelay::OnStop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69cc2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(),
                                                             { "OnStop",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::LoopAndDelay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::LoopAndDelay::*)()>(&::UnityEngine::VFX::LoopAndDelay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cc304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_LoopMaxCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopMaxCount;
}
constexpr int32_t const& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_LoopMaxCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopMaxCount;
}
constexpr void UnityEngine::VFX::LoopAndDelay::__cordl_internal_set_m_LoopMaxCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoopMaxCount = value;
}
constexpr int32_t& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_LoopCurrentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopCurrentIndex;
}
constexpr int32_t const& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_LoopCurrentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoopCurrentIndex;
}
constexpr void UnityEngine::VFX::LoopAndDelay::__cordl_internal_set_m_LoopCurrentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoopCurrentIndex = value;
}
constexpr float_t& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_WaitingForTotalTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForTotalTime;
}
constexpr float_t const& UnityEngine::VFX::LoopAndDelay::__cordl_internal_get_m_WaitingForTotalTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForTotalTime;
}
constexpr void UnityEngine::VFX::LoopAndDelay::__cordl_internal_set_m_WaitingForTotalTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitingForTotalTime = value;
}
inline void UnityEngine::VFX::LoopAndDelay::setStaticF_loopCountPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "loopCountPropertyID", ::UnityEngine::VFX::LoopAndDelay*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::LoopAndDelay::getStaticF_loopCountPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "loopCountPropertyID", ::UnityEngine::VFX::LoopAndDelay*>();
}
inline void UnityEngine::VFX::LoopAndDelay::setStaticF_loopDurationPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "loopDurationPropertyID", ::UnityEngine::VFX::LoopAndDelay*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::LoopAndDelay::getStaticF_loopDurationPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "loopDurationPropertyID", ::UnityEngine::VFX::LoopAndDelay*>();
}
inline void UnityEngine::VFX::LoopAndDelay::setStaticF_delayPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "delayPropertyID", ::UnityEngine::VFX::LoopAndDelay*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::LoopAndDelay::getStaticF_delayPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "delayPropertyID", ::UnityEngine::VFX::LoopAndDelay*>();
}
inline void UnityEngine::VFX::LoopAndDelay::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(), { "OnPlay",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::LoopAndDelay::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(), { "OnUpdate",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::LoopAndDelay::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(), { "OnStop",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::VFX::VFXSpawnerState*>(), ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                                                    ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::LoopAndDelay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::LoopAndDelay*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::LoopAndDelay* UnityEngine::VFX::LoopAndDelay::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::LoopAndDelay*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::LoopAndDelay::LoopAndDelay() {}

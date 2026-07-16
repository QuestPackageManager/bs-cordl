#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworkItemController.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::*)()>(
    &::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597f264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystem = value;
}
constexpr bool& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__isSubemitter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSubemitter;
}
constexpr bool const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__isSubemitter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSubemitter;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__isSubemitter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSubemitter = value;
}
constexpr bool& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__useMainColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMainColor;
}
constexpr bool const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__useMainColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMainColor;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__useMainColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useMainColor = value;
}
constexpr bool& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__useOwnGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useOwnGradient;
}
constexpr bool const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__useOwnGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useOwnGradient;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__useOwnGradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useOwnGradient = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__particleColorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleColorGradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__particleColorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleColorGradient;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__particleColorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleColorGradient = value;
}
constexpr bool& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__randomizeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeSpeed;
}
constexpr bool const& GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_get__randomizeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeSpeed;
}
constexpr void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::__cordl_internal_set__randomizeSpeed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeSpeed = value;
}
inline void GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem* GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem::FireworkItemController_FireworkItemParticleSystem() {}
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController_Pool::*)()>(&::GlobalNamespace::FireworkItemController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x597f270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FireworkItemController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController_Pool* GlobalNamespace::FireworkItemController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworkItemController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworkItemController_Pool::FireworkItemController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)(int32_t)>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597ee2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597f2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x597f2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597f500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::*)()>(
    &::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597f538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FireworkItemController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__soundTimeToCenter_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soundTimeToCenter_5__2;
}
constexpr float_t const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__soundTimeToCenter_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soundTimeToCenter_5__2;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set__soundTimeToCenter_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____soundTimeToCenter_5__2 = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__elapsedTime_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__3;
}
constexpr float_t const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__elapsedTime_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__3;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set__elapsedTime_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__3 = value;
}
constexpr bool& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__explosionSoundFired_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionSoundFired_5__4;
}
constexpr bool const& GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_get__explosionSoundFired_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionSoundFired_5__4;
}
constexpr void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::__cordl_internal_set__explosionSoundFired_5__4(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionSoundFired_5__4 = value;
}
inline void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FireworkItemController__FireCoroutine_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FireworkItemController__FireCoroutine_d__29::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29* GlobalNamespace::FireworkItemController__FireCoroutine_d__29::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworkItemController__FireCoroutine_d__29*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::FireworkItemController__FireCoroutine_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::FireworkItemController__FireCoroutine_d__29::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::FireworkItemController__FireCoroutine_d__29::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FireworkItemController__FireCoroutine_d__29::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::FireworkItemController__FireCoroutine_d__29::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FireworkItemController__FireCoroutine_d__29::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworkItemController__FireCoroutine_d__29::FireworkItemController__FireCoroutine_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::GlobalNamespace::DirectionalLight*)>(
    &::GlobalNamespace::FireworkItemController::set_directionalLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597ea44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "set_directionalLight", {}, { ::i2c::type_of<::GlobalNamespace::DirectionalLight*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLightIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(&::GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597ea4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "set_directionalLightIntensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*)>(
    &::GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597ea54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*)>(
    &::GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597eb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x597ebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x597ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Fire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Fire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597edb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "Fire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.FireCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FireworkItemController::*)()>(
    &::GlobalNamespace::FireworkItemController::FireCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x597edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "FireCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.SetLightsColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(&::GlobalNamespace::FireworkItemController::SetLightsColor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x597ecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "SetLightsColor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.PlayExplosionSound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x597ee34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "PlayExplosionSound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.InitializeParticleSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x597ef38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "InitializeParticleSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x597f248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*>& GlobalNamespace::FireworkItemController::__cordl_internal_get__particleSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr ::ArrayW<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*> const& GlobalNamespace::FireworkItemController::__cordl_internal_get__particleSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__particleSystems(::ArrayW<::GlobalNamespace::FireworkItemController_FireworkItemParticleSystem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystems = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::FireworkItemController::__cordl_internal_get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lights = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::FireworkItemController::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::FireworkItemController::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightFlashDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightFlashDuration;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightFlashDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightFlashDuration;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lightFlashDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightFlashDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightIntensityCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightIntensityCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityCurve;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lightIntensityCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIntensityCurve = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lightIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIntensityMultiplier = value;
}
constexpr bool& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomizeColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeColor;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomizeColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeColor;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__randomizeColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsColor;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lightsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsColor = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightsColorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsColorGradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::FireworkItemController::__cordl_internal_get__lightsColorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsColorGradient;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__lightsColorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsColorGradient = value;
}
constexpr bool& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomizeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeSpeed;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomizeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeSpeed;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__randomizeSpeed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeSpeed = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__cordl_internal_get__minSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__cordl_internal_get__minSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minSpeedMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__minSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__cordl_internal_get__maxSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__cordl_internal_get__maxSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpeedMultiplier;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__maxSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxSpeedMultiplier = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::FireworkItemController::__cordl_internal_get__explosionClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::FireworkItemController::__cordl_internal_get__explosionClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionClips;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__explosionClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionClips = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomAudioPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAudioPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::FireworkItemController::__cordl_internal_get__randomAudioPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAudioPicker;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__randomAudioPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomAudioPicker = value;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& GlobalNamespace::FireworkItemController::__cordl_internal_get__directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& GlobalNamespace::FireworkItemController::__cordl_internal_get__directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLight = value;
}
constexpr float_t& GlobalNamespace::FireworkItemController::__cordl_internal_get__directionalLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightIntensity;
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__cordl_internal_get__directionalLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightIntensity;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__directionalLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLightIntensity = value;
}
constexpr bool& GlobalNamespace::FireworkItemController::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::FireworkItemController::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*& GlobalNamespace::FireworkItemController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* const& GlobalNamespace::FireworkItemController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::FireworkItemController::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::FireworkItemController::set_directionalLight(::GlobalNamespace::DirectionalLight* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "set_directionalLight", {}, { ::i2c::type_of<::GlobalNamespace::DirectionalLight*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::set_directionalLightIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "set_directionalLightIntensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::FireworkItemController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::Fire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "Fire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FireworkItemController::FireCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "FireCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::SetLightsColor(float_t intensity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "SetLightsColor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity);
}
inline void GlobalNamespace::FireworkItemController::PlayExplosionSound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "PlayExplosionSound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::InitializeParticleSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { "InitializeParticleSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworkItemController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController* GlobalNamespace::FireworkItemController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworkItemController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworkItemController::FireworkItemController() {}

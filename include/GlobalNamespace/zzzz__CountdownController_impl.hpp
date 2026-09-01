#pragma once
// IWYU pragma private; include "GlobalNamespace\CountdownController.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownController_def.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a0fa78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5a0fa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StartCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::StartCountdown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a0fcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "StartCountdown", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.UpdateCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::UpdateCountdown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a0fdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "UpdateCountdown", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StopCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::StopCountdown)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a0fe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "StopCountdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a0fec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CountdownController::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CountdownController::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>>& GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>> const& GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllers;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__countdownElementControllers(::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownElementControllers = value;
}
constexpr ::GlobalNamespace::ITimeProvider*& GlobalNamespace::CountdownController::__cordl_internal_get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::GlobalNamespace::ITimeProvider* const& GlobalNamespace::CountdownController::__cordl_internal_get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__timeProvider(::GlobalNamespace::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeProvider = value;
}
constexpr int64_t& GlobalNamespace::CountdownController::__cordl_internal_get__countdownEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime;
}
constexpr int64_t const& GlobalNamespace::CountdownController::__cordl_internal_get__countdownEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__countdownEndTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownEndTime = value;
}
constexpr int32_t& GlobalNamespace::CountdownController::__cordl_internal_get__currentRemainingSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRemainingSecond;
}
constexpr int32_t const& GlobalNamespace::CountdownController::__cordl_internal_get__currentRemainingSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRemainingSecond;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__currentRemainingSecond(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentRemainingSecond = value;
}
constexpr bool& GlobalNamespace::CountdownController::__cordl_internal_get__gongSounded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gongSounded;
}
constexpr bool const& GlobalNamespace::CountdownController::__cordl_internal_get__gongSounded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gongSounded;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__gongSounded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gongSounded = value;
}
constexpr bool& GlobalNamespace::CountdownController::__cordl_internal_get__countdownRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownRunning;
}
constexpr bool const& GlobalNamespace::CountdownController::__cordl_internal_get__countdownRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownRunning;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__countdownRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownRunning = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>*&
GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllerQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllerQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* const&
GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllerQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllerQueue;
}
constexpr void
GlobalNamespace::CountdownController::__cordl_internal_set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownElementControllerQueue = value;
}
inline void GlobalNamespace::CountdownController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::StartCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "StartCountdown", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::UpdateCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "UpdateCountdown", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::StopCountdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { "StopCountdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CountdownController* GlobalNamespace::CountdownController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CountdownController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownController::CountdownController() {}

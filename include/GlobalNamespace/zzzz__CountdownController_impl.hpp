#pragma once
// IWYU pragma private; include "GlobalNamespace/CountdownController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownController_def.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c1a6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3c1a700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StartCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::StartCountdown)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3c1a940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StartCountdown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.UpdateCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(
    &::GlobalNamespace::CountdownController::UpdateCountdown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c1aa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "UpdateCountdown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StopCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::StopCountdown)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3c1aac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StopCountdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c1ab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*>&
GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*> const&
GlobalNamespace::CountdownController::__cordl_internal_get__countdownElementControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownElementControllers;
}
constexpr void GlobalNamespace::CountdownController::__cordl_internal_set__countdownElementControllers(
    ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____countdownElementControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____countdownElementControllerQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CountdownController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::StartCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StartCountdown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::UpdateCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "UpdateCountdown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::StopCountdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StopCountdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CountdownController* GlobalNamespace::CountdownController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CountdownController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownController::CountdownController() {}

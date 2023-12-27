#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownController_def.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a2f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x22a2f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StartCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::StartCountdown)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22a31ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StartCountdown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.UpdateCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(
    &::GlobalNamespace::CountdownController::UpdateCountdown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a32c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "UpdateCountdown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StopCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::StopCountdown)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22a332c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StopCountdown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a33a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::CountdownController::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::CountdownController::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::CountdownController::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*>&
GlobalNamespace::CountdownController::__get__countdownElementControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownElementControllers;
}
constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> const&
GlobalNamespace::CountdownController::__get__countdownElementControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownElementControllers;
}
constexpr void
GlobalNamespace::CountdownController::__set__countdownElementControllers(::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____countdownElementControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ITimeProvider*& GlobalNamespace::CountdownController::__get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ITimeProvider*> const& GlobalNamespace::CountdownController::__get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::CountdownController::__set__timeProvider(::GlobalNamespace::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::CountdownController::__get__countdownEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownEndTime;
}
constexpr int64_t const& GlobalNamespace::CountdownController::__get__countdownEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownEndTime;
}
constexpr void GlobalNamespace::CountdownController::__set__countdownEndTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____countdownEndTime = value;
}
constexpr int32_t& GlobalNamespace::CountdownController::__get__currentRemainingSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentRemainingSecond;
}
constexpr int32_t const& GlobalNamespace::CountdownController::__get__currentRemainingSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentRemainingSecond;
}
constexpr void GlobalNamespace::CountdownController::__set__currentRemainingSecond(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentRemainingSecond = value;
}
constexpr bool& GlobalNamespace::CountdownController::__get__gongSounded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gongSounded;
}
constexpr bool const& GlobalNamespace::CountdownController::__get__gongSounded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gongSounded;
}
constexpr void GlobalNamespace::CountdownController::__set__gongSounded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____gongSounded = value;
}
constexpr bool& GlobalNamespace::CountdownController::__get__countdownRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownRunning;
}
constexpr bool const& GlobalNamespace::CountdownController::__get__countdownRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownRunning;
}
constexpr void GlobalNamespace::CountdownController::__set__countdownRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____countdownRunning = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*& GlobalNamespace::CountdownController::__get__countdownElementControllerQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownElementControllerQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*> const&
GlobalNamespace::CountdownController::__get__countdownElementControllerQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____countdownElementControllerQueue;
}
constexpr void GlobalNamespace::CountdownController::__set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____countdownElementControllerQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CountdownController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::StartCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StartCountdown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::UpdateCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "UpdateCountdown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::StopCountdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), "StopCountdown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CountdownController* GlobalNamespace::CountdownController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CountdownController*>());
}
inline void GlobalNamespace::CountdownController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownController::CountdownController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

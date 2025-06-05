#pragma once
// IWYU pragma private; include "GlobalNamespace/ShowTextOnGameEventController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)(::GlobalNamespace::TextFadeTransitions*)>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3be8350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextFadeTransitions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.Deinit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Deinit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3be8444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "Deinit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3be84dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "HandleGameEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3be859c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr float_t const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delay = value;
}
constexpr ::StringW& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__textFadeTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_get__textFadeTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::__cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textFadeTransitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextFadeTransitions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textFadeTransitions);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::Deinit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "Deinit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), "HandleGameEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding* GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding::ShowTextOnGameEventController_EventTextBinding() {}
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3be82ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3be83e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3be84d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__textFadeTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__textFadeTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textFadeTransitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*>&
GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*> const&
GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_set__eventTextBindings(
    ::ArrayW<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*, ::Array<::GlobalNamespace::ShowTextOnGameEventController_EventTextBinding*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTextBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ShowTextOnGameEventController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShowTextOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ShowTextOnGameEventController* GlobalNamespace::ShowTextOnGameEventController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShowTextOnGameEventController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShowTextOnGameEventController::ShowTextOnGameEventController() {}

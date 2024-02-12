#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__ShowTextOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::*)(
    ::GlobalNamespace::TextFadeTransitions*)>(&::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bf4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextFadeTransitions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding.Deinit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::*)()>(
    &::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::Deinit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23bf5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), "Deinit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::*)()>(
    &::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23bf640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(),
                                                 "HandleGameEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::*)()>(
    &::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bf6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions>& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__textFadeTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr ::UnityW<::GlobalNamespace::TextFadeTransitions> const& GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_get__textFadeTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textFadeTransitions;
}
constexpr void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__cordl_internal_set__textFadeTransitions(::UnityW<::GlobalNamespace::TextFadeTransitions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textFadeTransitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::Init(::GlobalNamespace::TextFadeTransitions* textFadeTransitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextFadeTransitions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textFadeTransitions);
}
inline void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::Deinit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), "Deinit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), "HandleGameEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding* GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>());
}
inline void GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding::__ShowTextOnGameEventController__EventTextBinding() {}
//  Writing Method size for method: ::GlobalNamespace::ShowTextOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShowTextOnGameEventController::*)()>(
    &::GlobalNamespace::ShowTextOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23bf450;

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
  constexpr static std::size_t addrs = 0x23bf550;

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
  constexpr static std::size_t addrs = 0x23bf638;

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
constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*>&
GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> const&
GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_get__eventTextBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTextBindings;
}
constexpr void GlobalNamespace::ShowTextOnGameEventController::__cordl_internal_set__eventTextBindings(
    ::ArrayW<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*, ::Array<::GlobalNamespace::__ShowTextOnGameEventController__EventTextBinding*>*> value) {
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
inline ::GlobalNamespace::ShowTextOnGameEventController* GlobalNamespace::ShowTextOnGameEventController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShowTextOnGameEventController*>());
}
inline void GlobalNamespace::ShowTextOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShowTextOnGameEventController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShowTextOnGameEventController::ShowTextOnGameEventController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

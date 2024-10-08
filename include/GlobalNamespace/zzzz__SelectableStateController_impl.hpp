#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectableStateController__ViewState::__SelectableStateController__ViewState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SelectableStateController__ViewState::__SelectableStateController__ViewState() {}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::Disabled{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::Selected{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::__SelectableStateController__ViewState::SelectedAndHighlighted{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.add_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(
    ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*)>(&::GlobalNamespace::SelectableStateController::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x445ec78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "add_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.remove_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(
    ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*)>(&::GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x445edb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "remove_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_tweeningManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Tweening::TimeTweeningManager> (::GlobalNamespace::SelectableStateController::*)()>(
    &::GlobalNamespace::SelectableStateController::get_tweeningManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4461b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                                                                               "get_tweeningManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_currentViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectableStateController__ViewState (::GlobalNamespace::SelectableStateController::*)()>(
    &::GlobalNamespace::SelectableStateController::get_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4461b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                                                                               "get_currentViewState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.set_currentViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::__SelectableStateController__ViewState)>(
    &::GlobalNamespace::SelectableStateController::set_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4461b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "set_currentViewState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::__SelectableStateController__ViewState, bool)>(&::GlobalNamespace::SelectableStateController::SetState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4461b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4461b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::SelectableStateController::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::SelectableStateController::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::SelectableStateController::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*& GlobalNamespace::SelectableStateController::__cordl_internal_get_stateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*> const&
GlobalNamespace::SelectableStateController::__cordl_internal_get_stateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr void GlobalNamespace::SelectableStateController::__cordl_internal_set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState& GlobalNamespace::SelectableStateController::__cordl_internal_get__currentViewState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentViewState_k__BackingField;
}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState const& GlobalNamespace::SelectableStateController::__cordl_internal_get__currentViewState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentViewState_k__BackingField;
}
constexpr void GlobalNamespace::SelectableStateController::__cordl_internal_set__currentViewState_k__BackingField(::GlobalNamespace::__SelectableStateController__ViewState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentViewState_k__BackingField = value;
}
inline void GlobalNamespace::SelectableStateController::add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "add_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "remove_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::Tweening::TimeTweeningManager> GlobalNamespace::SelectableStateController::get_tweeningManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                                                                             "get_tweeningManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Tweening::TimeTweeningManager>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::get_currentViewState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                                                                             "get_currentViewState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectableStateController__ViewState, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectableStateController::set_currentViewState(::GlobalNamespace::__SelectableStateController__ViewState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "set_currentViewState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::SetState(::GlobalNamespace::__SelectableStateController__ViewState state, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, animated);
}
inline ::GlobalNamespace::SelectableStateController* GlobalNamespace::SelectableStateController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectableStateController*>());
}
inline void GlobalNamespace::SelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectableStateController::SelectableStateController() {}

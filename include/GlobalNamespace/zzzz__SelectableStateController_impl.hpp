#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectableStateController_ViewState::SelectableStateController_ViewState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectableStateController_ViewState::SelectableStateController_ViewState() {}
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::Disabled{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::Selected{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController_ViewState::SelectedAndHighlighted{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.add_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*)>(
    &::GlobalNamespace::SelectableStateController::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x643cf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                { "add_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.remove_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*)>(
    &::GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x643d050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                { "remove_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_tweeningManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Tweening::TimeTweeningManager> (::GlobalNamespace::SelectableStateController::*)()>(
    &::GlobalNamespace::SelectableStateController::get_tweeningManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64401b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { "get_tweeningManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_currentViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SelectableStateController_ViewState (::GlobalNamespace::SelectableStateController::*)()>(
    &::GlobalNamespace::SelectableStateController::get_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64401bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { "get_currentViewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.set_currentViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::SelectableStateController_ViewState)>(
    &::GlobalNamespace::SelectableStateController::set_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64401c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                             { "set_currentViewState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::SelectableStateController_ViewState, bool)>(
    &::GlobalNamespace::SelectableStateController::SetState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64401cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                             { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64401f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { ".ctor", {}, {} })));
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
  this->____tweeningManager = value;
}
constexpr ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*& GlobalNamespace::SelectableStateController::__cordl_internal_get_stateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* const& GlobalNamespace::SelectableStateController::__cordl_internal_get_stateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr void GlobalNamespace::SelectableStateController::__cordl_internal_set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stateDidChangeEvent = value;
}
constexpr ::GlobalNamespace::SelectableStateController_ViewState& GlobalNamespace::SelectableStateController::__cordl_internal_get__currentViewState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentViewState_k__BackingField;
}
constexpr ::GlobalNamespace::SelectableStateController_ViewState const& GlobalNamespace::SelectableStateController::__cordl_internal_get__currentViewState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentViewState_k__BackingField;
}
constexpr void GlobalNamespace::SelectableStateController::__cordl_internal_set__currentViewState_k__BackingField(::GlobalNamespace::SelectableStateController_ViewState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentViewState_k__BackingField = value;
}
inline void GlobalNamespace::SelectableStateController::add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                              { "add_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                              { "remove_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Tweening::TimeTweeningManager> GlobalNamespace::SelectableStateController::get_tweeningManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { "get_tweeningManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Tweening::TimeTweeningManager>>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectableStateController_ViewState GlobalNamespace::SelectableStateController::get_currentViewState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { "get_currentViewState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SelectableStateController_ViewState>(this, ___internal_method);
}
inline void GlobalNamespace::SelectableStateController::set_currentViewState(::GlobalNamespace::SelectableStateController_ViewState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                           { "set_currentViewState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::SetState(::GlobalNamespace::SelectableStateController_ViewState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(),
                                                           { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::SelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectableStateController* GlobalNamespace::SelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectableStateController::SelectableStateController() {}

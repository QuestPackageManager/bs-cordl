#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseStateTransition.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_def.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.get_tweeningManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Tweening::TimeTweeningManager> (::GlobalNamespace::BaseStateTransition::*)()>(
    &::GlobalNamespace::BaseStateTransition::get_tweeningManager)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643cdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "get_tweeningManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.get_transition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BaseTransitionSO> (::GlobalNamespace::BaseStateTransition::*)()>(
    &::GlobalNamespace::BaseStateTransition::get_transition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::SelectableStateController_ViewState)>(
    &::GlobalNamespace::BaseStateTransition::SetState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x643cddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(),
                                                                                           { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x643ce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x643cfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x643d110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.HandleSelectableStateControllerStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::SelectableStateController_ViewState, bool)>(
    &::GlobalNamespace::BaseStateTransition::HandleSelectableStateControllerStateDidChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x643d1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(),
                            { "HandleSelectableStateControllerStateDidChange", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToNormalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToNormalState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToHighlightedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToPressedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToPressedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToDisabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToDisabledState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToSelectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToSelectedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.TransitionToSelectedAndHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)(::GlobalNamespace::TransitionTimingSO*)>(
    &::GlobalNamespace::BaseStateTransition::TransitionToSelectedAndHighlightedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.StopCurrentTransitionAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::StopCurrentTransitionAnimation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetNormalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetNormalState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetHighlightedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetPressedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetPressedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetDisabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetDisabledState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetSelectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetSelectedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition.SetSelectedAndHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::SetSelectedAndHighlightedState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseStateTransition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseStateTransition::*)()>(&::GlobalNamespace::BaseStateTransition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643d2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SelectableStateController>& GlobalNamespace::BaseStateTransition::__cordl_internal_get__selectableStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableStateController;
}
constexpr ::UnityW<::GlobalNamespace::SelectableStateController> const& GlobalNamespace::BaseStateTransition::__cordl_internal_get__selectableStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableStateController;
}
constexpr void GlobalNamespace::BaseStateTransition::__cordl_internal_set__selectableStateController(::UnityW<::GlobalNamespace::SelectableStateController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectableStateController = value;
}
constexpr ::GlobalNamespace::SelectableStateController_ViewState& GlobalNamespace::BaseStateTransition::__cordl_internal_get__viewState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewState;
}
constexpr ::GlobalNamespace::SelectableStateController_ViewState const& GlobalNamespace::BaseStateTransition::__cordl_internal_get__viewState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewState;
}
constexpr void GlobalNamespace::BaseStateTransition::__cordl_internal_set__viewState(::GlobalNamespace::SelectableStateController_ViewState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewState = value;
}
inline ::UnityW<::Tweening::TimeTweeningManager> GlobalNamespace::BaseStateTransition::get_tweeningManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "get_tweeningManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Tweening::TimeTweeningManager>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BaseTransitionSO> GlobalNamespace::BaseStateTransition::get_transition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BaseTransitionSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetState(::GlobalNamespace::SelectableStateController_ViewState viewState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewState);
}
inline void GlobalNamespace::BaseStateTransition::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::HandleSelectableStateControllerStateDidChange(::GlobalNamespace::SelectableStateController_ViewState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(),
                                       { "HandleSelectableStateControllerStateDidChange", {}, { ::i2c::type_of<::GlobalNamespace::SelectableStateController_ViewState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTiming);
}
inline void GlobalNamespace::BaseStateTransition::StopCurrentTransitionAnimation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetNormalState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetHighlightedState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetPressedState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetDisabledState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetSelectedState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::SetSelectedAndHighlightedState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseStateTransition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseStateTransition* GlobalNamespace::BaseStateTransition::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseStateTransition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseStateTransition::BaseStateTransition() {}

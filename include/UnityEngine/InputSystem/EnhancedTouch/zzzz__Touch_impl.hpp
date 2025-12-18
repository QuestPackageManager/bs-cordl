#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState.AddFingers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::*)(
    ::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::AddFingers)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63f2ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "AddFingers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState.RemoveFingers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::*)(
    ::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::RemoveFingers)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x63f2bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "RemoveFingers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::Destroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63ef954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "Destroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState.UpdateActiveFingers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::UpdateActiveFingers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63f1f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(),
                                                 "UpdateActiveFingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState.UpdateActiveTouches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::UpdateActiveTouches)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x63f17f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(),
                                                 "UpdateActiveTouches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::AddFingers(::UnityEngine::InputSystem::Touchscreen* screen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "AddFingers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::RemoveFingers(::UnityEngine::InputSystem::Touchscreen* screen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "RemoveFingers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(), "Destroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::UpdateActiveFingers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(),
                                               "UpdateActiveFingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::UpdateActiveTouches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState>::get(),
                                               "UpdateActiveTouches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}") }, CppParam { name: "fingers", ty:
// "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "totalFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::Touch_FingerAndTouchState(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask,
    ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> fingers,
    ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> activeFingers,
    ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> activeTouches, int32_t activeFingerCount, int32_t activeTouchCount,
    int32_t totalFingerCount, uint32_t lastId, bool haveBuiltActiveTouches, bool haveActiveTouchesNeedingRefreshNextUpdate,
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState) noexcept {
  this->updateMask = updateMask;
  this->fingers = fingers;
  this->activeFingers = activeFingers;
  this->activeTouches = activeTouches;
  this->activeFingerCount = activeFingerCount;
  this->activeTouchCount = activeTouchCount;
  this->totalFingerCount = totalFingerCount;
  this->lastId = lastId;
  this->haveBuiltActiveTouches = haveBuiltActiveTouches;
  this->haveActiveTouchesNeedingRefreshNextUpdate = haveActiveTouchesNeedingRefreshNextUpdate;
  this->activeTouchState = activeTouchState;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState::Touch_FingerAndTouchState() {}
// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFingerDown", ty:
// "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState::Touch_GlobalState(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens, int32_t historyLengthPerFinger,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove,
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp,
    ::UnityEngine::InputSystem::EnhancedTouch::Touch_FingerAndTouchState playerState) noexcept {
  this->touchscreens = touchscreens;
  this->historyLengthPerFinger = historyLengthPerFinger;
  this->onFingerDown = onFingerDown;
  this->onFingerMove = onFingerMove;
  this->onFingerUp = onFingerUp;
  this->playerState = playerState;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState::Touch_GlobalState() {}
// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState::Touch_ExtraDataPerTouchState(::UnityEngine::Vector2 accumulatedDelta, uint32_t uniqueId) noexcept {
  this->accumulatedDelta = accumulatedDelta;
  this->uniqueId = uniqueId;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState::Touch_ExtraDataPerTouchState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f30a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._SaveAndResetState_b__80_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)(
    ::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63f30ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(), "<SaveAndResetState>b__80_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch___c._SaveAndResetState_b__80_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch___c::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f3134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(),
                                                                               "<SaveAndResetState>b__80_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::Touch___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>(
      std::forward<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>(value));
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9__80_0(
    ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>*, "<>9__80_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>*
UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9__80_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>*, "<>9__80_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::setStaticF___9__80_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__80_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::EnhancedTouch::Touch___c::getStaticF___9__80_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__80_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_0(::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(), "<SaveAndResetState>b__80_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch___c::_SaveAndResetState_b__80_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>::get(),
                                                                             "<SaveAndResetState>b__80_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* UnityEngine::InputSystem::EnhancedTouch::Touch___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::EnhancedTouch::Touch___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch___c::Touch___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63eff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_finger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Finger* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f1078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_finger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f1018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_began
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_began)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f10cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_began", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_inProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x63f1130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_inProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_ended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63f11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_ended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_touchId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f0fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_touchId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_pressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f1268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_pressure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_radius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f12c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_radius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f1328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_time)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_time", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Touchscreen* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f13d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_screen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f00b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_screenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startScreenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f1438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_startScreenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f1498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_delta", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_tapCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f14f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_tapCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f1558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_isTap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_displayIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_displayIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f15c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_displayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63f011c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_isInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_updateStepCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f0188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_updateStepCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_uniqueId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63f0f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_uniqueId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_state)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_extraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState> (
    ::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f1628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_extraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_history
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_history)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x63f1674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_history", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeTouches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63f1770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_activeTouches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_fingers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63f1e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_fingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeFingers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63f1ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_activeFingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63f2074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_screens", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f2108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f21d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f22a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f236c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f2438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63f2504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_maxHistoryLengthPerFinger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63f05a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "get_maxHistoryLengthPerFinger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(
    ::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f0110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::ToString)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x63f25d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::UnityEngine::InputSystem::EnhancedTouch::Touch)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63f28c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63f2974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63f2a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.AddTouchscreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63efafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "AddTouchscreen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.RemoveTouchscreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63efb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "RemoveTouchscreen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.BeginUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63f2d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "BeginUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.CreateGlobalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f2da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "CreateGlobalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.SaveAndResetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x63f2dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                               "SaveAndResetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::setStaticF_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, "s_GlobalState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get>(
      std::forward<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>(value));
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::getStaticF_s_GlobalState() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, "s_GlobalState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get>();
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_finger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Finger*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_began() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_began", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_inProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_ended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_touchId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_pressure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_radius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_time", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_screen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_screenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_startScreenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_delta", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_tapCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_isTap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_displayIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_displayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_isInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_updateStepCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_uniqueId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_extraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::InputSystem::EnhancedTouch::Touch_ExtraDataPerTouchState>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory UnityEngine::InputSystem::EnhancedTouch::Touch::get_history() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_history", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_activeTouches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_fingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_activeFingers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_screens", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "add_onFingerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "remove_onFingerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "get_maxHistoryLengthPerFinger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger,
                                                                  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finger, touchRecord);
}
inline ::StringW UnityEngine::InputSystem::EnhancedTouch::Touch::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "AddTouchscreen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(), "RemoveTouchscreen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "BeginUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "CreateGlobalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                                                             "SaveAndResetState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*, false>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr UnityEngine::InputSystem::EnhancedTouch::Touch::operator ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*
UnityEngine::InputSystem::EnhancedTouch::Touch::i___System__IEquatable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TouchRecord", ty:
// "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch::Touch(
    ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger,
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord) noexcept {
  this->m_Finger = m_Finger;
  this->m_TouchRecord = m_TouchRecord;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch::Touch() {}

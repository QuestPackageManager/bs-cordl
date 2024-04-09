#pragma once
#include "UnityEngine/InputSystem/zzzz__InputActionState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputInteractionContext__Flags::__InputInteractionContext__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputInteractionContext__Flags::__InputInteractionContext__Flags() {}
constexpr ::UnityEngine::InputSystem::__InputInteractionContext__Flags UnityEngine::InputSystem::__InputInteractionContext__Flags::TimerHasExpired{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_action)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f8c440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_action", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_control)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f8c464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_time", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_timerHasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_timerHasExpired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8c4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_timerHasExpired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.set_timerHasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(bool)>(
    &::UnityEngine::InputSystem::InputInteractionContext::set_timerHasExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f8c4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "set_timerHasExpired",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_isWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_isWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f8c4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_isWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_isStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_isStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f8c4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_isStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.ComputeMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::ComputeMagnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "ComputeMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.ControlIsActuated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(
    &::UnityEngine::InputSystem::InputInteractionContext::ControlIsActuated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8c4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "ControlIsActuated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Started
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::Started)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f8c4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "Started", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Performed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::Performed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f8c534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "Performed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.PerformedAndStayStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayStarted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f8c574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "PerformedAndStayStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.PerformedAndStayPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayPerformed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f8c5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "PerformedAndStayPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Canceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::Canceled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f8c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "Canceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.Waiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::Waiting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f8c634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "Waiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.SetTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(
    &::UnityEngine::InputSystem::InputInteractionContext::SetTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f8c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "SetTimeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.SetTotalTimeoutCompletionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputInteractionContext::*)(float_t)>(
    &::UnityEngine::InputSystem::InputInteractionContext::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2f8c698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "SetTotalTimeoutCompletionTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_mapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_mapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_mapIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_controlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_controlIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8c734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_controlIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_bindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8c740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_bindingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputInteractionContext.get_interactionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputInteractionContext::*)()>(
    &::UnityEngine::InputSystem::InputInteractionContext::get_interactionIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8c748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                               "get_interactionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputInteractionContext::get_action() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_action", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputInteractionContext::get_control() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputInteractionContext::get_phase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputInteractionContext::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_time", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputInteractionContext::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputInteractionContext::get_timerHasExpired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_timerHasExpired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::set_timerHasExpired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "set_timerHasExpired",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputInteractionContext::get_isWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_isWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputInteractionContext::get_isStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_isStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputInteractionContext::ComputeMagnitude() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "ComputeMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
/// @param threshold: float_t (default: 0.0)
inline bool UnityEngine::InputSystem::InputInteractionContext::ControlIsActuated(float_t threshold) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "ControlIsActuated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, threshold);
}
inline void UnityEngine::InputSystem::InputInteractionContext::Started() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "Started", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::Performed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "Performed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "PerformedAndStayStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::PerformedAndStayPerformed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "PerformedAndStayPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::Canceled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "Canceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::Waiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "Waiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputInteractionContext::SetTimeout(float_t seconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "SetTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seconds);
}
inline void UnityEngine::InputSystem::InputInteractionContext::SetTotalTimeoutCompletionTime(float_t seconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "SetTotalTimeoutCompletionTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seconds);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputInteractionContext::ReadValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(), "ReadValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputInteractionContext::get_mapIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_mapIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputInteractionContext::get_controlIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_controlIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputInteractionContext::get_bindingIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_bindingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputInteractionContext::get_interactionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputInteractionContext>::get(),
                                                                             "get_interactionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Flags", ty:
// "::UnityEngine::InputSystem::__InputInteractionContext__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TriggerState", ty:
// "::UnityEngine::InputSystem::__InputActionState__TriggerState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputInteractionContext::InputInteractionContext(::UnityEngine::InputSystem::InputActionState* m_State,
                                                                                       ::UnityEngine::InputSystem::__InputInteractionContext__Flags m_Flags,
                                                                                       ::UnityEngine::InputSystem::__InputActionState__TriggerState m_TriggerState) noexcept {
  this->m_State = m_State;
  this->m_Flags = m_Flags;
  this->m_TriggerState = m_TriggerState;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputInteractionContext::InputInteractionContext() {}

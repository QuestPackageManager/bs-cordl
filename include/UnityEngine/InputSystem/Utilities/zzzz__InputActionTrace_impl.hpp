#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/InputActionTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InputActionTrace_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InputActionTrace_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_action)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31a35e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_action",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_phase)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31a3610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_phase",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_control)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x31a361c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_interaction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputInteraction* (
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_interaction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x31a365c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "get_interaction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_time)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31a36b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_time",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_startTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31a36d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_duration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x31a36dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31a370c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "get_valueSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x31a3718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                 "ReadValueAsObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)(
    ::cordl_internals::Ptr<void>, int32_t)>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x31a395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ToString)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x31a2f34;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), 3));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_action() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_action",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_phase() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_phase",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_control",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_interaction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                               "get_interaction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputInteraction*, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_time",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_startTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                               "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_duration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "get_duration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_valueSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                               "get_valueSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValueAsObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                               "ReadValueAsObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue(::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferSize);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), "ReadValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Ptr", ty:
// "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__InputActionTrace__ActionEventPtr(
    ::UnityEngine::InputSystem::InputActionState* m_State, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Ptr) noexcept {
  this->m_State = m_State;
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__InputActionTrace__ActionEventPtr() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)(
    ::UnityEngine::InputSystem::Utilities::InputActionTrace*)>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x31a3240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31a3a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31a3ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a3ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr (
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31a3ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(
    &::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31a3b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*
UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities____InputActionTrace__ActionEventPtr_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::_ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trace);
}
inline bool UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Trace", ty: "::UnityEngine::InputSystem::Utilities::InputActionTrace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Buffer", ty:
// "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__InputActionTrace__Enumerator(
    ::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Buffer, int32_t m_EventCount,
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_CurrentEvent, int32_t m_CurrentIndex) noexcept {
  this->m_Trace = m_Trace;
  this->m_Buffer = m_Buffer;
  this->m_EventCount = m_EventCount;
  this->m_CurrentEvent = m_CurrentEvent;
  this->m_CurrentIndex = m_CurrentIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__InputActionTrace__Enumerator() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.get_buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventBuffer (
    ::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::get_buffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x31a1f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "get_buffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.get_count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a1f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "get_count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a1f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a1f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a211c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeToAll)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31a22ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "SubscribeToAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFromAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFromAll)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x31a2664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "UnsubscribeFromAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x31a1fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "SubscribeTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x31a2198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "SubscribeTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x31a244c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "UnsubscribeFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x31a2568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "UnsubscribeFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.RecordAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::RecordAction)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x31a27a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "RecordAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x31a2978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x31a29cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::ToString)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x31a2b60;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31a3228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.DisposeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::DisposeInternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x31a2a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "DisposeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>* (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::GetEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31a2ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a3288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.HookOnActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::HookOnActionChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31a2388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "HookOnActionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnhookOnActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::UnhookOnActionChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31a273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                               "UnhookOnActionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.OnActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(
    ::System::Object*, ::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::OnActionChange)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x31a328c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "OnActionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.CloneActionStateBeforeBindingsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::Utilities::InputActionTrace::CloneActionStateBeforeBindingsChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x31a34f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "CloneActionStateBeforeBindingsChange",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*
UnityEngine::InputSystem::Utilities::InputActionTrace::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities____InputActionTrace__ActionEventPtr_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Utilities::InputActionTrace::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Utilities::InputActionTrace::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedToAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedToAll;
}
constexpr bool const& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedToAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedToAll;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_SubscribedToAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubscribedToAll = value;
}
constexpr bool& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_OnActionChangeHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActionChangeHooked;
}
constexpr bool const& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_OnActionChangeHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActionChangeHooked;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_OnActionChangeHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnActionChangeHooked = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedActions;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedActions;
}
constexpr void
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_SubscribedActions(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubscribedActions = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedActionMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedActionMaps;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_SubscribedActionMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubscribedActionMaps;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_SubscribedActionMaps(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubscribedActionMaps = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_EventBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventBuffer;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_EventBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventBuffer;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_EventBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventBuffer = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionMapStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMapStates;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionMapStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMapStates;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_ActionMapStates(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionMapStates = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionMapStateClones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMapStateClones;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionMapStateClones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMapStateClones;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_ActionMapStateClones(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionMapStateClones = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_CallbackDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallbackDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_CallbackDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CallbackDelegate;
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_CallbackDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CallbackDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*& UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionChangeDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionChangeDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> const&
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_get_m_ActionChangeDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionChangeDelegate;
}
constexpr void
UnityEngine::InputSystem::Utilities::InputActionTrace::__cordl_internal_set_m_ActionChangeDelegate(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionChangeDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer UnityEngine::InputSystem::Utilities::InputActionTrace::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "get_buffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Utilities::InputActionTrace::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "get_count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::InputActionTrace*>());
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor(::UnityEngine::InputSystem::InputAction* action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::InputActionTrace*>(action));
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::InputActionTrace*>(actionMap));
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeToAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "SubscribeToAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFromAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "UnsubscribeFromAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "SubscribeTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "SubscribeTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "UnsubscribeFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "UnsubscribeFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::RecordAction(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "RecordAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::InputActionTrace::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::DisposeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "DisposeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*
UnityEngine::InputSystem::Utilities::InputActionTrace::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::InputActionTrace::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::HookOnActionChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "HookOnActionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnhookOnActionChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                                                             "UnhookOnActionChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::OnActionChange(::System::Object* actionOrMapOrAsset, ::UnityEngine::InputSystem::InputActionChange change) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "OnActionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionOrMapOrAsset, change);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(), "CloneActionStateBeforeBindingsChange",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionMap);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::InputActionTrace::InputActionTrace() {}

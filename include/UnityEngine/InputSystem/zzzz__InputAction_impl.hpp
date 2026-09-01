#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputAction.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags::InputAction_ActionFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags::InputAction_ActionFlags() {}
constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags UnityEngine::InputSystem::InputAction_ActionFlags::WantsInitialStateCheck{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_actionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_actionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d52c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_actionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_bindingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_bindingIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64d52c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_bindingIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_controlIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_controlIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64d52f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_controlIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_interactionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_interactionIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64d532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_interactionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_phase)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64d5364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_started
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&::UnityEngine::InputSystem::InputAction_CallbackContext::get_started)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64d538c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_started", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_performed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&::UnityEngine::InputSystem::InputAction_CallbackContext::get_performed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64d53bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_performed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_canceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&::UnityEngine::InputSystem::InputAction_CallbackContext::get_canceled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64d53ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_canceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_action)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64d541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_action", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_control)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64d5448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_interaction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_interaction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64d54ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_interaction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&::UnityEngine::InputSystem::InputAction_CallbackContext::get_time)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64d5510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_startTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64d553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_startTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_duration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64d5568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_valueType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64d5598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_valueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64d55d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_valueSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction_CallbackContext::*)(void*, int32_t)>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x64d5610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValue", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.ReadValueAsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64d57c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValueAsButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(
    &::UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64d581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValueAsObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction_CallbackContext.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&::UnityEngine::InputSystem::InputAction_CallbackContext::ToString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x64d5874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::InputAction_CallbackContext::get_actionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_actionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction_CallbackContext::get_bindingIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_bindingIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction_CallbackContext::get_controlIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_controlIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction_CallbackContext::get_interactionIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_interactionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputAction_CallbackContext::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction_CallbackContext::get_started() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_started", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction_CallbackContext::get_performed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_performed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction_CallbackContext::get_canceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_canceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction_CallbackContext::get_action() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputAction_CallbackContext::get_control() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline Il2CppObject* UnityEngine::InputSystem::InputAction_CallbackContext::get_interaction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_interaction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputAction_CallbackContext::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputAction_CallbackContext::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_startTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::InputAction_CallbackContext::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::InputAction_CallbackContext::get_valueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_valueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction_CallbackContext::get_valueSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "get_valueSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue(void* buffer, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValue", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, bufferSize);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValue", { ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValueAsButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), { "ReadValueAsObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction_CallbackContext::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputAction_CallbackContext>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAction_CallbackContext::InputAction_CallbackContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_ActionIndex) noexcept {
  this->m_State = m_State;
  this->m_ActionIndex = m_ActionIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAction_CallbackContext::InputAction_CallbackContext() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d31e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionType (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d31f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_id)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64d31f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_idDontGenerate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64d3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_idDontGenerate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_expectedControlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d32b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_expectedControlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_expectedControlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW)>(&::UnityEngine::InputSystem::InputAction::set_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d32bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "set_expectedControlType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d32c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_processors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_interactions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d32cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_interactions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_actionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_actionMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d32d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_actionMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64d3314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_bindingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_bindingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(
    &::UnityEngine::InputSystem::InputAction::set_bindingMask)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x64d3324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "set_bindingMask", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_bindings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64d361c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_bindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_controls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64d36b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_controls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_phase)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64d379c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_inProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_inProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64d3844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_inProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_enabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64d3890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_started
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::add_started)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d38d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "add_started", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_started
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::remove_started)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d3934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "remove_started", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_canceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::add_canceled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d3990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "add_canceled", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_canceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::remove_canceled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d39ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "remove_canceled", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_performed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::add_performed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d3a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "add_performed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_performed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::InputAction::remove_performed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d3aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { "remove_performed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_triggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_triggered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_triggered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_activeControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_activeControl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64d3bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_activeControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_activeValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_activeValueType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64d3c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_activeValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64d3ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_wantsInitialStateCheck", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_wantsInitialStateCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(bool)>(&::UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64d3cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "set_wantsInitialStateCheck", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64d3cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW, ::UnityEngine::InputSystem::InputActionType, ::StringW, ::StringW, ::StringW,
                                                                                                         ::StringW)>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x64d3d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64d3e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ToString)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x64d3e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Enable)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x64d4114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Disable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x64d4300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Clone)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x64d44cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64d45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ReadValueAsObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetControlMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetControlMagnitude)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64d4638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetControlMagnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64d4690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64d475c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "IsPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsInProgress)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64d47b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "IsInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ExpectedFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ExpectedFrame)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64d4810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ExpectedFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPressedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPressedThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64d48a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasPressedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasReleasedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasReleasedThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64d4958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasReleasedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPerformedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPerformedThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64d3b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasPerformedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasCompletedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasCompletedThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64d4a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasCompletedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetTimeoutCompletionPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64d4ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetTimeoutCompletionPercentage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_isSingletonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_isSingletonAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d32f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_isSingletonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_currentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState_TriggerState (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::get_currentState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64d37dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_currentState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.MakeSureIdIsInPlace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64d322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "MakeSureIdIsInPlace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GenerateId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64d4bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GenerateId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetOrCreateActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::GetOrCreateActionMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64d3514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetOrCreateActionMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.CreateInternalActionMapForSingletonAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64d4bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "CreateInternalActionMapForSingletonAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.RequestInitialStateCheckOnEnabledAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64d4d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "RequestInitialStateCheckOnEnabledAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ActiveControlIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputAction::ActiveControlIsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64d4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                                                           { "ActiveControlIsValid", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.FindEffectiveBindingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(
    &::UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64d4f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "FindEffectiveBindingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnActionToBindingIndexOnMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x64d4fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "BindingIndexOnActionToBindingIndexOnMap", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnMapToBindingIndexOnAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64d5140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "BindingIndexOnMapToBindingIndexOnAction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::UnityEngine::InputSystem::InputActionType& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::UnityEngine::InputSystem::InputActionType const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Type(::UnityEngine::InputSystem::InputActionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ExpectedControlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpectedControlType;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ExpectedControlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpectedControlType;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ExpectedControlType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExpectedControlType = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Processors;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Processors(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Processors = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Interactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactions;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Interactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactions;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Interactions(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Interactions = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_SingletonActionBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingletonActionBindings;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_SingletonActionBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SingletonActionBindings;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_SingletonActionBindings(::ArrayW<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SingletonActionBindings = value;
}
constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Flags(::UnityEngine::InputSystem::InputAction_ActionFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingMask = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsStartIndex;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingsStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingsStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsCount;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingsCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlStartIndex;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ControlStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ControlCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionIndexInState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionIndexInState;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionIndexInState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionIndexInState;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ActionIndexInState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionIndexInState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMap;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMap;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionMap = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStarted;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStarted;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnStarted(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnStarted = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCanceled;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCanceled;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnCanceled(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnCanceled = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnPerformed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPerformed;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const&
UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnPerformed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPerformed;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnPerformed(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnPerformed = value;
}
inline void UnityEngine::InputSystem::InputAction::setStaticF_k_InputActionEnableProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionEnableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputAction::getStaticF_k_InputActionEnableProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionEnableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>();
}
inline void UnityEngine::InputSystem::InputAction::setStaticF_k_InputActionDisableProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionDisableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputAction::getStaticF_k_InputActionDisableProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionDisableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>();
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionType UnityEngine::InputSystem::InputAction::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionType>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_idDontGenerate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_idDontGenerate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_expectedControlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_expectedControlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_expectedControlType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "set_expectedControlType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_processors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_processors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_interactions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_interactions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::get_actionMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_actionMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_bindingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "set_bindingMask", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_bindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputAction::get_controls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_controls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputAction::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_inProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_inProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::add_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "add_started", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "remove_started", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "add_canceled", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "remove_canceled", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "add_performed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { "remove_performed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputAction::get_triggered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_triggered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputAction::get_activeControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_activeControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::InputAction::get_activeValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_activeValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_wantsInitialStateCheck", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "set_wantsInitialStateCheck", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::_ctor(::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors,
                                                         ::StringW expectedControlType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type, binding, interactions, processors, expectedControlType);
}
inline void UnityEngine::InputSystem::InputAction::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputAction::ReadValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ReadValue", { ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction::ReadValueAsObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ReadValueAsObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputAction::GetControlMagnitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetControlMagnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "IsPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "IsInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction::ExpectedFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ExpectedFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPressedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasPressedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasReleasedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasReleasedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPerformedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasPerformedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasCompletedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "WasCompletedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetTimeoutCompletionPercentage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_isSingletonAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_isSingletonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState_TriggerState UnityEngine::InputSystem::InputAction::get_currentState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "get_currentState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState_TriggerState>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "MakeSureIdIsInPlace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::GenerateId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GenerateId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::GetOrCreateActionMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "GetOrCreateActionMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "CreateInternalActionMapForSingletonAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "RequestInitialStateCheckOnEnabledAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::ActiveControlIsValid(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "ActiveControlIsValid", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, control);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "FindEffectiveBindingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap(int32_t indexOfBindingOnAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "BindingIndexOnActionToBindingIndexOnMap", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexOfBindingOnAction);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction(int32_t indexOfBindingOnMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), { "BindingIndexOnMapToBindingIndexOnAction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexOfBindingOnMap);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputAction*>());
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor(::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding,
                                                                                                ::StringW interactions, ::StringW processors, ::StringW expectedControlType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputAction*>(name, type, binding, interactions, processors, expectedControlType));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr UnityEngine::InputSystem::InputAction::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputAction::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputAction::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputAction::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAction::InputAction() {}

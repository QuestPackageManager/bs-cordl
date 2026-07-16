#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerInput.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInput_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ActionEvent.get_actionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::PlayerInput_ActionEvent::*)()>(&::UnityEngine::InputSystem::PlayerInput_ActionEvent::get_actionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657eee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { "get_actionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ActionEvent.get_actionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::PlayerInput_ActionEvent::*)()>(&::UnityEngine::InputSystem::PlayerInput_ActionEvent::get_actionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657eef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { "get_actionName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ActionEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_ActionEvent::*)()>(&::UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x657eef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ActionEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_ActionEvent::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x657ef44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ActionEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_ActionEvent::*)(::System::Guid, ::StringW)>(
    &::UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x657f110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_get_m_ActionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionId;
}
constexpr ::StringW const& UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_get_m_ActionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionId;
}
constexpr void UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_set_m_ActionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionId = value;
}
constexpr ::StringW& UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_get_m_ActionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionName;
}
constexpr ::StringW const& UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_get_m_ActionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionName;
}
constexpr void UnityEngine::InputSystem::PlayerInput_ActionEvent::__cordl_internal_set_m_ActionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionName = value;
}
inline ::StringW UnityEngine::InputSystem::PlayerInput_ActionEvent::get_actionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { "get_actionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::PlayerInput_ActionEvent::get_actionName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { "get_actionName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::PlayerInput_ActionEvent::_ctor(::System::Guid actionGUID, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(), { ".ctor", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionGUID, name);
}
inline ::UnityEngine::InputSystem::PlayerInput_ActionEvent* UnityEngine::InputSystem::PlayerInput_ActionEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>());
}
inline ::UnityEngine::InputSystem::PlayerInput_ActionEvent* UnityEngine::InputSystem::PlayerInput_ActionEvent::New_ctor(::UnityEngine::InputSystem::InputAction* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(action));
}
inline ::UnityEngine::InputSystem::PlayerInput_ActionEvent* UnityEngine::InputSystem::PlayerInput_ActionEvent::New_ctor(::System::Guid actionGUID, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>(actionGUID, name));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInput_ActionEvent::PlayerInput_ActionEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent::*)()>(&::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6578ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::PlayerInput_DeviceLostEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* UnityEngine::InputSystem::PlayerInput_DeviceLostEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent::PlayerInput_DeviceLostEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent::*)()>(&::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6578e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent::PlayerInput_DeviceRegainedEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent::*)()>(
    &::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6578f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent::PlayerInput_ControlsChangedEvent() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_inputIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_inputIsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_inputIsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_playerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_playerIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_playerIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_splitScreenIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_splitScreenIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_splitScreenIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_actions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6577328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_actions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputActionAsset*)>(
    &::UnityEngine::InputSystem::PlayerInput::set_actions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6577910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_currentControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_currentControlScheme)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65787a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_currentControlScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_defaultControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_defaultControlScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65789d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_defaultControlScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_defaultControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::StringW)>(&::UnityEngine::InputSystem::PlayerInput::set_defaultControlScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65789e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_defaultControlScheme", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_neverAutoSwitchControlSchemes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_neverAutoSwitchControlSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65789e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_neverAutoSwitchControlSchemes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_neverAutoSwitchControlSchemes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(bool)>(&::UnityEngine::InputSystem::PlayerInput::set_neverAutoSwitchControlSchemes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65789f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_neverAutoSwitchControlSchemes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_currentActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_currentActionMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6578bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_currentActionMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_currentActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::PlayerInput::set_currentActionMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6578be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "set_currentActionMap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_defaultActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_defaultActionMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6578c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_defaultActionMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_defaultActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::StringW)>(&::UnityEngine::InputSystem::PlayerInput::set_defaultActionMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6578c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_defaultActionMap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_notificationBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerNotifications (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_notificationBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6578c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_notificationBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_notificationBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::PlayerNotifications)>(
    &::UnityEngine::InputSystem::PlayerInput::set_notificationBehavior)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6578c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "set_notificationBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerNotifications>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_actionEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> (
    ::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_actionEvents)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6578ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_actionEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_actionEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>)>(&::UnityEngine::InputSystem::PlayerInput::set_actionEvents)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6578cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                            { "set_actionEvents", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_deviceLostEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_deviceLostEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6578d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_deviceLostEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_deviceRegainedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_deviceRegainedEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6578e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_deviceRegainedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_controlsChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_controlsChangedEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6578ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_controlsChangedEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.add_onActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::PlayerInput::add_onActionTriggered)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6578f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "add_onActionTriggered", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.remove_onActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(
    &::UnityEngine::InputSystem::PlayerInput::remove_onActionTriggered)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6579030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "remove_onActionTriggered", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.add_onDeviceLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::add_onDeviceLost)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65790d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "add_onDeviceLost", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.remove_onDeviceLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::remove_onDeviceLost)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6579180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "remove_onDeviceLost", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.add_onDeviceRegained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::add_onDeviceRegained)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6579228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "add_onDeviceRegained", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.remove_onDeviceRegained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::remove_onDeviceRegained)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65792d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "remove_onDeviceRegained", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.add_onControlsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::add_onControlsChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6579378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "add_onControlsChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.remove_onControlsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*)>(
    &::UnityEngine::InputSystem::PlayerInput::remove_onControlsChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6579420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "remove_onControlsChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65794c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::Camera*)>(&::UnityEngine::InputSystem::PlayerInput::set_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65794d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_uiInputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_uiInputModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65794d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_uiInputModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.set_uiInputModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::UI::InputSystemUIInputModule*)>(
    &::UnityEngine::InputSystem::PlayerInput::set_uiInputModule)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x65794e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "set_uiInputModule", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_user
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Users::InputUser (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_user)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_user", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_devices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::PlayerInput::*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_devices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6579644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_devices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_hasMissingRequiredDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6579774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_hasMissingRequiredDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> (*)()>(
    &::UnityEngine::InputSystem::PlayerInput::get_all)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65798a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_all", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.get_isSinglePlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::PlayerInput::get_isSinglePlayer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x657991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_isSinglePlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.ActivateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::ActivateInput)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65786e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "ActivateInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.UpdateDelegates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::UpdateDelegates)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6579a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UpdateDelegates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.DeactivateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::DeactivateInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x657a3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "DeactivateInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.PassivateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::PassivateInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x657a3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "PassivateInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.SwitchCurrentControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>)>(
    &::UnityEngine::InputSystem::PlayerInput::SwitchCurrentControlScheme)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x657a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "SwitchCurrentControlScheme", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.SwitchCurrentControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::StringW, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>)>(
    &::UnityEngine::InputSystem::PlayerInput::SwitchCurrentControlScheme)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x657aad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                { "SwitchCurrentControlScheme", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.SwitchCurrentActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::StringW)>(&::UnityEngine::InputSystem::PlayerInput::SwitchCurrentActionMap)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6579c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "SwitchCurrentActionMap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.GetPlayerByIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (*)(int32_t)>(&::UnityEngine::InputSystem::PlayerInput::GetPlayerByIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x657ad00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "GetPlayerByIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.FindFirstPairedToDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::PlayerInput::FindFirstPairedToDevice)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x657ae00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "FindFirstPairedToDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (*)(
    ::UnityEngine::GameObject*, int32_t, ::StringW, int32_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::PlayerInput::Instantiate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x657af70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "Instantiate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (*)(
    ::UnityEngine::GameObject*, int32_t, ::StringW, int32_t, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>)>(&::UnityEngine::InputSystem::PlayerInput::Instantiate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x657b3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "Instantiate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.DoInstantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::PlayerInput> (*)(::UnityEngine::GameObject*)>(&::UnityEngine::InputSystem::PlayerInput::DoInstantiate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x657b0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "DoInstantiate", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.InitializeActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::InitializeActions)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x657736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "InitializeActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.UninitializeActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::UninitializeActions)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6577a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UninitializeActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.InstallOnActionTriggeredHook
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::InstallOnActionTriggeredHook)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6579ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "InstallOnActionTriggeredHook", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.UninstallOnActionTriggeredHook
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::UninstallOnActionTriggeredHook)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x657b574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UninstallOnActionTriggeredHook", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::PlayerInput::OnActionTriggered)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x657b6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "OnActionTriggered", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.CacheMessageNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::CacheMessageNames)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x6579fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "CacheMessageNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.ClearCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::ClearCaches)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6577c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "ClearCaches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.AssignUserAndDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::AssignUserAndDevices)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x6577cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "AssignUserAndDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.HaveBindingForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::PlayerInput::HaveBindingForDevice)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x657c0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HaveBindingForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.UnassignUserAndDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::UnassignUserAndDevices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x657c58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UnassignUserAndDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.TryToActivateControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputControlScheme)>(
    &::UnityEngine::InputSystem::PlayerInput::TryToActivateControlScheme)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x657bdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "TryToActivateControlScheme", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.AssignPlayerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::AssignPlayerIndex)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x657ca2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "AssignPlayerIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::OnEnable)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x657cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.StartListeningForUnpairedDeviceActivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::StartListeningForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6578a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StartListeningForUnpairedDeviceActivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.StopListeningForUnpairedDeviceActivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::StopListeningForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6578b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StopListeningForUnpairedDeviceActivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.StartListeningForDeviceChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::StartListeningForDeviceChanges)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x657d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StartListeningForDeviceChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.StopListeningForDeviceChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::StopListeningForDeviceChanges)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x657d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StopListeningForDeviceChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::OnDisable)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x657da60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.DebugLogAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::PlayerInput::DebugLogAction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x657df6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                           { "DebugLogAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.HandleDeviceLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::HandleDeviceLost)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x657dfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleDeviceLost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.HandleDeviceRegained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::HandleDeviceRegained)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x657e11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleDeviceRegained", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.HandleControlsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::HandleControlsChanged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x657d24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleControlsChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnUserChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange,
                                                                ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::PlayerInput::OnUserChange)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x657e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                             { "OnUserChange",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserChange>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnPreFilterUnpairedDeviceUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::PlayerInput::OnPreFilterUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x657e41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
            { "OnPreFilterUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnUnpairedDeviceUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::PlayerInput::OnUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x657e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                            { "OnUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.OnDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(
    &::UnityEngine::InputSystem::PlayerInput::OnDeviceChange)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x657ec20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                         { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput.SwitchControlSchemeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)(
    ::by_ref<::UnityEngine::InputSystem::InputControlScheme>, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>)>(&::UnityEngine::InputSystem::PlayerInput::SwitchControlSchemeInternal)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x657a5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                         { "SwitchControlSchemeInternal",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::PlayerInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::PlayerInput::*)()>(&::UnityEngine::InputSystem::PlayerInput::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x657ee88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_AllMapsHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllMapsHashCode;
}
constexpr int32_t const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_AllMapsHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllMapsHashCode;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_AllMapsHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllMapsHashCode = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Actions;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_Actions(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Actions = value;
}
constexpr ::UnityEngine::InputSystem::PlayerNotifications& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_NotificationBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NotificationBehavior;
}
constexpr ::UnityEngine::InputSystem::PlayerNotifications const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_NotificationBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NotificationBehavior;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NotificationBehavior = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule>& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_UIInputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIInputModule;
}
constexpr ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_UIInputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIInputModule;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_UIInputModule(::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIInputModule = value;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceLostEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceLostEvent;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceLostEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceLostEvent;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DeviceLostEvent(::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceLostEvent = value;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceRegainedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceRegainedEvent;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceRegainedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceRegainedEvent;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DeviceRegainedEvent(::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceRegainedEvent = value;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ControlsChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsChangedEvent;
}
constexpr ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ControlsChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsChangedEvent;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ControlsChangedEvent(::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlsChangedEvent = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionEvents;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionEvents;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ActionEvents(::ArrayW<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionEvents = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_NeverAutoSwitchControlSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeverAutoSwitchControlSchemes;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_NeverAutoSwitchControlSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeverAutoSwitchControlSchemes;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_NeverAutoSwitchControlSchemes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeverAutoSwitchControlSchemes = value;
}
constexpr ::StringW& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DefaultControlScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultControlScheme;
}
constexpr ::StringW const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DefaultControlScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultControlScheme;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DefaultControlScheme(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultControlScheme = value;
}
constexpr ::StringW& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DefaultActionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultActionMap;
}
constexpr ::StringW const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DefaultActionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultActionMap;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DefaultActionMap(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultActionMap = value;
}
constexpr int32_t& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_SplitScreenIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreenIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_SplitScreenIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SplitScreenIndex;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_SplitScreenIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SplitScreenIndex = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Camera = value;
}
constexpr ::UnityEngine::InputSystem::InputValue*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputValueObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputValueObject;
}
constexpr ::UnityEngine::InputSystem::InputValue* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputValueObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputValueObject;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_InputValueObject(::UnityEngine::InputSystem::InputValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputValueObject = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_CurrentActionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentActionMap;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_CurrentActionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentActionMap;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_CurrentActionMap(::UnityEngine::InputSystem::InputActionMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentActionMap = value;
}
constexpr int32_t& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_PlayerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_PlayerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerIndex;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_PlayerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerIndex = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActive;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActive;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_InputActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActive = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_Enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_Enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enabled = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionsInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsInitialized;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionsInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsInitialized;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ActionsInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionsInitialized = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionMessageNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMessageNames;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionMessageNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMessageNames;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ActionMessageNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionMessageNames = value;
}
constexpr ::UnityEngine::InputSystem::Users::InputUser& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputUser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputUser;
}
constexpr ::UnityEngine::InputSystem::Users::InputUser const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_InputUser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputUser;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_InputUser(::UnityEngine::InputSystem::Users::InputUser value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputUser = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionTriggeredDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionTriggeredDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionTriggeredDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionTriggeredDelegate;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionTriggeredDelegate = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceLostCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceLostCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceLostCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceLostCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DeviceLostCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceLostCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceRegainedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceRegainedCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceRegainedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceRegainedCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DeviceRegainedCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceRegainedCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ControlsChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsChangedCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ControlsChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlsChangedCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ControlsChangedCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlsChangedCallbacks = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionTriggeredCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionTriggeredCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_ActionTriggeredCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionTriggeredCallbacks;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_ActionTriggeredCallbacks(
    ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionTriggeredCallbacks = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_UnpairedDeviceUsedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegate;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_UnpairedDeviceUsedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnpairedDeviceUsedDelegate;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_UnpairedDeviceUsedDelegate(
    ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnpairedDeviceUsedDelegate = value;
}
constexpr ::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_PreFilterUnpairedDeviceUsedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreFilterUnpairedDeviceUsedDelegate;
}
constexpr ::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_PreFilterUnpairedDeviceUsedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreFilterUnpairedDeviceUsedDelegate;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_PreFilterUnpairedDeviceUsedDelegate(
    ::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreFilterUnpairedDeviceUsedDelegate = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_OnUnpairedDeviceUsedHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUnpairedDeviceUsedHooked;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_OnUnpairedDeviceUsedHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUnpairedDeviceUsedHooked;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_OnUnpairedDeviceUsedHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnUnpairedDeviceUsedHooked = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceChangeDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceChangeDelegate;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* const&
UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_DeviceChangeDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceChangeDelegate;
}
constexpr void
UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_DeviceChangeDelegate(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceChangeDelegate = value;
}
constexpr bool& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_OnDeviceChangeHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeviceChangeHooked;
}
constexpr bool const& UnityEngine::InputSystem::PlayerInput::__cordl_internal_get_m_OnDeviceChangeHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnDeviceChangeHooked;
}
constexpr void UnityEngine::InputSystem::PlayerInput::__cordl_internal_set_m_OnDeviceChangeHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnDeviceChangeHooked = value;
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_AllActivePlayersCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_AllActivePlayersCount", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::PlayerInput::getStaticF_s_AllActivePlayersCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_AllActivePlayersCount", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_AllActivePlayers(::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>>, "s_AllActivePlayers", ::UnityEngine::InputSystem::PlayerInput*>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>> UnityEngine::InputSystem::PlayerInput::getStaticF_s_AllActivePlayers() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>>, "s_AllActivePlayers", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_UserChangeDelegate(
    ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*,
                                    "s_UserChangeDelegate", ::UnityEngine::InputSystem::PlayerInput*>(
      std::forward<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*>(value));
}
inline ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*
UnityEngine::InputSystem::PlayerInput::getStaticF_s_UserChangeDelegate() {
  return ::cordl_internals::getStaticField<
      ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*, "s_UserChangeDelegate",
      ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_InitPairWithDevicesCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InitPairWithDevicesCount", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::PlayerInput::getStaticF_s_InitPairWithDevicesCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_InitPairWithDevicesCount", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_InitPairWithDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::InputDevice*>, "s_InitPairWithDevices", ::UnityEngine::InputSystem::PlayerInput*>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::PlayerInput::getStaticF_s_InitPairWithDevices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::InputDevice*>, "s_InitPairWithDevices", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_InitPlayerIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InitPlayerIndex", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::PlayerInput::getStaticF_s_InitPlayerIndex() {
  return ::cordl_internals::getStaticField<int32_t, "s_InitPlayerIndex", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_InitSplitScreenIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InitSplitScreenIndex", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::PlayerInput::getStaticF_s_InitSplitScreenIndex() {
  return ::cordl_internals::getStaticField<int32_t, "s_InitSplitScreenIndex", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_InitControlScheme(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_InitControlScheme", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::InputSystem::PlayerInput::getStaticF_s_InitControlScheme() {
  return ::cordl_internals::getStaticField<::StringW, "s_InitControlScheme", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline void UnityEngine::InputSystem::PlayerInput::setStaticF_s_DestroyIfDeviceSetupUnsuccessful(bool value) {
  ::cordl_internals::setStaticField<bool, "s_DestroyIfDeviceSetupUnsuccessful", ::UnityEngine::InputSystem::PlayerInput*>(std::forward<bool>(value));
}
inline bool UnityEngine::InputSystem::PlayerInput::getStaticF_s_DestroyIfDeviceSetupUnsuccessful() {
  return ::cordl_internals::getStaticField<bool, "s_DestroyIfDeviceSetupUnsuccessful", ::UnityEngine::InputSystem::PlayerInput*>();
}
inline bool UnityEngine::InputSystem::PlayerInput::get_inputIsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_inputIsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::PlayerInput::get_playerIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_playerIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::PlayerInput::get_splitScreenIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_splitScreenIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::PlayerInput::get_actions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_actions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_actions(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::PlayerInput::get_currentControlScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_currentControlScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::PlayerInput::get_defaultControlScheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_defaultControlScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_defaultControlScheme(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_defaultControlScheme", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::PlayerInput::get_neverAutoSwitchControlSchemes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_neverAutoSwitchControlSchemes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_neverAutoSwitchControlSchemes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_neverAutoSwitchControlSchemes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::PlayerInput::get_currentActionMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_currentActionMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_currentActionMap(::UnityEngine::InputSystem::InputActionMap* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "set_currentActionMap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::PlayerInput::get_defaultActionMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_defaultActionMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_defaultActionMap(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_defaultActionMap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::PlayerNotifications UnityEngine::InputSystem::PlayerInput::get_notificationBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_notificationBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerNotifications>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "set_notificationBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::PlayerNotifications>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> UnityEngine::InputSystem::PlayerInput::get_actionEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_actionEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_actionEvents(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                          { "set_actionEvents", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::PlayerInput_ActionEvent*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent* UnityEngine::InputSystem::PlayerInput::get_deviceLostEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_deviceLostEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerInput_DeviceLostEvent*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent* UnityEngine::InputSystem::PlayerInput::get_deviceRegainedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_deviceRegainedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerInput_DeviceRegainedEvent*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent* UnityEngine::InputSystem::PlayerInput::get_controlsChangedEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_controlsChangedEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::PlayerInput_ControlsChangedEvent*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::add_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "add_onActionTriggered", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::remove_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "remove_onActionTriggered", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::add_onDeviceLost(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "add_onDeviceLost", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::remove_onDeviceLost(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "remove_onDeviceLost", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::add_onDeviceRegained(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "add_onDeviceRegained", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::remove_onDeviceRegained(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "remove_onDeviceRegained", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::add_onControlsChanged(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "add_onControlsChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::PlayerInput::remove_onControlsChanged(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "remove_onControlsChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::InputSystem::PlayerInput::get_camera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_camera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> UnityEngine::InputSystem::PlayerInput::get_uiInputModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_uiInputModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::set_uiInputModule(::UnityEngine::InputSystem::UI::InputSystemUIInputModule* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "set_uiInputModule", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::PlayerInput::get_user() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_user", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::PlayerInput::get_devices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_devices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::get_hasMissingRequiredDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_hasMissingRequiredDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> UnityEngine::InputSystem::PlayerInput::get_all() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_all", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::get_isSinglePlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "get_isSinglePlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::PlayerInput::GetDevice() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "GetDevice", { ::i2c::class_of<TDevice>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::ActivateInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "ActivateInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::UpdateDelegates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UpdateDelegates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::DeactivateInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "DeactivateInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::PassivateInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "PassivateInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::SwitchCurrentControlScheme(::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "SwitchCurrentControlScheme", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, devices);
}
inline void UnityEngine::InputSystem::PlayerInput::SwitchCurrentControlScheme(::StringW controlScheme, ::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                              { "SwitchCurrentControlScheme", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlScheme, devices);
}
inline void UnityEngine::InputSystem::PlayerInput::SwitchCurrentActionMap(::StringW mapNameOrId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "SwitchCurrentActionMap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapNameOrId);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInput::GetPlayerByIndex(int32_t playerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "GetPlayerByIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(nullptr, ___internal_method, playerIndex);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInput::FindFirstPairedToDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "FindFirstPairedToDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(nullptr, ___internal_method, device);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInput::Instantiate(::UnityEngine::GameObject* prefab, int32_t playerIndex, ::StringW controlScheme,
                                                                                                            int32_t splitScreenIndex, ::UnityEngine::InputSystem::InputDevice* pairWithDevice) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "Instantiate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(nullptr, ___internal_method, prefab, playerIndex, controlScheme, splitScreenIndex, pairWithDevice);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInput::Instantiate(::UnityEngine::GameObject* prefab, int32_t playerIndex, ::StringW controlScheme,
                                                                                                            int32_t splitScreenIndex,
                                                                                                            ::ArrayW<::UnityEngine::InputSystem::InputDevice*> pairWithDevices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "Instantiate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(nullptr, ___internal_method, prefab, playerIndex, controlScheme, splitScreenIndex, pairWithDevices);
}
inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> UnityEngine::InputSystem::PlayerInput::DoInstantiate(::UnityEngine::GameObject* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "DoInstantiate", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::PlayerInput>>(nullptr, ___internal_method, prefab);
}
inline void UnityEngine::InputSystem::PlayerInput::InitializeActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "InitializeActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::UninitializeActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UninitializeActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::InstallOnActionTriggeredHook() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "InstallOnActionTriggeredHook", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::UninstallOnActionTriggeredHook() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UninstallOnActionTriggeredHook", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::OnActionTriggered(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "OnActionTriggered", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::PlayerInput::CacheMessageNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "CacheMessageNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::ClearCaches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "ClearCaches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::AssignUserAndDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "AssignUserAndDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::HaveBindingForDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HaveBindingForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::PlayerInput::UnassignUserAndDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "UnassignUserAndDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::PlayerInput::TryToActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme controlScheme) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "TryToActivateControlScheme", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controlScheme);
}
inline void UnityEngine::InputSystem::PlayerInput::AssignPlayerIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "AssignPlayerIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::StartListeningForUnpairedDeviceActivity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StartListeningForUnpairedDeviceActivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::StopListeningForUnpairedDeviceActivity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StopListeningForUnpairedDeviceActivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::StartListeningForDeviceChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StartListeningForDeviceChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::StopListeningForDeviceChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "StopListeningForDeviceChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::DebugLogAction(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                                                         { "DebugLogAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::PlayerInput::HandleDeviceLost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleDeviceLost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::HandleDeviceRegained() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleDeviceRegained", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::HandleControlsChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "HandleControlsChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::PlayerInput::OnUserChange(::UnityEngine::InputSystem::Users::InputUser user, ::UnityEngine::InputSystem::Users::InputUserChange change,
                                                                ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                                           { "OnUserChange",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserChange>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, user, change, device);
}
inline bool UnityEngine::InputSystem::PlayerInput::OnPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
          { "OnPreFilterUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, eventPtr);
}
inline void UnityEngine::InputSystem::PlayerInput::OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                          { "OnUnpairedDeviceUsed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, eventPtr);
}
inline void UnityEngine::InputSystem::PlayerInput::OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(),
                                       { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::PlayerInput::SwitchControlSchemeInternal(::by_ref<::UnityEngine::InputSystem::InputControlScheme> controlScheme,
                                                                               ::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { "SwitchControlSchemeInternal",
                                                                                                                          {},
                                                                                                                          { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>(),
                                                                                                                            ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlScheme, devices);
}
inline void UnityEngine::InputSystem::PlayerInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::PlayerInput*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::PlayerInput* UnityEngine::InputSystem::PlayerInput::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::PlayerInput*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::PlayerInput::PlayerInput() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRSystemState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.add__onChangeStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(::System::Action_1<::GlobalNamespace::XRSystemEventType>*)>(
    &::GlobalNamespace::UnityXRSystemState::add__onChangeStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f3ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                             { "add__onChangeStateEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.remove__onChangeStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(::System::Action_1<::GlobalNamespace::XRSystemEventType>*)>(
    &::GlobalNamespace::UnityXRSystemState::remove__onChangeStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59f3f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                             { "remove__onChangeStateEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f4050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasInputFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f4058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasVrFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.set_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(bool)>(&::GlobalNamespace::UnityXRSystemState::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f4060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.get_hasHmdMounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::get_hasHmdMounted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f4068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasHmdMounted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.AddListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(
    ::System::Action_1<::GlobalNamespace::XRSystemEventType>*, ::ArrayW<::GlobalNamespace::XRSystemEventType>)>(&::GlobalNamespace::UnityXRSystemState::AddListener)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59f4070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                            { "AddListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::XRSystemEventType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.RemoveListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(::System::Action_1<::GlobalNamespace::XRSystemEventType>*)>(
    &::GlobalNamespace::UnityXRSystemState::RemoveListener)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f41a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                                                           { "RemoveListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59f41a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "RefreshControllersReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59f41c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f4248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(bool)>(&::GlobalNamespace::UnityXRSystemState::OnApplicationPause)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59f4330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.SetInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(bool)>(&::GlobalNamespace::UnityXRSystemState::SetInputFocus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59f4360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "SetInputFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.SetUserPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(bool)>(&::GlobalNamespace::UnityXRSystemState::SetUserPresence)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59f4394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "SetUserPresence", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.UpdateUserPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::UpdateUserPresence)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59f4254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "UpdateUserPresence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.HandleRemovedXRNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)(::UnityEngine::XR::XRNodeState)>(&::GlobalNamespace::UnityXRSystemState::HandleRemovedXRNode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59f43d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "HandleRemovedXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.IsCurrentStateMatchingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRSystemState::*)(::GlobalNamespace::XRSystemEventType)>(
    &::GlobalNamespace::UnityXRSystemState::IsCurrentStateMatchingEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59f410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                                                           { "IsCurrentStateMatchingEvent", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState.InvokeStateChangeEventIfFocusEventsAreEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::XRSystemEventType>*, ::GlobalNamespace::XRSystemEventType)>(
    &::GlobalNamespace::UnityXRSystemState::InvokeStateChangeEventIfFocusEventsAreEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59f4188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                { "InvokeStateChangeEventIfFocusEventsAreEnabled",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRSystemState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRSystemState::*)()>(&::GlobalNamespace::UnityXRSystemState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f4400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::XRSystemEventType>*& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__onChangeStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onChangeStateEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::XRSystemEventType>* const& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__onChangeStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onChangeStateEvent;
}
constexpr void GlobalNamespace::UnityXRSystemState::__cordl_internal_set__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onChangeStateEvent = value;
}
constexpr bool& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__userPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr bool const& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__userPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr void GlobalNamespace::UnityXRSystemState::__cordl_internal_set__userPresence(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userPresence = value;
}
constexpr bool& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__hasInputFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr bool const& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__hasInputFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr void GlobalNamespace::UnityXRSystemState::__cordl_internal_set__hasInputFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInputFocus = value;
}
constexpr bool& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__hasVrFocus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr bool const& GlobalNamespace::UnityXRSystemState::__cordl_internal_get__hasVrFocus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr void GlobalNamespace::UnityXRSystemState::__cordl_internal_set__hasVrFocus_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasVrFocus_k__BackingField = value;
}
inline void GlobalNamespace::UnityXRSystemState::add__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                           { "add__onChangeStateEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRSystemState::remove__onChangeStateEvent(::System::Action_1<::GlobalNamespace::XRSystemEventType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                           { "remove__onChangeStateEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRSystemState::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasInputFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRSystemState::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasVrFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::set_hasVrFocus(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRSystemState::get_hasHmdMounted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "get_hasHmdMounted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::AddListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener, ::ArrayW<::GlobalNamespace::XRSystemEventType> initialStateChecks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                          { "AddListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::XRSystemEventType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, initialStateChecks);
}
inline void GlobalNamespace::UnityXRSystemState::RemoveListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                                                                         { "RemoveListener", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void GlobalNamespace::UnityXRSystemState::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "RefreshControllersReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::UnityXRSystemState::SetInputFocus(bool newInputFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "SetInputFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInputFocus);
}
inline void GlobalNamespace::UnityXRSystemState::SetUserPresence(bool newUserPresence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "SetUserPresence", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newUserPresence);
}
inline void GlobalNamespace::UnityXRSystemState::UpdateUserPresence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "UpdateUserPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRSystemState::HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "HandleRemovedXRNode", {}, { ::i2c::type_of<::UnityEngine::XR::XRNodeState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool GlobalNamespace::UnityXRSystemState::IsCurrentStateMatchingEvent(::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { "IsCurrentStateMatchingEvent", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventType);
}
inline void GlobalNamespace::UnityXRSystemState::InvokeStateChangeEventIfFocusEventsAreEnabled(::System::Action_1<::GlobalNamespace::XRSystemEventType>* action,
                                                                                               ::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(),
                                              { "InvokeStateChangeEventIfFocusEventsAreEnabled",
                                                {},
                                                { ::i2c::type_of<::System::Action_1<::GlobalNamespace::XRSystemEventType>*>(), ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, eventType);
}
inline void GlobalNamespace::UnityXRSystemState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRSystemState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRSystemState* GlobalNamespace::UnityXRSystemState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityXRSystemState*>());
}
/// @brief Convert operator to "::GlobalNamespace::IXRSystemState"
constexpr GlobalNamespace::UnityXRSystemState::operator ::GlobalNamespace::IXRSystemState*() noexcept {
  return static_cast<::GlobalNamespace::IXRSystemState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IXRSystemState"
constexpr ::GlobalNamespace::IXRSystemState* GlobalNamespace::UnityXRSystemState::i___GlobalNamespace__IXRSystemState() noexcept {
  return static_cast<::GlobalNamespace::IXRSystemState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityXRSystemState::UnityXRSystemState() {}

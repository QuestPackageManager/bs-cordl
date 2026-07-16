#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugManager.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerCanvas_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerPersistentCanvas_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugManager_UIMode::DebugManager_UIMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugManager_UIMode::DebugManager_UIMode() {}
constexpr ::UnityEngine::Rendering::DebugManager_UIMode UnityEngine::Rendering::DebugManager_UIMode::EditorMode{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DebugManager_UIMode UnityEngine::Rendering::DebugManager_UIMode::RuntimeMode{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager_UIState.get_open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager_UIState::*)()>(&::UnityEngine::Rendering::DebugManager_UIState::get_open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6761fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { "get_open", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager_UIState.set_open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager_UIState::*)(bool)>(&::UnityEngine::Rendering::DebugManager_UIState::set_open)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67619e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { "set_open", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager_UIState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager_UIState::*)()>(&::UnityEngine::Rendering::DebugManager_UIState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugManager_UIMode& UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::Rendering::DebugManager_UIMode const& UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_set_mode(::UnityEngine::Rendering::DebugManager_UIMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr bool& UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_get_m_Open() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Open;
}
constexpr bool const& UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_get_m_Open() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Open;
}
constexpr void UnityEngine::Rendering::DebugManager_UIState::__cordl_internal_set_m_Open(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Open = value;
}
inline bool UnityEngine::Rendering::DebugManager_UIState::get_open() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { "get_open", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager_UIState::set_open(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { "set_open", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager_UIState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager_UIState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugManager_UIState* UnityEngine::Rendering::DebugManager_UIState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugManager_UIState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugManager_UIState::DebugManager_UIState() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager___c::*)()>(&::UnityEngine::Rendering::DebugManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6762044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c.__ctor_b__49_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager___c::*)(bool)>(&::UnityEngine::Rendering::DebugManager___c::__ctor_b__49_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6762048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.ctor>b__49_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c.__ctor_b__49_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager___c::*)()>(&::UnityEngine::Rendering::DebugManager___c::__ctor_b__49_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.ctor>b__49_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c._TogglePersistent_b__60_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugManager___c::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::DebugManager___c::_TogglePersistent_b__60_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6762050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(),
                                                                                           { "<TogglePersistent>b__60_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c.__cctor_b__95_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugManager* (::UnityEngine::Rendering::DebugManager___c::*)()>(
    &::UnityEngine::Rendering::DebugManager___c::__cctor_b__95_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67620d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.cctor>b__95_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugManager___c::setStaticF___9(::UnityEngine::Rendering::DebugManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DebugManager___c*, "<>9", ::UnityEngine::Rendering::DebugManager___c*>(std::forward<::UnityEngine::Rendering::DebugManager___c*>(value));
}
inline ::UnityEngine::Rendering::DebugManager___c* UnityEngine::Rendering::DebugManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DebugManager___c*, "<>9", ::UnityEngine::Rendering::DebugManager___c*>();
}
inline void UnityEngine::Rendering::DebugManager___c::setStaticF___9__49_0(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__49_0", ::UnityEngine::Rendering::DebugManager___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Rendering::DebugManager___c::getStaticF___9__49_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__49_0", ::UnityEngine::Rendering::DebugManager___c*>();
}
inline void UnityEngine::Rendering::DebugManager___c::setStaticF___9__49_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__49_1", ::UnityEngine::Rendering::DebugManager___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::DebugManager___c::getStaticF___9__49_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__49_1", ::UnityEngine::Rendering::DebugManager___c*>();
}
inline void UnityEngine::Rendering::DebugManager___c::setStaticF___9__60_0(::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>*, "<>9__60_0", ::UnityEngine::Rendering::DebugManager___c*>(
      std::forward<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>* UnityEngine::Rendering::DebugManager___c::getStaticF___9__60_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Rendering::DebugUI_Widget*, int32_t>*, "<>9__60_0", ::UnityEngine::Rendering::DebugManager___c*>();
}
inline void UnityEngine::Rendering::DebugManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager___c::__ctor_b__49_0(bool _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.ctor>b__49_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void UnityEngine::Rendering::DebugManager___c::__ctor_b__49_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.ctor>b__49_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugManager___c::_TogglePersistent_b__60_0(::UnityEngine::Rendering::DebugUI_Widget* w) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(),
                                                                                         { "<TogglePersistent>b__60_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, w);
}
inline ::UnityEngine::Rendering::DebugManager* UnityEngine::Rendering::DebugManager___c::__cctor_b__95_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c*>(), { "<.cctor>b__95_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugManager*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugManager___c* UnityEngine::Rendering::DebugManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugManager___c::DebugManager___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::*)()>(
    &::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6760a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0._FindPanelIndex_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::_FindPanelIndex_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6762124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*>(),
                                                                                           { "<FindPanelIndex>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
inline void UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::_FindPanelIndex_b__0(::UnityEngine::Rendering::DebugUI_Panel* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*>(),
                                                                                         { "<FindPanelIndex>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0* UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugManager___c__DisplayClass67_0::DebugManager___c__DisplayClass67_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RegisterActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::RegisterActions)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x675d768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.EnableInputActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::EnableInputActions)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x675dc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "EnableInputActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.AddAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugAction, ::UnityEngine::Rendering::DebugActionDesc*)>(
    &::UnityEngine::Rendering::DebugManager::AddAction)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x675db58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                { "AddAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugAction>(), ::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.SampleAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(int32_t)>(&::UnityEngine::Rendering::DebugManager::SampleAction)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x675de7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "SampleAction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.UpdateAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(int32_t)>(&::UnityEngine::Rendering::DebugManager::UpdateAction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x675e044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateAction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.UpdateActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::UpdateActions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x675e27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugAction)>(
    &::UnityEngine::Rendering::DebugManager::GetAction)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x675e2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetActionToggleDebugMenuWithTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::GetActionToggleDebugMenuWithTouch)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x675e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetActionToggleDebugMenuWithTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetActionReleaseScrollTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::GetActionReleaseScrollTarget)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x675e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetActionReleaseScrollTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RegisterInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::RegisterInputs)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x675e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterInputs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugManager* (*)()>(&::UnityEngine::Rendering::DebugManager::get_instance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x675687c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.UpdateReadOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::UpdateReadOnlyCollection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x675f130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateReadOnlyCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_panels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* (
    ::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_panels)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x675f1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_panels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.add_onDisplayRuntimeUIChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action_1<bool>*)>(
    &::UnityEngine::Rendering::DebugManager::add_onDisplayRuntimeUIChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x675f1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_onDisplayRuntimeUIChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.remove_onDisplayRuntimeUIChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action_1<bool>*)>(
    &::UnityEngine::Rendering::DebugManager::remove_onDisplayRuntimeUIChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x675f2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_onDisplayRuntimeUIChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.add_onSetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action*)>(&::UnityEngine::Rendering::DebugManager::add_onSetDirty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x675f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_onSetDirty", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.remove_onSetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action*)>(&::UnityEngine::Rendering::DebugManager::remove_onSetDirty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x675f41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_onSetDirty", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.add_resetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action*)>(&::UnityEngine::Rendering::DebugManager::add_resetData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x675f4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_resetData", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.remove_resetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::System::Action*)>(&::UnityEngine::Rendering::DebugManager::remove_resetData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x675f574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_resetData", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_isAnyDebugUIActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_isAnyDebugUIActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x675f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_isAnyDebugUIActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x675f760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RefreshEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::RefreshEditor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6756924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RefreshEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::Reset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x675f9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.ReDrawOnScreenDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::ReDrawOnScreenDebug)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x675ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "ReDrawOnScreenDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RegisterData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::IDebugData*)>(
    &::UnityEngine::Rendering::DebugManager::RegisterData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6756934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterData", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.UnregisterData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::IDebugData*)>(
    &::UnityEngine::Rendering::DebugManager::UnregisterData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6756bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UnregisterData", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::GetState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x675f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RegisterRootCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*)>(
    &::UnityEngine::Rendering::DebugManager::RegisterRootCanvas)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x675fb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                                                           { "RegisterRootCanvas", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.ChangeSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, bool)>(
    &::UnityEngine::Rendering::DebugManager::ChangeSelection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x675fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                             { "ChangeSelection", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.SetScrollTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::DebugManager::SetScrollTarget)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x675fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                                                           { "SetScrollTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.EnsurePersistentCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::EnsurePersistentCanvas)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x675fc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "EnsurePersistentCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.TogglePersistent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugUI_Widget*, ::System::Nullable_1<int32_t>)>(
    &::UnityEngine::Rendering::DebugManager::TogglePersistent)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x675fe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                { "TogglePersistent", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.OnPanelDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugManager::OnPanelDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6760358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "OnPanelDirty", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.PanelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugManager::*)(::StringW)>(&::UnityEngine::Rendering::DebugManager::PanelIndex)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6760378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "PanelIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.PanelDiplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugManager::*)(int32_t)>(&::UnityEngine::Rendering::DebugManager::PanelDiplayName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x676044c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "PanelDiplayName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RequestEditorWindowPanelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(int32_t)>(&::UnityEngine::Rendering::DebugManager::RequestEditorWindowPanelIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67604f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RequestEditorWindowPanelIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetRequestedEditorWindowPanelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::UnityEngine::Rendering::DebugManager::*)()>(
    &::UnityEngine::Rendering::DebugManager::GetRequestedEditorWindowPanelIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6760550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetRequestedEditorWindowPanelIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Panel* (::UnityEngine::Rendering::DebugManager::*)(::StringW, bool, int32_t, bool)>(
    &::UnityEngine::Rendering::DebugManager::GetPanel)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x67569ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                             { "GetPanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.FindPanelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugManager::*)(::StringW)>(&::UnityEngine::Rendering::DebugManager::FindPanelIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6760950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "FindPanelIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RemovePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::StringW)>(&::UnityEngine::Rendering::DebugManager::RemovePanel)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6760a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RemovePanel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.RemovePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::DebugManager::RemovePanel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6760620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RemovePanel", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> (::UnityEngine::Rendering::DebugManager::*)(::UnityEngine::Rendering::DebugUI_Flags)>(
    &::UnityEngine::Rendering::DebugManager::GetItems)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6760bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetItems", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetItemsFromContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> (::UnityEngine::Rendering::DebugManager::*)(
    ::UnityEngine::Rendering::DebugUI_Flags, ::UnityEngine::Rendering::DebugUI_IContainer*)>(&::UnityEngine::Rendering::DebugManager::GetItemsFromContainer)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x6760e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                            { "GetItemsFromContainer", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::UnityEngine::Rendering::DebugManager::*)(::StringW)>(
    &::UnityEngine::Rendering::DebugManager::GetItem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6761350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetItem", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.GetItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::UnityEngine::Rendering::DebugManager::*)(::StringW, ::UnityEngine::Rendering::DebugUI_IContainer*)>(
    &::UnityEngine::Rendering::DebugManager::GetItem)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6761464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                             { "GetItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.add_windowStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*)>(
    &::UnityEngine::Rendering::DebugManager::add_windowStateChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67617a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                             { "add_windowStateChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.remove_windowStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*)>(
    &::UnityEngine::Rendering::DebugManager::remove_windowStateChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67618a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                             { "remove_windowStateChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_displayEditorUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_displayEditorUI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67619b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayEditorUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.set_displayEditorUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(bool)>(&::UnityEngine::Rendering::DebugManager::set_displayEditorUI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67619c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayEditorUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_enableRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_enableRuntimeUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6761a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_enableRuntimeUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.set_enableRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(bool)>(&::UnityEngine::Rendering::DebugManager::set_enableRuntimeUI)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6761a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_enableRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_displayRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_displayRuntimeUI)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x675f648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayRuntimeUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.set_displayRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(bool)>(&::UnityEngine::Rendering::DebugManager::set_displayRuntimeUI)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6761abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.get_displayPersistentRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugManager::*)()>(&::UnityEngine::Rendering::DebugManager::get_displayPersistentRuntimeUI)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x675f6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayPersistentRuntimeUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.set_displayPersistentRuntimeUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(bool)>(&::UnityEngine::Rendering::DebugManager::set_displayPersistentRuntimeUI)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6761e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayPersistentRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugManager.ToggleEditorUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugManager::*)(bool)>(&::UnityEngine::Rendering::DebugManager::ToggleEditorUI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6761ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "ToggleEditorUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_DebugActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActions;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionDesc*> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_DebugActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActions;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_DebugActions(::ArrayW<::UnityEngine::Rendering::DebugActionDesc*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugActions = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_DebugActionStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActionStates;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DebugActionState*> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_DebugActionStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugActionStates;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_DebugActionStates(::ArrayW<::UnityEngine::Rendering::DebugActionState*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugActionStates = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_debugActionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugActionMap;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_debugActionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugActionMap;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_debugActionMap(::UnityEngine::InputSystem::InputActionMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugActionMap = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_ReadOnlyPanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnlyPanels;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* const&
UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_ReadOnlyPanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnlyPanels;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_ReadOnlyPanels(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadOnlyPanels = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_Panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panels;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_Panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panels;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panels = value;
}
constexpr ::System::Action_1<bool>*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_onDisplayRuntimeUIChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisplayRuntimeUIChanged;
}
constexpr ::System::Action_1<bool>* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_onDisplayRuntimeUIChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisplayRuntimeUIChanged;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onDisplayRuntimeUIChanged = value;
}
constexpr ::System::Action*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_onSetDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr ::System::Action* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_onSetDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_onSetDirty(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onSetDirty = value;
}
constexpr ::System::Action*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_resetData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetData;
}
constexpr ::System::Action* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_resetData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetData;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_resetData(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetData = value;
}
constexpr bool& UnityEngine::Rendering::DebugManager::__cordl_internal_get_refreshEditorRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshEditorRequested;
}
constexpr bool const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_refreshEditorRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshEditorRequested;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_refreshEditorRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refreshEditorRequested = value;
}
constexpr ::System::Nullable_1<int32_t>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RequestedPanelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedPanelIndex;
}
constexpr ::System::Nullable_1<int32_t> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RequestedPanelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedPanelIndex;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_RequestedPanelIndex(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestedPanelIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_Root(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Root = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RootUICanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootUICanvas;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RootUICanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootUICanvas;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_RootUICanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootUICanvas = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_PersistentRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PersistentRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_PersistentRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PersistentRoot;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_PersistentRoot(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PersistentRoot = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas>& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RootUIPersistentCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootUIPersistentCanvas;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_RootUIPersistentCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootUIPersistentCanvas;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_RootUIPersistentCanvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootUIPersistentCanvas = value;
}
constexpr ::UnityEngine::Rendering::DebugManager_UIState*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_editorUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorUIState;
}
constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_editorUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorUIState;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_editorUIState(::UnityEngine::Rendering::DebugManager_UIState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorUIState = value;
}
constexpr bool& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_EnableRuntimeUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRuntimeUI;
}
constexpr bool const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_m_EnableRuntimeUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRuntimeUI;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_m_EnableRuntimeUI(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableRuntimeUI = value;
}
constexpr ::UnityEngine::Rendering::DebugManager_UIState*& UnityEngine::Rendering::DebugManager::__cordl_internal_get_runtimeUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtimeUIState;
}
constexpr ::UnityEngine::Rendering::DebugManager_UIState* const& UnityEngine::Rendering::DebugManager::__cordl_internal_get_runtimeUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtimeUIState;
}
constexpr void UnityEngine::Rendering::DebugManager::__cordl_internal_set_runtimeUIState(::UnityEngine::Rendering::DebugManager_UIState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___runtimeUIState = value;
}
inline void UnityEngine::Rendering::DebugManager::setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>*, "s_Instance", ::UnityEngine::Rendering::DebugManager*>(
      std::forward<::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>*>(value));
}
inline ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>* UnityEngine::Rendering::DebugManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>*, "s_Instance", ::UnityEngine::Rendering::DebugManager*>();
}
inline void UnityEngine::Rendering::DebugManager::setStaticF_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*, "windowStateChanged", ::UnityEngine::Rendering::DebugManager*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* UnityEngine::Rendering::DebugManager::getStaticF_windowStateChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*, "windowStateChanged", ::UnityEngine::Rendering::DebugManager*>();
}
inline void UnityEngine::Rendering::DebugManager::RegisterActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::EnableInputActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "EnableInputActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::AddAction(::UnityEngine::Rendering::DebugAction action, ::UnityEngine::Rendering::DebugActionDesc* desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                              { "AddAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugAction>(), ::i2c::type_of<::UnityEngine::Rendering::DebugActionDesc*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, desc);
}
inline void UnityEngine::Rendering::DebugManager::SampleAction(int32_t actionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "SampleAction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex);
}
inline void UnityEngine::Rendering::DebugManager::UpdateAction(int32_t actionIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateAction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex);
}
inline void UnityEngine::Rendering::DebugManager::UpdateActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::DebugManager::GetAction(::UnityEngine::Rendering::DebugAction action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugAction>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, action);
}
inline bool UnityEngine::Rendering::DebugManager::GetActionToggleDebugMenuWithTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetActionToggleDebugMenuWithTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugManager::GetActionReleaseScrollTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetActionReleaseScrollTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::RegisterInputs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterInputs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugManager* UnityEngine::Rendering::DebugManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::UpdateReadOnlyCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UpdateReadOnlyCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>* UnityEngine::Rendering::DebugManager::get_panels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_panels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::DebugUI_Panel*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::add_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_onDisplayRuntimeUIChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::remove_onDisplayRuntimeUIChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_onDisplayRuntimeUIChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::add_onSetDirty(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_onSetDirty", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::remove_onSetDirty(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_onSetDirty", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::add_resetData(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "add_resetData", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::remove_resetData(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "remove_resetData", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugManager::get_isAnyDebugUIActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_isAnyDebugUIActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::RefreshEditor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RefreshEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::ReDrawOnScreenDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "ReDrawOnScreenDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::RegisterData(::UnityEngine::Rendering::IDebugData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RegisterData", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::DebugManager::UnregisterData(::UnityEngine::Rendering::IDebugData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "UnregisterData", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline int32_t UnityEngine::Rendering::DebugManager::GetState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* root) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                                                         { "RegisterRootCanvas", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void UnityEngine::Rendering::DebugManager::ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                           { "ChangeSelection", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget, fromNext);
}
inline void UnityEngine::Rendering::DebugManager::SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                                                         { "SetScrollTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::DebugManager::EnsurePersistentCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "EnsurePersistentCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::TogglePersistent(::UnityEngine::Rendering::DebugUI_Widget* widget, ::System::Nullable_1<int32_t> forceTupleIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                              { "TogglePersistent", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget, forceTupleIndex);
}
inline void UnityEngine::Rendering::DebugManager::OnPanelDirty(::UnityEngine::Rendering::DebugUI_Panel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "OnPanelDirty", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline int32_t UnityEngine::Rendering::DebugManager::PanelIndex(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "PanelIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, displayName);
}
inline ::StringW UnityEngine::Rendering::DebugManager::PanelDiplayName(int32_t panelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "PanelDiplayName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, panelIndex);
}
inline void UnityEngine::Rendering::DebugManager::RequestEditorWindowPanelIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RequestEditorWindowPanelIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Nullable_1<int32_t> UnityEngine::Rendering::DebugManager::GetRequestedEditorWindowPanelIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetRequestedEditorWindowPanelIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Panel* UnityEngine::Rendering::DebugManager::GetPanel(::StringW displayName, bool createIfNull, int32_t groupIndex, bool overrideIfExist) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                           { "GetPanel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Panel*>(this, ___internal_method, displayName, createIfNull, groupIndex, overrideIfExist);
}
inline int32_t UnityEngine::Rendering::DebugManager::FindPanelIndex(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "FindPanelIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, displayName);
}
inline void UnityEngine::Rendering::DebugManager::RemovePanel(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RemovePanel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline void UnityEngine::Rendering::DebugManager::RemovePanel(::UnityEngine::Rendering::DebugUI_Panel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "RemovePanel", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> UnityEngine::Rendering::DebugManager::GetItems(::UnityEngine::Rendering::DebugUI_Flags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetItems", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>>(this, ___internal_method, flags);
}
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> UnityEngine::Rendering::DebugManager::GetItemsFromContainer(::UnityEngine::Rendering::DebugUI_Flags flags,
                                                                                                                       ::UnityEngine::Rendering::DebugUI_IContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                          { "GetItemsFromContainer", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Flags>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>>(this, ___internal_method, flags, container);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugManager::GetItem(::StringW queryPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "GetItem", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method, queryPath);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::DebugManager::GetItem(::StringW queryPath, ::UnityEngine::Rendering::DebugUI_IContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                           { "GetItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::DebugUI_IContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method, queryPath, container);
}
inline void UnityEngine::Rendering::DebugManager::add_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                           { "add_windowStateChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::remove_windowStateChanged(::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(),
                                                           { "remove_windowStateChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::DebugManager_UIMode, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugManager::get_displayEditorUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayEditorUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::set_displayEditorUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayEditorUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugManager::get_enableRuntimeUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_enableRuntimeUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::set_enableRuntimeUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_enableRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugManager::get_displayRuntimeUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayRuntimeUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::set_displayRuntimeUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::DebugManager::get_displayPersistentRuntimeUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "get_displayPersistentRuntimeUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugManager::set_displayPersistentRuntimeUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "set_displayPersistentRuntimeUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugManager::ToggleEditorUI(bool open) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugManager*>(), { "ToggleEditorUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, open);
}
inline ::UnityEngine::Rendering::DebugManager* UnityEngine::Rendering::DebugManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugManager::DebugManager() {}

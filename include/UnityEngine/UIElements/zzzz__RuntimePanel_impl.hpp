#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimePanel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimePanel___c::*)()>(&::UnityEngine::UIElements::RuntimePanel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6daad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel___c.__ctor_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimePanel___c::*)(::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*)>(
    &::UnityEngine::UIElements::RuntimePanel___c::__ctor_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6daad94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel___c*>(),
                                                { "<.ctor>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RuntimePanel___c::setStaticF___9(::UnityEngine::UIElements::RuntimePanel___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::RuntimePanel___c*, "<>9", ::UnityEngine::UIElements::RuntimePanel___c*>(
      std::forward<::UnityEngine::UIElements::RuntimePanel___c*>(value));
}
inline ::UnityEngine::UIElements::RuntimePanel___c* UnityEngine::UIElements::RuntimePanel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::RuntimePanel___c*, "<>9", ::UnityEngine::UIElements::RuntimePanel___c*>();
}
inline void
UnityEngine::UIElements::RuntimePanel___c::setStaticF___9__5_0(::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>*, "<>9__5_0",
                                    ::UnityEngine::UIElements::RuntimePanel___c*>(
      std::forward<::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>*>(value));
}
inline ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>* UnityEngine::UIElements::RuntimePanel___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::FocusEvent*, ::UnityEngine::UIElements::RuntimePanel*>*, "<>9__5_0",
                                           ::UnityEngine::UIElements::RuntimePanel___c*>();
}
inline void UnityEngine::UIElements::RuntimePanel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RuntimePanel___c::__ctor_b__5_0(::UnityEngine::UIElements::FocusEvent* e, ::UnityEngine::UIElements::RuntimePanel* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel___c*>(),
                                              { "<.ctor>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::RuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, p);
}
inline ::UnityEngine::UIElements::RuntimePanel___c* UnityEngine::UIElements::RuntimePanel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RuntimePanel___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimePanel___c::RuntimePanel___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.get_panelSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::PanelSettings> (::UnityEngine::UIElements::RuntimePanel::*)()>(
    &::UnityEngine::UIElements::RuntimePanel::get_panelSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6daa6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "get_panelSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RuntimePanel* (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::UIElements::RuntimePanel::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6daa6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::UIElements::RuntimePanel::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6daa704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)()>(&::UnityEngine::UIElements::RuntimePanel::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6daaaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.OnElementFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)(::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::RuntimePanel::OnElementFocus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6daac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "OnElementFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& UnityEngine::UIElements::RuntimePanel::__cordl_internal_get_m_PanelSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& UnityEngine::UIElements::RuntimePanel::__cordl_internal_get_m_PanelSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr void UnityEngine::UIElements::RuntimePanel::__cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PanelSettings = value;
}
inline void UnityEngine::UIElements::RuntimePanel::setStaticF_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventDispatcher*, "s_EventDispatcher", ::UnityEngine::UIElements::RuntimePanel*>(
      std::forward<::UnityEngine::UIElements::EventDispatcher*>(value));
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::RuntimePanel::getStaticF_s_EventDispatcher() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventDispatcher*, "s_EventDispatcher", ::UnityEngine::UIElements::RuntimePanel*>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelSettings> UnityEngine::UIElements::RuntimePanel::get_panelSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "get_panelSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelSettings>>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::RuntimePanel::Create(::UnityEngine::ScriptableObject* ownerObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel*>(nullptr, ___internal_method, ownerObject);
}
inline void UnityEngine::UIElements::RuntimePanel::_ctor(::UnityEngine::ScriptableObject* ownerObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownerObject);
}
inline void UnityEngine::UIElements::RuntimePanel::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RuntimePanel::OnElementFocus(::UnityEngine::UIElements::FocusEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuntimePanel*>(), { "OnElementFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::RuntimePanel::New_ctor(::UnityEngine::ScriptableObject* ownerObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RuntimePanel*>(ownerObject));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanel"
constexpr UnityEngine::UIElements::RuntimePanel::operator ::UnityEngine::UIElements::IRuntimePanel*() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IRuntimePanel"
constexpr ::UnityEngine::UIElements::IRuntimePanel* UnityEngine::UIElements::RuntimePanel::i___UnityEngine__UIElements__IRuntimePanel() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
constexpr UnityEngine::UIElements::RuntimePanel::operator ::UnityEngine::UIElements::IPanel*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPanel"
constexpr ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::RuntimePanel::i___UnityEngine__UIElements__IPanel() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::RuntimePanel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::RuntimePanel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimePanel::RuntimePanel() {}

#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/DebugBar.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugBar_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::Setup)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5a4b2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar.RegisterPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::RegisterPanel)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5a4b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                                                           { "RegisterPanel", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar.RegisterControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)(
    ::StringW, ::UnityEngine::Texture2D*, ::System::Action*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::RegisterControl)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5a4b998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                { "RegisterControl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar.OnPanelVisibilityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::OnPanelVisibilityChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a4bbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                             { "OnPanelVisibilityChanged", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a4bc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a4bdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>*&
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_set__panels(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____panels = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>*&
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__panelToggles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panelToggles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>,
                                                       ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__panelToggles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panelToggles;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_set__panelToggles(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel>, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____panelToggles = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__buttonsAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__buttonsAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonsAnchor = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__miniButtonsAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____miniButtonsAnchor;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__miniButtonsAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____miniButtonsAnchor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_set__miniButtonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____miniButtonsAnchor = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::__cordl_internal_set__time(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::RegisterPanel(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                                                         { "RegisterPanel", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>
Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                              { "RegisterControl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>(this, ___internal_method, buttonName, icon, callback);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::OnPanelVisibilityChanged(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(),
                                                           { "OnPanelVisibilityChanged", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar* Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::DebugBar::DebugBar() {}

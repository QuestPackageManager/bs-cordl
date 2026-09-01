#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\DebugPanel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithIcon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel.get_Icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::get_Icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "get_Icon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel.set_Icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)(::UnityEngine::Texture2D*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::set_Icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "set_Icon", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel.get_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::get_Title)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a4f48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "get_Title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel.set_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::set_Title)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a4ef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::Setup)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5a4a4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4c924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____title = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon>& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__closeIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeIcon;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__closeIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeIcon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_set__closeIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeIcon = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__Icon_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Icon_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_get__Icon_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Icon_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::__cordl_internal_set__Icon_k__BackingField(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Icon_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Texture2D> Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::get_Icon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "get_Icon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::set_Icon(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "set_Icon", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::get_Title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "get_Title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::set_Title(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel* Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel::DebugPanel() {}

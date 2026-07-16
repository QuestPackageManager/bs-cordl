#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Member.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Member_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionHook_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__GizmoHook_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__TweakEnum_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Tweak_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__WatchTexture_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonForAction_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Slider_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Switch_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__TextArea_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ToggleForGizmo_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Values_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.get_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::get_Title)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a51e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "get_Title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.set_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::StringW)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::set_Title)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a4e6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.get_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::get_Description)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a5207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "get_Description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.set_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::set_Description)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_Description", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.set_PillColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::set_PillColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4e904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_PillColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.set_PillStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::set_PillStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a52098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                             { "set_PillStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::Setup)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5a52134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterDescriptor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a4e730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "RegisterDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a52518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.GetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::ActionHook* (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::GetAction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a5258c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::ActionHook*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterAction)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5a52610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterAction", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.GetGizmo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::GetGizmo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a5288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetGizmo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterGizmo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterGizmo)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5a52910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterGizmo", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.GetWatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Watch* (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::GetWatch)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a52af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetWatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterWatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::Watch*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterWatch)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a52b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterWatch", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterEnum)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a53028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterEnum", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterTexture)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a53108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterTexture", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.GetTweak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Tweak* (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::GetTweak)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a531fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetTweak", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.RegisterTweak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::Tweak*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterTweak)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a53280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "RegisterTweak", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.AddToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::Tweak*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::AddToggle)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5a53558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "AddToggle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member.AddSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)(::Meta::XR::ImmersiveDebugger::Manager::Tweak*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Member::AddSlider)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a533a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                           { "AddSlider", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a537e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Member._AddToggle_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Member::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Member::_AddToggle_b__37_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a537f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "<AddToggle>b__37_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____title = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____description;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__description(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____description = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__flex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__flex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flex = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__valueFlex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueFlex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__valueFlex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueFlex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__valueFlex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueFlex = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__verticalFlex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalFlex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__verticalFlex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalFlex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__verticalFlex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalFlex = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__values(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__action(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____action = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__slider(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slider = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__switch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switch;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__switch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switch;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__switch(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____switch = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__gizmo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmo;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__gizmo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmo;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__gizmo(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gizmo = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__pill() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pill;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__pill() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pill;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__pill(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pill = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__pillBackgroundStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pillBackgroundStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__pillBackgroundStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pillBackgroundStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__pillBackgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pillBackgroundStyle = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__defaultPillColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPillColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__defaultPillColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPillColor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__defaultPillColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPillColor = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__transparentPillColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentPillColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_get__transparentPillColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentPillColor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Member::__cordl_internal_set__transparentPillColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transparentPillColor = value;
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Member::get_Title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "get_Title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::set_Title(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Member::get_Description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "get_Description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::set_Description(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_Description", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::set_PillColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "set_PillColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::set_PillStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                           { "set_PillStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterDescriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "RegisterDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* Meta::XR::ImmersiveDebugger::UserInterface::Member::GetAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterAction(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterAction", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::ActionHook*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* Meta::XR::ImmersiveDebugger::UserInterface::Member::GetGizmo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetGizmo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterGizmo(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* gizmo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterGizmo", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmo);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* Meta::XR::ImmersiveDebugger::UserInterface::Member::GetWatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetWatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterWatch(::Meta::XR::ImmersiveDebugger::Manager::Watch* watch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterWatch", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, watch);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterEnum(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* tweak) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterEnum", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterTexture(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* watchTexture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterTexture", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, watchTexture);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* Meta::XR::ImmersiveDebugger::UserInterface::Member::GetTweak() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "GetTweak", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::RegisterTweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "RegisterTweak", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::AddToggle(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "AddToggle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::AddSlider(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(),
                                                                                         { "AddSlider", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Tweak*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Member::_AddToggle_b__37_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>(), { "<AddToggle>b__37_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Member* Meta::XR::ImmersiveDebugger::UserInterface::Member::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Member*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IMember"
constexpr Meta::XR::ImmersiveDebugger::UserInterface::Member::operator ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IMember"
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* Meta::XR::ImmersiveDebugger::UserInterface::Member::i___Meta__XR__ImmersiveDebugger__UserInterface__IMember() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Member::Member() {}

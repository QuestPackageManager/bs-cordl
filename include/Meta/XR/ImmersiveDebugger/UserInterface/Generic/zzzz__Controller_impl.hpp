#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Controller.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_Owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Owner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_Owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                             { "set_Owner", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                           { "set_Transform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_RectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_RectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_RectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_RectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::UnityEngine::RectTransform*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_RectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                           { "set_RectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_GameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_GameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_GameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::UnityEngine::GameObject*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                           { "set_GameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_Children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_LayoutStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_LayoutStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_LayoutStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_LayoutStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_LayoutStyle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a493e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                             { "set_LayoutStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.add_OnVisibilityChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*)>(
        &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::add_OnVisibilityChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a4dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                            { "add_OnVisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.remove_OnVisibilityChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*)>(
        &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::remove_OnVisibilityChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a582c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                            { "remove_OnVisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_Transparent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Transparent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Transparent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_Transparent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Transparent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a4e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "set_Transparent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a4d33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Setup)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a4fa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Append)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a58390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                             { "Append", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*, bool)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Remove)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a53108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                             { "Remove", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a58480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.get_Visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Visibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a58520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Visibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.set_Visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Visibility)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a58528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "set_Visibility", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Hide)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a4c5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Show)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4c5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Show", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.ToggleVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::ToggleVisibility)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a4f20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "ToggleVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.OnVisibilityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnVisibilityChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a58544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "OnVisibilityChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.GetVec2FromLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextAnchor)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::GetVec2FromLayout)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a5858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                           { "GetVec2FromLayout", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.UpdateRefreshLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::UpdateRefreshLayout)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a58150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "UpdateRefreshLayout", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.RefreshLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayout)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a4c5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "RefreshLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.RefreshLayoutPreChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayoutPreChildren)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5a585c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.RefreshLayoutPostChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayoutPostChildren)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a588c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a58a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.SetHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::SetHeight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a4c584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "SetHeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller.SetWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::SetWidth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a58af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "SetWidth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a510ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__visibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibility;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__visibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibility;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__visibility(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visibility = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__refreshLayoutRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshLayoutRequested;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__refreshLayoutRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshLayoutRequested;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__refreshLayoutRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshLayoutRequested = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__hasRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRectTransform;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__hasRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRectTransform;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__hasRectTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRectTransform = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__layoutStyleHasChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutStyleHasChanged;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__layoutStyleHasChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutStyleHasChanged;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__layoutStyleHasChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutStyleHasChanged = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__layoutStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__layoutStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__layoutStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutStyle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__children(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__Owner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Owner_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__Owner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Owner_k__BackingField;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__Owner_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Owner_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__Transform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__Transform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Transform_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__RectTransform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RectTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__RectTransform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RectTransform_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__RectTransform_k__BackingField(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RectTransform_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__GameObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameObject_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__GameObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameObject_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__GameObject_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GameObject_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__mask(::UnityW<::UnityEngine::UI::RectMask2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
constexpr ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get_OnVisibilityChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnVisibilityChangedEvent;
}
constexpr ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get_OnVisibilityChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnVisibilityChangedEvent;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set_OnVisibilityChangedEvent(
    ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnVisibilityChangedEvent = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__transparent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparent;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_get__transparent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparent;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::__cordl_internal_set__transparent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transparent = value;
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Owner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Owner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Owner(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                           { "set_Owner", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Transform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Transform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                         { "set_Transform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_RectTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_RectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_RectTransform(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                         { "set_RectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_GameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_GameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_GameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                         { "set_GameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Children() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_LayoutStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_LayoutStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_LayoutStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                           { "set_LayoutStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::add_OnVisibilityChangedEvent(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                          { "add_OnVisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::remove_OnVisibilityChangedEvent(
    ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                          { "remove_OnVisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Transparent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Transparent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Transparent(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "set_Transparent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnTransparencyChanged() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Append(::StringW childName) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, childName);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Prepend(::StringW childName) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                              { "Prepend", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, childName);
}
template <typename T>
inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::InsertAfter(::StringW childName, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* previous) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                          { "InsertAfter", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, childName, previous);
}
template <typename T>
inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::InsertBefore(::StringW childName, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* next) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                          { "InsertBefore", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, childName, next);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::SetupChildController(::StringW childName) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                              { "SetupChildController", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, childName);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Append(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                         { "Append", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Remove(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller, bool destroy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                           { "Remove", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, destroy);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Clear(bool destroy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroy);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::get_Visibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "get_Visibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::set_Visibility(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "set_Visibility", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Show() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "Show", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::ToggleVisibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "ToggleVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnVisibilityChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "OnVisibilityChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::GetVec2FromLayout(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(),
                                                                                         { "GetVec2FromLayout", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, anchor);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::UpdateRefreshLayout(bool force) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "UpdateRefreshLayout", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "RefreshLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayoutPreChildren() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::RefreshLayoutPostChildren() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::SetHeight(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "SetHeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, height);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::SetWidth(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { "SetWidth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller::Controller() {}

#pragma once
#include "UnityEngine/InputSystem/zzzz__Mouse_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__FastMouse_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DeltaControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(&::UnityEngine::InputSystem::FastMouse::_ctor)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x2a9f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseposition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseposition)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2aa0148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseposition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedelta)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2aa02e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedelta", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescroll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::DeltaControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescroll)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2aa0464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescroll", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepress)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa05d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepress", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseleftButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseleftButton)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2aa0788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseleftButton", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouserightButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouserightButton)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2aa096c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouserightButton", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousemiddleButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousemiddleButton)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2aa0b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousemiddleButton", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseforwardButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseforwardButton)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2aa0d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseforwardButton", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousebackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousebackButton)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2aa0ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousebackButton", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepressure)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2aa1080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepressure", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradius)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2aa121c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradius", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepointerId)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2aa139c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepointerId", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseclickCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseclickCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2aa14f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseclickCount", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepositionx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositionx)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa1668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepositionx", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousepositiony
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositiony)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa1818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepositiony", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa19c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltadown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltadown)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aa1b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltadown", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaleft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaleft)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aa1d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaleft", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltaright
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaright)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa1ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaright", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltax)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aa2090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltax", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousedeltay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltay)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aa221c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltay", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa23a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrolldown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolldown)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aa2558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrolldown", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollleft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollleft)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aa270c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollleft", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollright
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollright)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2aa28c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollright", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrollx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollx)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2aa2a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollx", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMousescrolly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolly)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2aa2c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrolly", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradiusx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusx)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aa2db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradiusx", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.Initialize_ctrlMouseradiusy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (
    ::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aa2f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradiusy", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.OnNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(&::UnityEngine::InputSystem::FastMouse::OnNextUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2aa30cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "OnNextUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.OnStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::OnStateEvent)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aa3210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "OnStateEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)()>(
    &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa339c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(),
                                                 "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa33a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.MergeForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::FastMouse::MergeForward)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2aa33a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "MergeForward", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::FastMouse.UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::InputSystem::FastMouse::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aa3510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                                    std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr UnityEngine::InputSystem::FastMouse::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr UnityEngine::InputSystem::FastMouse::operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
inline ::UnityEngine::InputSystem::FastMouse* UnityEngine::InputSystem::FastMouse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::FastMouse*>());
}
inline void UnityEngine::InputSystem::FastMouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseposition", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*, false>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedelta", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*, false>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::DeltaControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescroll(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescroll", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::DeltaControl*, false>(this, ___internal_method, kDeltaLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepress(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepress", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseleftButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseleftButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouserightButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouserightButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousemiddleButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousemiddleButton", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseforwardButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseforwardButton", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousebackButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousebackButton", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method, kButtonLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepressure", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradius", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*, false>(this, ___internal_method, kVector2Layout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepointerId(::UnityEngine::InputSystem::Utilities::InternedString kDigitalLayout,
                                                                                                                                ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepointerId", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*, false>(this, ___internal_method, kDigitalLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseclickCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseclickCount", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*, false>(this, ___internal_method, kIntegerLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepositionx", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousepositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousepositiony", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltadown", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                             ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaleft", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltaright", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltax", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousedeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousedeltay", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                            ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolldown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrolldown", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                              ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollleft", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                               ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollright", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrollx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrollx", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMousescrolly(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMousescrolly", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradiusx", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::FastMouse::Initialize_ctrlMouseradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                           ::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "Initialize_ctrlMouseradiusy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*, false>(this, ___internal_method, kAxisLayout, parent);
}
inline void UnityEngine::InputSystem::FastMouse::OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "OnNextUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::FastMouse::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "OnStateEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::FastMouse::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "MergeForward", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentEventPtr, nextEventPtr);
}
inline bool UnityEngine::InputSystem::FastMouse::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::FastMouse*>::get(), "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::FastMouse::FastMouse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

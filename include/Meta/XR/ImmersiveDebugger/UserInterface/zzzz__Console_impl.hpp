#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Console.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Console_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithIcon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyFlex_2_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ScrollView_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Console_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__LogEntry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__SeverityEntry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5835c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0._RemoveLogEntry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::_RemoveLogEntry_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5836990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*>::get(), "<RemoveLogEntry>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::__cordl_internal_get_logEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logEntry;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::__cordl_internal_get_logEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logEntry;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::__cordl_internal_set_logEntry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logEntry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::_RemoveLogEntry_b__0(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*>::get(), "<RemoveLogEntry>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0* Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Console___c__DisplayClass47_0::Console___c__DisplayClass47_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.get_Dirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::get_Dirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "get_Dirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.set_Dirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::set_Dirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5833524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_Dirty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.GetSeverity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(::UnityEngine::LogType)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::GetSeverity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x583352c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "GetSeverity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.get_LogCollapseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::get_LogCollapseMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58335a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "get_LogCollapseMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.set_LogCollapseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::set_LogCollapseMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58335b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_LogCollapseMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.get_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::get_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58335b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "get_MaximumNumberOfLogEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.set_MaximumNumberOfLogEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::set_MaximumNumberOfLogEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58335c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_MaximumNumberOfLogEntries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.set_LogDetailBackgroundStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::set_LogDetailBackgroundStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58335c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_LogDetailBackgroundStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::Setup)> {
  constexpr static std::size_t size = 0xe8c;
  constexpr static std::size_t addrs = 0x5833664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::OnEnable)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5834c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::OnDisable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5834e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5834f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.RegisterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::RegisterCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5834ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "RegisterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.RegisterControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(::StringW, ::UnityEngine::Texture2D*, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*, ::System::Action*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::RegisterControl)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x583483c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "RegisterControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.ToggleCollapseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::ToggleCollapseMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58350f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "ToggleCollapseMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.EnqueueLogEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::EnqueueLogEntry)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5835648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "EnqueueLogEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.RemoveLogEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::RemoveLogEntry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5835a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "RemoveLogEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5835c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::Clear)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5836070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.RefreshAllEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::RefreshAllEntries)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5835d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "RefreshAllEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.MergeEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::MergeEntries)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5835160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "MergeEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.ResetLogCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::ResetLogCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5836344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "ResetLogCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.FlattenEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::FlattenEntries)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5835454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "FlattenEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.AppendToProxyFlex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::AppendToProxyFlex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5835c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "AppendToProxyFlex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.OnConsoleLineClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::OnConsoleLineClicked)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5836444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "OnConsoleLineClicked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.ShowLogDetailsPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::ShowLogDetailsPanel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5836544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "ShowLogDetailsPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.HideLogDetailsPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::HideLogDetailsPanel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5834c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               "HideLogDetailsPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.ComputeLogHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::ComputeLogHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5835964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "ComputeLogHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console.SetPanelPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)(
    ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, bool)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Console::SetPanelPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5836654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "SetPanelPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Console._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Console::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Console::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5836798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__Dirty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__Dirty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__Dirty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Dirty_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__scrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__scrollViewLogDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewLogDetails;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__scrollViewLogDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewLogDetails;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__scrollViewLogDetails(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollViewLogDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                             ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>*&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__proxyFlex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyFlex;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                             ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__proxyFlex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyFlex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__proxyFlex(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>,
                                                                       ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxyFlex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__flex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__flex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__buttonsAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__buttonsAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsAnchor;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonsAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>*&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__severities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____severities;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__severities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____severities;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__severities(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____severities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>*&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__severitiesPerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____severitiesPerType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__severitiesPerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____severitiesPerType;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__severitiesPerType(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____severitiesPerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__entries(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__allEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEntries;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__allEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEntries;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__allEntries(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__entryMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__entryMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryMap;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__entryMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entryMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailLabel;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailLabel;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__logDetailLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logDetailLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseBtn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseBtn;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseBtn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseBtn;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__collapseBtn(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collapseBtn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseActiveIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseActiveIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseActiveIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseActiveIcon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__collapseActiveIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collapseActiveIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseInactiveIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseInactiveIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__collapseInactiveIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collapseInactiveIcon;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__collapseInactiveIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collapseInactiveIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneCloseBtn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneCloseBtn;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneCloseBtn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneCloseBtn;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__logDetailPaneCloseBtn(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logDetailPaneCloseBtn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__currentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__targetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__targetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__targetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetPosition = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__lerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpSpeed;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__lerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpSpeed;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__lerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lerpSpeed = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__lerpCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpCompleted;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__lerpCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lerpCompleted;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__lerpCompleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lerpCompleted = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneBackground;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneBackground;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__logDetailPaneBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logDetailPaneBackground)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneBackgroundImageStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneBackgroundImageStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__logDetailPaneBackgroundImageStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logDetailPaneBackgroundImageStyle;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__logDetailPaneBackgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logDetailPaneBackgroundImageStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__LogCollapseMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogCollapseMode_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__LogCollapseMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LogCollapseMode_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__LogCollapseMode_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LogCollapseMode_k__BackingField = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__MaximumNumberOfLogEntries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumNumberOfLogEntries_k__BackingField;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_get__MaximumNumberOfLogEntries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumNumberOfLogEntries_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Console::__cordl_internal_set__MaximumNumberOfLogEntries_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaximumNumberOfLogEntries_k__BackingField = value;
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Console::get_Dirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "get_Dirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::set_Dirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_Dirty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* Meta::XR::ImmersiveDebugger::UserInterface::Console::GetSeverity(::UnityEngine::LogType logType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "GetSeverity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*, false>(this, ___internal_method, logType);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Console::get_LogCollapseMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "get_LogCollapseMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::set_LogCollapseMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_LogCollapseMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Console::get_MaximumNumberOfLogEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "get_MaximumNumberOfLogEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::set_MaximumNumberOfLogEntries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_MaximumNumberOfLogEntries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::set_LogDetailBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "set_LogDetailBackgroundStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> Meta::XR::ImmersiveDebugger::UserInterface::Console::RegisterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "RegisterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>, false>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>
Meta::XR::ImmersiveDebugger::UserInterface::Console::RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* style,
                                                                     ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "RegisterControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>, false>(this, ___internal_method, buttonName, icon, style, callback);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::ToggleCollapseMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "ToggleCollapseMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::EnqueueLogEntry(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "EnqueueLogEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logString, stackTrace, type);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::RemoveLogEntry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* logEntry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "RemoveLogEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logEntry);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::RefreshAllEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "RefreshAllEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::MergeEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "MergeEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::ResetLogCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "ResetLogCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::FlattenEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "FlattenEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::AppendToProxyFlex(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "AppendToProxyFlex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::OnConsoleLineClicked(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "OnConsoleLineClicked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::ShowLogDetailsPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "ShowLogDetailsPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::HideLogDetailsPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             "HideLogDetailsPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Console::ComputeLogHash(::StringW content, ::StringW stackTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "ComputeLogHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, content, stackTrace);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::SetPanelPosition(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption distanceOption, bool skipAnimation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(), "SetPanelPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distanceOption, skipAnimation);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Console::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Console* Meta::XR::ImmersiveDebugger::UserInterface::Console::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Console*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Console::Console() {}

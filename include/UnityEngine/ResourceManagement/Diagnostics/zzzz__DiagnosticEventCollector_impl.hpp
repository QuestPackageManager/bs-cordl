#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEventCollector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEventCollector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector.get_PlayerConnectionGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(
    &::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::get_PlayerConnectionGuid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x47a3e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(),
                                                 "get_PlayerConnectionGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector.FindOrCreateGlobalInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> (*)()>(
    &::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::FindOrCreateGlobalInstance)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x47a3e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(),
                                                 "FindOrCreateGlobalInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector.RegisterEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, bool, bool)>(
    &::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::RegisterEventHandler)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47a3fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "RegisterEventHandler",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector.UnregisterEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::*)(
    ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::UnregisterEventHandler)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x47a3fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "UnregisterEventHandler",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector.PostEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::*)(
    ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::PostEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x47a4024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "PostEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::*)()>(
    &::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a40a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::setStaticF_s_Collector(::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector>, "s_Collector",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get>(
      std::forward<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector>>(value));
}
inline ::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::getStaticF_s_Collector() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector>, "s_Collector",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get>();
}
inline ::System::Guid UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::get_PlayerConnectionGuid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(),
                                               "get_PlayerConnectionGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::FindOrCreateGlobalInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(),
                                               "FindOrCreateGlobalInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector>, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler,
                                                                                                         bool _cordl_register, bool create) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "RegisterEventHandler",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handler, _cordl_register, create);
}
inline void
UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "UnregisterEventHandler",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), "PostEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, diagnosticEvent);
}
inline void UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::DiagnosticEventCollector() {}

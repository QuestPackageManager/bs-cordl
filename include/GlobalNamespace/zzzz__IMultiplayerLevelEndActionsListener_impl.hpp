#pragma once
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerLevelEndActionsListener.ReportPlayerNetworkDidFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IMultiplayerLevelEndActionsListener::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(), 1));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void GlobalNamespace::IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}

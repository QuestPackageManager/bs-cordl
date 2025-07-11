#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugConsoleExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleExtensionMethods_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugConsoleExtensionMethods.ToConsoleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DebugConsoleController_ConsoleMessage (*)(::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::DebugConsoleExtensionMethods::ToConsoleMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b09cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleExtensionMethods*>::get(), "ToConsoleMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GlobalNamespace::DebugConsoleExtensionMethods::ToConsoleMessage(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DebugConsoleExtensionMethods*>::get(), "ToConsoleMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DebugConsoleController_ConsoleMessage, false>(nullptr, ___internal_method, message, type);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugConsoleExtensionMethods::DebugConsoleExtensionMethods() {}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DisposeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DisposeHelper_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DisposeHelper.NotifyDisposedUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IDisposable*)>(&::UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6bbdae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DisposeHelper*>::get(), "NotifyDisposedUsed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed(::System::IDisposable* disposable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DisposeHelper*>::get(), "NotifyDisposedUsed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disposable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DisposeHelper::DisposeHelper() {}

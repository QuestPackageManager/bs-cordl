#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SubsystemBindings_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemBindings.DestroySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::SubsystemBindings::DestroySubsystem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3471b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemBindings*>::get(), "DestroySubsystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SubsystemBindings::DestroySubsystem(void* nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemBindings*>::get(), "DestroySubsystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemBindings::SubsystemBindings() {}

#pragma once
// IWYU pragma private; include "UnityEngine/Internal_SubsystemDescriptors.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Internal_SubsystemDescriptors_def.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal_SubsystemDescriptors.Internal_AddDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SubsystemDescriptor*)>(
    &::UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x491b470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal_SubsystemDescriptors*>::get(), "Internal_AddDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SubsystemDescriptor*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal_SubsystemDescriptors*>::get(), "Internal_AddDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SubsystemDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor);
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal_SubsystemDescriptors::Internal_SubsystemDescriptors() {}

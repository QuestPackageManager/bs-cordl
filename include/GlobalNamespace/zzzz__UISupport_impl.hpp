#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UISupport_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UISupport.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::UISupport::Initialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b1e95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UISupport*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UISupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UISupport*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UISupport::UISupport() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

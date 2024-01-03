#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DoesNotRequireDomainReloadInitAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::*)()>(
    &::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2101030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute* GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>());
}
inline void GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute::DoesNotRequireDomainReloadInitAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

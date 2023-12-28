#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz___PrivateImplementationDetails__def.hpp"
//  Writing Method size for method: ::GlobalNamespace::_PrivateImplementationDetails_.ComputeStringHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::GlobalNamespace::_PrivateImplementationDetails_::ComputeStringHash)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28027a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get(), "ComputeStringHash",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::_PrivateImplementationDetails_::ComputeStringHash(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get(), "ComputeStringHash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::_PrivateImplementationDetails_::_PrivateImplementationDetails_() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz___PrivateImplementationDetails__def.hpp"
//  Writing Method size for method: ::GlobalNamespace::_PrivateImplementationDetails_.ComputeStringHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::GlobalNamespace::_PrivateImplementationDetails_::ComputeStringHash)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27fb430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get(), "ComputeStringHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::_PrivateImplementationDetails_::setStaticF_532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::_PrivateImplementationDetails_::getStaticF_532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25() {
  return ::cordl_internals::getStaticField<int32_t, "532EAABD9574880DBF76B9B8CC00832C20A6EC113D682299550D7A6E0F345E25",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get>();
}
inline uint32_t GlobalNamespace::_PrivateImplementationDetails_::ComputeStringHash(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::_PrivateImplementationDetails_*>::get(), "ComputeStringHash",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::_PrivateImplementationDetails_::_PrivateImplementationDetails_() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

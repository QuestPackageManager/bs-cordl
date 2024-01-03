#pragma once
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__UrlBase64Encoder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x115f750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder* Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>());
}
inline void Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::UrlBase64Encoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

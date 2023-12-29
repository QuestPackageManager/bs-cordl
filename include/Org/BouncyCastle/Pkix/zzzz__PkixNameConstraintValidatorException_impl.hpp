#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidatorException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::*)(::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1099d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException* Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>(msg));
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::PkixNameConstraintValidatorException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

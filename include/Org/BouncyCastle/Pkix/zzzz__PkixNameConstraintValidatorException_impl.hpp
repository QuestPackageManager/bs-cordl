#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixNameConstraintValidatorException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidatorException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::*)(::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2588cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException* Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>(msg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::PkixNameConstraintValidatorException() {}

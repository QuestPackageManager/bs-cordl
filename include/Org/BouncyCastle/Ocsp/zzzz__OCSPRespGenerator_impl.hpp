#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OCSPRespGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OCSPRespGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspResp_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OCSPRespGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::OcspResp* (::Org::BouncyCastle::Ocsp::OCSPRespGenerator::*)(int32_t, ::System::Object*)>(
    &::Org::BouncyCastle::Ocsp::OCSPRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x347c678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OCSPRespGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OCSPRespGenerator::*)()>(&::Org::BouncyCastle::Ocsp::OCSPRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x347c968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Ocsp::OcspResp* Org::BouncyCastle::Ocsp::OCSPRespGenerator::Generate(int32_t status, ::System::Object* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspResp*, false>(this, ___internal_method, status, response);
}
inline void Org::BouncyCastle::Ocsp::OCSPRespGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OCSPRespGenerator* Org::BouncyCastle::Ocsp::OCSPRespGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::OCSPRespGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OCSPRespGenerator::OCSPRespGenerator() {}

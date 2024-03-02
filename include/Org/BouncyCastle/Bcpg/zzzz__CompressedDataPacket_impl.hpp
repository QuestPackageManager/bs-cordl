#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressedDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::CompressedDataPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::CompressedDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::CompressedDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x123f8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::CompressedDataPacket.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag (::Org::BouncyCastle::Bcpg::CompressedDataPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::CompressedDataPacket::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1241274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket*>::get(),
                                                                               "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& Org::BouncyCastle::Bcpg::CompressedDataPacket::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& Org::BouncyCastle::Bcpg::CompressedDataPacket::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Bcpg::CompressedDataPacket::__cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
inline ::Org::BouncyCastle::Bcpg::CompressedDataPacket* Org::BouncyCastle::Bcpg::CompressedDataPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::CompressedDataPacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::CompressedDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::CompressedDataPacket::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket*>::get(),
                                                                             "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::CompressedDataPacket::CompressedDataPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

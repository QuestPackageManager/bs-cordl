#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressedDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x10a52ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::get_Algorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10a53cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                               "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::GetInputStream)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10a53e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                               "GetInputStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData.GetDataStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::GetDataStream)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x10a5404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                               "GetDataStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::CompressedDataPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::CompressedDataPacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::__set_data(::Org::BouncyCastle::Bcpg::CompressedDataPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>(bcpgInput));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgInput);
}
inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                             "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::GetInputStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                             "GetInputStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::GetDataStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*>::get(),
                                                                             "GetDataStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData::PgpCompressedData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

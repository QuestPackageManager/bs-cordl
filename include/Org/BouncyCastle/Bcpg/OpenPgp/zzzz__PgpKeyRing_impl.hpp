#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpKeyRing.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3583cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadOptionalTrustPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::TrustPacket* (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadOptionalTrustPacket)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3583d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                                                           { "ReadOptionalTrustPacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadSignaturesAndTrust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadSignaturesAndTrust)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3583da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                                                           { "ReadSignaturesAndTrust", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadUserIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*, ::by_ref<::System::Collections::IList*>, ::by_ref<::System::Collections::IList*>,
                                                                ::by_ref<::System::Collections::IList*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadUserIDs)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x358406c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                             { "ReadUserIDs",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), ::i2c::type_of<::by_ref<::System::Collections::IList*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::IList*>>(), ::i2c::type_of<::by_ref<::System::Collections::IList*>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::TrustPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadOptionalTrustPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                                                         { "ReadOptionalTrustPacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::TrustPacket*>(nullptr, ___internal_method, bcpgInput);
}
inline ::System::Collections::IList* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadSignaturesAndTrust(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                                                         { "ReadSignaturesAndTrust", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, bcpgInput);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadUserIDs(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput, ::by_ref<::System::Collections::IList*> ids,
                                                                      ::by_ref<::System::Collections::IList*> idTrusts, ::by_ref<::System::Collections::IList*> idSigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>(),
                                                           { "ReadUserIDs",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), ::i2c::type_of<::by_ref<::System::Collections::IList*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::IList*>>(), ::i2c::type_of<::by_ref<::System::Collections::IList*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bcpgInput, ids, idTrusts, idSigs);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::PgpKeyRing() {}

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixAttrCertPathBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixAttrCertPathBuilder_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)(::Org::BouncyCastle::Pkix::PkixBuilderParameters*)>(&::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xdf0;
  constexpr static std::size_t addrs = 0x35ba3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                           ::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x35bc168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(),
                                                             { "Build",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)()>(&::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35bd6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_get_certPathException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr ::System::Exception* const& Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_get_certPathException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr void Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_set_certPathException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPathException = value;
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(this, ___internal_method, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                                                                     ::Org::BouncyCastle::X509::X509Certificate* tbvCert,
                                                                                                                     ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams,
                                                                                                                     ::System::Collections::IList* tbvPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(),
                                                           { "Build",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(this, ___internal_method, attrCert, tbvCert, pkixParams, tbvPath);
}
inline void Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::PkixAttrCertPathBuilder() {}

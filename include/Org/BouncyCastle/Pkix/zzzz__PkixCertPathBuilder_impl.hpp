#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilder_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)(::Org::BouncyCastle::Pkix::PkixBuilderParameters*)>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x35c4298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x35c4ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilder::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35c5668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Org::BouncyCastle::Pkix::PkixCertPathBuilder::__cordl_internal_get_certPathException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr ::System::Exception* const& Org::BouncyCastle::Pkix::PkixCertPathBuilder::__cordl_internal_get_certPathException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilder::__cordl_internal_set_certPathException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPathException = value;
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(this, ___internal_method, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilder::Build(::Org::BouncyCastle::X509::X509Certificate* tbvCert,
                                                                                                                 ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams,
                                                                                                                 ::System::Collections::IList* tbvPath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(this, ___internal_method, tbvCert, pkixParams, tbvPath);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilder* Org::BouncyCastle::Pkix::PkixCertPathBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathBuilder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathBuilder::PkixCertPathBuilder() {}

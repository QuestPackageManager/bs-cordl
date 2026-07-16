#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/NoSuchStoreException.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreException_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__NoSuchStoreException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::NoSuchStoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::NoSuchStoreException::*)()>(&::Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::NoSuchStoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::NoSuchStoreException::*)(::StringW)>(&::Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::NoSuchStoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::NoSuchStoreException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::X509::Store::NoSuchStoreException::_ctor(::StringW message, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, e);
}
inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* Org::BouncyCastle::X509::Store::NoSuchStoreException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>());
}
inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* Org::BouncyCastle::X509::Store::NoSuchStoreException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(message));
}
inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* Org::BouncyCastle::X509::Store::NoSuchStoreException::New_ctor(::StringW message, ::System::Exception* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::NoSuchStoreException*>(message, e));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::NoSuchStoreException::NoSuchStoreException() {}

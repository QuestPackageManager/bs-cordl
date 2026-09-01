#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\Store\X509StoreException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509StoreException::*)()>(&::Org::BouncyCastle::X509::Store::X509StoreException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36402f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509StoreException::*)(::StringW)>(&::Org::BouncyCastle::X509::Store::X509StoreException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3640350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509StoreException::*)(::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::X509::Store::X509StoreException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36403bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::Store::X509StoreException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509StoreException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::X509::Store::X509StoreException::_ctor(::StringW message, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, e);
}
inline ::Org::BouncyCastle::X509::Store::X509StoreException* Org::BouncyCastle::X509::Store::X509StoreException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509StoreException*>());
}
inline ::Org::BouncyCastle::X509::Store::X509StoreException* Org::BouncyCastle::X509::Store::X509StoreException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509StoreException*>(message));
}
inline ::Org::BouncyCastle::X509::Store::X509StoreException* Org::BouncyCastle::X509::Store::X509StoreException::New_ctor(::StringW message, ::System::Exception* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509StoreException*>(message, e));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509StoreException::X509StoreException() {}

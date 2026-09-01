#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\KeyWrapperUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__KeyWrapperUtil_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.WrapperForName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3405e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(),
                                                             { "WrapperForName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.UnwrapperForName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IKeyUnwrapper* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3406618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(),
                                                             { "UnwrapperForName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::*)()>(&::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3406858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::setStaticF_providerMap(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "providerMap", ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::getStaticF_providerMap() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "providerMap", ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>();
}
inline ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(),
                                                           { "WrapperForName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyWrapper*>(nullptr, ___internal_method, algorithm, parameters);
}
inline ::Org::BouncyCastle::Crypto::IKeyUnwrapper* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName(::StringW algorithm,
                                                                                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(),
                                                           { "UnwrapperForName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(nullptr, ___internal_method, algorithm, parameters);
}
inline void Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::KeyWrapperUtil() {}

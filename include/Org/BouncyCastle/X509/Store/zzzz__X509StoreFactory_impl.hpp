#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509StoreFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreFactory_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509StoreParameters_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509StoreFactory::*)()>(&::Org::BouncyCastle::X509::Store::X509StoreFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x364057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (*)(::StringW, ::Org::BouncyCastle::X509::Store::IX509StoreParameters*)>(
    &::Org::BouncyCastle::X509::Store::X509StoreFactory::Create)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x3640580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(),
                                                             { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509StoreFactory.checkCorrectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ICollection*, ::System::Type*)>(&::Org::BouncyCastle::X509::Store::X509StoreFactory::checkCorrectType)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x3640958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(),
                                                             { "checkCorrectType", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::Store::X509StoreFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::X509::Store::X509StoreFactory::Create(::StringW type, ::Org::BouncyCastle::X509::Store::IX509StoreParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(),
                                                           { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(nullptr, ___internal_method, type, parameters);
}
inline void Org::BouncyCastle::X509::Store::X509StoreFactory::checkCorrectType(::System::Collections::ICollection* coll, ::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509StoreFactory*>(),
                                                           { "checkCorrectType", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, coll, t);
}
inline ::Org::BouncyCastle::X509::Store::X509StoreFactory* Org::BouncyCastle::X509::Store::X509StoreFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509StoreFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509StoreFactory::X509StoreFactory() {}

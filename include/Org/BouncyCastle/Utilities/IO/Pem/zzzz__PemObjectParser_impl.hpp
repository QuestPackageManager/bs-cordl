#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemObjectParser.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectParser_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser.ParseObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}

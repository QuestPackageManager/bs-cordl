#pragma once
// IWYU pragma private; include "Org\BouncyCastle\OpenSsl\PemWriter.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemWriter_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemWriter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemWriter::*)(::System::IO::TextWriter*)>(&::Org::BouncyCastle::OpenSsl::PemWriter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35aa730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemWriter.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemWriter::*)(::System::Object*)>(&::Org::BouncyCastle::OpenSsl::PemWriter::WriteObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x35aa734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(), { "WriteObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemWriter.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemWriter::*)(
    ::System::Object*, ::StringW, ::ArrayW<char16_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::OpenSsl::PemWriter::WriteObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35aa890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(),
                                                                                           { "WriteObject",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::OpenSsl::PemWriter::_ctor(::System::IO::TextWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Org::BouncyCastle::OpenSsl::PemWriter::WriteObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(), { "WriteObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::OpenSsl::PemWriter::WriteObject(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemWriter*>(),
                                                                                         { "WriteObject",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, algorithm, password, random);
}
inline ::Org::BouncyCastle::OpenSsl::PemWriter* Org::BouncyCastle::OpenSsl::PemWriter::New_ctor(::System::IO::TextWriter* writer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemWriter*>(writer));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemWriter::PemWriter() {}

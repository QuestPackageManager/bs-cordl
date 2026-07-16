#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/UrlBase64.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__UrlBase64_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__IEncoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Encode)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x362c9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Encode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x362cbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x362cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x362cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x362d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Decode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x362d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::UrlBase64::*)()>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362d400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Encoders::UrlBase64::setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::IEncoder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Encoders::IEncoder*, "encoder", ::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(
      std::forward<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(value));
}
inline ::Org::BouncyCastle::Utilities::Encoders::IEncoder* Org::BouncyCastle::Utilities::Encoders::UrlBase64::getStaticF_encoder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Encoders::IEncoder*, "encoder", ::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>();
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::UrlBase64::Encode(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::UrlBase64::Encode(::ArrayW<uint8_t> data, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, outStr);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode(::ArrayW<uint8_t> data, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, outStr);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { "Decode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::UrlBase64::Decode(::StringW data, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(),
                                                                                         { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, outStr);
}
inline void Org::BouncyCastle::Utilities::Encoders::UrlBase64::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64* Org::BouncyCastle::Utilities::Encoders::UrlBase64::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::UrlBase64*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::UrlBase64::UrlBase64() {}

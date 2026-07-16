#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/Hex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Hex_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__HexEncoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::Hex::*)()>(&::Org::BouncyCastle::Utilities::Encoders::Hex::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.ToHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x362b3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "ToHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.ToHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x362b458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                             { "ToHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Encode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x362b5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Encode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x362b4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                             { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Encode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x362b718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Encode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x362b7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Decode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x362b834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Decode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x362bc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Decode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::Decode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x362bfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.DecodeStrict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x362c064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "DecodeStrict", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Hex.DecodeStrict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x362c30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                             { "DecodeStrict", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Encoders::Hex::setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::HexEncoder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*, "encoder", ::Org::BouncyCastle::Utilities::Encoders::Hex*>(
      std::forward<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(value));
}
inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* Org::BouncyCastle::Utilities::Encoders::Hex::getStaticF_encoder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*, "encoder", ::Org::BouncyCastle::Utilities::Encoders::Hex*>();
}
inline void Org::BouncyCastle::Utilities::Encoders::Hex::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "ToHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::StringW Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString(::ArrayW<uint8_t> data, int32_t off, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                           { "ToHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, off, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::Encode(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data, off, length);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Hex::Encode(::ArrayW<uint8_t> data, ::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Hex::Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                       { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, off, length, outStream);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::Decode(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::Decode(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Decode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Hex::Decode(::StringW data, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "Decode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, outStream);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(), { "DecodeStrict", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict(::StringW str, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Hex*>(),
                                                           { "DecodeStrict", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str, off, len);
}
inline ::Org::BouncyCastle::Utilities::Encoders::Hex* Org::BouncyCastle::Utilities::Encoders::Hex::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::Hex*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::Hex::Hex() {}

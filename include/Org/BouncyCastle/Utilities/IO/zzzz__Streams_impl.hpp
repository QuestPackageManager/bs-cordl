#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\Streams.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__Streams_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Streams::*)()>(&::Org::BouncyCastle::Utilities::IO::Streams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362fcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.Drain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::IO::Streams::Drain)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x362fcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { "Drain", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.ReadAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::IO::Streams::ReadAll)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x362fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { "ReadAll", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.ReadAllLimited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Utilities::IO::Streams::ReadAllLimited)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x362fee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                           { "ReadAllLimited", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::IO::Streams::ReadFully)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36300b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                           { "ReadFully", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::IO::Streams::ReadFully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36300d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                         { "ReadFully", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.PipeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::IO::Streams::PipeAll)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x362fe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                           { "PipeAll", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.PipeAllLimited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IO::Stream*, int64_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::IO::Streams::PipeAllLimited)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x362ff70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                { "PipeAllLimited", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.WriteBufTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::MemoryStream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3630150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                             { "WriteBufTo", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.WriteBufTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::MemoryStream*, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x363016c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                             { "WriteBufTo", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Streams.WriteZeroes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int64_t)>(&::Org::BouncyCastle::Utilities::IO::Streams::WriteZeroes)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3630220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                           { "WriteZeroes", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::IO::Streams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::Streams::Drain(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { "Drain", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStr);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::IO::Streams::ReadAll(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(), { "ReadAll", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inStr);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::IO::Streams::ReadAllLimited(::System::IO::Stream* inStr, int32_t limit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                         { "ReadAllLimited", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inStr, limit);
}
inline int32_t Org::BouncyCastle::Utilities::IO::Streams::ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t> buf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                         { "ReadFully", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inStr, buf);
}
inline int32_t Org::BouncyCastle::Utilities::IO::Streams::ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                       { "ReadFully", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inStr, buf, off, len);
}
inline void Org::BouncyCastle::Utilities::IO::Streams::PipeAll(::System::IO::Stream* inStr, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                         { "PipeAll", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStr, outStr);
}
inline int64_t Org::BouncyCastle::Utilities::IO::Streams::PipeAllLimited(::System::IO::Stream* inStr, int64_t limit, ::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                           { "PipeAllLimited", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, inStr, limit, outStr);
}
inline void Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo(::System::IO::MemoryStream* buf, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                           { "WriteBufTo", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, output);
}
inline int32_t Org::BouncyCastle::Utilities::IO::Streams::WriteBufTo(::System::IO::MemoryStream* buf, ::ArrayW<uint8_t> output, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                           { "WriteBufTo", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buf, output, offset);
}
inline void Org::BouncyCastle::Utilities::IO::Streams::WriteZeroes(::System::IO::Stream* outStr, int64_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Streams*>(),
                                                                                         { "WriteZeroes", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outStr, count);
}
inline ::Org::BouncyCastle::Utilities::IO::Streams* Org::BouncyCastle::Utilities::IO::Streams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::Streams*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::Streams::Streams() {}

#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\SXprUtilities.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__SXprUtilities_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__SXprUtilities_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35a5530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k.get_IterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a554c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(), 9 }));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::__cordl_internal_get_mIterationCount64() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mIterationCount64;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::__cordl_internal_get_mIterationCount64() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mIterationCount64;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::__cordl_internal_set_mIterationCount64(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mIterationCount64 = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int64_t iterationCount64) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, iv, iterationCount64);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::get_IterationCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k* Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm,
                                                                                                                                ::ArrayW<uint8_t> iv, int64_t iterationCount64) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k*>(algorithm, iv, iterationCount64));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities_MyS2k::SXprUtilities_MyS2k() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a54b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadLength)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35a54bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                           { "ReadLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3598778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                           { "ReadString", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35988b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                           { "ReadBytes", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ParseS2k
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ParseS2k)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35990a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "ParseS2k", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.SkipOpenParenthesis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipOpenParenthesis)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3598704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "SkipOpenParenthesis", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.SkipCloseParenthesis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipCloseParenthesis)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x359883c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "SkipCloseParenthesis", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadLength(::System::IO::Stream* input, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                         { "ReadLength", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input, ch);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadString(::System::IO::Stream* input, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                         { "ReadString", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input, ch);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadBytes(::System::IO::Stream* input, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(),
                                                                                         { "ReadBytes", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input, ch);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ParseS2k(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "ParseS2k", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipOpenParenthesis(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "SkipOpenParenthesis", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipCloseParenthesis(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>(), { "SkipCloseParenthesis", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities* Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SXprUtilities() {}

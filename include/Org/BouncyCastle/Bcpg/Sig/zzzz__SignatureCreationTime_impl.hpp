#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\SignatureCreationTime.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__SignatureCreationTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime.TimeToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::DateTime)>(&::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::TimeToBytes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x36959f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(), { "TimeToBytes", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::*)(bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3695ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::*)(bool, ::System::DateTime)>(
    &::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3695af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::*)()>(
    &::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::GetTime)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3695b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(), { "GetTime", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::TimeToBytes(::System::DateTime time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(), { "TimeToBytes", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, time);
}
inline void Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::_ctor(bool critical, ::System::DateTime date) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, date);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::GetTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(), { "GetTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime* Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime* Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::New_ctor(bool critical, ::System::DateTime date) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*>(critical, date));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime::SignatureCreationTime() {}

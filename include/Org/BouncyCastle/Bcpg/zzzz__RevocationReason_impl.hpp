#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\RevocationReason.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReason_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationReason::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::RevocationReason::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369580c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationReason::*)(bool, ::Org::BouncyCastle::Bcpg::RevocationReasonTag, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::RevocationReason::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3695824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                                { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.CreateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::RevocationReasonTag, ::StringW)>(&::Org::BouncyCastle::Bcpg::RevocationReason::CreateData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3695860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                                             { "CreateData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.GetRevocationReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::RevocationReasonTag (::Org::BouncyCastle::Bcpg::RevocationReason::*)()>(
    &::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationReason)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3695910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.GetRevocationDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::RevocationReason::*)()>(&::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationDescription)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3695938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), 5 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::RevocationReason::_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::RevocationReason::_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                              { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, reason, description);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::RevocationReason::CreateData(::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(),
                                                           { "CreateData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, reason, description);
}
inline ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationReason() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationDescription() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationReason*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::RevocationReason* Org::BouncyCastle::Bcpg::RevocationReason::New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RevocationReason*>(isCritical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::RevocationReason* Org::BouncyCastle::Bcpg::RevocationReason::New_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RevocationReason*>(isCritical, reason, description));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::RevocationReason::RevocationReason() {}

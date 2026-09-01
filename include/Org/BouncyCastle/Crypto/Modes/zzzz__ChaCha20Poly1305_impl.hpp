#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\ChaCha20Poly1305.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ChaCha7539Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::ChaCha20Poly1305_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::ChaCha20Poly1305_State() {}
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::EncInit{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::EncAad{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::EncData{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::EncFinal{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::DecInit{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::DecAad{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::DecData{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State::DecFinal{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33f5e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x33f5ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33f60b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x33f60f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x33f6680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x33f6758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessAadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadByte)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33f683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x33f6a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessByte)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x33f6c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x33f7058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x33f7554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetMac)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x33f7ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33f7b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.CheckAad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33f6910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "CheckAad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.CheckData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x33f6eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "CheckData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.FinishAad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33f7b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                           { "FinishAad", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.FinishData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x33f7920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                           { "FinishData", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.IncrementCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t, uint32_t, uint64_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33f69c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                             { "IncrementCount", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.InitMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x33f7c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "InitMac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.PadMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x33f7b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "PadMac", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x33f6f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
            { "ProcessData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, bool)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x33f654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "Reset", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mChacha20() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mChacha20;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mChacha20() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mChacha20;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mChacha20(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mChacha20 = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mPoly1305() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPoly1305;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mPoly1305() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPoly1305;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mPoly1305(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPoly1305 = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKey;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKey = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mNonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNonce = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBuf = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mMac(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMac = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mInitialAad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitialAad;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mInitialAad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitialAad;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mInitialAad(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInitialAad = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mAadCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAadCount;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mAadCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAadCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mAadCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAadCount = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mDataCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataCount;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mDataCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mDataCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDataCount = value;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mState;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mState;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mState(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mState = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mBufPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBufPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_get_mBufPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBufPos;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__cordl_internal_set_mBufPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBufPos = value;
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::setStaticF_Zeroes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::getStaticF_Zeroes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>();
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly1305);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBytes, inOff, len, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outBytes, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "CheckAad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "CheckData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State nextState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                         { "FinishAad", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextState);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State nextState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                                                         { "FinishData", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextState);
}
inline uint64_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount(uint64_t count, uint32_t increment, uint64_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
                                                           { "IncrementCount", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, count, increment, limit);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "InitMac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac(uint64_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "PadMac", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(),
          { "ProcessData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBytes, inOff, inLen, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset(bool clearMac, bool resetCipher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(), { "Reset", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearMac, resetCipher);
}
inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>());
}
inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(poly1305));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ChaCha20Poly1305() {}

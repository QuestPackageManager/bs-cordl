#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__EaxBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__EaxBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__SicBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag::__EaxBlockCipher__Tag(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag::__EaxBlockCipher__Tag() {}
constexpr ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag::N{ static_cast<uint8_t>(0x0u) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag::H{ static_cast<uint8_t>(0x1u) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag Org::BouncyCastle::Crypto::Modes::__EaxBlockCipher__Tag::C{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xf8cbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf8ce28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8cefc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf8cf04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xf8cf28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.InitCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xf8d3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                                               "InitCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.CalculateMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xf8d550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                                               "CalculateMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d6a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xf8d6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessAadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf8d8a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xf8d9a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf8dac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf8dd5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xf8ddf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf8e1d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf8e248;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf8e27c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xf8db00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.VerifyMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf8e140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "VerifyMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_nonceMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonceMac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_nonceMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonceMac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_nonceMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nonceMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_associatedTextMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associatedTextMac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_associatedTextMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associatedTextMac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_associatedTextMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___associatedTextMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_macBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_macBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_bufBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_bufBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_bufBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_cipherInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherInitialized;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_cipherInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherInitialized;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_cipherInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipherInitialized = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_initialAssociatedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_get_initialAssociatedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialAssociatedText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher* Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>(cipher));
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipher);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUnderlyingCipher() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, parameters);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                                             "InitCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(),
                                                                             "CalculateMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset(bool clearMac) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearMac);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadByte(uint8_t input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes,
                                                                              int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inBytes, inOff, len, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetMac() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize(int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize(int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process(uint8_t b, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, b, outBytes, outOff);
}
inline bool Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac(::ArrayW<uint8_t, ::Array<uint8_t>*> mac, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher*>::get(), "VerifyMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mac, off);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::EaxBlockCipher() {}

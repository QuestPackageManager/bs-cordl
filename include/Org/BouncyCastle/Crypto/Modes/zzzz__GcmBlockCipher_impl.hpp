#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__GcmBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmExponentiator_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117cc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x117cc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x117cde8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117cea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                               "GetUnderlyingCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117ceb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Init)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x117ceb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x117d78c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x117d814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x117d83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessAadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x117d874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x117d970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.InitCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::InitCipher)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x117da30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                               "InitCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x117dbc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x117de08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x117e054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117e89c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x117e6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBlock)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x117dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "ProcessBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.ProcessPartial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessPartial)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x117e580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "ProcessPartial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.gHASH
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASH)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x117d5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASH", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.gHASHBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x117d6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.gHASHBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x117ea48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.gHASHPartial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHPartial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x117dac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHPartial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.GetNextCtrBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetNextCtrBlock)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x117e8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "GetNextCtrBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher.CheckStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::CheckStatus)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x117d8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                               "CheckStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*> const&
Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_multiplier(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_exp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exp;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_exp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exp;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_exp(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_initialised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_initialised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_initialised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialised = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_lastKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_lastKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKey;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_lastKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_initialAssociatedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_initialAssociatedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialAssociatedText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___H)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_J0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___J0;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_J0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___J0;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_J0(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___J0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_bufBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_bufBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_bufBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_macBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_macBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S_at() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S_at;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S_at() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S_at;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_S_at(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S_at)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S_atPre() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S_atPre;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_S_atPre() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S_atPre;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_S_atPre(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S_atPre)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___counter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_blocksRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksRemaining;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_blocksRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksRemaining;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_blocksRemaining(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocksRemaining = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_totalLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalLength;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_totalLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalLength;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_totalLength(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalLength = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_atBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atBlockPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atBlockPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atBlockPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atBlockPos;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_atBlockPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atBlockPos = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atLength;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atLength;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_atLength(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atLength = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atLengthPre() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atLengthPre;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_get_atLengthPre() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atLengthPre;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::__cordl_internal_set_atLengthPre(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atLengthPre = value;
}
inline ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>(c));
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c,
                                                                                                                      ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>(c, m));
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c, m);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUnderlyingCipher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                             "GetUnderlyingCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetBlockSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, parameters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetMac() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetOutputSize(int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUpdateOutputSize(int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadByte(uint8_t input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::InitCipher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                             "InitCipher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output,
                                                                              int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, inOff, len, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "DoFinal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset(bool clearMac) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearMac);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t bufOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "ProcessBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, bufOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessPartial(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output,
                                                                             int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "ProcessPartial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASH", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Y, b, len);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Y, b);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Y, b, off);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHPartial(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "gHASHPartial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Y, b, off, len);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetNextCtrBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(), "GetNextCtrBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block);
}
inline void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::CheckStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                             "CheckStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GcmBlockCipher() {}

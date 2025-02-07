#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::System::Security::Cryptography::SymmetricAlgorithm*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x3c6c658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::SymmetricAlgorithm*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c6c918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3c6c9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(bool)>(
    &::Mono::Security::Cryptography::SymmetricTransform::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3c6ca24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_CanTransformMultipleBlocks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6ca78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_InputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6ca80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_OutputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6ca88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::Transform)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3c6ca90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.ECB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::ECB)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CBC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::CBC)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3c6ccbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CFB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::CFB)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3c6ce20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.OFB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::OFB)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3c6cfe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CTS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::SymmetricTransform::CTS)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3c6d034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CheckInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::CheckInput)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3c6d080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "CheckInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.TransformBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::TransformBlock)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3c6d1c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_KeepLastBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c6d3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                                               "get_KeepLastBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.InternalTransformBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3c6d3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "InternalTransformBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::Random)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c6d5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "Random", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.ThrowBadPaddingException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::System::Security::Cryptography::PaddingMode, int32_t, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3c6d658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "ThrowBadPaddingException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.FinalEncrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3c6d83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.FinalDecrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3c6dad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.TransformFinalBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::SymmetricTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c6dd68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 23));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_algo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algo;
}
constexpr ::System::Security::Cryptography::SymmetricAlgorithm* const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_algo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algo;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_algo(::System::Security::Cryptography::SymmetricAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_encrypt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypt;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_encrypt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypt;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_encrypt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypt = value;
}
constexpr int32_t& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_BlockSizeByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlockSizeByte;
}
constexpr int32_t const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_BlockSizeByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlockSizeByte;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_BlockSizeByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BlockSizeByte = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_temp(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___temp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp2;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp2;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_temp2(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___temp2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workBuff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workBuff;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workBuff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workBuff;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_workBuff(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workBuff)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workout;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workout;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_workout(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::PaddingMode& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_padmode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padmode;
}
constexpr ::System::Security::Cryptography::PaddingMode const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_padmode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padmode;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_padmode(::System::Security::Cryptography::PaddingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padmode = value;
}
constexpr int32_t& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_FeedBackByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FeedBackByte;
}
constexpr int32_t const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_FeedBackByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FeedBackByte;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_FeedBackByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FeedBackByte = value;
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_lastBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBlock;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_lastBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBlock;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_lastBlock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastBlock = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get__rng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get__rng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Cryptography::SymmetricTransform::_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::SymmetricAlgorithm*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, symmAlgo, encryption, rgbIV);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Transform(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CBC(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CFB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::OFB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CTS(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CheckInput(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "CheckInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline bool Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(),
                                                                             "get_KeepLastBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "InternalTransformBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Random(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "Random", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, start, length);
}
inline void Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, int32_t length, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), "ThrowBadPaddingException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, padding, length, position);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset,
                                                                                                                  int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::SymmetricTransform*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::Mono::Security::Cryptography::SymmetricTransform* Mono::Security::Cryptography::SymmetricTransform::New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption,
                                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::SymmetricTransform*>(symmAlgo, encryption, rgbIV));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr Mono::Security::Cryptography::SymmetricTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* Mono::Security::Cryptography::SymmetricTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Security::Cryptography::SymmetricTransform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Security::Cryptography::SymmetricTransform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::SymmetricTransform::SymmetricTransform() {}

#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RijndaelManagedTransform.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_impl.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_impl.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::CipherMode, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Security::Cryptography::PaddingMode,
    ::System::Security::Cryptography::RijndaelManagedTransformMode)>(&::System::Security::Cryptography::RijndaelManagedTransform::_ctor)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x3ca7c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CipherMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RijndaelManagedTransformMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)()>(
    &::System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ca878c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)(bool)>(
    &::System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ca8794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.get_InputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RijndaelManagedTransform::*)()>(
    &::System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ca8850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "get_InputBlockSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.get_OutputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RijndaelManagedTransform::*)()>(
    &::System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ca8858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "get_OutputBlockSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.get_CanTransformMultipleBlocks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RijndaelManagedTransform::*)()>(
    &::System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ca8860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                 "get_CanTransformMultipleBlocks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.TransformBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::TransformBlock)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3ca8868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "TransformBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.TransformFinalBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3caa178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "TransformFinalBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)()>(
    &::System::Security::Cryptography::RijndaelManagedTransform::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3caa444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, int32_t, ::System::Security::Cryptography::PaddingMode, bool)>(
    &::System::Security::Cryptography::RijndaelManagedTransform::EncryptData)> {
  constexpr static std::size_t size = 0xbcc;
  constexpr static std::size_t addrs = 0x3ca8b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.DecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, int32_t, ::System::Security::Cryptography::PaddingMode, bool)>(
    &::System::Security::Cryptography::RijndaelManagedTransform::DecryptData)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x3ca96f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "DecryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.Enc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>,
    ::cordl_internals::Ptr<int32_t>)>(&::System::Security::Cryptography::RijndaelManagedTransform::Enc)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3caa4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Enc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.Dec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)(
    ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>, ::cordl_internals::Ptr<int32_t>,
    ::cordl_internals::Ptr<int32_t>)>(&::System::Security::Cryptography::RijndaelManagedTransform::Dec)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3caa678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Dec", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.GenerateKeyExpansion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x3ca8224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "GenerateKeyExpansion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.rot1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::rot1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3caa958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.rot2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::rot2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3caa950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.rot3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::rot3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3caa860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.SubWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::SubWord)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3caa868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "SubWord",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManagedTransform.MulX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RijndaelManagedTransform::MulX)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3caa92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "MulX",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::CipherMode& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_cipherMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cipherMode;
}
constexpr ::System::Security::Cryptography::CipherMode const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_cipherMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cipherMode;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_cipherMode(::System::Security::Cryptography::CipherMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cipherMode = value;
}
constexpr ::System::Security::Cryptography::PaddingMode& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_paddingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_paddingValue;
}
constexpr ::System::Security::Cryptography::PaddingMode const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_paddingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_paddingValue;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_paddingValue(::System::Security::Cryptography::PaddingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_paddingValue = value;
}
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_transformMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_transformMode;
}
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_transformMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_transformMode;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_transformMode(::System::Security::Cryptography::RijndaelManagedTransformMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_transformMode = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_blockSizeBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_blockSizeBits;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_blockSizeBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_blockSizeBits;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_blockSizeBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_blockSizeBits = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_blockSizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_blockSizeBytes;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_blockSizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_blockSizeBytes;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_blockSizeBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_blockSizeBytes = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_inputBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_inputBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputBlockSize;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_inputBlockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_inputBlockSize = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_outputBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_outputBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outputBlockSize;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_outputBlockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_outputBlockSize = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_encryptKeyExpansion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptKeyExpansion;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_encryptKeyExpansion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptKeyExpansion;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_encryptKeyExpansion(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encryptKeyExpansion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_decryptKeyExpansion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decryptKeyExpansion;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_decryptKeyExpansion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decryptKeyExpansion;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_decryptKeyExpansion(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_decryptKeyExpansion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nr;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nr;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_Nr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nr = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nb;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nb;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_Nb(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nb = value;
}
constexpr int32_t& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nk;
}
constexpr int32_t const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_Nk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nk;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_Nk(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nk = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_encryptindex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptindex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_encryptindex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptindex;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_encryptindex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encryptindex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_decryptindex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decryptindex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_decryptindex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decryptindex;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_decryptindex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_decryptindex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_IV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IV;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_IV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IV;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_IV(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_lastBlockBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastBlockBuffer;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_lastBlockBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastBlockBuffer;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_lastBlockBuffer(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_lastBlockBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_depadBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depadBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_depadBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depadBuffer;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_depadBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_depadBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_shiftRegister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shiftRegister;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_get_m_shiftRegister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shiftRegister;
}
constexpr void System::Security::Cryptography::RijndaelManagedTransform::__cordl_internal_set_m_shiftRegister(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_shiftRegister)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_Sbox(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_Sbox",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_Sbox() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_Sbox",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_Rcon(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_Rcon",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_Rcon() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_Rcon",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_T(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_T",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_T() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_T",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_TF(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_TF",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_TF() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_TF",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_iT(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_iT",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_iT() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_iT",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::setStaticF_s_iTF(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_iTF",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Security::Cryptography::RijndaelManagedTransform::getStaticF_s_iTF() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_iTF",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get>();
}
inline void System::Security::Cryptography::RijndaelManagedTransform::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::System::Security::Cryptography::CipherMode mode,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t blockSize, int32_t feedbackSize,
                                                                            ::System::Security::Cryptography::PaddingMode PaddingValue,
                                                                            ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CipherMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RijndaelManagedTransformMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                                             "get_InputBlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                                             "get_OutputBlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                                             "get_CanTransformMultipleBlocks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "TransformBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset,
                                                                                                                          int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "TransformFinalBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount,
                                                                                     ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> outputBuffer, int32_t outputOffset,
                                                                                     ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::DecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount,
                                                                                     ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> outputBuffer, int32_t outputOffset,
                                                                                     ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "DecryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::Enc(::cordl_internals::Ptr<int32_t> encryptindex, ::cordl_internals::Ptr<int32_t> encryptKeyExpansion,
                                                                          ::cordl_internals::Ptr<int32_t> T, ::cordl_internals::Ptr<int32_t> TF, ::cordl_internals::Ptr<int32_t> work,
                                                                          ::cordl_internals::Ptr<int32_t> temp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Enc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptindex, encryptKeyExpansion, T, TF, work, temp);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::Dec(::cordl_internals::Ptr<int32_t> decryptindex, ::cordl_internals::Ptr<int32_t> decryptKeyExpansion,
                                                                          ::cordl_internals::Ptr<int32_t> iT, ::cordl_internals::Ptr<int32_t> iTF, ::cordl_internals::Ptr<int32_t> work,
                                                                          ::cordl_internals::Ptr<int32_t> temp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "Dec", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decryptindex, decryptKeyExpansion, iT, iTF, work, temp);
}
inline void System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "GenerateKeyExpansion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgbKey);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::rot1(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::rot2(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::rot3(int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "rot3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::SubWord(int32_t a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "SubWord",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a);
}
inline int32_t System::Security::Cryptography::RijndaelManagedTransform::MulX(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RijndaelManagedTransform*>::get(), "MulX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x);
}
inline ::System::Security::Cryptography::RijndaelManagedTransform* System::Security::Cryptography::RijndaelManagedTransform::New_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t blockSize, int32_t feedbackSize,
    ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RijndaelManagedTransform*>(rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr System::Security::Cryptography::RijndaelManagedTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManagedTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::RijndaelManagedTransform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::RijndaelManagedTransform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RijndaelManagedTransform::RijndaelManagedTransform() {}

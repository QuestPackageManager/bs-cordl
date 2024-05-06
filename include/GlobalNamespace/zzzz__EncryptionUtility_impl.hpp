#pragma once
// IWYU pragma private; include "GlobalNamespace/EncryptionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__IEncryptionState.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__IEncryptionState::*)()>(
    &::GlobalNamespace::__EncryptionUtility__IEncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__IEncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EncryptionUtility__IEncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::__EncryptionUtility__IEncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__IEncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__IEncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::__EncryptionUtility__IEncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__EncryptionUtility__IEncryptionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__EncryptionUtility__IEncryptionState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::__EncryptionUtility__IEncryptionState::get_isValid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param extraPrefixBytes: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__EncryptionUtility__IEncryptionState::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::__EncryptionUtility__IEncryptionState::TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, offset, length);
}
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)()>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1094f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                               "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1094f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1095018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.ComputeSendMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::ComputeSendMac)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x109376c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "ComputeSendMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.ComputeReceiveMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::ComputeReceiveMac)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x10943e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "ComputeReceiveMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.IsValidSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::IsValidSequenceNum)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x10942bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "IsValidSequenceNum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.PutSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::PutSequenceNum)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1094630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PutSequenceNum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.GetNextSentSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)()>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::GetNextSentSequenceNum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1093760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                               "GetNextSentSequenceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1092a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.MakeSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::MakeSeed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1095094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "MakeSeed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.PRF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                                                           int32_t)>(&::GlobalNamespace::__EncryptionUtility__EncryptionState::PRF)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1095174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PRF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.PRF_Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::PRF_Hash)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x109525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PRF_Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility__EncryptionState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EncryptionUtility__EncryptionState::*)()>(
    &::GlobalNamespace::__EncryptionUtility__EncryptionState::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1095448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__EncryptionUtility__IEncryptionState"
constexpr GlobalNamespace::__EncryptionUtility__EncryptionState::operator ::GlobalNamespace::__EncryptionUtility__IEncryptionState*() noexcept {
  return static_cast<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__EncryptionUtility__IEncryptionState"
constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState* GlobalNamespace::__EncryptionUtility__EncryptionState::i___GlobalNamespace____EncryptionUtility__IEncryptionState() noexcept {
  return static_cast<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__EncryptionUtility__EncryptionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__EncryptionUtility__EncryptionState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__isValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid;
}
constexpr bool const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__isValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__isValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValid = value;
}
constexpr int32_t& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__lastSentSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSequenceNum;
}
constexpr int32_t const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__lastSentSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSequenceNum;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__lastSentSequenceNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSentSequenceNum = value;
}
constexpr bool& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__hasReceivedSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasReceivedSequenceNum;
}
constexpr bool const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__hasReceivedSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasReceivedSequenceNum;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__hasReceivedSequenceNum(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasReceivedSequenceNum = value;
}
constexpr uint32_t& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__lastReceivedSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedSequenceNum;
}
constexpr uint32_t const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__lastReceivedSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedSequenceNum;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__lastReceivedSequenceNum(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReceivedSequenceNum = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__receivedSequenceNumBuffer(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedSequenceNumBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get_sendKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get_sendKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set_sendKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sendKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get_receiveKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get_receiveKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set_receiveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___receiveKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__sendMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__sendMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__sendMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendMacKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receiveMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receiveMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr void GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__receiveMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receiveMacKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__sendMacQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*> const&
GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__sendMacQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacQueue;
}
constexpr void
GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__sendMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendMacQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*&
GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receiveMacQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*> const&
GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_get__receiveMacQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacQueue;
}
constexpr void
GlobalNamespace::__EncryptionUtility__EncryptionState::__cordl_internal_set__receiveMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receiveMacQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::__EncryptionUtility__EncryptionState::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                             "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param extraPrefixBytes: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__EncryptionUtility__EncryptionState::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::__EncryptionUtility__EncryptionState::TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, offset, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__EncryptionUtility__EncryptionState::ComputeSendMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "ComputeSendMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__EncryptionUtility__EncryptionState::ComputeReceiveMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "ComputeReceiveMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, count);
}
inline bool GlobalNamespace::__EncryptionUtility__EncryptionState::IsValidSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "IsValidSequenceNum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceNum);
}
inline bool GlobalNamespace::__EncryptionUtility__EncryptionState::PutSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PutSequenceNum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceNum);
}
inline uint32_t GlobalNamespace::__EncryptionUtility__EncryptionState::GetNextSentSequenceNum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                             "GetNextSentSequenceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EncryptionUtility__EncryptionState* GlobalNamespace::__EncryptionUtility__EncryptionState::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__EncryptionUtility__EncryptionState*>(preMasterSecret, serverSeed, clientSeed, isClient));
}
inline void GlobalNamespace::__EncryptionUtility__EncryptionState::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__EncryptionUtility__EncryptionState::MakeSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> baseSeed,
                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "MakeSeed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, baseSeed, serverSeed, clientSeed);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__EncryptionUtility__EncryptionState::PRF(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed,
                                                                                                       int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PRF", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::__EncryptionUtility__EncryptionState::PRF_Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(), "PRF_Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::__EncryptionUtility__EncryptionState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EncryptionUtility__EncryptionState::__EncryptionUtility__EncryptionState() {}
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1092cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0._CreateEncryptionStateAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EncryptionUtility__IEncryptionState* (
    ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::*)()>(&::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1095460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*>::get(),
                                                 "<CreateEncryptionStateAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_preMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_preMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr void GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_set_preMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preMasterSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_serverSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_serverSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr void GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_set_serverSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverSeed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_clientSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_clientSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr void GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_set_clientSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientSeed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_isClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr bool const& GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_get_isClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr void GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__cordl_internal_set_isClient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isClient = value;
}
inline ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0* GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*>());
}
inline void GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*>::get(),
                                               "<CreateEncryptionStateAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EncryptionUtility__IEncryptionState*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0::__EncryptionUtility____c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__EncryptionUtility__IEncryptionState* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
        &::GlobalNamespace::EncryptionUtility::CreateEncryptionState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1092a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionStateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* (*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
        &::GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1090618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionStateAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.IsValidLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::EncryptionUtility::IsValidLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1092d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "IsValidLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__EncryptionUtility__EncryptionState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ByRef<int32_t>, ByRef<int32_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::EncryptData)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x1092d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__EncryptionUtility__EncryptionState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::EncryptionUtility::TryDecryptData)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0x10939b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility::FastCopyBlock)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x1094834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "FastCopyBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility::FastCopyMac)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1094b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "FastCopyMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::EncryptionUtility::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1094d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.LogV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::EncryptionUtility::LogV)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1094dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "LogV", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EncryptionUtility::setStaticF__masterSecretSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_masterSecretSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility::getStaticF__masterSecretSeed() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_masterSecretSeed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__keyExpansionSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_keyExpansionSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility::getStaticF__keyExpansionSeed() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_keyExpansionSeed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__tempIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_tempIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility::getStaticF__tempIV() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_tempIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__tempHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_tempHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility::getStaticF__tempHash() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_tempHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__aes(::System::Security::Cryptography::AesCryptoServiceProvider* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::AesCryptoServiceProvider*, "_aes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>(
      std::forward<::System::Security::Cryptography::AesCryptoServiceProvider*>(value));
}
inline ::System::Security::Cryptography::AesCryptoServiceProvider* GlobalNamespace::EncryptionUtility::getStaticF__aes() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::AesCryptoServiceProvider*, "_aes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get>();
}
inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* GlobalNamespace::EncryptionUtility::CreateEncryptionState(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EncryptionUtility__IEncryptionState*, false>(nullptr, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*
GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionStateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*, false>(nullptr, ___internal_method, taskUtility,
                                                                                                                                                    preMasterSecret, serverSeed, clientSeed, isClient);
}
inline bool GlobalNamespace::EncryptionUtility::IsValidLength(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "IsValidLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, length);
}
inline void GlobalNamespace::EncryptionUtility::EncryptData(::GlobalNamespace::__EncryptionUtility__EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset,
                                                            ByRef<int32_t> length, int32_t extraPrefixedData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, data, offset, length, extraPrefixedData);
}
inline bool GlobalNamespace::EncryptionUtility::TryDecryptData(::GlobalNamespace::__EncryptionUtility__EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset,
                                                               ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__EncryptionState*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, data, offset, length);
}
inline void GlobalNamespace::EncryptionUtility::FastCopyBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inArr, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outArr, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "FastCopyBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
inline void GlobalNamespace::EncryptionUtility::FastCopyMac(::ArrayW<uint8_t, ::Array<uint8_t>*> inArr, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outArr, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "FastCopyMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
inline void GlobalNamespace::EncryptionUtility::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::EncryptionUtility::LogV(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "LogV", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility::EncryptionUtility() {}

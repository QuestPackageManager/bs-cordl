#pragma once
// IWYU pragma private; include "GlobalNamespace/EncryptionUtility.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)()>(
    &::GlobalNamespace::EncryptionUtility_IEncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, ::ByRef<int32_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility_IEncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::GlobalNamespace::EncryptionUtility_IEncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 2));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::EncryptionUtility_IEncryptionState::get_isValid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_IEncryptionState::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length, int32_t extraPrefixBytes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::EncryptionUtility_IEncryptionState::TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, offset, length);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::EncryptionUtility_IEncryptionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::EncryptionUtility_IEncryptionState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22ca550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                               "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, ::ByRef<int32_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22ca568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ca5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.ComputeSendMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::ComputeSendMac)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x22c9044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "ComputeSendMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.ComputeReceiveMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::ComputeReceiveMac)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x22c9a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "ComputeReceiveMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.IsValidSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::IsValidSequenceNum)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22c9930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "IsValidSequenceNum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PutSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::PutSequenceNum)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x22c9c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PutSequenceNum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.GetNextSentSequenceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::GetNextSentSequenceNum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c9038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                               "GetNextSentSequenceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x22c871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.MakeSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::MakeSeed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22ca668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "MakeSeed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PRF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                                                           int32_t)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::PRF)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22ca748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PRF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PRF_Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::PRF_Hash)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x22ca830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PRF_Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22caa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__isValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid;
}
constexpr bool const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__isValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValid;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__isValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValid = value;
}
constexpr int32_t& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__lastSentSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSequenceNum;
}
constexpr int32_t const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__lastSentSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSequenceNum;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__lastSentSequenceNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSentSequenceNum = value;
}
constexpr bool& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__hasReceivedSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasReceivedSequenceNum;
}
constexpr bool const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__hasReceivedSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasReceivedSequenceNum;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__hasReceivedSequenceNum(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasReceivedSequenceNum = value;
}
constexpr uint32_t& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__lastReceivedSequenceNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedSequenceNum;
}
constexpr uint32_t const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__lastReceivedSequenceNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedSequenceNum;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__lastReceivedSequenceNum(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReceivedSequenceNum = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__receivedSequenceNumBuffer(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedSequenceNumBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_sendKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_sendKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set_sendKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sendKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_receiveKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_receiveKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set_receiveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___receiveKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__sendMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendMacKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__receiveMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receiveMacKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* const&
GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacQueue;
}
constexpr void
GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__sendMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendMacQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* const&
GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacQueue;
}
constexpr void
GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__receiveMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receiveMacQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                             "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length, int32_t extraPrefixBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, offset, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility_EncryptionState::ComputeSendMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "ComputeSendMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility_EncryptionState::ComputeReceiveMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "ComputeReceiveMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, count);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::IsValidSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "IsValidSequenceNum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceNum);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::PutSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PutSequenceNum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sequenceNum);
}
inline uint32_t GlobalNamespace::EncryptionUtility_EncryptionState::GetNextSentSequenceNum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                             "GetNextSentSequenceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility_EncryptionState::MakeSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> baseSeed, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "MakeSeed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, baseSeed, serverSeed, clientSeed);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::EncryptionUtility_EncryptionState::PRF(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed,
                                                                                                    int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PRF", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::PRF_Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, ::ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(), "PRF_Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_EncryptionState* GlobalNamespace::EncryptionUtility_EncryptionState::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EncryptionUtility_EncryptionState*>(preMasterSecret, serverSeed, clientSeed, isClient));
}
/// @brief Convert operator to "::GlobalNamespace::EncryptionUtility_IEncryptionState"
constexpr GlobalNamespace::EncryptionUtility_EncryptionState::operator ::GlobalNamespace::EncryptionUtility_IEncryptionState*() noexcept {
  return static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::EncryptionUtility_IEncryptionState"
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::EncryptionUtility_EncryptionState::i___GlobalNamespace__EncryptionUtility_IEncryptionState() noexcept {
  return static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::EncryptionUtility_EncryptionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::EncryptionUtility_EncryptionState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility_EncryptionState::EncryptionUtility_EncryptionState() {}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c8978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0._CreateEncryptionStateAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (
    ::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::*)()>(&::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22caa40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0*>::get(),
                                                 "<CreateEncryptionStateAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_preMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_preMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_set_preMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preMasterSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_serverSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_serverSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_set_serverSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverSeed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_clientSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_clientSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_set_clientSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientSeed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_isClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr bool const& GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_get_isClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::__cordl_internal_set_isClient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isClient = value;
}
inline void GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::_CreateEncryptionStateAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0*>::get(),
                                                                             "<CreateEncryptionStateAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0* GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility___c__DisplayClass18_0::EncryptionUtility___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
        &::GlobalNamespace::EncryptionUtility::CreateEncryptionState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22c869c;

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
    static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>* (*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
        &::GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x22c630c;

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
  constexpr static std::size_t addrs = 0x22c8980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "IsValidLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::EncryptionUtility_EncryptionState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ByRef<int32_t>, ::ByRef<int32_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::EncryptData)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x22c89a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.TryDecryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::EncryptionUtility_EncryptionState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::GlobalNamespace::EncryptionUtility::TryDecryptData)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x22c9284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility::FastCopyBlock)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x22c9e94;

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
  constexpr static std::size_t addrs = 0x22ca1a8;

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
  constexpr static std::size_t addrs = 0x22ca39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
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
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::EncryptionUtility::CreateEncryptionState(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*, false>(nullptr, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*
GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "CreateEncryptionStateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*, false>(nullptr, ___internal_method, taskUtility,
                                                                                                                                                 preMasterSecret, serverSeed, clientSeed, isClient);
}
inline bool GlobalNamespace::EncryptionUtility::IsValidLength(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "IsValidLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, length);
}
inline void GlobalNamespace::EncryptionUtility::EncryptData(::GlobalNamespace::EncryptionUtility_EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset,
                                                            ::ByRef<int32_t> length, int32_t extraPrefixedData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "EncryptData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state, data, offset, length, extraPrefixedData);
}
inline bool GlobalNamespace::EncryptionUtility::TryDecryptData(::GlobalNamespace::EncryptionUtility_EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> offset,
                                                               ::ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EncryptionUtility*>::get(), "TryDecryptData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_EncryptionState*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
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
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility::EncryptionUtility() {}

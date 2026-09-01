#pragma once
// IWYU pragma private; include "GlobalNamespace\EncryptionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)()>(&::GlobalNamespace::EncryptionUtility_IEncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility_IEncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_IEncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_IEncryptionState::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::EncryptionUtility_IEncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 2 }));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::EncryptionUtility_IEncryptionState::get_isValid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_IEncryptionState::EncryptData(::ArrayW<uint8_t> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length, int32_t extraPrefixBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::EncryptionUtility_IEncryptionState::TryDecryptData(::ArrayW<uint8_t> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, length);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(&::GlobalNamespace::EncryptionUtility_EncryptionState::get_isValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3332320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.EncryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::EncryptData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x333232c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                            { "EncryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.TryDecryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::TryDecryptData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33323b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                { "TryDecryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.ComputeSendMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::ComputeSendMac)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3330da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                             { "ComputeSendMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.ComputeReceiveMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::ComputeReceiveMac)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x33318a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                             { "ComputeReceiveMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.IsValidSequenceNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::IsValidSequenceNum)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x333177c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "IsValidSequenceNum", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PutSequenceNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(uint32_t)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::PutSequenceNum)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3331b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "PutSequenceNum", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.GetNextSentSequenceNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::GetNextSentSequenceNum)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3330cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "GetNextSentSequenceNum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x33301b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.MakeSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::EncryptionUtility_EncryptionState::MakeSeed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3332434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                             { "MakeSeed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PRF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::PRF)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3332518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                             { "PRF", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.PRF_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::EncryptionUtility_EncryptionState::PRF_Hash)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3332604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                             { "PRF_Hash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility_EncryptionState.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EncryptionUtility_EncryptionState::*)()>(&::GlobalNamespace::EncryptionUtility_EncryptionState::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33327c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "Dispose", {}, {} })));
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
constexpr ::ArrayW<bool>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receivedSequenceNumBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedSequenceNumBuffer;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__receivedSequenceNumBuffer(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedSequenceNumBuffer = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_sendKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_sendKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set_sendKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendKey = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_receiveKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get_receiveKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receiveKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set_receiveKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receiveKey = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__sendMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendMacKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__sendMacKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendMacKey = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_get__receiveMacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiveMacKey;
}
constexpr void GlobalNamespace::EncryptionUtility_EncryptionState::__cordl_internal_set__receiveMacKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiveMacKey = value;
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
  this->____sendMacQueue = value;
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
  this->____receiveMacQueue = value;
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::EncryptData(::ArrayW<uint8_t> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length, int32_t extraPrefixBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                          { "EncryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length, extraPrefixBytes);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::TryDecryptData(::ArrayW<uint8_t> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                              { "TryDecryptData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, length);
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility_EncryptionState::ComputeSendMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                           { "ComputeSendMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility_EncryptionState::ComputeReceiveMac(::ArrayW<uint8_t> data, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                           { "ComputeReceiveMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::IsValidSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "IsValidSequenceNum", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceNum);
}
inline bool GlobalNamespace::EncryptionUtility_EncryptionState::PutSequenceNum(uint32_t sequenceNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "PutSequenceNum", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceNum);
}
inline uint32_t GlobalNamespace::EncryptionUtility_EncryptionState::GetNextSentSequenceNum() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "GetNextSentSequenceNum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::_ctor(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed, bool isClient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility_EncryptionState::MakeSeed(::ArrayW<uint8_t> baseSeed, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                           { "MakeSeed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, baseSeed, serverSeed, clientSeed);
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility_EncryptionState::PRF(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                           { "PRF", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::PRF_Hash(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> seed, ::by_ref<int32_t> length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(),
                                                           { "PRF_Hash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, seed, length);
}
inline void GlobalNamespace::EncryptionUtility_EncryptionState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_EncryptionState* GlobalNamespace::EncryptionUtility_EncryptionState::New_ctor(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed,
                                                                                                                          ::ArrayW<uint8_t> clientSeed, bool isClient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EncryptionUtility_EncryptionState*>(preMasterSecret, serverSeed, clientSeed, isClient));
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
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::*)()>(&::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33305c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0._CreateEncryptionStateAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::_CreateEncryptionStateAsync_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33327cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0*>(), { "<CreateEncryptionStateAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_preMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_preMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preMasterSecret;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_set_preMasterSecret(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preMasterSecret = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_serverSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_serverSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverSeed;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_set_serverSeed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverSeed = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_clientSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_clientSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientSeed;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_set_clientSeed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientSeed = value;
}
constexpr bool& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_isClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr bool const& GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_get_isClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isClient;
}
constexpr void GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::__cordl_internal_set_isClient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isClient = value;
}
inline void GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::_CreateEncryptionStateAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0*>(), { "<CreateEncryptionStateAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0* GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility___c__DisplayClass19_0::EncryptionUtility___c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::EncryptionUtility::CreateEncryptionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3330130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                         { "CreateEncryptionState", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.CreateEncryptionStateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>* (*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t>,
                                                                                                                                                       ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3330424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                                                                           { "CreateEncryptionStateAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.IsValidLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::EncryptionUtility::IsValidLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33305c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "IsValidLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.EncryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::EncryptionUtility_EncryptionState*, ::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, int32_t)>(
    &::GlobalNamespace::EncryptionUtility::EncryptData)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x33305dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "EncryptData",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                          ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.TryDecryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::EncryptionUtility_EncryptionState*, ::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::EncryptionUtility::TryDecryptData)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x3331088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "TryDecryptData",
                                                                                        {},
                                                                                        { ::i2c::type_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                          ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::FastCopyBlock)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3331d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                         { "FastCopyBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.FastCopyMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::EncryptionUtility::FastCopyMac)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x33320a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                         { "FastCopyMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EncryptionUtility.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::EncryptionUtility::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3332294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EncryptionUtility::setStaticF__masterSecretSeed(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_masterSecretSeed", ::GlobalNamespace::EncryptionUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility::getStaticF__masterSecretSeed() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_masterSecretSeed", ::GlobalNamespace::EncryptionUtility*>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__keyExpansionSeed(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_keyExpansionSeed", ::GlobalNamespace::EncryptionUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility::getStaticF__keyExpansionSeed() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_keyExpansionSeed", ::GlobalNamespace::EncryptionUtility*>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__tempIV(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_tempIV", ::GlobalNamespace::EncryptionUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility::getStaticF__tempIV() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_tempIV", ::GlobalNamespace::EncryptionUtility*>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__tempHash(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_tempHash", ::GlobalNamespace::EncryptionUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::EncryptionUtility::getStaticF__tempHash() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_tempHash", ::GlobalNamespace::EncryptionUtility*>();
}
inline void GlobalNamespace::EncryptionUtility::setStaticF__aes(::System::Security::Cryptography::Aes* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::Aes*, "_aes", ::GlobalNamespace::EncryptionUtility*>(std::forward<::System::Security::Cryptography::Aes*>(value));
}
inline ::System::Security::Cryptography::Aes* GlobalNamespace::EncryptionUtility::getStaticF__aes() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::Aes*, "_aes", ::GlobalNamespace::EncryptionUtility*>();
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::EncryptionUtility::CreateEncryptionState(::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed,
                                                                                                                        ::ArrayW<uint8_t> clientSeed, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                          { "CreateEncryptionState", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(nullptr, ___internal_method, preMasterSecret, serverSeed, clientSeed, isClient);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*
GlobalNamespace::EncryptionUtility::CreateEncryptionStateAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverSeed, ::ArrayW<uint8_t> clientSeed,
                                                               bool isClient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                                                                         { "CreateEncryptionStateAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*>(nullptr, ___internal_method, taskUtility, preMasterSecret,
                                                                                                                                          serverSeed, clientSeed, isClient);
}
inline bool GlobalNamespace::EncryptionUtility::IsValidLength(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "IsValidLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, length);
}
inline void GlobalNamespace::EncryptionUtility::EncryptData(::GlobalNamespace::EncryptionUtility_EncryptionState* state, ::ArrayW<uint8_t> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length,
                                                            int32_t extraPrefixedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "EncryptData",
                                                                                      {},
                                                                                      { ::i2c::type_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                        ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, data, offset, length, extraPrefixedData);
}
inline bool GlobalNamespace::EncryptionUtility::TryDecryptData(::GlobalNamespace::EncryptionUtility_EncryptionState* state, ::ArrayW<uint8_t> data, ::by_ref<int32_t> offset,
                                                               ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "TryDecryptData",
                                                                                      {},
                                                                                      { ::i2c::type_of<::GlobalNamespace::EncryptionUtility_EncryptionState*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                        ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, data, offset, length);
}
inline void GlobalNamespace::EncryptionUtility::FastCopyBlock(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                       { "FastCopyBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
inline void GlobalNamespace::EncryptionUtility::FastCopyMac(::ArrayW<uint8_t> inArr, int32_t inOff, ::ArrayW<uint8_t> outArr, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(),
                                       { "FastCopyMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inArr, inOff, outArr, outOff);
}
inline void GlobalNamespace::EncryptionUtility::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EncryptionUtility*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EncryptionUtility::EncryptionUtility() {}

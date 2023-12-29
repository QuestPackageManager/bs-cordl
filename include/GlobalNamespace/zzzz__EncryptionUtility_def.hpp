#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionUtility)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
class __EncryptionUtility____c__DisplayClass18_0;
}
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
namespace GlobalNamespace {
class __EncryptionUtility__EncryptionState;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EncryptionUtility;
}
namespace GlobalNamespace {
class __EncryptionUtility__EncryptionState;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
class __EncryptionUtility____c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EncryptionUtility);
MARK_REF_PTR_T(::GlobalNamespace::__EncryptionUtility__EncryptionState);
MARK_REF_PTR_T(::GlobalNamespace::__EncryptionUtility__IEncryptionState);
MARK_REF_PTR_T(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0);
// Type: ::IEncryptionState
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12651))
// CS Name: ::EncryptionUtility::IEncryptionState*
class CORDL_TYPE __EncryptionUtility__IEncryptionState {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_isValid addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isValid();

  /// @brief Method EncryptData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes);

  /// @brief Method TryDecryptData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length);

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility__IEncryptionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EncryptionUtility__IEncryptionState(__EncryptionUtility__IEncryptionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility__IEncryptionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EncryptionUtility__IEncryptionState(__EncryptionUtility__IEncryptionState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::EncryptionState
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12652))
// CS Name: ::EncryptionUtility::EncryptionState*
class CORDL_TYPE __EncryptionUtility__EncryptionState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isValid, offset 0x10, size 0x1
  __declspec(property(get = __get__isValid, put = __set__isValid)) bool _isValid;

  /// @brief Field _lastSentSequenceNum, offset 0x14, size 0x4
  __declspec(property(get = __get__lastSentSequenceNum, put = __set__lastSentSequenceNum)) int32_t _lastSentSequenceNum;

  /// @brief Field _hasReceivedSequenceNum, offset 0x18, size 0x1
  __declspec(property(get = __get__hasReceivedSequenceNum, put = __set__hasReceivedSequenceNum)) bool _hasReceivedSequenceNum;

  /// @brief Field _lastReceivedSequenceNum, offset 0x1c, size 0x4
  __declspec(property(get = __get__lastReceivedSequenceNum, put = __set__lastReceivedSequenceNum)) uint32_t _lastReceivedSequenceNum;

  /// @brief Field _receivedSequenceNumBuffer, offset 0x20, size 0x8
  __declspec(property(get = __get__receivedSequenceNumBuffer, put = __set__receivedSequenceNumBuffer))::ArrayW<bool, ::Array<bool>*> _receivedSequenceNumBuffer;

  /// @brief Field sendKey, offset 0x28, size 0x8
  __declspec(property(get = __get_sendKey, put = __set_sendKey))::ArrayW<uint8_t, ::Array<uint8_t>*> sendKey;

  /// @brief Field receiveKey, offset 0x30, size 0x8
  __declspec(property(get = __get_receiveKey, put = __set_receiveKey))::ArrayW<uint8_t, ::Array<uint8_t>*> receiveKey;

  /// @brief Field _sendMacKey, offset 0x38, size 0x8
  __declspec(property(get = __get__sendMacKey, put = __set__sendMacKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _sendMacKey;

  /// @brief Field _receiveMacKey, offset 0x40, size 0x8
  __declspec(property(get = __get__receiveMacKey, put = __set__receiveMacKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _receiveMacKey;

  /// @brief Field _sendMacQueue, offset 0x48, size 0x8
  __declspec(property(get = __get__sendMacQueue, put = __set__sendMacQueue))::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* _sendMacQueue;

  /// @brief Field _receiveMacQueue, offset 0x50, size 0x8
  __declspec(property(get = __get__receiveMacQueue, put = __set__receiveMacQueue))::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* _receiveMacQueue;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Convert operator to "::GlobalNamespace::__EncryptionUtility__IEncryptionState"
  constexpr operator ::GlobalNamespace::__EncryptionUtility__IEncryptionState*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get__isValid();

  constexpr bool const& __get__isValid() const;

  constexpr void __set__isValid(bool value);

  constexpr int32_t& __get__lastSentSequenceNum();

  constexpr int32_t const& __get__lastSentSequenceNum() const;

  constexpr void __set__lastSentSequenceNum(int32_t value);

  constexpr bool& __get__hasReceivedSequenceNum();

  constexpr bool const& __get__hasReceivedSequenceNum() const;

  constexpr void __set__hasReceivedSequenceNum(bool value);

  constexpr uint32_t& __get__lastReceivedSequenceNum();

  constexpr uint32_t const& __get__lastReceivedSequenceNum() const;

  constexpr void __set__lastReceivedSequenceNum(uint32_t value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get__receivedSequenceNumBuffer();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get__receivedSequenceNumBuffer() const;

  constexpr void __set__receivedSequenceNumBuffer(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sendKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sendKey() const;

  constexpr void __set_sendKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_receiveKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_receiveKey() const;

  constexpr void __set_receiveKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__sendMacKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__sendMacKey() const;

  constexpr void __set__sendMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__receiveMacKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__receiveMacKey() const;

  constexpr void __set__receiveMacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& __get__sendMacQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*> const& __get__sendMacQueue() const;

  constexpr void __set__sendMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value);

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*& __get__receiveMacQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>*> const& __get__receiveMacQueue() const;

  constexpr void __set__receiveMacQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* value);

  /// @brief Method get_isValid addr 0xdb0610 size 0x18 virtual true final true
  inline bool get_isValid();

  /// @brief Method EncryptData addr 0xdb0628 size 0x84 virtual true final true
  inline void EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length, int32_t extraPrefixBytes);

  /// @brief Method TryDecryptData addr 0xdb06ac size 0x7c virtual true final true
  inline bool TryDecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length);

  /// @brief Method ComputeSendMac addr 0xdaee00 size 0x248 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeSendMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method ComputeReceiveMac addr 0xdafa7c size 0x248 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeReceiveMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method IsValidSequenceNum addr 0xdaf950 size 0x12c virtual false final false
  inline bool IsValidSequenceNum(uint32_t sequenceNum);

  /// @brief Method PutSequenceNum addr 0xdafcc4 size 0x204 virtual false final false
  inline bool PutSequenceNum(uint32_t sequenceNum);

  /// @brief Method GetNextSentSequenceNum addr 0xdaedf4 size 0xc virtual false final false
  inline uint32_t GetNextSentSequenceNum();

  static inline ::GlobalNamespace::__EncryptionUtility__EncryptionState* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient);

  /// @brief Method .ctor addr 0xdae12c size 0x260 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient);

  /// @brief Method MakeSeed addr 0xdb0728 size 0xe0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MakeSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> baseSeed, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed);

  /// @brief Method PRF addr 0xdb0808 size 0xe8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t length);

  /// @brief Method PRF_Hash addr 0xdb08f0 size 0x1ec virtual false final false
  static inline void PRF_Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, ByRef<int32_t> length);

  /// @brief Method Dispose addr 0xdb0adc size 0x18 virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility__EncryptionState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EncryptionUtility__EncryptionState(__EncryptionUtility__EncryptionState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility__EncryptionState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EncryptionUtility__EncryptionState(__EncryptionUtility__EncryptionState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EncryptionUtility__EncryptionState();

public:
  /// @brief Field _isValid, offset: 0x10, size: 0x1, def value: None
  bool ____isValid;

  /// @brief Field _lastSentSequenceNum, offset: 0x14, size: 0x4, def value: None
  int32_t ____lastSentSequenceNum;

  /// @brief Field _hasReceivedSequenceNum, offset: 0x18, size: 0x1, def value: None
  bool ____hasReceivedSequenceNum;

  /// @brief Field _lastReceivedSequenceNum, offset: 0x1c, size: 0x4, def value: None
  uint32_t ____lastReceivedSequenceNum;

  /// @brief Field _receivedSequenceNumBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____receivedSequenceNumBuffer;

  /// @brief Field sendKey, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sendKey;

  /// @brief Field receiveKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___receiveKey;

  /// @brief Field _sendMacKey, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____sendMacKey;

  /// @brief Field _receiveMacKey, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____receiveMacKey;

  /// @brief Field _sendMacQueue, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* ____sendMacQueue;

  /// @brief Field _receiveMacQueue, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::Org::BouncyCastle::Crypto::Macs::HMac*>* ____receiveMacQueue;

  /// @brief Field kReceivedSequencNumBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t kReceivedSequencNumBufferLength{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EncryptionUtility__EncryptionState, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____isValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____lastSentSequenceNum) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____hasReceivedSequenceNum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____lastReceivedSequenceNum) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____receivedSequenceNumBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ___sendKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ___receiveKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____sendMacKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____receiveMacKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____sendMacQueue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility__EncryptionState, ____receiveMacQueue) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12653))
// CS Name: ::EncryptionUtility::<>c__DisplayClass18_0*
class CORDL_TYPE __EncryptionUtility____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field preMasterSecret, offset 0x10, size 0x8
  __declspec(property(get = __get_preMasterSecret, put = __set_preMasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret;

  /// @brief Field serverSeed, offset 0x18, size 0x8
  __declspec(property(get = __get_serverSeed, put = __set_serverSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed;

  /// @brief Field clientSeed, offset 0x20, size 0x8
  __declspec(property(get = __get_clientSeed, put = __set_clientSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed;

  /// @brief Field isClient, offset 0x28, size 0x1
  __declspec(property(get = __get_isClient, put = __set_isClient)) bool isClient;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_preMasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_preMasterSecret() const;

  constexpr void __set_preMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serverSeed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serverSeed() const;

  constexpr void __set_serverSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_clientSeed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_clientSeed() const;

  constexpr void __set_clientSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_isClient();

  constexpr bool const& __get_isClient() const;

  constexpr void __set_isClient(bool value);

  static inline ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor addr 0xdae38c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateEncryptionStateAsync>b__0 addr 0xdb0af4 size 0x8c virtual false final false
  inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _CreateEncryptionStateAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EncryptionUtility____c__DisplayClass18_0(__EncryptionUtility____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EncryptionUtility____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EncryptionUtility____c__DisplayClass18_0(__EncryptionUtility____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EncryptionUtility____c__DisplayClass18_0();

public:
  /// @brief Field preMasterSecret, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___preMasterSecret;

  /// @brief Field serverSeed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serverSeed;

  /// @brief Field clientSeed, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientSeed;

  /// @brief Field isClient, offset: 0x28, size: 0x1, def value: None
  bool ___isClient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0, ___preMasterSecret) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0, ___serverSeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0, ___clientSeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0, ___isClient) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EncryptionUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12654))
// CS Name: ::EncryptionUtility*
class CORDL_TYPE EncryptionUtility : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0;

  using EncryptionState = ::GlobalNamespace::__EncryptionUtility__EncryptionState;

  using IEncryptionState = ::GlobalNamespace::__EncryptionUtility__IEncryptionState;

  /// @brief Field _masterSecretSeed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__masterSecretSeed, put = setStaticF__masterSecretSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> _masterSecretSeed;

  /// @brief Field _keyExpansionSeed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__keyExpansionSeed, put = setStaticF__keyExpansionSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> _keyExpansionSeed;

  /// @brief Field _tempIV, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__tempIV, put = setStaticF__tempIV))::ArrayW<uint8_t, ::Array<uint8_t>*> _tempIV;

  /// @brief Field _tempHash, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__tempHash, put = setStaticF__tempHash))::ArrayW<uint8_t, ::Array<uint8_t>*> _tempHash;

  /// @brief Field _aes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__aes, put = setStaticF__aes))::System::Security::Cryptography::AesCryptoServiceProvider* _aes;

  static inline void setStaticF__masterSecretSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__masterSecretSeed();

  static inline void setStaticF__keyExpansionSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__keyExpansionSeed();

  static inline void setStaticF__tempIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__tempIV();

  static inline void setStaticF__tempHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__tempHash();

  static inline void setStaticF__aes(::System::Security::Cryptography::AesCryptoServiceProvider* value);

  static inline ::System::Security::Cryptography::AesCryptoServiceProvider* getStaticF__aes();

  /// @brief Method CreateEncryptionState addr 0xdae0a4 size 0x88 virtual false final false
  static inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* CreateEncryptionState(::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient);

  /// @brief Method CreateEncryptionStateAsync addr 0xdabce0 size 0x16c virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*
  CreateEncryptionStateAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverSeed,
                             ::ArrayW<uint8_t, ::Array<uint8_t>*> clientSeed, bool isClient);

  /// @brief Method IsValidLength addr 0xdae394 size 0x20 virtual false final false
  static inline bool IsValidLength(int32_t length);

  /// @brief Method EncryptData addr 0xdae3b4 size 0xa40 virtual false final false
  static inline void EncryptData(::GlobalNamespace::__EncryptionUtility__EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length,
                                 int32_t extraPrefixedData);

  /// @brief Method TryDecryptData addr 0xdaf048 size 0x908 virtual false final false
  static inline bool TryDecryptData(::GlobalNamespace::__EncryptionUtility__EncryptionState* state, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> offset, ByRef<int32_t> length);

  /// @brief Method FastCopyBlock addr 0xdafec8 size 0x314 virtual false final false
  static inline void FastCopyBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inArr, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outArr, int32_t outOff);

  /// @brief Method FastCopyMac addr 0xdb01dc size 0x1f4 virtual false final false
  static inline void FastCopyMac(::ArrayW<uint8_t, ::Array<uint8_t>*> inArr, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outArr, int32_t outOff);

  /// @brief Method Log addr 0xdb03d0 size 0x8c virtual false final false
  static inline void Log(::StringW message);

  /// @brief Method LogV addr 0xdb045c size 0x8c virtual false final false
  static inline void LogV(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionUtility(EncryptionUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionUtility(EncryptionUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionUtility();

public:
  /// @brief Field kMacHashSize offset 0xffffffff size 0x4
  static constexpr int32_t kMacHashSize{ static_cast<int32_t>(0xa) };

  /// @brief Field kSequenceNumberSize offset 0xffffffff size 0x4
  static constexpr int32_t kSequenceNumberSize{ static_cast<int32_t>(0x4) };

  /// @brief Field kMaxPadding offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPadding{ static_cast<int32_t>(0x20) };

  /// @brief Field kMacKeySize offset 0xffffffff size 0x4
  static constexpr int32_t kMacKeySize{ static_cast<int32_t>(0x40) };

  /// @brief Field kKeySize offset 0xffffffff size 0x4
  static constexpr int32_t kKeySize{ static_cast<int32_t>(0x20) };

  /// @brief Field kBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t kBlockSize{ static_cast<int32_t>(0x10) };

  /// @brief Field kIvSize offset 0xffffffff size 0x4
  static constexpr int32_t kIvSize{ static_cast<int32_t>(0x10) };

  /// @brief Field kMasterKeySize offset 0xffffffff size 0x4
  static constexpr int32_t kMasterKeySize{ static_cast<int32_t>(0x30) };

  /// @brief Field kRandomBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t kRandomBlockSize{ static_cast<int32_t>(0x20) };

  /// @brief Field kExtraSize offset 0xffffffff size 0x4
  static constexpr int32_t kExtraSize{ static_cast<int32_t>(0x3e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EncryptionUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EncryptionUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EncryptionUtility*, "", "EncryptionUtility");
NEED_NO_BOX(::GlobalNamespace::__EncryptionUtility__EncryptionState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EncryptionUtility__EncryptionState*, "", "EncryptionUtility/EncryptionState");
NEED_NO_BOX(::GlobalNamespace::__EncryptionUtility__IEncryptionState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EncryptionUtility__IEncryptionState*, "", "EncryptionUtility/IEncryptionState");
NEED_NO_BOX(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EncryptionUtility____c__DisplayClass18_0*, "", "EncryptionUtility/<>c__DisplayClass18_0");

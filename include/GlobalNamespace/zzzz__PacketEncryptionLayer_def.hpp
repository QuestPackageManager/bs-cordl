#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketEncryptionLayer)
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__EncryptionStatistics;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__EncryptionStatistics;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PacketEncryptionLayer);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25);
MARK_VAL_T(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27);
// Type: ::EncryptionStatistics
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12805))
// CS Name: ::PacketEncryptionLayer::EncryptionStatistics*
class CORDL_TYPE __PacketEncryptionLayer__EncryptionStatistics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _packetsReceivedPlaintext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedPlaintext, put = __cordl_internal_set__packetsReceivedPlaintext)) int64_t _packetsReceivedPlaintext;

  /// @brief Field _packetsReceivedEncrypted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedEncrypted, put = __cordl_internal_set__packetsReceivedEncrypted)) int64_t _packetsReceivedEncrypted;

  /// @brief Field _packetsReceivedRejected, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedRejected, put = __cordl_internal_set__packetsReceivedRejected)) int64_t _packetsReceivedRejected;

  /// @brief Field _packetsSentPlaintext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentPlaintext, put = __cordl_internal_set__packetsSentPlaintext)) int64_t _packetsSentPlaintext;

  /// @brief Field _packetsSentEncrypted, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentEncrypted, put = __cordl_internal_set__packetsSentEncrypted)) int64_t _packetsSentEncrypted;

  /// @brief Field _packetsSentRejected, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentRejected, put = __cordl_internal_set__packetsSentRejected)) int64_t _packetsSentRejected;

  /// @brief Field _encryptionProcessingTime, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionProcessingTime, put = __cordl_internal_set__encryptionProcessingTime)) int64_t _encryptionProcessingTime;

  /// @brief Field _decryptionProcessingTime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__decryptionProcessingTime, put = __cordl_internal_set__decryptionProcessingTime)) int64_t _decryptionProcessingTime;

  __declspec(property(get = get_packetsReceivedPlaintext)) int64_t packetsReceivedPlaintext;

  __declspec(property(get = get_packetsReceivedEncrypted)) int64_t packetsReceivedEncrypted;

  __declspec(property(get = get_packetsReceivedRejected)) int64_t packetsReceivedRejected;

  __declspec(property(get = get_packetsSentPlaintext)) int64_t packetsSentPlaintext;

  __declspec(property(get = get_packetsSentEncrypted)) int64_t packetsSentEncrypted;

  __declspec(property(get = get_packetsSentRejected)) int64_t packetsSentRejected;

  __declspec(property(get = get_encryptionProcessingTime)) int64_t encryptionProcessingTime;

  __declspec(property(get = get_decryptionProcessingTime)) int64_t decryptionProcessingTime;

  constexpr int64_t& __cordl_internal_get__packetsReceivedPlaintext();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedPlaintext() const;

  constexpr void __cordl_internal_set__packetsReceivedPlaintext(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsReceivedEncrypted();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedEncrypted() const;

  constexpr void __cordl_internal_set__packetsReceivedEncrypted(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsReceivedRejected();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedRejected() const;

  constexpr void __cordl_internal_set__packetsReceivedRejected(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsSentPlaintext();

  constexpr int64_t const& __cordl_internal_get__packetsSentPlaintext() const;

  constexpr void __cordl_internal_set__packetsSentPlaintext(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsSentEncrypted();

  constexpr int64_t const& __cordl_internal_get__packetsSentEncrypted() const;

  constexpr void __cordl_internal_set__packetsSentEncrypted(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsSentRejected();

  constexpr int64_t const& __cordl_internal_get__packetsSentRejected() const;

  constexpr void __cordl_internal_set__packetsSentRejected(int64_t value);

  constexpr int64_t& __cordl_internal_get__encryptionProcessingTime();

  constexpr int64_t const& __cordl_internal_get__encryptionProcessingTime() const;

  constexpr void __cordl_internal_set__encryptionProcessingTime(int64_t value);

  constexpr int64_t& __cordl_internal_get__decryptionProcessingTime();

  constexpr int64_t const& __cordl_internal_get__decryptionProcessingTime() const;

  constexpr void __cordl_internal_set__decryptionProcessingTime(int64_t value);

  /// @brief Method get_packetsReceivedPlaintext, addr 0xe7af10, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedPlaintext();

  /// @brief Method get_packetsReceivedEncrypted, addr 0xe7af1c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedEncrypted();

  /// @brief Method get_packetsReceivedRejected, addr 0xe7af28, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedRejected();

  /// @brief Method get_packetsSentPlaintext, addr 0xe7af34, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentPlaintext();

  /// @brief Method get_packetsSentEncrypted, addr 0xe7af40, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentEncrypted();

  /// @brief Method get_packetsSentRejected, addr 0xe7af4c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentRejected();

  /// @brief Method get_encryptionProcessingTime, addr 0xe7af58, size 0x7c, virtual false, abstract: false, final false
  inline int64_t get_encryptionProcessingTime();

  /// @brief Method get_decryptionProcessingTime, addr 0xe7afd4, size 0x7c, virtual false, abstract: false, final false
  inline int64_t get_decryptionProcessingTime();

  /// @brief Method IncrementPacketsReceivedPlaintext, addr 0xe79350, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedPlaintext();

  /// @brief Method IncrementPacketsReceivedEncrypted, addr 0xe79338, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedEncrypted();

  /// @brief Method IncrementPacketsReceivedRejected, addr 0xe7935c, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedRejected();

  /// @brief Method IncrementPacketsSentPlaintext, addr 0xe79700, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentPlaintext();

  /// @brief Method IncrementPacketsSentEncrypted, addr 0xe796e8, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentEncrypted();

  /// @brief Method IncrementPacketsSentRejected, addr 0xe7970c, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentRejected();

  /// @brief Method AddEncryptionProcessingTime, addr 0xe796f4, size 0xc, virtual false, abstract: false, final false
  inline void AddEncryptionProcessingTime(int64_t time);

  /// @brief Method AddDecryptionProcessingTime, addr 0xe79344, size 0xc, virtual false, abstract: false, final false
  inline void AddDecryptionProcessingTime(int64_t time);

  static inline ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* New_ctor();

  /// @brief Method .ctor, addr 0xe78e5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__EncryptionStatistics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PacketEncryptionLayer__EncryptionStatistics(__PacketEncryptionLayer__EncryptionStatistics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__EncryptionStatistics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PacketEncryptionLayer__EncryptionStatistics(__PacketEncryptionLayer__EncryptionStatistics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer__EncryptionStatistics();

public:
  /// @brief Field _packetsReceivedPlaintext, offset: 0x10, size: 0x8, def value: None
  int64_t ____packetsReceivedPlaintext;

  /// @brief Field _packetsReceivedEncrypted, offset: 0x18, size: 0x8, def value: None
  int64_t ____packetsReceivedEncrypted;

  /// @brief Field _packetsReceivedRejected, offset: 0x20, size: 0x8, def value: None
  int64_t ____packetsReceivedRejected;

  /// @brief Field _packetsSentPlaintext, offset: 0x28, size: 0x8, def value: None
  int64_t ____packetsSentPlaintext;

  /// @brief Field _packetsSentEncrypted, offset: 0x30, size: 0x8, def value: None
  int64_t ____packetsSentEncrypted;

  /// @brief Field _packetsSentRejected, offset: 0x38, size: 0x8, def value: None
  int64_t ____packetsSentRejected;

  /// @brief Field _encryptionProcessingTime, offset: 0x40, size: 0x8, def value: None
  int64_t ____encryptionProcessingTime;

  /// @brief Field _decryptionProcessingTime, offset: 0x48, size: 0x8, def value: None
  int64_t ____decryptionProcessingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsReceivedPlaintext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsReceivedEncrypted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsReceivedRejected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsSentPlaintext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsSentEncrypted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____packetsSentRejected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____encryptionProcessingTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, ____decryptionProcessingTime) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12806))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass4_0*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field port, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr void __cordl_internal_set_port(int32_t value);

  static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor, addr 0xe7b254, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetSortedEncryptionStates>b__0, addr 0xe7b348, size 0x74, virtual false, abstract: false, final false
  inline int32_t _GetSortedEncryptionStates_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*> kvp);

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0();

public:
  /// @brief Field port, offset: 0x10, size: 0x4, def value: None
  int32_t ___port;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0, ___port) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12807))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* __9;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1,
                             put = setStaticF___9__4_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>,
                                                                         ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* __9__4_1;

  static inline void setStaticF___9(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* value);

  static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* getStaticF___9();

  static inline void setStaticF___9__4_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>,
                                                          ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>,
                                 ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*
  getStaticF___9__4_1();

  static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* New_ctor();

  /// @brief Method .ctor, addr 0xe7b420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetSortedEncryptionStates>b__4_1, addr 0xe7b428, size 0x3c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState*
  _GetSortedEncryptionStates_b__4_1(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*> kvp);

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PacketEncryptionLayer__PendingEncryptionStateList____c(__PacketEncryptionLayer__PendingEncryptionStateList____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PacketEncryptionLayer__PendingEncryptionStateList____c(__PacketEncryptionLayer__PendingEncryptionStateList____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer__PendingEncryptionStateList____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12808))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass8_0*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptionState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptionState, put = __cordl_internal_set_encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState;

  constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& __cordl_internal_get_encryptionState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __cordl_internal_get_encryptionState() const;

  constexpr void __cordl_internal_set_encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value);

  static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor, addr 0xe7b2c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Remove>b__0, addr 0xe7b464, size 0x48, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*> kvp);

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0();

public:
  /// @brief Field encryptionState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__EncryptionUtility__IEncryptionState* ___encryptionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0, ___encryptionState) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PendingEncryptionStateList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12809))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;

  using __c = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;

  /// @brief Field _pendingStatesByPort, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__pendingStatesByPort,
               put = __cordl_internal_set__pendingStatesByPort))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* _pendingStatesByPort;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*& __cordl_internal_get__pendingStatesByPort();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> const&
  __cordl_internal_get__pendingStatesByPort() const;

  constexpr void __cordl_internal_set__pendingStatesByPort(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* value);

  /// @brief Method get_isEmpty, addr 0xe79d08, size 0x5c, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method Dispose, addr 0xe7b050, size 0x204, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetSortedEncryptionStates, addr 0xe7a798, size 0x1c4, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__EncryptionUtility__IEncryptionState*, ::Array<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> GetSortedEncryptionStates(int32_t port);

  /// @brief Method TryGetEncryptionState, addr 0xe7a450, size 0x1ec, virtual false, abstract: false, final false
  inline bool TryGetEncryptionState(int32_t port, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> encryptionState);

  /// @brief Method Add, addr 0xe7b25c, size 0x68, virtual false, abstract: false, final false
  inline void Add(int32_t port, ::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState);

  /// @brief Method Remove, addr 0xe79cb0, size 0x58, virtual false, abstract: false, final false
  inline bool Remove(int32_t port);

  /// @brief Method Remove, addr 0xe7ac0c, size 0x174, virtual false, abstract: false, final false
  inline bool Remove(int32_t port, ::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState);

  static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList* New_ctor();

  /// @brief Method .ctor, addr 0xe7b2cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PacketEncryptionLayer__PendingEncryptionStateList(__PacketEncryptionLayer__PendingEncryptionStateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PacketEncryptionLayer__PendingEncryptionStateList(__PacketEncryptionLayer__PendingEncryptionStateList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer__PendingEncryptionStateList();

public:
  /// @brief Field _pendingStatesByPort, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* ____pendingStatesByPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList, ____pendingStatesByPort) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<AddEncryptedEndpointAsync>d__25
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), TypeDefinitionIndex(TypeDefinitionIndex(12621)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 909 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 909 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12810)) CS Name: ::PacketEncryptionLayer::<AddEncryptedEndpointAsync>d__25
struct CORDL_TYPE __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe7b4ac, size 0x35c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe7b808, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None
  // }]
  constexpr __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __t__builder,
      ::GlobalNamespace::PacketEncryptionLayer* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient, ::System::Net::IPEndPoint* endPoint,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PacketEncryptionLayer* __4__this;

  /// @brief Field preMasterSecret, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret;

  /// @brief Field serverRandom, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field clientRandom, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field isClient, offset: 0x40, size: 0x1, def value: None
  bool isClient;

  /// @brief Field endPoint, offset: 0x48, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, preMasterSecret) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, serverRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, clientRandom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, isClient) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, endPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<AddPendingEncryptedEndpointAsync>d__27
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(12621)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 909 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12811)) CS Name:
// ::PacketEncryptionLayer::<AddPendingEncryptedEndpointAsync>d__27
struct CORDL_TYPE __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe7b860, size 0x434, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe7bc94, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "",
  // def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::PacketEncryptionLayer* __4__this,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient,
      ::System::Net::IPEndPoint* endPoint, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PacketEncryptionLayer* __4__this;

  /// @brief Field preMasterSecret, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret;

  /// @brief Field serverRandom, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field clientRandom, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field isClient, offset: 0x40, size: 0x1, def value: None
  bool isClient;

  /// @brief Field endPoint, offset: 0x48, size: 0x8, def value: None
  ::System::Net::IPEndPoint* endPoint;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, preMasterSecret) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, serverRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, clientRandom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, isClient) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, endPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PacketEncryptionLayer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14255))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12812))
// CS Name: ::PacketEncryptionLayer*
class CORDL_TYPE PacketEncryptionLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
  // Declarations
  using _AddPendingEncryptedEndpointAsync_d__27 = ::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;

  using _AddEncryptedEndpointAsync_d__25 = ::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;

  using PendingEncryptionStateList = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList;

  using EncryptionStatistics = ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics;

  /// @brief Field statistics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_statistics, put = __cordl_internal_set_statistics))::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* statistics;

  /// @brief Field _taskUtility, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _encryptionStates, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__encryptionStates,
      put = __cordl_internal_set__encryptionStates))::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* _encryptionStates;

  /// @brief Field _pendingEncryptionStates, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingEncryptionStates, put = __cordl_internal_set__pendingEncryptionStates))::GlobalNamespace::ExpiringDictionary_2<
      ::System::Net::IPAddress*, ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>* _pendingEncryptionStates;

  /// @brief Field _unencryptedTrafficFilter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__unencryptedTrafficFilter, put = __cordl_internal_set__unencryptedTrafficFilter))::ArrayW<uint8_t, ::Array<uint8_t>*> _unencryptedTrafficFilter;

  /// @brief Field <filterUnencryptedTraffic>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__filterUnencryptedTraffic_k__BackingField,
                      put = __cordl_internal_set__filterUnencryptedTraffic_k__BackingField)) bool _filterUnencryptedTraffic_k__BackingField;

  /// @brief Field <enableStatistics>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__enableStatistics_k__BackingField, put = __cordl_internal_set__enableStatistics_k__BackingField)) bool _enableStatistics_k__BackingField;

  /// @brief Field _stopwatch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__stopwatch, put = setStaticF__stopwatch))::System::Diagnostics::Stopwatch* _stopwatch;

  __declspec(property(get = get_filterUnencryptedTraffic, put = set_filterUnencryptedTraffic)) bool filterUnencryptedTraffic;

  __declspec(property(get = get_enableStatistics, put = set_enableStatistics)) bool enableStatistics;

  constexpr ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*& __cordl_internal_get_statistics();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*> const& __cordl_internal_get_statistics() const;

  constexpr void __cordl_internal_set_statistics(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* value);

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility() const;

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*& __cordl_internal_get__encryptionStates();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> const&
  __cordl_internal_get__encryptionStates() const;

  constexpr void __cordl_internal_set__encryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* value);

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>*&
  __cordl_internal_get__pendingEncryptionStates();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>*> const&
  __cordl_internal_get__pendingEncryptionStates() const;

  constexpr void
  __cordl_internal_set__pendingEncryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__unencryptedTrafficFilter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__unencryptedTrafficFilter() const;

  constexpr void __cordl_internal_set__unencryptedTrafficFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __cordl_internal_get__filterUnencryptedTraffic_k__BackingField();

  constexpr bool const& __cordl_internal_get__filterUnencryptedTraffic_k__BackingField() const;

  constexpr void __cordl_internal_set__filterUnencryptedTraffic_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__enableStatistics_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableStatistics_k__BackingField() const;

  constexpr void __cordl_internal_set__enableStatistics_k__BackingField(bool value);

  static inline void setStaticF__stopwatch(::System::Diagnostics::Stopwatch* value);

  static inline ::System::Diagnostics::Stopwatch* getStaticF__stopwatch();

  /// @brief Method get_filterUnencryptedTraffic, addr 0xe78d14, size 0x8, virtual false, abstract: false, final false
  inline bool get_filterUnencryptedTraffic();

  /// @brief Method set_filterUnencryptedTraffic, addr 0xe78d1c, size 0xc, virtual false, abstract: false, final false
  inline void set_filterUnencryptedTraffic(bool value);

  /// @brief Method get_enableStatistics, addr 0xe78d28, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableStatistics();

  /// @brief Method set_enableStatistics, addr 0xe78d30, size 0xc, virtual false, abstract: false, final false
  inline void set_enableStatistics(bool value);

  static inline ::GlobalNamespace::PacketEncryptionLayer* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method .ctor, addr 0xe78d3c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method ProcessInboundPacket, addr 0xe78e64, size 0x1b8, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset, ByRef<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0xe79368, size 0x198, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset, ByRef<int32_t> length);

  /// @brief Method SetUnencryptedTrafficFilter, addr 0xe79718, size 0x8, virtual false, abstract: false, final false
  inline void SetUnencryptedTrafficFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> unencryptedTrafficFilter);

  /// @brief Method AddEncryptedEndpoint, addr 0xe79720, size 0x168, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* AddEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
                                                                                        bool isClient);

  /// @brief Method AddEncryptedEndpointAsync, addr 0xe79888, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* AddEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint,
                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient);

  /// @brief Method RemoveEncryptedEndpoint, addr 0xe799b4, size 0x2fc, virtual false, abstract: false, final false
  inline bool RemoveEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptedState);

  /// @brief Method AddPendingEncryptedEndpointAsync, addr 0xe79d64, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AddPendingEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient);

  /// @brief Method PollUpdate, addr 0xe79e70, size 0x1b4, virtual false, abstract: false, final false
  inline void PollUpdate();

  /// @brief Method RemoveAllEndpoints, addr 0xe7a024, size 0x1b4, virtual false, abstract: false, final false
  inline void RemoveAllEndpoints();

  /// @brief Method TryGetEncryptionState, addr 0xe7a1d8, size 0x120, virtual false, abstract: false, final false
  inline bool TryGetEncryptionState(::System::Net::IPEndPoint* endPoint, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> state);

  /// @brief Method TryGetPendingEncryptionState, addr 0xe7a2f8, size 0x158, virtual false, abstract: false, final false
  inline bool TryGetPendingEncryptionState(::System::Net::IPEndPoint* endPoint, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> state);

  /// @brief Method TryGetPotentialPendingEncryptionStates, addr 0xe7a63c, size 0x15c, virtual false, abstract: false, final false
  inline bool TryGetPotentialPendingEncryptionStates(
      ::System::Net::IPEndPoint* endPoint,
      ByRef<::ArrayW<::GlobalNamespace::__EncryptionUtility__IEncryptionState*, ::Array<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*>> encryptionStates);

  /// @brief Method PromotePendingEncryptionState, addr 0xe7a95c, size 0x2b0, virtual false, abstract: false, final false
  inline void PromotePendingEncryptionState(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::__EncryptionUtility__IEncryptionState* state);

  /// @brief Method MatchesFilter, addr 0xe7ad80, size 0x78, virtual false, abstract: false, final false
  inline bool MatchesFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method ProcessInboundPacketInternal, addr 0xe7901c, size 0x31c, virtual false, abstract: false, final false
  inline bool ProcessInboundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset, ByRef<int32_t> length,
                                           ByRef<bool> encrypted);

  /// @brief Method ProcessOutBoundPacketInternal, addr 0xe79500, size 0x1e8, virtual false, abstract: false, final false
  inline bool ProcessOutBoundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset, ByRef<int32_t> length,
                                            ByRef<bool> encrypted);

  /// @brief Method Log, addr 0xe7adf8, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogV, addr 0xe7ae84, size 0x8c, virtual false, abstract: false, final false
  static inline void LogV(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketEncryptionLayer(PacketEncryptionLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketEncryptionLayer(PacketEncryptionLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer();

public:
  /// @brief Field statistics, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* ___statistics;

  /// @brief Field _taskUtility, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _encryptionStates, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* ____encryptionStates;

  /// @brief Field _pendingEncryptionStates, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>* ____pendingEncryptionStates;

  /// @brief Field _unencryptedTrafficFilter, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____unencryptedTrafficFilter;

  /// @brief Field <filterUnencryptedTraffic>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____filterUnencryptedTraffic_k__BackingField;

  /// @brief Field <enableStatistics>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____enableStatistics_k__BackingField;

  /// @brief Field kEncryptedPacketType offset 0xffffffff size 0x1
  static constexpr uint8_t kEncryptedPacketType{ static_cast<uint8_t>(0x1u) };

  /// @brief Field kPlaintextPacketType offset 0xffffffff size 0x1
  static constexpr uint8_t kPlaintextPacketType{ static_cast<uint8_t>(0x0u) };

  /// @brief Field kEncryptionStateTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kEncryptionStateTimeoutMs{ static_cast<int64_t>(0x493e0) };

  /// @brief Field kPendingEncryptionStateTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kPendingEncryptionStateTimeoutMs{ static_cast<int64_t>(0x2710) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ___statistics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____taskUtility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____encryptionStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____pendingEncryptionStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____unencryptedTrafficFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____filterUnencryptedTraffic_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____enableStatistics_k__BackingField) == 0x41, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer*, "", "PacketEncryptionLayer");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*, "", "PacketEncryptionLayer/EncryptionStatistics");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__27");

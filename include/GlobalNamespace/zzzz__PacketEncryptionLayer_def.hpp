#pragma once
// IWYU pragma private; include "GlobalNamespace/PacketEncryptionLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class EncryptionUtility_IEncryptionState;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ExpiringDictionary_2;
}
namespace GlobalNamespace {
class PacketEncryptionLayer_EncryptionStatistics;
}
namespace GlobalNamespace {
class PacketEncryptionLayer_PendingEncryptionStateList;
}
namespace GlobalNamespace {
struct PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0;
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
class IAsyncStateMachine;
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
// Forward declare root types
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
class PacketEncryptionLayer_EncryptionStatistics;
}
namespace GlobalNamespace {
class PacketEncryptionLayer_PendingEncryptionStateList;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PacketEncryptionLayer);
MARK_REF_PTR_T(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics);
MARK_REF_PTR_T(::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList);
MARK_REF_PTR_T(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c);
MARK_REF_PTR_T(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25);
MARK_VAL_T(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer/EncryptionStatistics
class CORDL_TYPE PacketEncryptionLayer_EncryptionStatistics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _decryptionProcessingTime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__decryptionProcessingTime, put = __cordl_internal_set__decryptionProcessingTime)) int64_t _decryptionProcessingTime;

  /// @brief Field _encryptionProcessingTime, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionProcessingTime, put = __cordl_internal_set__encryptionProcessingTime)) int64_t _encryptionProcessingTime;

  /// @brief Field _packetsReceivedEncrypted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedEncrypted, put = __cordl_internal_set__packetsReceivedEncrypted)) int64_t _packetsReceivedEncrypted;

  /// @brief Field _packetsReceivedPlaintext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedPlaintext, put = __cordl_internal_set__packetsReceivedPlaintext)) int64_t _packetsReceivedPlaintext;

  /// @brief Field _packetsReceivedRejected, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceivedRejected, put = __cordl_internal_set__packetsReceivedRejected)) int64_t _packetsReceivedRejected;

  /// @brief Field _packetsSentEncrypted, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentEncrypted, put = __cordl_internal_set__packetsSentEncrypted)) int64_t _packetsSentEncrypted;

  /// @brief Field _packetsSentPlaintext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentPlaintext, put = __cordl_internal_set__packetsSentPlaintext)) int64_t _packetsSentPlaintext;

  /// @brief Field _packetsSentRejected, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSentRejected, put = __cordl_internal_set__packetsSentRejected)) int64_t _packetsSentRejected;

  __declspec(property(get = get_decryptionProcessingTime)) int64_t decryptionProcessingTime;

  __declspec(property(get = get_encryptionProcessingTime)) int64_t encryptionProcessingTime;

  __declspec(property(get = get_packetsReceivedEncrypted)) int64_t packetsReceivedEncrypted;

  __declspec(property(get = get_packetsReceivedPlaintext)) int64_t packetsReceivedPlaintext;

  __declspec(property(get = get_packetsReceivedRejected)) int64_t packetsReceivedRejected;

  __declspec(property(get = get_packetsSentEncrypted)) int64_t packetsSentEncrypted;

  __declspec(property(get = get_packetsSentPlaintext)) int64_t packetsSentPlaintext;

  __declspec(property(get = get_packetsSentRejected)) int64_t packetsSentRejected;

  /// @brief Method AddDecryptionProcessingTime, addr 0x22de7f4, size 0xc, virtual false, abstract: false, final false
  inline void AddDecryptionProcessingTime(int64_t time);

  /// @brief Method AddEncryptionProcessingTime, addr 0x22deb9c, size 0xc, virtual false, abstract: false, final false
  inline void AddEncryptionProcessingTime(int64_t time);

  /// @brief Method IncrementPacketsReceivedEncrypted, addr 0x22de7e8, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedEncrypted();

  /// @brief Method IncrementPacketsReceivedPlaintext, addr 0x22de800, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedPlaintext();

  /// @brief Method IncrementPacketsReceivedRejected, addr 0x22de80c, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceivedRejected();

  /// @brief Method IncrementPacketsSentEncrypted, addr 0x22deb90, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentEncrypted();

  /// @brief Method IncrementPacketsSentPlaintext, addr 0x22deba8, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentPlaintext();

  /// @brief Method IncrementPacketsSentRejected, addr 0x22debb4, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSentRejected();

  static inline ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* New_ctor();

  constexpr int64_t const& __cordl_internal_get__decryptionProcessingTime() const;

  constexpr int64_t& __cordl_internal_get__decryptionProcessingTime();

  constexpr int64_t const& __cordl_internal_get__encryptionProcessingTime() const;

  constexpr int64_t& __cordl_internal_get__encryptionProcessingTime();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedEncrypted() const;

  constexpr int64_t& __cordl_internal_get__packetsReceivedEncrypted();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedPlaintext() const;

  constexpr int64_t& __cordl_internal_get__packetsReceivedPlaintext();

  constexpr int64_t const& __cordl_internal_get__packetsReceivedRejected() const;

  constexpr int64_t& __cordl_internal_get__packetsReceivedRejected();

  constexpr int64_t const& __cordl_internal_get__packetsSentEncrypted() const;

  constexpr int64_t& __cordl_internal_get__packetsSentEncrypted();

  constexpr int64_t const& __cordl_internal_get__packetsSentPlaintext() const;

  constexpr int64_t& __cordl_internal_get__packetsSentPlaintext();

  constexpr int64_t const& __cordl_internal_get__packetsSentRejected() const;

  constexpr int64_t& __cordl_internal_get__packetsSentRejected();

  constexpr void __cordl_internal_set__decryptionProcessingTime(int64_t value);

  constexpr void __cordl_internal_set__encryptionProcessingTime(int64_t value);

  constexpr void __cordl_internal_set__packetsReceivedEncrypted(int64_t value);

  constexpr void __cordl_internal_set__packetsReceivedPlaintext(int64_t value);

  constexpr void __cordl_internal_set__packetsReceivedRejected(int64_t value);

  constexpr void __cordl_internal_set__packetsSentEncrypted(int64_t value);

  constexpr void __cordl_internal_set__packetsSentPlaintext(int64_t value);

  constexpr void __cordl_internal_set__packetsSentRejected(int64_t value);

  /// @brief Method .ctor, addr 0x22de308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_decryptionProcessingTime, addr 0x22e03e4, size 0x7c, virtual false, abstract: false, final false
  inline int64_t get_decryptionProcessingTime();

  /// @brief Method get_encryptionProcessingTime, addr 0x22e0368, size 0x7c, virtual false, abstract: false, final false
  inline int64_t get_encryptionProcessingTime();

  /// @brief Method get_packetsReceivedEncrypted, addr 0x22e032c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedEncrypted();

  /// @brief Method get_packetsReceivedPlaintext, addr 0x22e0320, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedPlaintext();

  /// @brief Method get_packetsReceivedRejected, addr 0x22e0338, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsReceivedRejected();

  /// @brief Method get_packetsSentEncrypted, addr 0x22e0350, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentEncrypted();

  /// @brief Method get_packetsSentPlaintext, addr 0x22e0344, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentPlaintext();

  /// @brief Method get_packetsSentRejected, addr 0x22e035c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_packetsSentRejected();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer_EncryptionStatistics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer_EncryptionStatistics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketEncryptionLayer_EncryptionStatistics(PacketEncryptionLayer_EncryptionStatistics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer_EncryptionStatistics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketEncryptionLayer_EncryptionStatistics(PacketEncryptionLayer_EncryptionStatistics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14917 };

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
static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsReceivedPlaintext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsReceivedEncrypted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsReceivedRejected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsSentPlaintext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsSentEncrypted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____packetsSentRejected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____encryptionProcessingTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, ____decryptionProcessingTime) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer/PendingEncryptionStateList/<>c
class CORDL_TYPE PendingEncryptionStateList_PacketEncryptionLayer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* __9;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1,
                      put = setStaticF___9__4_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>,
                                                                   ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* __9__4_1;

  static inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* New_ctor();

  /// @brief Method <GetSortedEncryptionStates>b__4_1, addr 0x22e07ac, size 0x3c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EncryptionUtility_IEncryptionState*
  _GetSortedEncryptionStates_b__4_1(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp);

  /// @brief Method .ctor, addr 0x22e07a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>,
                                 ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*
  getStaticF___9__4_1();

  static inline void setStaticF___9(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* value);

  static inline void setStaticF___9__4_1(
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PendingEncryptionStateList_PacketEncryptionLayer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PendingEncryptionStateList_PacketEncryptionLayer___c(PendingEncryptionStateList_PacketEncryptionLayer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PendingEncryptionStateList_PacketEncryptionLayer___c(PendingEncryptionStateList_PacketEncryptionLayer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0
class CORDL_TYPE PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field port, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  static inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetSortedEncryptionStates>b__0, addr 0x22e07e8, size 0x74, virtual false, abstract: false, final false
  inline int32_t _GetSortedEncryptionStates_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp);

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr void __cordl_internal_set_port(int32_t value);

  /// @brief Method .ctor, addr 0x22e0654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0(PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0(PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14919 };

  /// @brief Field port, offset: 0x10, size: 0x4, def value: None
  int32_t ___port;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0, ___port) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0
class CORDL_TYPE PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptionState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptionState, put = __cordl_internal_set_encryptionState)) ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState;

  static inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0* New_ctor();

  /// @brief Method <Remove>b__0, addr 0x22e085c, size 0x48, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp);

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const& __cordl_internal_get_encryptionState() const;

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*& __cordl_internal_get_encryptionState();

  constexpr void __cordl_internal_set_encryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* value);

  /// @brief Method .ctor, addr 0x22e06c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0(PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0(PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14920 };

  /// @brief Field encryptionState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::EncryptionUtility_IEncryptionState* ___encryptionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0, ___encryptionState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer/PendingEncryptionStateList
class CORDL_TYPE PacketEncryptionLayer_PendingEncryptionStateList : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c;

  using __c__DisplayClass4_0 = ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0;

  /// @brief Field _pendingStatesByPort, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__pendingStatesByPort,
      put = __cordl_internal_set__pendingStatesByPort)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* _pendingStatesByPort;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x22e065c, size 0x68, virtual false, abstract: false, final false
  inline void Add(int32_t port, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState);

  /// @brief Method Dispose, addr 0x22e0460, size 0x1f4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetSortedEncryptionStates, addr 0x22dfc2c, size 0x1c4, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*, ::Array<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*> GetSortedEncryptionStates(int32_t port);

  static inline ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList* New_ctor();

  /// @brief Method Remove, addr 0x22df148, size 0x58, virtual false, abstract: false, final false
  inline bool Remove(int32_t port);

  /// @brief Method Remove, addr 0x22e00a0, size 0x170, virtual false, abstract: false, final false
  inline bool Remove(int32_t port, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState);

  /// @brief Method TryGetEncryptionState, addr 0x22df8dc, size 0x1f4, virtual false, abstract: false, final false
  inline bool TryGetEncryptionState(int32_t port, ::ByRef<::GlobalNamespace::EncryptionUtility_IEncryptionState*> encryptionState);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* const& __cordl_internal_get__pendingStatesByPort() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*& __cordl_internal_get__pendingStatesByPort();

  constexpr void __cordl_internal_set__pendingStatesByPort(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value);

  /// @brief Method .ctor, addr 0x22e06cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isEmpty, addr 0x22df1a0, size 0x5c, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer_PendingEncryptionStateList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer_PendingEncryptionStateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketEncryptionLayer_PendingEncryptionStateList(PacketEncryptionLayer_PendingEncryptionStateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer_PendingEncryptionStateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketEncryptionLayer_PendingEncryptionStateList(PacketEncryptionLayer_PendingEncryptionStateList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14921 };

  /// @brief Field _pendingStatesByPort, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* ____pendingStatesByPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList, ____pendingStatesByPort) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__25
struct CORDL_TYPE PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22e08a4, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22e0c54, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25(int32_t __1__state,
                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __t__builder,
                                                                   ::GlobalNamespace::PacketEncryptionLayer* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient,
                                                                   ::System::Net::IPEndPoint* endPoint,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __t__builder;

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, preMasterSecret) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, serverRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, clientRandom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, isClient) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, endPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__27
struct CORDL_TYPE PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22e0cd0, size 0x480, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22e1150, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "",
  // def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                          ::GlobalNamespace::PacketEncryptionLayer* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient,
                                                                          ::System::Net::IPEndPoint* endPoint,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, preMasterSecret) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, serverRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, clientRandom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, isClient) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, endPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LiteNetLib.Layers.PacketLayerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: PacketEncryptionLayer
class CORDL_TYPE PacketEncryptionLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
  // Declarations
  using EncryptionStatistics = ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics;

  using PendingEncryptionStateList = ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList;

  using _AddEncryptedEndpointAsync_d__25 = ::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25;

  using _AddPendingEncryptedEndpointAsync_d__27 = ::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27;

  /// @brief Field <enableStatistics>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__enableStatistics_k__BackingField, put = __cordl_internal_set__enableStatistics_k__BackingField)) bool _enableStatistics_k__BackingField;

  /// @brief Field _encryptionStates, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__encryptionStates,
      put = __cordl_internal_set__encryptionStates)) ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* _encryptionStates;

  /// @brief Field <filterUnencryptedTraffic>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__filterUnencryptedTraffic_k__BackingField,
                      put = __cordl_internal_set__filterUnencryptedTraffic_k__BackingField)) bool _filterUnencryptedTraffic_k__BackingField;

  /// @brief Field _pendingEncryptionStates, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingEncryptionStates, put = __cordl_internal_set__pendingEncryptionStates)) ::GlobalNamespace::ExpiringDictionary_2<
      ::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* _pendingEncryptionStates;

  /// @brief Field _stopwatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__stopwatch, put = setStaticF__stopwatch)) ::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Field _taskUtility, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _unencryptedTrafficFilter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__unencryptedTrafficFilter, put = __cordl_internal_set__unencryptedTrafficFilter)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _unencryptedTrafficFilter;

  __declspec(property(get = get_enableStatistics, put = set_enableStatistics)) bool enableStatistics;

  __declspec(property(get = get_filterUnencryptedTraffic, put = set_filterUnencryptedTraffic)) bool filterUnencryptedTraffic;

  /// @brief Field statistics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_statistics, put = __cordl_internal_set_statistics)) ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* statistics;

  /// @brief Method AddEncryptedEndpoint, addr 0x22debc8, size 0x164, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* AddEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
                                                                                     bool isClient);

  /// @brief Method AddEncryptedEndpointAsync, addr 0x22ded2c, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>* AddEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint,
                                                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient);

  /// @brief Method AddPendingEncryptedEndpointAsync, addr 0x22df1fc, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AddPendingEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> preMasterSecret,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, bool isClient);

  /// @brief Method Log, addr 0x22e0294, size 0x8c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method MatchesFilter, addr 0x22e0210, size 0x84, virtual false, abstract: false, final false
  inline bool MatchesFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::GlobalNamespace::PacketEncryptionLayer* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  /// @brief Method PollUpdate, addr 0x22df304, size 0x1b4, virtual false, abstract: false, final false
  inline void PollUpdate();

  /// @brief Method ProcessInboundPacket, addr 0x22de310, size 0x1b8, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method ProcessInboundPacketInternal, addr 0x22de4c8, size 0x320, virtual false, abstract: false, final false
  inline bool ProcessInboundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length,
                                           ::ByRef<bool> encrypted);

  /// @brief Method ProcessOutBoundPacket, addr 0x22de818, size 0x190, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method ProcessOutBoundPacketInternal, addr 0x22de9a8, size 0x1e8, virtual false, abstract: false, final false
  inline bool ProcessOutBoundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length,
                                            ::ByRef<bool> encrypted);

  /// @brief Method PromotePendingEncryptionState, addr 0x22dfdf0, size 0x2b0, virtual false, abstract: false, final false
  inline void PromotePendingEncryptionState(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::EncryptionUtility_IEncryptionState* state);

  /// @brief Method RemoveAllEndpoints, addr 0x22df4b8, size 0x1b4, virtual false, abstract: false, final false
  inline void RemoveAllEndpoints();

  /// @brief Method RemoveEncryptedEndpoint, addr 0x22dee4c, size 0x2fc, virtual false, abstract: false, final false
  inline bool RemoveEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptedState);

  /// @brief Method SetUnencryptedTrafficFilter, addr 0x22debc0, size 0x8, virtual false, abstract: false, final false
  inline void SetUnencryptedTrafficFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> unencryptedTrafficFilter);

  /// @brief Method TryGetEncryptionState, addr 0x22df66c, size 0x11c, virtual false, abstract: false, final false
  inline bool TryGetEncryptionState(::System::Net::IPEndPoint* endPoint, ::ByRef<::GlobalNamespace::EncryptionUtility_IEncryptionState*> state);

  /// @brief Method TryGetPendingEncryptionState, addr 0x22df788, size 0x154, virtual false, abstract: false, final false
  inline bool TryGetPendingEncryptionState(::System::Net::IPEndPoint* endPoint, ::ByRef<::GlobalNamespace::EncryptionUtility_IEncryptionState*> state);

  /// @brief Method TryGetPotentialPendingEncryptionStates, addr 0x22dfad0, size 0x15c, virtual false, abstract: false, final false
  inline bool
  TryGetPotentialPendingEncryptionStates(::System::Net::IPEndPoint* endPoint,
                                         ::ByRef<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*, ::Array<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*>> encryptionStates);

  constexpr bool const& __cordl_internal_get__enableStatistics_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableStatistics_k__BackingField();

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* const& __cordl_internal_get__encryptionStates() const;

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*& __cordl_internal_get__encryptionStates();

  constexpr bool const& __cordl_internal_get__filterUnencryptedTraffic_k__BackingField() const;

  constexpr bool& __cordl_internal_get__filterUnencryptedTraffic_k__BackingField();

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* const&
  __cordl_internal_get__pendingEncryptionStates() const;

  constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>*& __cordl_internal_get__pendingEncryptionStates();

  constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__unencryptedTrafficFilter() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__unencryptedTrafficFilter();

  constexpr ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* const& __cordl_internal_get_statistics() const;

  constexpr ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*& __cordl_internal_get_statistics();

  constexpr void __cordl_internal_set__enableStatistics_k__BackingField(bool value);

  constexpr void __cordl_internal_set__encryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value);

  constexpr void __cordl_internal_set__filterUnencryptedTraffic_k__BackingField(bool value);

  constexpr void
  __cordl_internal_set__pendingEncryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__unencryptedTrafficFilter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_statistics(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* value);

  /// @brief Method .ctor, addr 0x22de1e8, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility);

  static inline ::System::Diagnostics::Stopwatch* getStaticF__stopwatch();

  /// @brief Method get_enableStatistics, addr 0x22de1d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableStatistics();

  /// @brief Method get_filterUnencryptedTraffic, addr 0x22de1c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_filterUnencryptedTraffic();

  static inline void setStaticF__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method set_enableStatistics, addr 0x22de1dc, size 0xc, virtual false, abstract: false, final false
  inline void set_enableStatistics(bool value);

  /// @brief Method set_filterUnencryptedTraffic, addr 0x22de1c8, size 0xc, virtual false, abstract: false, final false
  inline void set_filterUnencryptedTraffic(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketEncryptionLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PacketEncryptionLayer(PacketEncryptionLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PacketEncryptionLayer(PacketEncryptionLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14924 };

  /// @brief Field kEncryptedPacketType offset 0xffffffff size 0x1
  static constexpr uint8_t kEncryptedPacketType{ static_cast<uint8_t>(0x1u) };

  /// @brief Field kEncryptionStateTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kEncryptionStateTimeoutMs{ static_cast<int64_t>(0x493e0) };

  /// @brief Field kPendingEncryptionStateTimeoutMs offset 0xffffffff size 0x8
  static constexpr int64_t kPendingEncryptionStateTimeoutMs{ static_cast<int64_t>(0x2710) };

  /// @brief Field kPlaintextPacketType offset 0xffffffff size 0x1
  static constexpr uint8_t kPlaintextPacketType{ static_cast<uint8_t>(0x0u) };

  /// @brief Field statistics, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* ___statistics;

  /// @brief Field _taskUtility, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _encryptionStates, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* ____encryptionStates;

  /// @brief Field _pendingEncryptionStates, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* ____pendingEncryptionStates;

  /// @brief Field _unencryptedTrafficFilter, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____unencryptedTrafficFilter;

  /// @brief Field <filterUnencryptedTraffic>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____filterUnencryptedTraffic_k__BackingField;

  /// @brief Field <enableStatistics>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____enableStatistics_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ___statistics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____taskUtility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____encryptionStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____pendingEncryptionStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____unencryptedTrafficFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____filterUnencryptedTraffic_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketEncryptionLayer, ____enableStatistics_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer*, "", "PacketEncryptionLayer");
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*, "", "PacketEncryptionLayer/EncryptionStatistics");
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
NEED_NO_BOX(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c");
NEED_NO_BOX(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__27");

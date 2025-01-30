#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkStatisticsState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatisticsState)
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
namespace GlobalNamespace {
class NetworkStatisticsState_NetworkStatisticsUpdateDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkStatisticsState_NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate);
MARK_VAL_T(::GlobalNamespace::NetworkStatisticsState);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkStatisticsState/NetworkStatisticsUpdateDelegate
class CORDL_TYPE NetworkStatisticsState_NetworkStatisticsUpdateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22dc0d8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22dc164, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22dc0c4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState);

  static inline ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x22dc028, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatisticsState_NetworkStatisticsUpdateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkStatisticsState_NetworkStatisticsUpdateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkStatisticsState_NetworkStatisticsUpdateDelegate(NetworkStatisticsState_NetworkStatisticsUpdateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkStatisticsState_NetworkStatisticsUpdateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkStatisticsState_NetworkStatisticsUpdateDelegate(NetworkStatisticsState_NetworkStatisticsUpdateDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkStatisticsState
struct CORDL_TYPE NetworkStatisticsState {
public:
  // Declarations
  using NetworkStatisticsUpdateDelegate = ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate;

  /// @brief Method .ctor, addr 0x22dbf88, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext,
                    int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime,
                    int64_t decryptionProcessingTime);

  /// @brief Method op_Subtraction, addr 0x22dbfb0, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NetworkStatisticsDelta op_Subtraction(::ByRef<::GlobalNamespace::NetworkStatisticsState> a, ::ByRef<::GlobalNamespace::NetworkStatisticsState> b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatisticsState();

  // Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "bytesSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLost", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintext", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncrypted", ty: "int64_t", modifiers:
  // "", def_value: None }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejected", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted,
                                   int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected,
                                   int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14908 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field packetsSent, offset: 0x0, size: 0x8, def value: None
  int64_t packetsSent;

  /// @brief Field packetsReceived, offset: 0x8, size: 0x8, def value: None
  int64_t packetsReceived;

  /// @brief Field bytesSent, offset: 0x10, size: 0x8, def value: None
  int64_t bytesSent;

  /// @brief Field bytesReceived, offset: 0x18, size: 0x8, def value: None
  int64_t bytesReceived;

  /// @brief Field packetsLost, offset: 0x20, size: 0x8, def value: None
  int64_t packetsLost;

  /// @brief Field packetsSentEncrypted, offset: 0x28, size: 0x8, def value: None
  int64_t packetsSentEncrypted;

  /// @brief Field packetsSentPlaintext, offset: 0x30, size: 0x8, def value: None
  int64_t packetsSentPlaintext;

  /// @brief Field packetsSentRejected, offset: 0x38, size: 0x8, def value: None
  int64_t packetsSentRejected;

  /// @brief Field packetsReceivedEncrypted, offset: 0x40, size: 0x8, def value: None
  int64_t packetsReceivedEncrypted;

  /// @brief Field packetsReceivedPlaintext, offset: 0x48, size: 0x8, def value: None
  int64_t packetsReceivedPlaintext;

  /// @brief Field packetsReceivedRejected, offset: 0x50, size: 0x8, def value: None
  int64_t packetsReceivedRejected;

  /// @brief Field encryptionProcessingTime, offset: 0x58, size: 0x8, def value: None
  int64_t encryptionProcessingTime;

  /// @brief Field decryptionProcessingTime, offset: 0x60, size: 0x8, def value: None
  int64_t decryptionProcessingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsSent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsReceived) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, bytesSent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, bytesReceived) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsLost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsSentEncrypted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsSentPlaintext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsSentRejected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsReceivedEncrypted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsReceivedPlaintext) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, packetsReceivedRejected) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, encryptionProcessingTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsState, decryptionProcessingTime) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsState, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*, "", "NetworkStatisticsState/NetworkStatisticsUpdateDelegate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState, "", "NetworkStatisticsState");

#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkStatisticsDelta.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatisticsDelta)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkStatisticsDelta);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkStatisticsDelta
struct CORDL_TYPE NetworkStatisticsDelta {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x22d98c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta,
                    int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta,
                    int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkStatisticsDelta();

  // Ctor Parameters [CppParam { name: "packetsSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedDelta", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "bytesSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceivedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "packetsLostDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "packetsSentPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "packetsReceivedEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam {
  // name: "packetsReceivedRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "encryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam
  // { name: "decryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr NetworkStatisticsDelta(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta,
                                   int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta,
                                   int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field packetsSentDelta, offset: 0x0, size: 0x8, def value: None
  int64_t packetsSentDelta;

  /// @brief Field packetsReceivedDelta, offset: 0x8, size: 0x8, def value: None
  int64_t packetsReceivedDelta;

  /// @brief Field bytesSentDelta, offset: 0x10, size: 0x8, def value: None
  int64_t bytesSentDelta;

  /// @brief Field bytesReceivedDelta, offset: 0x18, size: 0x8, def value: None
  int64_t bytesReceivedDelta;

  /// @brief Field packetsLostDelta, offset: 0x20, size: 0x8, def value: None
  int64_t packetsLostDelta;

  /// @brief Field packetsSentEncryptedDelta, offset: 0x28, size: 0x8, def value: None
  int64_t packetsSentEncryptedDelta;

  /// @brief Field packetsSentPlaintextDelta, offset: 0x30, size: 0x8, def value: None
  int64_t packetsSentPlaintextDelta;

  /// @brief Field packetsSentRejectedDelta, offset: 0x38, size: 0x8, def value: None
  int64_t packetsSentRejectedDelta;

  /// @brief Field packetsReceivedEncryptedDelta, offset: 0x40, size: 0x8, def value: None
  int64_t packetsReceivedEncryptedDelta;

  /// @brief Field packetsReceivedPlaintextDelta, offset: 0x48, size: 0x8, def value: None
  int64_t packetsReceivedPlaintextDelta;

  /// @brief Field packetsReceivedRejectedDelta, offset: 0x50, size: 0x8, def value: None
  int64_t packetsReceivedRejectedDelta;

  /// @brief Field encryptionProcessingTimeDelta, offset: 0x58, size: 0x8, def value: None
  int64_t encryptionProcessingTimeDelta;

  /// @brief Field decryptionProcessingTimeDelta, offset: 0x60, size: 0x8, def value: None
  int64_t decryptionProcessingTimeDelta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsSentDelta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsReceivedDelta) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, bytesSentDelta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, bytesReceivedDelta) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsLostDelta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsSentEncryptedDelta) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsSentPlaintextDelta) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsSentRejectedDelta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsReceivedEncryptedDelta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsReceivedPlaintextDelta) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, packetsReceivedRejectedDelta) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, encryptionProcessingTimeDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkStatisticsDelta, decryptionProcessingTimeDelta) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsDelta, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsDelta, "", "NetworkStatisticsDelta");

#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceClientStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceClientStats)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceClientStats);
// Dependencies
namespace IgnoranceCore {
// Is value type: true
// CS Name: IgnoranceCore.IgnoranceClientStats
struct CORDL_TYPE IgnoranceClientStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceClientStats();

  // Ctor Parameters [CppParam { name: "RTT", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty:
  // "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsLost", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr IgnoranceClientStats(uint32_t RTT, uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PacketsLost) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field RTT, offset: 0x0, size: 0x4, def value: None
  uint32_t RTT;

  /// @brief Field BytesReceived, offset: 0x8, size: 0x8, def value: None
  uint64_t BytesReceived;

  /// @brief Field BytesSent, offset: 0x10, size: 0x8, def value: None
  uint64_t BytesSent;

  /// @brief Field PacketsReceived, offset: 0x18, size: 0x8, def value: None
  uint64_t PacketsReceived;

  /// @brief Field PacketsSent, offset: 0x20, size: 0x8, def value: None
  uint64_t PacketsSent;

  /// @brief Field PacketsLost, offset: 0x28, size: 0x8, def value: None
  uint64_t PacketsLost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, RTT) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, BytesReceived) == 0x8, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, BytesSent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, PacketsReceived) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, PacketsSent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceClientStats, PacketsLost) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceClientStats, 0x30>, "Size mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceClientStats, "IgnoranceCore", "IgnoranceClientStats");

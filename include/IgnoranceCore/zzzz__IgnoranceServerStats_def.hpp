#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceServerStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceServerStats)
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceServerStats);
// Type: IgnoranceCore::IgnoranceServerStats
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceCore::IgnoranceServerStats
struct CORDL_TYPE IgnoranceServerStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceServerStats();

  // Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeersCount", ty:
  // "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeerStats", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*", modifiers: "",
  // def_value: None }]
  constexpr IgnoranceServerStats(uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PeersCount,
                                 ::System::Collections::Generic::Dictionary_2<int32_t, ::IgnoranceCore::IgnoranceClientStats>* PeerStats) noexcept;

  /// @brief Field BytesReceived, offset: 0x0, size: 0x8, def value: None
  uint64_t BytesReceived;

  /// @brief Field BytesSent, offset: 0x8, size: 0x8, def value: None
  uint64_t BytesSent;

  /// @brief Field PacketsReceived, offset: 0x10, size: 0x8, def value: None
  uint64_t PacketsReceived;

  /// @brief Field PacketsSent, offset: 0x18, size: 0x8, def value: None
  uint64_t PacketsSent;

  /// @brief Field PeersCount, offset: 0x20, size: 0x8, def value: None
  uint64_t PeersCount;

  /// @brief Field PeerStats, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::IgnoranceCore::IgnoranceClientStats>* PeerStats;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceServerStats, 0x30>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, BytesReceived) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, BytesSent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, PacketsReceived) == 0x10, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, PacketsSent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, PeersCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceServerStats, PeerStats) == 0x28, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceServerStats, "IgnoranceCore", "IgnoranceServerStats");

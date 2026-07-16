#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceCommandPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "IgnoranceCore/zzzz__IgnoranceCommandType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceCommandPacket)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceCommandPacket);
DEFINE_IL2CPP_CLASS(::IgnoranceCore::IgnoranceCommandPacket, "IgnoranceCore", "IgnoranceCommandPacket");
// Dependencies IgnoranceCore.IgnoranceCommandType
namespace IgnoranceCore {
// Is value type: true
// CS Name: IgnoranceCore.IgnoranceCommandPacket
struct CORDL_TYPE IgnoranceCommandPacket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceCommandPacket();

  // Ctor Parameters [CppParam { name: "Type", ty: "::IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: None }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value: None
  // }]
  constexpr IgnoranceCommandPacket(::IgnoranceCore::IgnoranceCommandType Type, uint32_t PeerId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::IgnoranceCore::IgnoranceCommandType Type;

  /// @brief Field PeerId, offset: 0x4, size: 0x4, def value: None
  uint32_t PeerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceCommandPacket, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceCommandPacket, PeerId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::IgnoranceCore::IgnoranceCommandPacket) == 0x8, "Size mismatch!");

} // namespace IgnoranceCore

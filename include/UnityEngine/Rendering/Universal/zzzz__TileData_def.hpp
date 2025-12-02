#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct TileData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::TileData);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TileData
struct CORDL_TYPE TileData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileData();

  // Ctor Parameters [CppParam { name: "tileID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "listBitMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "relLightOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unused", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TileData(uint32_t tileID, uint32_t listBitMask, uint32_t relLightOffset, uint32_t unused) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field tileID, offset: 0x0, size: 0x4, def value: None
  uint32_t tileID;

  /// @brief Field listBitMask, offset: 0x4, size: 0x4, def value: None
  uint32_t listBitMask;

  /// @brief Field relLightOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t relLightOffset;

  /// @brief Field unused, offset: 0xc, size: 0x4, def value: None
  uint32_t unused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TileData, tileID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileData, listBitMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileData, relLightOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TileData, unused) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TileData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TileData, "UnityEngine.Rendering.Universal", "TileData");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputInterfaceTilemapSettings)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings);
// Type: HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9845))
// CS Name: ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*
class CORDL_TYPE HEU_InputInterfaceTilemapSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _createGroupsForTiles, offset 0x10, size 0x1
  __declspec(property(get = __get__createGroupsForTiles, put = __set__createGroupsForTiles)) bool _createGroupsForTiles;

  /// @brief Field _exportUnusedTiles, offset 0x11, size 0x1
  __declspec(property(get = __get__exportUnusedTiles, put = __set__exportUnusedTiles)) bool _exportUnusedTiles;

  /// @brief Field _applyTileColor, offset 0x12, size 0x1
  __declspec(property(get = __get__applyTileColor, put = __set__applyTileColor)) bool _applyTileColor;

  /// @brief Field _applyTilemapOrientation, offset 0x13, size 0x1
  __declspec(property(get = __get__applyTilemapOrientation, put = __set__applyTilemapOrientation)) bool _applyTilemapOrientation;

  constexpr bool& __get__createGroupsForTiles();

  constexpr bool const& __get__createGroupsForTiles() const;

  constexpr void __set__createGroupsForTiles(bool value);

  constexpr bool& __get__exportUnusedTiles();

  constexpr bool const& __get__exportUnusedTiles() const;

  constexpr void __set__exportUnusedTiles(bool value);

  constexpr bool& __get__applyTileColor();

  constexpr bool const& __get__applyTileColor() const;

  constexpr void __set__applyTileColor(bool value);

  constexpr bool& __get__applyTilemapOrientation();

  constexpr bool const& __get__applyTilemapOrientation() const;

  constexpr void __set__applyTilemapOrientation(bool value);

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* New_ctor();

  /// @brief Method .ctor, addr 0x21cb574, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemapSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceTilemapSettings(HEU_InputInterfaceTilemapSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemapSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceTilemapSettings(HEU_InputInterfaceTilemapSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceTilemapSettings();

public:
  /// @brief Field _createGroupsForTiles, offset: 0x10, size: 0x1, def value: None
  bool ____createGroupsForTiles;

  /// @brief Field _exportUnusedTiles, offset: 0x11, size: 0x1, def value: None
  bool ____exportUnusedTiles;

  /// @brief Field _applyTileColor, offset: 0x12, size: 0x1, def value: None
  bool ____applyTileColor;

  /// @brief Field _applyTilemapOrientation, offset: 0x13, size: 0x1, def value: None
  bool ____applyTilemapOrientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, ____createGroupsForTiles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, ____exportUnusedTiles) == 0x11, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, ____applyTileColor) == 0x12, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, ____applyTilemapOrientation) == 0x13, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemapSettings");

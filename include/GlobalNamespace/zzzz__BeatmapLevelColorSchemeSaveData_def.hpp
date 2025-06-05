#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelColorSchemeSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelColorSchemeSaveData)
namespace GlobalNamespace {
class PlayerSaveData_ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelColorSchemeSaveData
class CORDL_TYPE BeatmapLevelColorSchemeSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme)) ::GlobalNamespace::PlayerSaveData_ColorScheme* colorScheme;

  /// @brief Field useOverride, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useOverride, put = __cordl_internal_set_useOverride)) bool useOverride;

  /// @brief Method IsDefault, addr 0x26fe88c, size 0x15c, virtual false, abstract: false, final false
  inline bool IsDefault();

  static inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* New_ctor();

  constexpr ::GlobalNamespace::PlayerSaveData_ColorScheme* const& __cordl_internal_get_colorScheme() const;

  constexpr ::GlobalNamespace::PlayerSaveData_ColorScheme*& __cordl_internal_get_colorScheme();

  constexpr bool const& __cordl_internal_get_useOverride() const;

  constexpr bool& __cordl_internal_get_useOverride();

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::PlayerSaveData_ColorScheme* value);

  constexpr void __cordl_internal_set_useOverride(bool value);

  /// @brief Method .ctor, addr 0x26fe9e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelColorSchemeSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13263 };

  /// @brief Field useOverride, offset: 0x10, size: 0x1, def value: None
  bool ___useOverride;

  /// @brief Field colorScheme, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_ColorScheme* ___colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelColorSchemeSaveData, ___useOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelColorSchemeSaveData, ___colorScheme) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelColorSchemeSaveData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, "", "BeatmapLevelColorSchemeSaveData");

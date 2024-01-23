#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelColorSchemeSaveData)
namespace GlobalNamespace {
class __PlayerSaveData__ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
// Type: ::BeatmapLevelColorSchemeSaveData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4326))
// CS Name: ::BeatmapLevelColorSchemeSaveData*
class CORDL_TYPE BeatmapLevelColorSchemeSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field useOverride, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useOverride, put = __cordl_internal_set_useOverride)) bool useOverride;

  /// @brief Field colorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme))::GlobalNamespace::__PlayerSaveData__ColorScheme* colorScheme;

  constexpr bool& __cordl_internal_get_useOverride();

  constexpr bool const& __cordl_internal_get_useOverride() const;

  constexpr void __cordl_internal_set_useOverride(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme*& __cordl_internal_get_colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorScheme*> const& __cordl_internal_get_colorScheme() const;

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::__PlayerSaveData__ColorScheme* value);

  /// @brief Method IsDefault, addr 0x233dd28, size 0x15c, virtual false, abstract: false, final false
  inline bool IsDefault();

  static inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* New_ctor();

  /// @brief Method .ctor, addr 0x233de84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelColorSchemeSaveData();

public:
  /// @brief Field useOverride, offset: 0x10, size: 0x1, def value: None
  bool ___useOverride;

  /// @brief Field colorScheme, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__ColorScheme* ___colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelColorSchemeSaveData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelColorSchemeSaveData, ___useOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelColorSchemeSaveData, ___colorScheme) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelColorSchemeSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, "", "BeatmapLevelColorSchemeSaveData");

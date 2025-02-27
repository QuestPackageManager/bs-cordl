#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveStyleSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveStyleSO)
namespace GlobalNamespace {
class ColorStyleSO;
}
namespace GlobalNamespace {
class TextStyleSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveStyleSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveStyleSO);
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveStyleSO
class CORDL_TYPE MissionObjectiveStyleSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field backgroundColorStyle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundColorStyle, put = __cordl_internal_set_backgroundColorStyle)) ::UnityW<::GlobalNamespace::ColorStyleSO> backgroundColorStyle;

  /// @brief Field titleColorStyle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_titleColorStyle, put = __cordl_internal_set_titleColorStyle)) ::UnityW<::GlobalNamespace::ColorStyleSO> titleColorStyle;

  /// @brief Field titleTextStyle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_titleTextStyle, put = __cordl_internal_set_titleTextStyle)) ::UnityW<::GlobalNamespace::TextStyleSO> titleTextStyle;

  static inline ::GlobalNamespace::MissionObjectiveStyleSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& __cordl_internal_get_backgroundColorStyle() const;

  constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& __cordl_internal_get_backgroundColorStyle();

  constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& __cordl_internal_get_titleColorStyle() const;

  constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& __cordl_internal_get_titleColorStyle();

  constexpr ::UnityW<::GlobalNamespace::TextStyleSO> const& __cordl_internal_get_titleTextStyle() const;

  constexpr ::UnityW<::GlobalNamespace::TextStyleSO>& __cordl_internal_get_titleTextStyle();

  constexpr void __cordl_internal_set_backgroundColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value);

  constexpr void __cordl_internal_set_titleColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value);

  constexpr void __cordl_internal_set_titleTextStyle(::UnityW<::GlobalNamespace::TextStyleSO> value);

  /// @brief Method .ctor, addr 0x22869a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveStyleSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveStyleSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveStyleSO(MissionObjectiveStyleSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveStyleSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveStyleSO(MissionObjectiveStyleSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19137 };

  /// @brief Field titleTextStyle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextStyleSO> ___titleTextStyle;

  /// @brief Field titleColorStyle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorStyleSO> ___titleColorStyle;

  /// @brief Field backgroundColorStyle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorStyleSO> ___backgroundColorStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectiveStyleSO, ___titleTextStyle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveStyleSO, ___titleColorStyle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveStyleSO, ___backgroundColorStyle) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveStyleSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveStyleSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveStyleSO*, "", "MissionObjectiveStyleSO");

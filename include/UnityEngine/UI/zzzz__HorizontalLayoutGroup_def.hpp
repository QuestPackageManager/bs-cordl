#pragma once
// IWYU pragma private; include "UnityEngine/UI/HorizontalLayoutGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
CORDL_MODULE_EXPORT(HorizontalLayoutGroup)
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalLayoutGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::HorizontalLayoutGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");
// Dependencies UnityEngine.UI.HorizontalOrVerticalLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.HorizontalLayoutGroup
class CORDL_TYPE HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
  // Declarations
  /// @brief Method CalculateLayoutInputHorizontal, addr 0x6df7738, size 0x20, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x6df7a08, size 0xc, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::UnityEngine::UI::HorizontalLayoutGroup* New_ctor();

  /// @brief Method SetLayoutHorizontal, addr 0x6df7a14, size 0xc, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x6df8064, size 0xc, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method .ctor, addr 0x6df7720, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HorizontalLayoutGroup(HorizontalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HorizontalLayoutGroup(HorizontalLayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::HorizontalLayoutGroup) == 0x70, "Size mismatch!");

} // namespace UnityEngine::UI

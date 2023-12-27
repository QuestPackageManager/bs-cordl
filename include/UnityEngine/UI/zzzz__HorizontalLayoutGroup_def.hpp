#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
CORDL_MODULE_EXPORT(HorizontalLayoutGroup)
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::HorizontalLayoutGroup);
// Type: UnityEngine.UI::HorizontalLayoutGroup
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13083))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13082))
// CS Name: ::UnityEngine.UI::HorizontalLayoutGroup*
class CORDL_TYPE HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
  // Declarations
  static inline ::UnityEngine::UI::HorizontalLayoutGroup* New_ctor();

  /// @brief Method .ctor addr 0x2d75fc0 size 0xc virtual false final false
  inline void _ctor();

  /// @brief Method CalculateLayoutInputHorizontal addr 0x2d75fd8 size 0x20 virtual true final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical addr 0x2d7629c size 0xc virtual true final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method SetLayoutHorizontal addr 0x2d762a8 size 0xc virtual true final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical addr 0x2d76920 size 0xc virtual true final false
  inline void SetLayoutVertical();

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HorizontalLayoutGroup(HorizontalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HorizontalLayoutGroup(HorizontalLayoutGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalLayoutGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::HorizontalLayoutGroup, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::HorizontalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");

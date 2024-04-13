#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
CORDL_MODULE_EXPORT(VerticalLayoutGroup)
// Forward declare root types
namespace UnityEngine::UI {
class VerticalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::VerticalLayoutGroup);
// Type: UnityEngine.UI::VerticalLayoutGroup
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::VerticalLayoutGroup*
class CORDL_TYPE VerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
  // Declarations
  /// @brief Method CalculateLayoutInputHorizontal, addr 0x32c8704, size 0x20, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x32c8724, size 0xc, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::UnityEngine::UI::VerticalLayoutGroup* New_ctor();

  /// @brief Method SetLayoutHorizontal, addr 0x32c8730, size 0xc, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x32c873c, size 0xc, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method .ctor, addr 0x32c86f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalLayoutGroup(VerticalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalLayoutGroup(VerticalLayoutGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::VerticalLayoutGroup, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::VerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::VerticalLayoutGroup*, "UnityEngine.UI", "VerticalLayoutGroup");

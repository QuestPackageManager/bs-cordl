#pragma once
// IWYU pragma private; include "GlobalNamespace/MaxHeightVerticalLayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaxHeightVerticalLayoutGroup)
// Forward declare root types
namespace GlobalNamespace {
class MaxHeightVerticalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaxHeightVerticalLayoutGroup);
// Dependencies UnityEngine.UI.HorizontalOrVerticalLayoutGroup
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaxHeightVerticalLayoutGroup
class CORDL_TYPE MaxHeightVerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
  // Declarations
  /// @brief Field _maxHeight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxHeight, put = __cordl_internal_set__maxHeight)) float_t _maxHeight;

  /// @brief Field _useMaxHeight, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get__useMaxHeight, put = __cordl_internal_set__useMaxHeight)) bool _useMaxHeight;

  __declspec(property(get = get_maxHeight, put = set_maxHeight)) float_t maxHeight;

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x31fc1e0, size 0x28, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x31fc208, size 0x10, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::GlobalNamespace::MaxHeightVerticalLayoutGroup* New_ctor();

  /// @brief Method SetLayoutHorizontal, addr 0x31fc218, size 0x24, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x31fc2a8, size 0x24, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method SetMaxWidthAndHeight, addr 0x31fc23c, size 0x6c, virtual false, abstract: false, final false
  inline void SetMaxWidthAndHeight();

  constexpr float_t const& __cordl_internal_get__maxHeight() const;

  constexpr float_t& __cordl_internal_get__maxHeight();

  constexpr bool const& __cordl_internal_get__useMaxHeight() const;

  constexpr bool& __cordl_internal_get__useMaxHeight();

  constexpr void __cordl_internal_set__maxHeight(float_t value);

  constexpr void __cordl_internal_set__useMaxHeight(bool value);

  /// @brief Method .ctor, addr 0x31fc2cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxHeight, addr 0x31fc1d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxHeight();

  /// @brief Method set_maxHeight, addr 0x31fc1d8, size 0x8, virtual false, abstract: false, final false
  inline void set_maxHeight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaxHeightVerticalLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaxHeightVerticalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaxHeightVerticalLayoutGroup(MaxHeightVerticalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaxHeightVerticalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaxHeightVerticalLayoutGroup(MaxHeightVerticalLayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20667 };

  /// @brief Field _useMaxHeight, offset: 0x6b, size: 0x1, def value: None
  bool ____useMaxHeight;

  /// @brief Field _maxHeight, offset: 0x6c, size: 0x4, def value: None
  float_t ____maxHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaxHeightVerticalLayoutGroup, ____useMaxHeight) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaxHeightVerticalLayoutGroup, ____maxHeight) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaxHeightVerticalLayoutGroup, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaxHeightVerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaxHeightVerticalLayoutGroup*, "", "MaxHeightVerticalLayoutGroup");

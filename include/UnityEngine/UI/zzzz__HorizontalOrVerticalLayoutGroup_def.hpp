#pragma once
// IWYU pragma private; include "UnityEngine/UI/HorizontalOrVerticalLayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalOrVerticalLayoutGroup)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalOrVerticalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup);
// Dependencies UnityEngine.UI.LayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
class CORDL_TYPE HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
  // Declarations
  __declspec(property(get = get_childControlHeight, put = set_childControlHeight)) bool childControlHeight;

  __declspec(property(get = get_childControlWidth, put = set_childControlWidth)) bool childControlWidth;

  __declspec(property(get = get_childForceExpandHeight, put = set_childForceExpandHeight)) bool childForceExpandHeight;

  __declspec(property(get = get_childForceExpandWidth, put = set_childForceExpandWidth)) bool childForceExpandWidth;

  __declspec(property(get = get_childScaleHeight, put = set_childScaleHeight)) bool childScaleHeight;

  __declspec(property(get = get_childScaleWidth, put = set_childScaleWidth)) bool childScaleWidth;

  /// @brief Field m_ChildControlHeight, offset 0x67, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildControlHeight, put = __cordl_internal_set_m_ChildControlHeight)) bool m_ChildControlHeight;

  /// @brief Field m_ChildControlWidth, offset 0x66, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildControlWidth, put = __cordl_internal_set_m_ChildControlWidth)) bool m_ChildControlWidth;

  /// @brief Field m_ChildForceExpandHeight, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildForceExpandHeight, put = __cordl_internal_set_m_ChildForceExpandHeight)) bool m_ChildForceExpandHeight;

  /// @brief Field m_ChildForceExpandWidth, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildForceExpandWidth, put = __cordl_internal_set_m_ChildForceExpandWidth)) bool m_ChildForceExpandWidth;

  /// @brief Field m_ChildScaleHeight, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildScaleHeight, put = __cordl_internal_set_m_ChildScaleHeight)) bool m_ChildScaleHeight;

  /// @brief Field m_ChildScaleWidth, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildScaleWidth, put = __cordl_internal_set_m_ChildScaleWidth)) bool m_ChildScaleWidth;

  /// @brief Field m_ReverseArrangement, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReverseArrangement, put = __cordl_internal_set_m_ReverseArrangement)) bool m_ReverseArrangement;

  /// @brief Field m_Spacing, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Spacing, put = __cordl_internal_set_m_Spacing)) float_t m_Spacing;

  __declspec(property(get = get_reverseArrangement, put = set_reverseArrangement)) bool reverseArrangement;

  __declspec(property(get = get_spacing, put = set_spacing)) float_t spacing;

  /// @brief Method CalcAlongAxis, addr 0x4aba254, size 0x2a0, virtual false, abstract: false, final false
  inline void CalcAlongAxis(int32_t axis, bool isVertical);

  /// @brief Method GetChildSizes, addr 0x4abae88, size 0x114, virtual false, abstract: false, final false
  inline void GetChildSizes(::UnityEngine::RectTransform* child, int32_t axis, bool controlSize, bool childForceExpand, ::ByRef<float_t> min, ::ByRef<float_t> preferred, ::ByRef<float_t> flexible);

  static inline ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup* New_ctor();

  /// @brief Method SetChildrenAlongAxis, addr 0x4aba50c, size 0x650, virtual false, abstract: false, final false
  inline void SetChildrenAlongAxis(int32_t axis, bool isVertical);

  constexpr bool const& __cordl_internal_get_m_ChildControlHeight() const;

  constexpr bool& __cordl_internal_get_m_ChildControlHeight();

  constexpr bool const& __cordl_internal_get_m_ChildControlWidth() const;

  constexpr bool& __cordl_internal_get_m_ChildControlWidth();

  constexpr bool const& __cordl_internal_get_m_ChildForceExpandHeight() const;

  constexpr bool& __cordl_internal_get_m_ChildForceExpandHeight();

  constexpr bool const& __cordl_internal_get_m_ChildForceExpandWidth() const;

  constexpr bool& __cordl_internal_get_m_ChildForceExpandWidth();

  constexpr bool const& __cordl_internal_get_m_ChildScaleHeight() const;

  constexpr bool& __cordl_internal_get_m_ChildScaleHeight();

  constexpr bool const& __cordl_internal_get_m_ChildScaleWidth() const;

  constexpr bool& __cordl_internal_get_m_ChildScaleWidth();

  constexpr bool const& __cordl_internal_get_m_ReverseArrangement() const;

  constexpr bool& __cordl_internal_get_m_ReverseArrangement();

  constexpr float_t const& __cordl_internal_get_m_Spacing() const;

  constexpr float_t& __cordl_internal_get_m_Spacing();

  constexpr void __cordl_internal_set_m_ChildControlHeight(bool value);

  constexpr void __cordl_internal_set_m_ChildControlWidth(bool value);

  constexpr void __cordl_internal_set_m_ChildForceExpandHeight(bool value);

  constexpr void __cordl_internal_set_m_ChildForceExpandWidth(bool value);

  constexpr void __cordl_internal_set_m_ChildScaleHeight(bool value);

  constexpr void __cordl_internal_set_m_ChildScaleWidth(bool value);

  constexpr void __cordl_internal_set_m_ReverseArrangement(bool value);

  constexpr void __cordl_internal_set_m_Spacing(float_t value);

  /// @brief Method .ctor, addr 0x4aba228, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childControlHeight, addr 0x4abacf8, size 0x8, virtual false, abstract: false, final false
  inline bool get_childControlHeight();

  /// @brief Method get_childControlWidth, addr 0x4abac94, size 0x8, virtual false, abstract: false, final false
  inline bool get_childControlWidth();

  /// @brief Method get_childForceExpandHeight, addr 0x4abac30, size 0x8, virtual false, abstract: false, final false
  inline bool get_childForceExpandHeight();

  /// @brief Method get_childForceExpandWidth, addr 0x4ababcc, size 0x8, virtual false, abstract: false, final false
  inline bool get_childForceExpandWidth();

  /// @brief Method get_childScaleHeight, addr 0x4abadc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_childScaleHeight();

  /// @brief Method get_childScaleWidth, addr 0x4abad5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_childScaleWidth();

  /// @brief Method get_reverseArrangement, addr 0x4abae24, size 0x8, virtual false, abstract: false, final false
  inline bool get_reverseArrangement();

  /// @brief Method get_spacing, addr 0x4abab68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spacing();

  /// @brief Method set_childControlHeight, addr 0x4abad00, size 0x5c, virtual false, abstract: false, final false
  inline void set_childControlHeight(bool value);

  /// @brief Method set_childControlWidth, addr 0x4abac9c, size 0x5c, virtual false, abstract: false, final false
  inline void set_childControlWidth(bool value);

  /// @brief Method set_childForceExpandHeight, addr 0x4abac38, size 0x5c, virtual false, abstract: false, final false
  inline void set_childForceExpandHeight(bool value);

  /// @brief Method set_childForceExpandWidth, addr 0x4ababd4, size 0x5c, virtual false, abstract: false, final false
  inline void set_childForceExpandWidth(bool value);

  /// @brief Method set_childScaleHeight, addr 0x4abadc8, size 0x5c, virtual false, abstract: false, final false
  inline void set_childScaleHeight(bool value);

  /// @brief Method set_childScaleWidth, addr 0x4abad64, size 0x5c, virtual false, abstract: false, final false
  inline void set_childScaleWidth(bool value);

  /// @brief Method set_reverseArrangement, addr 0x4abae2c, size 0x5c, virtual false, abstract: false, final false
  inline void set_reverseArrangement(bool value);

  /// @brief Method set_spacing, addr 0x4abab70, size 0x5c, virtual false, abstract: false, final false
  inline void set_spacing(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalOrVerticalLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15099 };

  /// @brief Field m_Spacing, offset: 0x60, size: 0x4, def value: None
  float_t ___m_Spacing;

  /// @brief Field m_ChildForceExpandWidth, offset: 0x64, size: 0x1, def value: None
  bool ___m_ChildForceExpandWidth;

  /// @brief Field m_ChildForceExpandHeight, offset: 0x65, size: 0x1, def value: None
  bool ___m_ChildForceExpandHeight;

  /// @brief Field m_ChildControlWidth, offset: 0x66, size: 0x1, def value: None
  bool ___m_ChildControlWidth;

  /// @brief Field m_ChildControlHeight, offset: 0x67, size: 0x1, def value: None
  bool ___m_ChildControlHeight;

  /// @brief Field m_ChildScaleWidth, offset: 0x68, size: 0x1, def value: None
  bool ___m_ChildScaleWidth;

  /// @brief Field m_ChildScaleHeight, offset: 0x69, size: 0x1, def value: None
  bool ___m_ChildScaleHeight;

  /// @brief Field m_ReverseArrangement, offset: 0x6a, size: 0x1, def value: None
  bool ___m_ReverseArrangement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_Spacing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildForceExpandWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildForceExpandHeight) == 0x65, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildControlWidth) == 0x66, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildControlHeight) == 0x67, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildScaleWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ChildScaleHeight) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, ___m_ReverseArrangement) == 0x6a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup*, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");

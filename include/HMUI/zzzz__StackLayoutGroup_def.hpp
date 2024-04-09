#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackLayoutGroup)
// Forward declare root types
namespace HMUI {
class StackLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::StackLayoutGroup);
// Type: HMUI::StackLayoutGroup
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::StackLayoutGroup*
class CORDL_TYPE StackLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
  // Declarations
  __declspec(property(get = get_childForceExpandHeight, put = set_childForceExpandHeight)) bool childForceExpandHeight;

  __declspec(property(get = get_childForceExpandWidth, put = set_childForceExpandWidth)) bool childForceExpandWidth;

  /// @brief Field m_ChildForceExpandHeight, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildForceExpandHeight, put = __cordl_internal_set_m_ChildForceExpandHeight)) bool m_ChildForceExpandHeight;

  /// @brief Field m_ChildForceExpandWidth, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChildForceExpandWidth, put = __cordl_internal_set_m_ChildForceExpandWidth)) bool m_ChildForceExpandWidth;

  /// @brief Method CalcAlongAxis, addr 0x24066f4, size 0x174, virtual false, abstract: false, final false
  inline void CalcAlongAxis(int32_t axis);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x24066d4, size 0x20, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x2406868, size 0x8, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::HMUI::StackLayoutGroup* New_ctor();

  /// @brief Method SetChildrenAlongAxis, addr 0x2406878, size 0x208, virtual false, abstract: false, final false
  inline void SetChildrenAlongAxis(int32_t axis);

  /// @brief Method SetLayoutHorizontal, addr 0x2406870, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x2406a80, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  constexpr bool const& __cordl_internal_get_m_ChildForceExpandHeight() const;

  constexpr bool& __cordl_internal_get_m_ChildForceExpandHeight();

  constexpr bool const& __cordl_internal_get_m_ChildForceExpandWidth() const;

  constexpr bool& __cordl_internal_get_m_ChildForceExpandWidth();

  constexpr void __cordl_internal_set_m_ChildForceExpandHeight(bool value);

  constexpr void __cordl_internal_set_m_ChildForceExpandWidth(bool value);

  /// @brief Method .ctor, addr 0x24066c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childForceExpandHeight, addr 0x2406660, size 0x8, virtual false, abstract: false, final false
  inline bool get_childForceExpandHeight();

  /// @brief Method get_childForceExpandWidth, addr 0x24065fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_childForceExpandWidth();

  /// @brief Method set_childForceExpandHeight, addr 0x2406668, size 0x5c, virtual false, abstract: false, final false
  inline void set_childForceExpandHeight(bool value);

  /// @brief Method set_childForceExpandWidth, addr 0x2406604, size 0x5c, virtual false, abstract: false, final false
  inline void set_childForceExpandWidth(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackLayoutGroup(StackLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackLayoutGroup(StackLayoutGroup const&) = delete;

  /// @brief Field m_ChildForceExpandWidth, offset: 0x58, size: 0x1, def value: None
  bool ___m_ChildForceExpandWidth;

  /// @brief Field m_ChildForceExpandHeight, offset: 0x59, size: 0x1, def value: None
  bool ___m_ChildForceExpandHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::StackLayoutGroup, 0x60>, "Size mismatch!");

static_assert(offsetof(::HMUI::StackLayoutGroup, ___m_ChildForceExpandWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::StackLayoutGroup, ___m_ChildForceExpandHeight) == 0x59, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::StackLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackLayoutGroup*, "HMUI", "StackLayoutGroup");

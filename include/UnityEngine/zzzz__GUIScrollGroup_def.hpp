#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GUILayoutGroup_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUIScrollGroup)
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIScrollGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIScrollGroup);
// Type: UnityEngine::GUIScrollGroup
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14622))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14623))
// CS Name: ::UnityEngine::GUIScrollGroup*
class CORDL_TYPE GUIScrollGroup : public ::UnityEngine::GUILayoutGroup {
public:
  // Declarations
  /// @brief Field calcMinWidth, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_calcMinWidth, put = __cordl_internal_set_calcMinWidth)) float_t calcMinWidth;

  /// @brief Field calcMaxWidth, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_calcMaxWidth, put = __cordl_internal_set_calcMaxWidth)) float_t calcMaxWidth;

  /// @brief Field calcMinHeight, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_calcMinHeight, put = __cordl_internal_set_calcMinHeight)) float_t calcMinHeight;

  /// @brief Field calcMaxHeight, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_calcMaxHeight, put = __cordl_internal_set_calcMaxHeight)) float_t calcMaxHeight;

  /// @brief Field clientWidth, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_clientWidth, put = __cordl_internal_set_clientWidth)) float_t clientWidth;

  /// @brief Field clientHeight, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_clientHeight, put = __cordl_internal_set_clientHeight)) float_t clientHeight;

  /// @brief Field allowHorizontalScroll, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_allowHorizontalScroll, put = __cordl_internal_set_allowHorizontalScroll)) bool allowHorizontalScroll;

  /// @brief Field allowVerticalScroll, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get_allowVerticalScroll, put = __cordl_internal_set_allowVerticalScroll)) bool allowVerticalScroll;

  /// @brief Field needsHorizontalScrollbar, offset 0xaa, size 0x1
  __declspec(property(get = __cordl_internal_get_needsHorizontalScrollbar, put = __cordl_internal_set_needsHorizontalScrollbar)) bool needsHorizontalScrollbar;

  /// @brief Field needsVerticalScrollbar, offset 0xab, size 0x1
  __declspec(property(get = __cordl_internal_get_needsVerticalScrollbar, put = __cordl_internal_set_needsVerticalScrollbar)) bool needsVerticalScrollbar;

  /// @brief Field horizontalScrollbar, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_horizontalScrollbar, put = __cordl_internal_set_horizontalScrollbar))::UnityEngine::GUIStyle* horizontalScrollbar;

  /// @brief Field verticalScrollbar, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_verticalScrollbar, put = __cordl_internal_set_verticalScrollbar))::UnityEngine::GUIStyle* verticalScrollbar;

  constexpr float_t& __cordl_internal_get_calcMinWidth();

  constexpr float_t const& __cordl_internal_get_calcMinWidth() const;

  constexpr void __cordl_internal_set_calcMinWidth(float_t value);

  constexpr float_t& __cordl_internal_get_calcMaxWidth();

  constexpr float_t const& __cordl_internal_get_calcMaxWidth() const;

  constexpr void __cordl_internal_set_calcMaxWidth(float_t value);

  constexpr float_t& __cordl_internal_get_calcMinHeight();

  constexpr float_t const& __cordl_internal_get_calcMinHeight() const;

  constexpr void __cordl_internal_set_calcMinHeight(float_t value);

  constexpr float_t& __cordl_internal_get_calcMaxHeight();

  constexpr float_t const& __cordl_internal_get_calcMaxHeight() const;

  constexpr void __cordl_internal_set_calcMaxHeight(float_t value);

  constexpr float_t& __cordl_internal_get_clientWidth();

  constexpr float_t const& __cordl_internal_get_clientWidth() const;

  constexpr void __cordl_internal_set_clientWidth(float_t value);

  constexpr float_t& __cordl_internal_get_clientHeight();

  constexpr float_t const& __cordl_internal_get_clientHeight() const;

  constexpr void __cordl_internal_set_clientHeight(float_t value);

  constexpr bool& __cordl_internal_get_allowHorizontalScroll();

  constexpr bool const& __cordl_internal_get_allowHorizontalScroll() const;

  constexpr void __cordl_internal_set_allowHorizontalScroll(bool value);

  constexpr bool& __cordl_internal_get_allowVerticalScroll();

  constexpr bool const& __cordl_internal_get_allowVerticalScroll() const;

  constexpr void __cordl_internal_set_allowVerticalScroll(bool value);

  constexpr bool& __cordl_internal_get_needsHorizontalScrollbar();

  constexpr bool const& __cordl_internal_get_needsHorizontalScrollbar() const;

  constexpr void __cordl_internal_set_needsHorizontalScrollbar(bool value);

  constexpr bool& __cordl_internal_get_needsVerticalScrollbar();

  constexpr bool const& __cordl_internal_get_needsVerticalScrollbar() const;

  constexpr void __cordl_internal_set_needsVerticalScrollbar(bool value);

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_horizontalScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_horizontalScrollbar() const;

  constexpr void __cordl_internal_set_horizontalScrollbar(::UnityEngine::GUIStyle* value);

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_verticalScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_verticalScrollbar() const;

  constexpr void __cordl_internal_set_verticalScrollbar(::UnityEngine::GUIStyle* value);

  static inline ::UnityEngine::GUIScrollGroup* New_ctor();

  /// @brief Method .ctor, addr 0x2d0c040, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CalcWidth, addr 0x2d0c0a0, size 0x80, virtual true, abstract: false, final false
  inline void CalcWidth();

  /// @brief Method SetHorizontal, addr 0x2d0c120, size 0x12c, virtual true, abstract: false, final false
  inline void SetHorizontal(float_t x, float_t width);

  /// @brief Method CalcHeight, addr 0x2d0c330, size 0x100, virtual true, abstract: false, final false
  inline void CalcHeight();

  /// @brief Method SetVertical, addr 0x2d0c46c, size 0x218, virtual true, abstract: false, final false
  inline void SetVertical(float_t y, float_t height);

  // Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIScrollGroup(GUIScrollGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIScrollGroup(GUIScrollGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIScrollGroup();

public:
  /// @brief Field calcMinWidth, offset: 0x90, size: 0x4, def value: None
  float_t ___calcMinWidth;

  /// @brief Field calcMaxWidth, offset: 0x94, size: 0x4, def value: None
  float_t ___calcMaxWidth;

  /// @brief Field calcMinHeight, offset: 0x98, size: 0x4, def value: None
  float_t ___calcMinHeight;

  /// @brief Field calcMaxHeight, offset: 0x9c, size: 0x4, def value: None
  float_t ___calcMaxHeight;

  /// @brief Field clientWidth, offset: 0xa0, size: 0x4, def value: None
  float_t ___clientWidth;

  /// @brief Field clientHeight, offset: 0xa4, size: 0x4, def value: None
  float_t ___clientHeight;

  /// @brief Field allowHorizontalScroll, offset: 0xa8, size: 0x1, def value: None
  bool ___allowHorizontalScroll;

  /// @brief Field allowVerticalScroll, offset: 0xa9, size: 0x1, def value: None
  bool ___allowVerticalScroll;

  /// @brief Field needsHorizontalScrollbar, offset: 0xaa, size: 0x1, def value: None
  bool ___needsHorizontalScrollbar;

  /// @brief Field needsVerticalScrollbar, offset: 0xab, size: 0x1, def value: None
  bool ___needsVerticalScrollbar;

  /// @brief Field horizontalScrollbar, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___horizontalScrollbar;

  /// @brief Field verticalScrollbar, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___verticalScrollbar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIScrollGroup, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___calcMinWidth) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___calcMaxWidth) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___calcMinHeight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___calcMaxHeight) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___clientWidth) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___clientHeight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___allowHorizontalScroll) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___allowVerticalScroll) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___needsHorizontalScrollbar) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___needsVerticalScrollbar) == 0xab, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___horizontalScrollbar) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIScrollGroup, ___verticalScrollbar) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIScrollGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIScrollGroup*, "UnityEngine", "GUIScrollGroup");

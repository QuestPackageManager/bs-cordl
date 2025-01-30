#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GUILayoutEntry;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutGroup);
// Dependencies UnityEngine.GUILayoutEntry
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayoutGroup
class CORDL_TYPE GUILayoutGroup : public ::UnityEngine::GUILayoutEntry {
public:
  // Declarations
  /// @brief Field entries, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_entries, put = __cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>* entries;

  /// @brief Field isVertical, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isVertical, put = __cordl_internal_set_isVertical)) bool isVertical;

  /// @brief Field isWindow, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isWindow, put = __cordl_internal_set_isWindow)) bool isWindow;

  /// @brief Field m_ChildMaxHeight, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildMaxHeight, put = __cordl_internal_set_m_ChildMaxHeight)) float_t m_ChildMaxHeight;

  /// @brief Field m_ChildMaxWidth, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildMaxWidth, put = __cordl_internal_set_m_ChildMaxWidth)) float_t m_ChildMaxWidth;

  /// @brief Field m_ChildMinHeight, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildMinHeight, put = __cordl_internal_set_m_ChildMinHeight)) float_t m_ChildMinHeight;

  /// @brief Field m_ChildMinWidth, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildMinWidth, put = __cordl_internal_set_m_ChildMinWidth)) float_t m_ChildMinWidth;

  /// @brief Field m_Cursor, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Cursor, put = __cordl_internal_set_m_Cursor)) int32_t m_Cursor;

  /// @brief Field m_MarginBottom, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginBottom, put = __cordl_internal_set_m_MarginBottom)) int32_t m_MarginBottom;

  /// @brief Field m_MarginLeft, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginLeft, put = __cordl_internal_set_m_MarginLeft)) int32_t m_MarginLeft;

  /// @brief Field m_MarginRight, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginRight, put = __cordl_internal_set_m_MarginRight)) int32_t m_MarginRight;

  /// @brief Field m_MarginTop, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MarginTop, put = __cordl_internal_set_m_MarginTop)) int32_t m_MarginTop;

  /// @brief Field m_StretchableCountX, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StretchableCountX, put = __cordl_internal_set_m_StretchableCountX)) int32_t m_StretchableCountX;

  /// @brief Field m_StretchableCountY, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StretchableCountY, put = __cordl_internal_set_m_StretchableCountY)) int32_t m_StretchableCountY;

  /// @brief Field m_UserSpecifiedHeight, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UserSpecifiedHeight, put = __cordl_internal_set_m_UserSpecifiedHeight)) bool m_UserSpecifiedHeight;

  /// @brief Field m_UserSpecifiedWidth, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UserSpecifiedWidth, put = __cordl_internal_set_m_UserSpecifiedWidth)) bool m_UserSpecifiedWidth;

  __declspec(property(get = get_marginBottom)) int32_t marginBottom;

  __declspec(property(get = get_marginLeft)) int32_t marginLeft;

  __declspec(property(get = get_marginRight)) int32_t marginRight;

  __declspec(property(get = get_marginTop)) int32_t marginTop;

  /// @brief Field none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_none, put = setStaticF_none)) ::UnityEngine::GUILayoutEntry* none;

  /// @brief Field resetCoords, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_resetCoords, put = __cordl_internal_set_resetCoords)) bool resetCoords;

  /// @brief Field sameSize, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_sameSize, put = __cordl_internal_set_sameSize)) bool sameSize;

  /// @brief Field spacing, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_spacing, put = __cordl_internal_set_spacing)) float_t spacing;

  /// @brief Field windowID, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_windowID, put = __cordl_internal_set_windowID)) int32_t windowID;

  /// @brief Method Add, addr 0x48ddb18, size 0xa4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::GUILayoutEntry* e);

  /// @brief Method ApplyOptions, addr 0x48e3794, size 0x120, virtual true, abstract: false, final false
  inline void ApplyOptions(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method ApplyStyleSettings, addr 0x48e38b4, size 0x74, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::UnityEngine::GUIStyle* style);

  /// @brief Method CalcHeight, addr 0x48e4810, size 0x5fc, virtual true, abstract: false, final false
  inline void CalcHeight();

  /// @brief Method CalcWidth, addr 0x48e3928, size 0x6ac, virtual true, abstract: false, final false
  inline void CalcWidth();

  /// @brief Method GetNext, addr 0x48ddbbc, size 0x2e4, virtual false, abstract: false, final false
  inline ::UnityEngine::GUILayoutEntry* GetNext();

  static inline ::UnityEngine::GUILayoutGroup* New_ctor();

  /// @brief Method ResetCursor, addr 0x48dd9c4, size 0x8, virtual false, abstract: false, final false
  inline void ResetCursor();

  /// @brief Method SetHorizontal, addr 0x48e3fd4, size 0x83c, virtual true, abstract: false, final false
  inline void SetHorizontal(float_t x, float_t width);

  /// @brief Method SetVertical, addr 0x48e4e0c, size 0x848, virtual true, abstract: false, final false
  inline void SetVertical(float_t y, float_t height);

  /// @brief Method ToString, addr 0x48e5654, size 0x38c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>* const& __cordl_internal_get_entries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>*& __cordl_internal_get_entries();

  constexpr bool const& __cordl_internal_get_isVertical() const;

  constexpr bool& __cordl_internal_get_isVertical();

  constexpr bool const& __cordl_internal_get_isWindow() const;

  constexpr bool& __cordl_internal_get_isWindow();

  constexpr float_t const& __cordl_internal_get_m_ChildMaxHeight() const;

  constexpr float_t& __cordl_internal_get_m_ChildMaxHeight();

  constexpr float_t const& __cordl_internal_get_m_ChildMaxWidth() const;

  constexpr float_t& __cordl_internal_get_m_ChildMaxWidth();

  constexpr float_t const& __cordl_internal_get_m_ChildMinHeight() const;

  constexpr float_t& __cordl_internal_get_m_ChildMinHeight();

  constexpr float_t const& __cordl_internal_get_m_ChildMinWidth() const;

  constexpr float_t& __cordl_internal_get_m_ChildMinWidth();

  constexpr int32_t const& __cordl_internal_get_m_Cursor() const;

  constexpr int32_t& __cordl_internal_get_m_Cursor();

  constexpr int32_t const& __cordl_internal_get_m_MarginBottom() const;

  constexpr int32_t& __cordl_internal_get_m_MarginBottom();

  constexpr int32_t const& __cordl_internal_get_m_MarginLeft() const;

  constexpr int32_t& __cordl_internal_get_m_MarginLeft();

  constexpr int32_t const& __cordl_internal_get_m_MarginRight() const;

  constexpr int32_t& __cordl_internal_get_m_MarginRight();

  constexpr int32_t const& __cordl_internal_get_m_MarginTop() const;

  constexpr int32_t& __cordl_internal_get_m_MarginTop();

  constexpr int32_t const& __cordl_internal_get_m_StretchableCountX() const;

  constexpr int32_t& __cordl_internal_get_m_StretchableCountX();

  constexpr int32_t const& __cordl_internal_get_m_StretchableCountY() const;

  constexpr int32_t& __cordl_internal_get_m_StretchableCountY();

  constexpr bool const& __cordl_internal_get_m_UserSpecifiedHeight() const;

  constexpr bool& __cordl_internal_get_m_UserSpecifiedHeight();

  constexpr bool const& __cordl_internal_get_m_UserSpecifiedWidth() const;

  constexpr bool& __cordl_internal_get_m_UserSpecifiedWidth();

  constexpr bool const& __cordl_internal_get_resetCoords() const;

  constexpr bool& __cordl_internal_get_resetCoords();

  constexpr bool const& __cordl_internal_get_sameSize() const;

  constexpr bool& __cordl_internal_get_sameSize();

  constexpr float_t const& __cordl_internal_get_spacing() const;

  constexpr float_t& __cordl_internal_get_spacing();

  constexpr int32_t const& __cordl_internal_get_windowID() const;

  constexpr int32_t& __cordl_internal_get_windowID();

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>* value);

  constexpr void __cordl_internal_set_isVertical(bool value);

  constexpr void __cordl_internal_set_isWindow(bool value);

  constexpr void __cordl_internal_set_m_ChildMaxHeight(float_t value);

  constexpr void __cordl_internal_set_m_ChildMaxWidth(float_t value);

  constexpr void __cordl_internal_set_m_ChildMinHeight(float_t value);

  constexpr void __cordl_internal_set_m_ChildMinWidth(float_t value);

  constexpr void __cordl_internal_set_m_Cursor(int32_t value);

  constexpr void __cordl_internal_set_m_MarginBottom(int32_t value);

  constexpr void __cordl_internal_set_m_MarginLeft(int32_t value);

  constexpr void __cordl_internal_set_m_MarginRight(int32_t value);

  constexpr void __cordl_internal_set_m_MarginTop(int32_t value);

  constexpr void __cordl_internal_set_m_StretchableCountX(int32_t value);

  constexpr void __cordl_internal_set_m_StretchableCountY(int32_t value);

  constexpr void __cordl_internal_set_m_UserSpecifiedHeight(bool value);

  constexpr void __cordl_internal_set_m_UserSpecifiedWidth(bool value);

  constexpr void __cordl_internal_set_resetCoords(bool value);

  constexpr void __cordl_internal_set_sameSize(bool value);

  constexpr void __cordl_internal_set_spacing(float_t value);

  constexpr void __cordl_internal_set_windowID(int32_t value);

  /// @brief Method .ctor, addr 0x48dd058, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::GUILayoutEntry* getStaticF_none();

  /// @brief Method get_marginBottom, addr 0x48e378c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_marginBottom();

  /// @brief Method get_marginLeft, addr 0x48e3774, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_marginLeft();

  /// @brief Method get_marginRight, addr 0x48e377c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_marginRight();

  /// @brief Method get_marginTop, addr 0x48e3784, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_marginTop();

  static inline void setStaticF_none(::UnityEngine::GUILayoutEntry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutGroup(GUILayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutGroup(GUILayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16655 };

  /// @brief Field entries, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GUILayoutEntry*>* ___entries;

  /// @brief Field isVertical, offset: 0x50, size: 0x1, def value: None
  bool ___isVertical;

  /// @brief Field resetCoords, offset: 0x51, size: 0x1, def value: None
  bool ___resetCoords;

  /// @brief Field spacing, offset: 0x54, size: 0x4, def value: None
  float_t ___spacing;

  /// @brief Field sameSize, offset: 0x58, size: 0x1, def value: None
  bool ___sameSize;

  /// @brief Field isWindow, offset: 0x59, size: 0x1, def value: None
  bool ___isWindow;

  /// @brief Field windowID, offset: 0x5c, size: 0x4, def value: None
  int32_t ___windowID;

  /// @brief Field m_Cursor, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_Cursor;

  /// @brief Field m_StretchableCountX, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_StretchableCountX;

  /// @brief Field m_StretchableCountY, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_StretchableCountY;

  /// @brief Field m_UserSpecifiedWidth, offset: 0x6c, size: 0x1, def value: None
  bool ___m_UserSpecifiedWidth;

  /// @brief Field m_UserSpecifiedHeight, offset: 0x6d, size: 0x1, def value: None
  bool ___m_UserSpecifiedHeight;

  /// @brief Field m_ChildMinWidth, offset: 0x70, size: 0x4, def value: None
  float_t ___m_ChildMinWidth;

  /// @brief Field m_ChildMaxWidth, offset: 0x74, size: 0x4, def value: None
  float_t ___m_ChildMaxWidth;

  /// @brief Field m_ChildMinHeight, offset: 0x78, size: 0x4, def value: None
  float_t ___m_ChildMinHeight;

  /// @brief Field m_ChildMaxHeight, offset: 0x7c, size: 0x4, def value: None
  float_t ___m_ChildMaxHeight;

  /// @brief Field m_MarginLeft, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_MarginLeft;

  /// @brief Field m_MarginRight, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_MarginRight;

  /// @brief Field m_MarginTop, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_MarginTop;

  /// @brief Field m_MarginBottom, offset: 0x8c, size: 0x4, def value: None
  int32_t ___m_MarginBottom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___entries) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___isVertical) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___resetCoords) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___spacing) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___sameSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___isWindow) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___windowID) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_Cursor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_StretchableCountX) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_StretchableCountY) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_UserSpecifiedWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_UserSpecifiedHeight) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_ChildMinWidth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_ChildMaxWidth) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_ChildMinHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_ChildMaxHeight) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_MarginLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_MarginRight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_MarginTop) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutGroup, ___m_MarginBottom) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutGroup, 0x90>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutGroup*, "UnityEngine", "GUILayoutGroup");

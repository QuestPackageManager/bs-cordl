#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutEntry)
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutEntry);
// Type: UnityEngine::GUILayoutEntry
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14592))
// CS Name: ::UnityEngine::GUILayoutEntry*
class CORDL_TYPE GUILayoutEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field minWidth, offset 0x10, size 0x4
  __declspec(property(get = __get_minWidth, put = __set_minWidth)) float_t minWidth;

  /// @brief Field maxWidth, offset 0x14, size 0x4
  __declspec(property(get = __get_maxWidth, put = __set_maxWidth)) float_t maxWidth;

  /// @brief Field minHeight, offset 0x18, size 0x4
  __declspec(property(get = __get_minHeight, put = __set_minHeight)) float_t minHeight;

  /// @brief Field maxHeight, offset 0x1c, size 0x4
  __declspec(property(get = __get_maxHeight, put = __set_maxHeight)) float_t maxHeight;

  /// @brief Field rect, offset 0x20, size 0x10
  __declspec(property(get = __get_rect, put = __set_rect))::UnityEngine::Rect rect;

  /// @brief Field stretchWidth, offset 0x30, size 0x4
  __declspec(property(get = __get_stretchWidth, put = __set_stretchWidth)) int32_t stretchWidth;

  /// @brief Field stretchHeight, offset 0x34, size 0x4
  __declspec(property(get = __get_stretchHeight, put = __set_stretchHeight)) int32_t stretchHeight;

  /// @brief Field consideredForMargin, offset 0x38, size 0x1
  __declspec(property(get = __get_consideredForMargin, put = __set_consideredForMargin)) bool consideredForMargin;

  /// @brief Field m_Style, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Style, put = __set_m_Style))::UnityEngine::GUIStyle* m_Style;

  /// @brief Field kDummyRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kDummyRect, put = setStaticF_kDummyRect))::UnityEngine::Rect kDummyRect;

  /// @brief Field indent, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indent, put = setStaticF_indent)) int32_t indent;

  __declspec(property(get = get_style, put = set_style))::UnityEngine::GUIStyle* style;

  __declspec(property(get = get_marginLeft)) int32_t marginLeft;

  __declspec(property(get = get_marginRight)) int32_t marginRight;

  __declspec(property(get = get_marginTop)) int32_t marginTop;

  __declspec(property(get = get_marginBottom)) int32_t marginBottom;

  __declspec(property(get = get_marginHorizontal)) int32_t marginHorizontal;

  __declspec(property(get = get_marginVertical)) int32_t marginVertical;

  constexpr float_t& __get_minWidth();

  constexpr float_t const& __get_minWidth() const;

  constexpr void __set_minWidth(float_t value);

  constexpr float_t& __get_maxWidth();

  constexpr float_t const& __get_maxWidth() const;

  constexpr void __set_maxWidth(float_t value);

  constexpr float_t& __get_minHeight();

  constexpr float_t const& __get_minHeight() const;

  constexpr void __set_minHeight(float_t value);

  constexpr float_t& __get_maxHeight();

  constexpr float_t const& __get_maxHeight() const;

  constexpr void __set_maxHeight(float_t value);

  constexpr ::UnityEngine::Rect& __get_rect();

  constexpr ::UnityEngine::Rect const& __get_rect() const;

  constexpr void __set_rect(::UnityEngine::Rect value);

  constexpr int32_t& __get_stretchWidth();

  constexpr int32_t const& __get_stretchWidth() const;

  constexpr void __set_stretchWidth(int32_t value);

  constexpr int32_t& __get_stretchHeight();

  constexpr int32_t const& __get_stretchHeight() const;

  constexpr void __set_stretchHeight(int32_t value);

  constexpr bool& __get_consideredForMargin();

  constexpr bool const& __get_consideredForMargin() const;

  constexpr void __set_consideredForMargin(bool value);

  constexpr ::UnityEngine::GUIStyle*& __get_m_Style();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __get_m_Style() const;

  constexpr void __set_m_Style(::UnityEngine::GUIStyle* value);

  static inline void setStaticF_kDummyRect(::UnityEngine::Rect value);

  static inline ::UnityEngine::Rect getStaticF_kDummyRect();

  static inline void setStaticF_indent(int32_t value);

  static inline int32_t getStaticF_indent();

  /// @brief Method get_style addr 0x2cfb298 size 0x8 virtual false final false
  inline ::UnityEngine::GUIStyle* get_style();

  /// @brief Method set_style addr 0x2cfb2a0 size 0x10 virtual false final false
  inline void set_style(::UnityEngine::GUIStyle* value);

  /// @brief Method get_marginLeft addr 0x2cfb2b0 size 0x28 virtual true final false
  inline int32_t get_marginLeft();

  /// @brief Method get_marginRight addr 0x2cfb2d8 size 0x28 virtual true final false
  inline int32_t get_marginRight();

  /// @brief Method get_marginTop addr 0x2cfb300 size 0x28 virtual true final false
  inline int32_t get_marginTop();

  /// @brief Method get_marginBottom addr 0x2cfb328 size 0x28 virtual true final false
  inline int32_t get_marginBottom();

  /// @brief Method get_marginHorizontal addr 0x2cfb350 size 0x3c virtual false final false
  inline int32_t get_marginHorizontal();

  /// @brief Method get_marginVertical addr 0x2cfb38c size 0x3c virtual false final false
  inline int32_t get_marginVertical();

  static inline ::UnityEngine::GUILayoutEntry* New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style);

  /// @brief Method .ctor addr 0x2cfb3c8 size 0x10c virtual false final false
  inline void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style);

  static inline ::UnityEngine::GUILayoutEntry* New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                                                        ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method .ctor addr 0x2cfb4d4 size 0x108 virtual false final false
  inline void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                    ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method CalcWidth addr 0x2cfb5dc size 0x4 virtual true final false
  inline void CalcWidth();

  /// @brief Method CalcHeight addr 0x2cfb5e0 size 0x4 virtual true final false
  inline void CalcHeight();

  /// @brief Method SetHorizontal addr 0x2cfb5e4 size 0x34 virtual true final false
  inline void SetHorizontal(float_t x, float_t width);

  /// @brief Method SetVertical addr 0x2cfb618 size 0x34 virtual true final false
  inline void SetVertical(float_t y, float_t height);

  /// @brief Method ApplyStyleSettings addr 0x2cfb64c size 0x8c virtual true final false
  inline void ApplyStyleSettings(::UnityEngine::GUIStyle* style);

  /// @brief Method ApplyOptions addr 0x2cfb6d8 size 0x2d4 virtual true final false
  inline void ApplyOptions(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method ToString addr 0x2cfb9ac size 0x5e0 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutEntry(GUILayoutEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutEntry(GUILayoutEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutEntry();

public:
  /// @brief Field minWidth, offset: 0x10, size: 0x4, def value: None
  float_t ___minWidth;

  /// @brief Field maxWidth, offset: 0x14, size: 0x4, def value: None
  float_t ___maxWidth;

  /// @brief Field minHeight, offset: 0x18, size: 0x4, def value: None
  float_t ___minHeight;

  /// @brief Field maxHeight, offset: 0x1c, size: 0x4, def value: None
  float_t ___maxHeight;

  /// @brief Field rect, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___rect;

  /// @brief Field stretchWidth, offset: 0x30, size: 0x4, def value: None
  int32_t ___stretchWidth;

  /// @brief Field stretchHeight, offset: 0x34, size: 0x4, def value: None
  int32_t ___stretchHeight;

  /// @brief Field consideredForMargin, offset: 0x38, size: 0x1, def value: None
  bool ___consideredForMargin;

  /// @brief Field m_Style, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_Style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutEntry, 0x48>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutEntry*, "UnityEngine", "GUILayoutEntry");

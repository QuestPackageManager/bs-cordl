#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutElement)
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class ILayoutIgnorer;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutElement);
// Type: UnityEngine.UI::LayoutElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::LayoutElement*
class CORDL_TYPE LayoutElement : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_flexibleHeight, put = set_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth, put = set_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_ignoreLayout, put = set_ignoreLayout)) bool ignoreLayout;

  __declspec(property(get = get_layoutPriority, put = set_layoutPriority)) int32_t layoutPriority;

  /// @brief Field m_FlexibleHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FlexibleHeight, put = __cordl_internal_set_m_FlexibleHeight)) float_t m_FlexibleHeight;

  /// @brief Field m_FlexibleWidth, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FlexibleWidth, put = __cordl_internal_set_m_FlexibleWidth)) float_t m_FlexibleWidth;

  /// @brief Field m_IgnoreLayout, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreLayout, put = __cordl_internal_set_m_IgnoreLayout)) bool m_IgnoreLayout;

  /// @brief Field m_LayoutPriority, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LayoutPriority, put = __cordl_internal_set_m_LayoutPriority)) int32_t m_LayoutPriority;

  /// @brief Field m_MinHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinHeight, put = __cordl_internal_set_m_MinHeight)) float_t m_MinHeight;

  /// @brief Field m_MinWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinWidth, put = __cordl_internal_set_m_MinWidth)) float_t m_MinWidth;

  /// @brief Field m_PreferredHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreferredHeight, put = __cordl_internal_set_m_PreferredHeight)) float_t m_PreferredHeight;

  /// @brief Field m_PreferredWidth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreferredWidth, put = __cordl_internal_set_m_PreferredWidth)) float_t m_PreferredWidth;

  __declspec(property(get = get_minHeight, put = set_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth, put = set_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredHeight, put = set_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth, put = set_preferredWidth)) float_t preferredWidth;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutIgnorer"
  constexpr operator ::UnityEngine::UI::ILayoutIgnorer*() noexcept;

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x34cc3ac, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x34cc3b0, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::UnityEngine::UI::LayoutElement* New_ctor();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x34cc77c, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x34cc778, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x34cc75c, size 0x1c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x34cc73c, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x34cc758, size 0x4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method SetDirty, addr 0x34cc2f4, size 0xb8, virtual false, abstract: false, final false
  inline void SetDirty();

  constexpr float_t const& __cordl_internal_get_m_FlexibleHeight() const;

  constexpr float_t& __cordl_internal_get_m_FlexibleHeight();

  constexpr float_t const& __cordl_internal_get_m_FlexibleWidth() const;

  constexpr float_t& __cordl_internal_get_m_FlexibleWidth();

  constexpr bool const& __cordl_internal_get_m_IgnoreLayout() const;

  constexpr bool& __cordl_internal_get_m_IgnoreLayout();

  constexpr int32_t const& __cordl_internal_get_m_LayoutPriority() const;

  constexpr int32_t& __cordl_internal_get_m_LayoutPriority();

  constexpr float_t const& __cordl_internal_get_m_MinHeight() const;

  constexpr float_t& __cordl_internal_get_m_MinHeight();

  constexpr float_t const& __cordl_internal_get_m_MinWidth() const;

  constexpr float_t& __cordl_internal_get_m_MinWidth();

  constexpr float_t const& __cordl_internal_get_m_PreferredHeight() const;

  constexpr float_t& __cordl_internal_get_m_PreferredHeight();

  constexpr float_t const& __cordl_internal_get_m_PreferredWidth() const;

  constexpr float_t& __cordl_internal_get_m_PreferredWidth();

  constexpr void __cordl_internal_set_m_FlexibleHeight(float_t value);

  constexpr void __cordl_internal_set_m_FlexibleWidth(float_t value);

  constexpr void __cordl_internal_set_m_IgnoreLayout(bool value);

  constexpr void __cordl_internal_set_m_LayoutPriority(int32_t value);

  constexpr void __cordl_internal_set_m_MinHeight(float_t value);

  constexpr void __cordl_internal_set_m_MinWidth(float_t value);

  constexpr void __cordl_internal_set_m_PreferredHeight(float_t value);

  constexpr void __cordl_internal_set_m_PreferredWidth(float_t value);

  /// @brief Method .ctor, addr 0x34cc718, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_flexibleHeight, addr 0x34cc620, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x34cc5a4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_ignoreLayout, addr 0x34cc278, size 0x8, virtual true, abstract: false, final false
  inline bool get_ignoreLayout();

  /// @brief Method get_layoutPriority, addr 0x34cc69c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_minHeight, addr 0x34cc430, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x34cc3b4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredHeight, addr 0x34cc528, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x34cc4ac, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutIgnorer"
  constexpr ::UnityEngine::UI::ILayoutIgnorer* i___UnityEngine__UI__ILayoutIgnorer() noexcept;

  /// @brief Method set_flexibleHeight, addr 0x34cc628, size 0x74, virtual true, abstract: false, final false
  inline void set_flexibleHeight(float_t value);

  /// @brief Method set_flexibleWidth, addr 0x34cc5ac, size 0x74, virtual true, abstract: false, final false
  inline void set_flexibleWidth(float_t value);

  /// @brief Method set_ignoreLayout, addr 0x34cc280, size 0x74, virtual true, abstract: false, final false
  inline void set_ignoreLayout(bool value);

  /// @brief Method set_layoutPriority, addr 0x34cc6a4, size 0x74, virtual true, abstract: false, final false
  inline void set_layoutPriority(int32_t value);

  /// @brief Method set_minHeight, addr 0x34cc438, size 0x74, virtual true, abstract: false, final false
  inline void set_minHeight(float_t value);

  /// @brief Method set_minWidth, addr 0x34cc3bc, size 0x74, virtual true, abstract: false, final false
  inline void set_minWidth(float_t value);

  /// @brief Method set_preferredHeight, addr 0x34cc530, size 0x74, virtual true, abstract: false, final false
  inline void set_preferredHeight(float_t value);

  /// @brief Method set_preferredWidth, addr 0x34cc4b4, size 0x74, virtual true, abstract: false, final false
  inline void set_preferredWidth(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutElement(LayoutElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutElement(LayoutElement const&) = delete;

  /// @brief Field m_IgnoreLayout, offset: 0x18, size: 0x1, def value: None
  bool ___m_IgnoreLayout;

  /// @brief Field m_MinWidth, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_MinWidth;

  /// @brief Field m_MinHeight, offset: 0x20, size: 0x4, def value: None
  float_t ___m_MinHeight;

  /// @brief Field m_PreferredWidth, offset: 0x24, size: 0x4, def value: None
  float_t ___m_PreferredWidth;

  /// @brief Field m_PreferredHeight, offset: 0x28, size: 0x4, def value: None
  float_t ___m_PreferredHeight;

  /// @brief Field m_FlexibleWidth, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_FlexibleWidth;

  /// @brief Field m_FlexibleHeight, offset: 0x30, size: 0x4, def value: None
  float_t ___m_FlexibleHeight;

  /// @brief Field m_LayoutPriority, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_LayoutPriority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutElement, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_IgnoreLayout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_MinWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_MinHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_PreferredWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_PreferredHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_FlexibleWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_FlexibleHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutElement, ___m_LayoutPriority) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutElement*, "UnityEngine.UI", "LayoutElement");

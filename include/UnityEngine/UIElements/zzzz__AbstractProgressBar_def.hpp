#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AbstractProgressBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AbstractProgressBar)
namespace UnityEngine::UIElements {
class AbstractProgressBar_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AbstractProgressBar;
}
namespace UnityEngine::UIElements {
class AbstractProgressBar_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AbstractProgressBar);
MARK_REF_PTR_T(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits);
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AbstractProgressBar/UxmlTraits
class CORDL_TYPE AbstractProgressBar_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_HighValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_LowValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_Title, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Title, put = __cordl_internal_set_m_Title)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Title;

  /// @brief Field m_Value, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x6b98ec4, size 0x1e8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_HighValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HighValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_LowValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_LowValue();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Title() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Title();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_Value() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Title(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b990ac, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractProgressBar_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractProgressBar_UxmlTraits(AbstractProgressBar_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractProgressBar_UxmlTraits(AbstractProgressBar_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4289 };

  /// @brief Field m_LowValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighValue;

  /// @brief Field m_Value, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_Value;

  /// @brief Field m_Title, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Title;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits, ___m_LowValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits, ___m_HighValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits, ___m_Value) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits, ___m_Title) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AbstractProgressBar
class CORDL_TYPE AbstractProgressBar : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits;

  /// @brief Field backgroundUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_backgroundUssClassName, put = setStaticF_backgroundUssClassName)) ::StringW backgroundUssClassName;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName)) ::StringW containerUssClassName;

  __declspec(property(get = get_highValue, put = set_highValue)) float_t highValue;

  /// @brief Field highValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_highValueProperty, put = setStaticF_highValueProperty)) ::UnityEngine::UIElements::BindingId highValueProperty;

  __declspec(property(get = get_lowValue, put = set_lowValue)) float_t lowValue;

  /// @brief Field lowValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_lowValueProperty, put = setStaticF_lowValueProperty)) ::UnityEngine::UIElements::BindingId lowValueProperty;

  /// @brief Field m_Background, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Background, put = __cordl_internal_set_m_Background)) ::UnityEngine::UIElements::VisualElement* m_Background;

  /// @brief Field m_HighValue, offset 0x4d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue)) float_t m_HighValue;

  /// @brief Field m_LowValue, offset 0x4d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue)) float_t m_LowValue;

  /// @brief Field m_Progress, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Progress, put = __cordl_internal_set_m_Progress)) ::UnityEngine::UIElements::VisualElement* m_Progress;

  /// @brief Field m_Title, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Title, put = __cordl_internal_set_m_Title)) ::UnityEngine::UIElements::Label* m_Title;

  /// @brief Field m_Value, offset 0x4d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) float_t m_Value;

  /// @brief Field progressUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_progressUssClassName, put = setStaticF_progressUssClassName)) ::StringW progressUssClassName;

  __declspec(property(get = get_title, put = set_title)) ::StringW title;

  /// @brief Field titleContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_titleContainerUssClassName, put = setStaticF_titleContainerUssClassName)) ::StringW titleContainerUssClassName;

  /// @brief Field titleProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_titleProperty, put = setStaticF_titleProperty)) ::UnityEngine::UIElements::BindingId titleProperty;

  /// @brief Field titleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_titleUssClassName, put = setStaticF_titleUssClassName)) ::StringW titleUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Field valueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_valueProperty, put = setStaticF_valueProperty)) ::UnityEngine::UIElements::BindingId valueProperty;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*() noexcept;

  /// @brief Method CalculateProgressWidth, addr 0x6b98a70, size 0x84, virtual false, abstract: false, final false
  inline float_t CalculateProgressWidth(float_t width);

  static inline ::UnityEngine::UIElements::AbstractProgressBar* New_ctor();

  /// @brief Method OnGeometryChanged, addr 0x6b987b0, size 0x24, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method SetProgress, addr 0x6b982a8, size 0x12c, virtual false, abstract: false, final false
  inline void SetProgress(float_t p);

  /// @brief Method SetValueWithoutNotify, addr 0x6b98a48, size 0x28, virtual true, abstract: false, final true
  inline void SetValueWithoutNotify(float_t newValue);

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Background() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Background();

  constexpr float_t const& __cordl_internal_get_m_HighValue() const;

  constexpr float_t& __cordl_internal_get_m_HighValue();

  constexpr float_t const& __cordl_internal_get_m_LowValue() const;

  constexpr float_t& __cordl_internal_get_m_LowValue();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Progress() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Progress();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_Title() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_Title();

  constexpr float_t const& __cordl_internal_get_m_Value() const;

  constexpr float_t& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Background(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HighValue(float_t value);

  constexpr void __cordl_internal_set_m_LowValue(float_t value);

  constexpr void __cordl_internal_set_m_Progress(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Title(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_Value(float_t value);

  /// @brief Method .ctor, addr 0x6b984e8, size 0x2c8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_backgroundUssClassName();

  static inline ::StringW getStaticF_containerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_highValueProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_lowValueProperty();

  static inline ::StringW getStaticF_progressUssClassName();

  static inline ::StringW getStaticF_titleContainerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_titleProperty();

  static inline ::StringW getStaticF_titleUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_valueProperty();

  /// @brief Method get_highValue, addr 0x6b983d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highValue();

  /// @brief Method get_lowValue, addr 0x6b98194, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lowValue();

  /// @brief Method get_title, addr 0x6b98088, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_value, addr 0x6b987d4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>* i___UnityEngine__UIElements__INotifyValueChanged_1_float_t_() noexcept;

  static inline void setStaticF_backgroundUssClassName(::StringW value);

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline void setStaticF_highValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_lowValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_progressUssClassName(::StringW value);

  static inline void setStaticF_titleContainerUssClassName(::StringW value);

  static inline void setStaticF_titleProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_titleUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_highValue, addr 0x6b983dc, size 0x10c, virtual false, abstract: false, final false
  inline void set_highValue(float_t value);

  /// @brief Method set_lowValue, addr 0x6b9819c, size 0x10c, virtual false, abstract: false, final false
  inline void set_lowValue(float_t value);

  /// @brief Method set_title, addr 0x6b980a8, size 0xec, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method set_value, addr 0x6b987dc, size 0x26c, virtual true, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractProgressBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractProgressBar(AbstractProgressBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractProgressBar(AbstractProgressBar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4290 };

  /// @brief Field m_Background, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Background;

  /// @brief Field m_Progress, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Progress;

  /// @brief Field m_Title, offset: 0x4c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Title;

  /// @brief Field m_LowValue, offset: 0x4d0, size: 0x4, def value: None
  float_t ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x4d4, size: 0x4, def value: None
  float_t ___m_HighValue;

  /// @brief Field m_Value, offset: 0x4d8, size: 0x4, def value: None
  float_t ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Background) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Progress) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Title) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_LowValue) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_HighValue) == 0x4d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Value) == 0x4d8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AbstractProgressBar, 0x4e0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AbstractProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AbstractProgressBar*, "UnityEngine.UIElements", "AbstractProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*, "UnityEngine.UIElements", "AbstractProgressBar/UxmlTraits");

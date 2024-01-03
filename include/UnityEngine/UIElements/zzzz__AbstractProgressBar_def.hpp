#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AbstractProgressBar)
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
namespace UnityEngine::UIElements {
class __AbstractProgressBar__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AbstractProgressBar;
}
namespace UnityEngine::UIElements {
class __AbstractProgressBar__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AbstractProgressBar);
MARK_REF_PTR_T(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7116))
// CS Name: ::AbstractProgressBar::UxmlTraits*
class CORDL_TYPE __AbstractProgressBar__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_LowValue, offset 0x78, size 0x8
  __declspec(property(get = __get_m_LowValue, put = __set_m_LowValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_HighValue, offset 0x80, size 0x8
  __declspec(property(get = __get_m_HighValue, put = __set_m_HighValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_Value, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Value, put = __set_m_Value))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Value;

  /// @brief Field m_Title, offset 0x90, size 0x8
  __declspec(property(get = __get_m_Title, put = __set_m_Title))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Title;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_LowValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_LowValue() const;

  constexpr void __set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_HighValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_HighValue() const;

  constexpr void __set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_Value();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_Value() const;

  constexpr void __set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Title();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Title() const;

  constexpr void __set_m_Title(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method Init, addr 0x2e38460, size 0x1e4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e38644, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__AbstractProgressBar__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AbstractProgressBar__UxmlTraits(__AbstractProgressBar__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AbstractProgressBar__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AbstractProgressBar__UxmlTraits(__AbstractProgressBar__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AbstractProgressBar__UxmlTraits();

public:
  /// @brief Field m_LowValue, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighValue;

  /// @brief Field m_Value, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_Value;

  /// @brief Field m_Title, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Title;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits, ___m_LowValue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits, ___m_HighValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits, ___m_Value) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits, ___m_Title) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::AbstractProgressBar
// SizeInfo { instance_size: 1000, native_size: -1, calculated_instance_size: 1000, calculated_native_size: 996, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6801))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7117))
// CS Name: ::UnityEngine.UIElements::AbstractProgressBar*
class CORDL_TYPE AbstractProgressBar : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits;

  /// @brief Field m_Background, offset 0x3c0, size 0x8
  __declspec(property(get = __get_m_Background, put = __set_m_Background))::UnityEngine::UIElements::VisualElement* m_Background;

  /// @brief Field m_Progress, offset 0x3c8, size 0x8
  __declspec(property(get = __get_m_Progress, put = __set_m_Progress))::UnityEngine::UIElements::VisualElement* m_Progress;

  /// @brief Field m_Title, offset 0x3d0, size 0x8
  __declspec(property(get = __get_m_Title, put = __set_m_Title))::UnityEngine::UIElements::Label* m_Title;

  /// @brief Field m_LowValue, offset 0x3d8, size 0x4
  __declspec(property(get = __get_m_LowValue, put = __set_m_LowValue)) float_t m_LowValue;

  /// @brief Field m_HighValue, offset 0x3dc, size 0x4
  __declspec(property(get = __get_m_HighValue, put = __set_m_HighValue)) float_t m_HighValue;

  /// @brief Field m_Value, offset 0x3e0, size 0x4
  __declspec(property(get = __get_m_Value, put = __set_m_Value)) float_t m_Value;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName))::StringW containerUssClassName;

  /// @brief Field titleUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_titleUssClassName, put = setStaticF_titleUssClassName))::StringW titleUssClassName;

  /// @brief Field titleContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_titleContainerUssClassName, put = setStaticF_titleContainerUssClassName))::StringW titleContainerUssClassName;

  /// @brief Field progressUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_progressUssClassName, put = setStaticF_progressUssClassName))::StringW progressUssClassName;

  /// @brief Field backgroundUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_backgroundUssClassName, put = setStaticF_backgroundUssClassName))::StringW backgroundUssClassName;

  __declspec(property(put = set_title))::StringW title;

  __declspec(property(get = get_lowValue, put = set_lowValue)) float_t lowValue;

  __declspec(property(get = get_highValue, put = set_highValue)) float_t highValue;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>* i___UnityEngine__UIElements__INotifyValueChanged_1_float_t_() noexcept;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_Background();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_Background() const;

  constexpr void __set_m_Background(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_Progress();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_Progress() const;

  constexpr void __set_m_Progress(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::Label*& __get_m_Title();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __get_m_Title() const;

  constexpr void __set_m_Title(::UnityEngine::UIElements::Label* value);

  constexpr float_t& __get_m_LowValue();

  constexpr float_t const& __get_m_LowValue() const;

  constexpr void __set_m_LowValue(float_t value);

  constexpr float_t& __get_m_HighValue();

  constexpr float_t const& __get_m_HighValue() const;

  constexpr void __set_m_HighValue(float_t value);

  constexpr float_t& __get_m_Value();

  constexpr float_t const& __get_m_Value() const;

  constexpr void __set_m_Value(float_t value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline ::StringW getStaticF_containerUssClassName();

  static inline void setStaticF_titleUssClassName(::StringW value);

  static inline ::StringW getStaticF_titleUssClassName();

  static inline void setStaticF_titleContainerUssClassName(::StringW value);

  static inline ::StringW getStaticF_titleContainerUssClassName();

  static inline void setStaticF_progressUssClassName(::StringW value);

  static inline ::StringW getStaticF_progressUssClassName();

  static inline void setStaticF_backgroundUssClassName(::StringW value);

  static inline ::StringW getStaticF_backgroundUssClassName();

  /// @brief Method set_title, addr 0x2e37b24, size 0x24, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method get_lowValue, addr 0x2e37b48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lowValue();

  /// @brief Method set_lowValue, addr 0x2e37b50, size 0x10, virtual false, abstract: false, final false
  inline void set_lowValue(float_t value);

  /// @brief Method get_highValue, addr 0x2e37c84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highValue();

  /// @brief Method set_highValue, addr 0x2e37c8c, size 0x10, virtual false, abstract: false, final false
  inline void set_highValue(float_t value);

  static inline ::UnityEngine::UIElements::AbstractProgressBar* New_ctor();

  /// @brief Method .ctor, addr 0x2e37c9c, size 0x2a0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnGeometryChanged, addr 0x2e37f3c, size 0x24, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method get_value, addr 0x2e37f60, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x2e37f68, size 0x25c, virtual true, abstract: false, final false
  inline void set_value(float_t value);

  /// @brief Method SetValueWithoutNotify, addr 0x2e381c4, size 0x28, virtual true, abstract: false, final true
  inline void SetValueWithoutNotify(float_t newValue);

  /// @brief Method SetProgress, addr 0x2e37b60, size 0x124, virtual false, abstract: false, final false
  inline void SetProgress(float_t p);

  /// @brief Method CalculateProgressWidth, addr 0x2e381ec, size 0x104, virtual false, abstract: false, final false
  inline float_t CalculateProgressWidth(float_t width);

  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractProgressBar(AbstractProgressBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractProgressBar(AbstractProgressBar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractProgressBar();

public:
  /// @brief Field m_Background, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Background;

  /// @brief Field m_Progress, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Progress;

  /// @brief Field m_Title, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Title;

  /// @brief Field m_LowValue, offset: 0x3d8, size: 0x4, def value: None
  float_t ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x3dc, size: 0x4, def value: None
  float_t ___m_HighValue;

  /// @brief Field m_Value, offset: 0x3e0, size: 0x4, def value: None
  float_t ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AbstractProgressBar, 0x3e8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Background) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Progress) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Title) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_LowValue) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_HighValue) == 0x3dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AbstractProgressBar, ___m_Value) == 0x3e0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AbstractProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AbstractProgressBar*, "UnityEngine.UIElements", "AbstractProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*, "UnityEngine.UIElements", "AbstractProgressBar/UxmlTraits");

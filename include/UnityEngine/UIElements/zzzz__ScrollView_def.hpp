#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView)
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
namespace UnityEngine::UIElements {
struct ScrollView_NestedInteractionKind;
}
namespace UnityEngine::UIElements {
struct ScrollView_TouchScrollBehavior;
}
namespace UnityEngine::UIElements {
struct ScrollView_TouchScrollingResult;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class WheelEvent;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ScrollView_NestedInteractionKind;
}
namespace UnityEngine::UIElements {
struct ScrollView_TouchScrollBehavior;
}
namespace UnityEngine::UIElements {
struct ScrollView_TouchScrollingResult;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlTraits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ScrollView_NestedInteractionKind);
MARK_VAL_T(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior);
MARK_VAL_T(::UnityEngine::UIElements::ScrollView_TouchScrollingResult);
MARK_REF_PTR_T(::UnityEngine::UIElements::ScrollView);
MARK_REF_PTR_T(::UnityEngine::UIElements::ScrollView_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::ScrollView_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView/UxmlFactory
class CORDL_TYPE ScrollView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView*, ::UnityEngine::UIElements::ScrollView_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ScrollView_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6ba32c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView_UxmlFactory(ScrollView_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView_UxmlFactory(ScrollView_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView/UxmlTraits
class CORDL_TYPE ScrollView_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Elasticity, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Elasticity, put = __cordl_internal_set_m_Elasticity)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Elasticity;

  /// @brief Field m_HorizontalPageSize, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalPageSize, put = __cordl_internal_set_m_HorizontalPageSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HorizontalPageSize;

  /// @brief Field m_HorizontalScrollerVisibility, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollerVisibility,
                      put = __cordl_internal_set_m_HorizontalScrollerVisibility)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*
      m_HorizontalScrollerVisibility;

  /// @brief Field m_MouseWheelScrollSize, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MouseWheelScrollSize,
                      put = __cordl_internal_set_m_MouseWheelScrollSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MouseWheelScrollSize;

  /// @brief Field m_NestedInteractionKind, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NestedInteractionKind,
                      put = __cordl_internal_set_m_NestedInteractionKind)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>*
      m_NestedInteractionKind;

  /// @brief Field m_ScrollDecelerationRate, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollDecelerationRate,
                      put = __cordl_internal_set_m_ScrollDecelerationRate)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ScrollDecelerationRate;

  /// @brief Field m_ScrollViewMode, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollViewMode,
                      put = __cordl_internal_set_m_ScrollViewMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* m_ScrollViewMode;

  /// @brief Field m_ShowHorizontal, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowHorizontal, put = __cordl_internal_set_m_ShowHorizontal)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowHorizontal;

  /// @brief Field m_ShowVertical, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowVertical, put = __cordl_internal_set_m_ShowVertical)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowVertical;

  /// @brief Field m_TouchScrollBehavior, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_TouchScrollBehavior,
      put = __cordl_internal_set_m_TouchScrollBehavior)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* m_TouchScrollBehavior;

  /// @brief Field m_VerticalPageSize, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalPageSize, put = __cordl_internal_set_m_VerticalPageSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_VerticalPageSize;

  /// @brief Field m_VerticalScrollerVisibility, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_VerticalScrollerVisibility,
      put = __cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* m_VerticalScrollerVisibility;

  /// @brief Method Init, addr 0x6ba3330, size 0x414, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::ScrollView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_Elasticity() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_Elasticity();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_HorizontalPageSize() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HorizontalPageSize();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const& __cordl_internal_get_m_HorizontalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __cordl_internal_get_m_HorizontalScrollerVisibility();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_MouseWheelScrollSize() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_MouseWheelScrollSize();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>* const& __cordl_internal_get_m_NestedInteractionKind() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>*& __cordl_internal_get_m_NestedInteractionKind();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_ScrollDecelerationRate() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ScrollDecelerationRate();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* const& __cordl_internal_get_m_ScrollViewMode() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*& __cordl_internal_get_m_ScrollViewMode();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowHorizontal() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowHorizontal();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowVertical() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowVertical();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* const& __cordl_internal_get_m_TouchScrollBehavior() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>*& __cordl_internal_get_m_TouchScrollBehavior();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_VerticalPageSize() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_VerticalPageSize();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __cordl_internal_get_m_VerticalScrollerVisibility();

  constexpr void __cordl_internal_set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value);

  constexpr void __cordl_internal_set_m_MouseWheelScrollSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_NestedInteractionKind(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>* value);

  constexpr void __cordl_internal_set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* value);

  constexpr void __cordl_internal_set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_TouchScrollBehavior(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* value);

  constexpr void __cordl_internal_set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value);

  /// @brief Method .ctor, addr 0x6ba3744, size 0x4bc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView_UxmlTraits(ScrollView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView_UxmlTraits(ScrollView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4306 };

  /// @brief Field m_ScrollViewMode, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* ___m_ScrollViewMode;

  /// @brief Field m_NestedInteractionKind, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_NestedInteractionKind>* ___m_NestedInteractionKind;

  /// @brief Field m_ShowHorizontal, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowHorizontal;

  /// @brief Field m_ShowVertical, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowVertical;

  /// @brief Field m_HorizontalScrollerVisibility, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* ___m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* ___m_VerticalScrollerVisibility;

  /// @brief Field m_HorizontalPageSize, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_VerticalPageSize;

  /// @brief Field m_MouseWheelScrollSize, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_MouseWheelScrollSize;

  /// @brief Field m_TouchScrollBehavior, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior>* ___m_TouchScrollBehavior;

  /// @brief Field m_ScrollDecelerationRate, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ScrollDecelerationRate;

  /// @brief Field m_Elasticity, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_Elasticity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ScrollViewMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_NestedInteractionKind) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ShowHorizontal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ShowVertical) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_HorizontalScrollerVisibility) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_VerticalScrollerVisibility) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_HorizontalPageSize) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_VerticalPageSize) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_MouseWheelScrollSize) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_TouchScrollBehavior) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ScrollDecelerationRate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_Elasticity) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView_UxmlTraits, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/TouchScrollBehavior
struct CORDL_TYPE ScrollView_TouchScrollBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScrollView_TouchScrollBehavior_Unwrapped
  enum struct __ScrollView_TouchScrollBehavior_Unwrapped : int32_t {
    __E_Unrestricted = static_cast<int32_t>(0x0),
    __E_Elastic = static_cast<int32_t>(0x1),
    __E_Clamped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScrollView_TouchScrollBehavior_Unwrapped() const noexcept {
    return static_cast<__ScrollView_TouchScrollBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView_TouchScrollBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScrollView_TouchScrollBehavior(int32_t value__) noexcept;

  /// @brief Field Clamped value: I32(2)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior const Clamped;

  /// @brief Field Elastic value: I32(1)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior const Elastic;

  /// @brief Field Unrestricted value: I32(0)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior const Unrestricted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4307 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView_TouchScrollBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/NestedInteractionKind
struct CORDL_TYPE ScrollView_NestedInteractionKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScrollView_NestedInteractionKind_Unwrapped
  enum struct __ScrollView_NestedInteractionKind_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_StopScrolling = static_cast<int32_t>(0x1),
    __E_ForwardScrolling = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScrollView_NestedInteractionKind_Unwrapped() const noexcept {
    return static_cast<__ScrollView_NestedInteractionKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView_NestedInteractionKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScrollView_NestedInteractionKind(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::UIElements::ScrollView_NestedInteractionKind const Default;

  /// @brief Field ForwardScrolling value: I32(2)
  static ::UnityEngine::UIElements::ScrollView_NestedInteractionKind const ForwardScrolling;

  /// @brief Field StopScrolling value: I32(1)
  static ::UnityEngine::UIElements::ScrollView_NestedInteractionKind const StopScrolling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4308 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView_NestedInteractionKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView_NestedInteractionKind, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/TouchScrollingResult
struct CORDL_TYPE ScrollView_TouchScrollingResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScrollView_TouchScrollingResult_Unwrapped
  enum struct __ScrollView_TouchScrollingResult_Unwrapped : int32_t {
    __E_Apply = static_cast<int32_t>(0x0),
    __E_Forward = static_cast<int32_t>(0x1),
    __E_Block = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScrollView_TouchScrollingResult_Unwrapped() const noexcept {
    return static_cast<__ScrollView_TouchScrollingResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView_TouchScrollingResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScrollView_TouchScrollingResult(int32_t value__) noexcept;

  /// @brief Field Apply value: I32(0)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollingResult const Apply;

  /// @brief Field Block value: I32(2)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollingResult const Block;

  /// @brief Field Forward value: I32(1)
  static ::UnityEngine::UIElements::ScrollView_TouchScrollingResult const Forward;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4309 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView_TouchScrollingResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView_TouchScrollingResult, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.ScrollView::NestedInteractionKind, UnityEngine.UIElements.ScrollView::TouchScrollBehavior,
// UnityEngine.UIElements.ScrollViewMode, UnityEngine.UIElements.ScrollerVisibility, UnityEngine.UIElements.VisualElement, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView
class CORDL_TYPE ScrollView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using NestedInteractionKind = ::UnityEngine::UIElements::ScrollView_NestedInteractionKind;

  using TouchScrollBehavior = ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior;

  using TouchScrollingResult = ::UnityEngine::UIElements::ScrollView_TouchScrollingResult;

  using UxmlFactory = ::UnityEngine::UIElements::ScrollView_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::ScrollView_UxmlTraits;

  /// @brief Field <contentViewport>k__BackingField, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get__contentViewport_k__BackingField,
                      put = __cordl_internal_set__contentViewport_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _contentViewport_k__BackingField;

  /// @brief Field <horizontalScroller>k__BackingField, offset 0x500, size 0x8
  __declspec(property(get = __cordl_internal_get__horizontalScroller_k__BackingField,
                      put = __cordl_internal_set__horizontalScroller_k__BackingField)) ::UnityEngine::UIElements::Scroller* _horizontalScroller_k__BackingField;

  /// @brief Field <verticalScroller>k__BackingField, offset 0x508, size 0x8
  __declspec(property(get = __cordl_internal_get__verticalScroller_k__BackingField,
                      put = __cordl_internal_set__verticalScroller_k__BackingField)) ::UnityEngine::UIElements::Scroller* _verticalScroller_k__BackingField;

  /// @brief Field contentAndVerticalScrollUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentAndVerticalScrollUssClassName, put = setStaticF_contentAndVerticalScrollUssClassName)) ::StringW contentAndVerticalScrollUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName)) ::StringW contentUssClassName;

  __declspec(property(get = get_contentViewport)) ::UnityEngine::UIElements::VisualElement* contentViewport;

  /// @brief Field elapsedTimeSinceLastHorizontalTouchScroll, offset 0x52c, size 0x4
  __declspec(property(get = __cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll,
                      put = __cordl_internal_set_elapsedTimeSinceLastHorizontalTouchScroll)) float_t elapsedTimeSinceLastHorizontalTouchScroll;

  /// @brief Field elapsedTimeSinceLastVerticalTouchScroll, offset 0x528, size 0x4
  __declspec(property(get = __cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll,
                      put = __cordl_internal_set_elapsedTimeSinceLastVerticalTouchScroll)) float_t elapsedTimeSinceLastVerticalTouchScroll;

  __declspec(property(get = get_elasticAnimationIntervalMs, put = set_elasticAnimationIntervalMs)) int64_t elasticAnimationIntervalMs;

  /// @brief Field elasticAnimationIntervalMsProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_elasticAnimationIntervalMsProperty,
                      put = setStaticF_elasticAnimationIntervalMsProperty)) ::UnityEngine::UIElements::BindingId elasticAnimationIntervalMsProperty;

  __declspec(property(get = get_elasticity, put = set_elasticity)) float_t elasticity;

  /// @brief Field elasticityProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_elasticityProperty, put = setStaticF_elasticityProperty)) ::UnityEngine::UIElements::BindingId elasticityProperty;

  /// @brief Field hScrollerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hScrollerUssClassName, put = setStaticF_hScrollerUssClassName)) ::StringW hScrollerUssClassName;

  __declspec(property(get = get_hasInertia)) bool hasInertia;

  __declspec(property(get = get_horizontalPageSize, put = set_horizontalPageSize)) float_t horizontalPageSize;

  /// @brief Field horizontalPageSizeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_horizontalPageSizeProperty, put = setStaticF_horizontalPageSizeProperty)) ::UnityEngine::UIElements::BindingId horizontalPageSizeProperty;

  __declspec(property(get = get_horizontalScroller)) ::UnityEngine::UIElements::Scroller* horizontalScroller;

  __declspec(property(get = get_horizontalScrollerVisibility, put = set_horizontalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility horizontalScrollerVisibility;

  /// @brief Field horizontalScrollerVisibilityProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_horizontalScrollerVisibilityProperty,
                      put = setStaticF_horizontalScrollerVisibilityProperty)) ::UnityEngine::UIElements::BindingId horizontalScrollerVisibilityProperty;

  /// @brief Field horizontalVariantContentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantContentUssClassName, put = setStaticF_horizontalVariantContentUssClassName)) ::StringW horizontalVariantContentUssClassName;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName)) ::StringW horizontalVariantUssClassName;

  /// @brief Field horizontalVariantViewportUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantViewportUssClassName, put = setStaticF_horizontalVariantViewportUssClassName)) ::StringW horizontalVariantViewportUssClassName;

  __declspec(property(get = get_isHorizontalScrollDisplayed)) bool isHorizontalScrollDisplayed;

  __declspec(property(get = get_isVerticalScrollDisplayed)) bool isVerticalScrollDisplayed;

  /// @brief Field k_DefaultElasticity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DefaultElasticity, put = setStaticF_k_DefaultElasticity)) float_t k_DefaultElasticity;

  /// @brief Field k_DefaultScrollDecelerationRate, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DefaultScrollDecelerationRate, put = setStaticF_k_DefaultScrollDecelerationRate)) float_t k_DefaultScrollDecelerationRate;

  /// @brief Field k_ScaledPixelsPerPointMultiplier, offset 0x4e0, size 0x4
  __declspec(property(get = __cordl_internal_get_k_ScaledPixelsPerPointMultiplier, put = __cordl_internal_set_k_ScaledPixelsPerPointMultiplier)) float_t k_ScaledPixelsPerPointMultiplier;

  /// @brief Field k_TouchScrollInertiaBaseTimeInterval, offset 0x4e4, size 0x4
  __declspec(property(get = __cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval, put = __cordl_internal_set_k_TouchScrollInertiaBaseTimeInterval)) float_t k_TouchScrollInertiaBaseTimeInterval;

  /// @brief Field m_AttachedRootVisualContainer, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedRootVisualContainer,
                      put = __cordl_internal_set_m_AttachedRootVisualContainer)) ::UnityEngine::UIElements::VisualElement* m_AttachedRootVisualContainer;

  /// @brief Field m_CapturedTarget, offset 0x578, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CapturedTarget, put = __cordl_internal_set_m_CapturedTarget)) ::UnityEngine::UIElements::VisualElement* m_CapturedTarget;

  /// @brief Field m_CapturedTargetPointerMoveCallback, offset 0x580, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CapturedTargetPointerMoveCallback,
      put = __cordl_internal_set_m_CapturedTargetPointerMoveCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* m_CapturedTargetPointerMoveCallback;

  /// @brief Field m_CapturedTargetPointerUpCallback, offset 0x588, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CapturedTargetPointerUpCallback,
      put = __cordl_internal_set_m_CapturedTargetPointerUpCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_CapturedTargetPointerUpCallback;

  /// @brief Field m_ContentAndVerticalScrollContainer, offset 0x518, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentAndVerticalScrollContainer,
                      put = __cordl_internal_set_m_ContentAndVerticalScrollContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentAndVerticalScrollContainer;

  /// @brief Field m_ContentContainer, offset 0x510, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_ElasticAnimationIntervalMs, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElasticAnimationIntervalMs, put = __cordl_internal_set_m_ElasticAnimationIntervalMs)) int64_t m_ElasticAnimationIntervalMs;

  /// @brief Field m_Elasticity, offset 0x4e8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Elasticity, put = __cordl_internal_set_m_Elasticity)) float_t m_Elasticity;

  /// @brief Field m_FirstLayoutPass, offset 0x4a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstLayoutPass, put = __cordl_internal_set_m_FirstLayoutPass)) int32_t m_FirstLayoutPass;

  /// @brief Field m_HighBounds, offset 0x568, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighBounds, put = __cordl_internal_set_m_HighBounds)) ::UnityEngine::Vector2 m_HighBounds;

  /// @brief Field m_HorizontalPageSize, offset 0x4d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalPageSize, put = __cordl_internal_set_m_HorizontalPageSize)) float_t m_HorizontalPageSize;

  /// @brief Field m_HorizontalScrollerVisibility, offset 0x4ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollerVisibility,
                      put = __cordl_internal_set_m_HorizontalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility m_HorizontalScrollerVisibility;

  /// @brief Field m_LastVelocityLerpTime, offset 0x570, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastVelocityLerpTime, put = __cordl_internal_set_m_LastVelocityLerpTime)) float_t m_LastVelocityLerpTime;

  /// @brief Field m_LowBounds, offset 0x560, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowBounds, put = __cordl_internal_set_m_LowBounds)) ::UnityEngine::Vector2 m_LowBounds;

  /// @brief Field m_Mode, offset 0x530, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Mode, put = __cordl_internal_set_m_Mode)) ::UnityEngine::UIElements::ScrollViewMode m_Mode;

  /// @brief Field m_MouseWheelScrollSize, offset 0x4d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MouseWheelScrollSize, put = __cordl_internal_set_m_MouseWheelScrollSize)) float_t m_MouseWheelScrollSize;

  /// @brief Field m_MouseWheelScrollSizeIsInline, offset 0x4cc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseWheelScrollSizeIsInline, put = __cordl_internal_set_m_MouseWheelScrollSizeIsInline)) bool m_MouseWheelScrollSizeIsInline;

  /// @brief Field m_NestedInteractionKind, offset 0x4f0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NestedInteractionKind,
                      put = __cordl_internal_set_m_NestedInteractionKind)) ::UnityEngine::UIElements::ScrollView_NestedInteractionKind m_NestedInteractionKind;

  /// @brief Field m_PointerStartPosition, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerStartPosition, put = __cordl_internal_set_m_PointerStartPosition)) ::UnityEngine::Vector2 m_PointerStartPosition;

  /// @brief Field m_PostPointerUpAnimation, offset 0x590, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostPointerUpAnimation,
                      put = __cordl_internal_set_m_PostPointerUpAnimation)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_PostPointerUpAnimation;

  /// @brief Field m_ScheduledLayoutPassResetItem, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduledLayoutPassResetItem,
                      put = __cordl_internal_set_m_ScheduledLayoutPassResetItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledLayoutPassResetItem;

  /// @brief Field m_ScrollDecelerationRate, offset 0x4dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollDecelerationRate, put = __cordl_internal_set_m_ScrollDecelerationRate)) float_t m_ScrollDecelerationRate;

  /// @brief Field m_SingleLineHeight, offset 0x4c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SingleLineHeight, put = __cordl_internal_set_m_SingleLineHeight)) float_t m_SingleLineHeight;

  /// @brief Field m_SpringBackVelocity, offset 0x558, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpringBackVelocity, put = __cordl_internal_set_m_SpringBackVelocity)) ::UnityEngine::Vector2 m_SpringBackVelocity;

  /// @brief Field m_StartPosition, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartPosition, put = __cordl_internal_set_m_StartPosition)) ::UnityEngine::Vector2 m_StartPosition;

  /// @brief Field m_StartedMoving, offset 0x574, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StartedMoving, put = __cordl_internal_set_m_StartedMoving)) bool m_StartedMoving;

  /// @brief Field m_TouchPointerMoveAllowed, offset 0x575, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchPointerMoveAllowed, put = __cordl_internal_set_m_TouchPointerMoveAllowed)) bool m_TouchPointerMoveAllowed;

  /// @brief Field m_TouchScrollBehavior, offset 0x4ec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TouchScrollBehavior,
                      put = __cordl_internal_set_m_TouchScrollBehavior)) ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior m_TouchScrollBehavior;

  /// @brief Field m_TouchStoppedVelocity, offset 0x576, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchStoppedVelocity, put = __cordl_internal_set_m_TouchStoppedVelocity)) bool m_TouchStoppedVelocity;

  /// @brief Field m_Velocity, offset 0x550, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Velocity, put = __cordl_internal_set_m_Velocity)) ::UnityEngine::Vector2 m_Velocity;

  /// @brief Field m_VerticalPageSize, offset 0x4d4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalPageSize, put = __cordl_internal_set_m_VerticalPageSize)) float_t m_VerticalPageSize;

  /// @brief Field m_VerticalScrollerVisibility, offset 0x4b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollerVisibility,
                      put = __cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility m_VerticalScrollerVisibility;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::UIElements::ScrollViewMode mode;

  /// @brief Field modeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_modeProperty, put = setStaticF_modeProperty)) ::UnityEngine::UIElements::BindingId modeProperty;

  __declspec(property(get = get_mouseWheelScrollSize, put = set_mouseWheelScrollSize)) float_t mouseWheelScrollSize;

  /// @brief Field mouseWheelScrollSizeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_mouseWheelScrollSizeProperty, put = setStaticF_mouseWheelScrollSizeProperty)) ::UnityEngine::UIElements::BindingId mouseWheelScrollSizeProperty;

  __declspec(property(get = get_needsHorizontal)) bool needsHorizontal;

  __declspec(property(get = get_needsVertical)) bool needsVertical;

  __declspec(property(get = get_nestedInteractionKind, put = set_nestedInteractionKind)) ::UnityEngine::UIElements::ScrollView_NestedInteractionKind nestedInteractionKind;

  /// @brief Field nestedInteractionKindProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_nestedInteractionKindProperty, put = setStaticF_nestedInteractionKindProperty)) ::UnityEngine::UIElements::BindingId nestedInteractionKindProperty;

  /// @brief Field previousHorizontalTouchScrollTimeStamp, offset 0x524, size 0x4
  __declspec(property(get = __cordl_internal_get_previousHorizontalTouchScrollTimeStamp,
                      put = __cordl_internal_set_previousHorizontalTouchScrollTimeStamp)) float_t previousHorizontalTouchScrollTimeStamp;

  /// @brief Field previousVerticalTouchScrollTimeStamp, offset 0x520, size 0x4
  __declspec(property(get = __cordl_internal_get_previousVerticalTouchScrollTimeStamp, put = __cordl_internal_set_previousVerticalTouchScrollTimeStamp)) float_t previousVerticalTouchScrollTimeStamp;

  __declspec(property(get = get_scrollDecelerationRate, put = set_scrollDecelerationRate)) float_t scrollDecelerationRate;

  /// @brief Field scrollDecelerationRateProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_scrollDecelerationRateProperty, put = setStaticF_scrollDecelerationRateProperty)) ::UnityEngine::UIElements::BindingId scrollDecelerationRateProperty;

  __declspec(property(get = get_scrollOffset, put = set_scrollOffset)) ::UnityEngine::Vector2 scrollOffset;

  /// @brief Field scrollOffsetProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_scrollOffsetProperty, put = setStaticF_scrollOffsetProperty)) ::UnityEngine::UIElements::BindingId scrollOffsetProperty;

  /// @brief Field scrollVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_scrollVariantUssClassName, put = setStaticF_scrollVariantUssClassName)) ::StringW scrollVariantUssClassName;

  __declspec(property(get = get_scrollableHeight)) float_t scrollableHeight;

  __declspec(property(get = get_scrollableWidth)) float_t scrollableWidth;

  __declspec(property(put = set_showHorizontal)) bool showHorizontal;

  __declspec(property(put = set_showVertical)) bool showVertical;

  __declspec(property(get = get_touchScrollBehavior, put = set_touchScrollBehavior)) ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior touchScrollBehavior;

  /// @brief Field touchScrollBehaviorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_touchScrollBehaviorProperty, put = setStaticF_touchScrollBehaviorProperty)) ::UnityEngine::UIElements::BindingId touchScrollBehaviorProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Field vScrollerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_vScrollerUssClassName, put = setStaticF_vScrollerUssClassName)) ::StringW vScrollerUssClassName;

  /// @brief Field verticalHorizontalVariantContentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalHorizontalVariantContentUssClassName,
                      put = setStaticF_verticalHorizontalVariantContentUssClassName)) ::StringW verticalHorizontalVariantContentUssClassName;

  /// @brief Field verticalHorizontalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalHorizontalVariantUssClassName, put = setStaticF_verticalHorizontalVariantUssClassName)) ::StringW verticalHorizontalVariantUssClassName;

  /// @brief Field verticalHorizontalVariantViewportUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalHorizontalVariantViewportUssClassName,
                      put = setStaticF_verticalHorizontalVariantViewportUssClassName)) ::StringW verticalHorizontalVariantViewportUssClassName;

  __declspec(property(get = get_verticalPageSize, put = set_verticalPageSize)) float_t verticalPageSize;

  /// @brief Field verticalPageSizeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_verticalPageSizeProperty, put = setStaticF_verticalPageSizeProperty)) ::UnityEngine::UIElements::BindingId verticalPageSizeProperty;

  __declspec(property(get = get_verticalScroller)) ::UnityEngine::UIElements::Scroller* verticalScroller;

  __declspec(property(get = get_verticalScrollerVisibility, put = set_verticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility verticalScrollerVisibility;

  /// @brief Field verticalScrollerVisibilityProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_verticalScrollerVisibilityProperty,
                      put = setStaticF_verticalScrollerVisibilityProperty)) ::UnityEngine::UIElements::BindingId verticalScrollerVisibilityProperty;

  /// @brief Field verticalVariantContentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantContentUssClassName, put = setStaticF_verticalVariantContentUssClassName)) ::StringW verticalVariantContentUssClassName;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName)) ::StringW verticalVariantUssClassName;

  /// @brief Field verticalVariantViewportUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantViewportUssClassName, put = setStaticF_verticalVariantViewportUssClassName)) ::StringW verticalVariantViewportUssClassName;

  /// @brief Field viewportUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_viewportUssClassName, put = setStaticF_viewportUssClassName)) ::StringW viewportUssClassName;

  /// @brief Method AdjustScrollers, addr 0x6ba1dd8, size 0x104, virtual false, abstract: false, final false
  inline void AdjustScrollers();

  /// @brief Method ApplyScrollInertia, addr 0x6ba0a44, size 0x228, virtual false, abstract: false, final false
  inline void ApplyScrollInertia();

  /// @brief Method ApplyTouchScrolling, addr 0x6ba1958, size 0x254, virtual false, abstract: false, final false
  inline bool ApplyTouchScrolling(::UnityEngine::Vector2 newScrollOffset);

  /// @brief Method ComputeElasticOffset, addr 0x6ba06cc, size 0xf4, virtual false, abstract: false, final false
  static inline float_t ComputeElasticOffset(float_t deltaPointer, float_t initialScrollOffset, float_t lowLimit, float_t hardLowLimit, float_t highLimit, float_t hardHighLimit);

  /// @brief Method ComputeInitialSpringBackVelocity, addr 0x6ba07c0, size 0xf4, virtual false, abstract: false, final false
  inline void ComputeInitialSpringBackVelocity();

  /// @brief Method ComputeTouchScrolling, addr 0x6ba13d0, size 0x43c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView_TouchScrollingResult ComputeTouchScrolling(::UnityEngine::Vector2 position);

  /// @brief Method ExecuteElasticSpringAnimation, addr 0x6ba1bac, size 0x22c, virtual false, abstract: false, final false
  inline void ExecuteElasticSpringAnimation();

  /// @brief Method GetDeltaDistance, addr 0x6b9dc98, size 0x54, virtual false, abstract: false, final false
  inline float_t GetDeltaDistance(float_t viewMin, float_t viewMax, float_t childBoundaryMin, float_t childBoundaryMax);

  /// @brief Method GetXDeltaOffset, addr 0x6b9dae4, size 0x1b4, virtual false, abstract: false, final false
  inline float_t GetXDeltaOffset(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method GetYDeltaOffset, addr 0x6b9d934, size 0x1b0, virtual false, abstract: false, final false
  inline float_t GetYDeltaOffset(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method InitTouchScrolling, addr 0x6ba108c, size 0x12c, virtual false, abstract: false, final false
  inline void InitTouchScrolling(::UnityEngine::Vector2 position);

  static inline ::UnityEngine::UIElements::ScrollView* New_ctor();

  static inline ::UnityEngine::UIElements::ScrollView* New_ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode);

  /// @brief Method OnAttachToPanel, addr 0x6b9f3e0, size 0x5dc, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnDetachFromPanel, addr 0x6b9faac, size 0x630, virtual false, abstract: false, final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnGeometryChanged, addr 0x6ba0360, size 0x154, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnHorizontalScrollDragElementChanged, addr 0x6b9d6ec, size 0x38, virtual false, abstract: false, final false
  inline void OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnPointerCancel, addr 0x6ba180c, size 0x60, virtual false, abstract: false, final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCapture, addr 0x6ba00e8, size 0xb8, virtual false, abstract: false, final false
  inline void OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent* evt);

  /// @brief Method OnPointerCaptureOut, addr 0x6ba01a0, size 0xc8, virtual false, abstract: false, final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDown, addr 0x6ba0e44, size 0x248, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove, addr 0x6ba11b8, size 0x218, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp, addr 0x6ba186c, size 0x9c, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnRootCustomStyleResolved, addr 0x6ba27b0, size 0x4, virtual false, abstract: false, final false
  inline void OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt);

  /// @brief Method OnRootPointerUp, addr 0x6ba27b4, size 0x8, virtual false, abstract: false, final false
  inline void OnRootPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnScrollWheel, addr 0x6ba2360, size 0x378, virtual false, abstract: false, final false
  inline void OnScrollWheel(::UnityEngine::UIElements::WheelEvent* evt);

  /// @brief Method OnScrollersGeometryChanged, addr 0x6ba21e4, size 0x17c, virtual false, abstract: false, final false
  inline void OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnVerticalScrollDragElementChanged, addr 0x6b9d724, size 0x38, virtual false, abstract: false, final false
  inline void OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method PostPointerUpAnimation, addr 0x6ba0c6c, size 0x1d8, virtual false, abstract: false, final false
  inline void PostPointerUpAnimation();

  /// @brief Method ReadSingleLineHeight, addr 0x6b9f9bc, size 0xf0, virtual false, abstract: false, final false
  inline void ReadSingleLineHeight();

  /// @brief Method ReleaseScrolling, addr 0x6ba0268, size 0xf8, virtual false, abstract: false, final false
  inline bool ReleaseScrolling(int32_t pointerId, ::UnityEngine::UIElements::IEventHandler* target);

  /// @brief Method ResetLayoutPass, addr 0x6ba00dc, size 0xc, virtual false, abstract: false, final false
  inline void ResetLayoutPass();

  /// @brief Method ScheduleResetLayoutPass, addr 0x6ba04b4, size 0x218, virtual false, abstract: false, final false
  inline void ScheduleResetLayoutPass();

  /// @brief Method ScrollTo, addr 0x6b9d75c, size 0x1d8, virtual false, abstract: false, final false
  inline void ScrollTo(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method SetScrollViewMode, addr 0x6b9ec08, size 0x354, virtual false, abstract: false, final false
  inline void SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode mode);

  /// @brief Method SpringBack, addr 0x6ba08b4, size 0x190, virtual false, abstract: false, final false
  inline void SpringBack();

  /// @brief Method UpdateContentViewTransform, addr 0x6b9c910, size 0x2b8, virtual false, abstract: false, final false
  inline void UpdateContentViewTransform();

  /// @brief Method UpdateElasticBehaviour, addr 0x6ba26d8, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateElasticBehaviour();

  /// @brief Method UpdateHorizontalSliderPageSize, addr 0x6b9ccd8, size 0x228, virtual false, abstract: false, final false
  inline void UpdateHorizontalSliderPageSize();

  /// @brief Method UpdateScrollers, addr 0x6b9bc8c, size 0x39c, virtual false, abstract: false, final false
  inline void UpdateScrollers(bool displayHorizontal, bool displayVertical);

  /// @brief Method UpdateVerticalSliderPageSize, addr 0x6b9d010, size 0x228, virtual false, abstract: false, final false
  inline void UpdateVerticalSliderPageSize();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__contentViewport_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__contentViewport_k__BackingField();

  constexpr ::UnityEngine::UIElements::Scroller* const& __cordl_internal_get__horizontalScroller_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Scroller*& __cordl_internal_get__horizontalScroller_k__BackingField();

  constexpr ::UnityEngine::UIElements::Scroller* const& __cordl_internal_get__verticalScroller_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Scroller*& __cordl_internal_get__verticalScroller_k__BackingField();

  constexpr float_t const& __cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll() const;

  constexpr float_t& __cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll();

  constexpr float_t const& __cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll() const;

  constexpr float_t& __cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll();

  constexpr float_t const& __cordl_internal_get_k_ScaledPixelsPerPointMultiplier() const;

  constexpr float_t& __cordl_internal_get_k_ScaledPixelsPerPointMultiplier();

  constexpr float_t const& __cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval() const;

  constexpr float_t& __cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_AttachedRootVisualContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_AttachedRootVisualContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CapturedTarget() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CapturedTarget();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& __cordl_internal_get_m_CapturedTargetPointerMoveCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __cordl_internal_get_m_CapturedTargetPointerMoveCallback();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_CapturedTargetPointerUpCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_CapturedTargetPointerUpCallback();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentAndVerticalScrollContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentAndVerticalScrollContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr int64_t const& __cordl_internal_get_m_ElasticAnimationIntervalMs() const;

  constexpr int64_t& __cordl_internal_get_m_ElasticAnimationIntervalMs();

  constexpr float_t const& __cordl_internal_get_m_Elasticity() const;

  constexpr float_t& __cordl_internal_get_m_Elasticity();

  constexpr int32_t const& __cordl_internal_get_m_FirstLayoutPass() const;

  constexpr int32_t& __cordl_internal_get_m_FirstLayoutPass();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_HighBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_HighBounds();

  constexpr float_t const& __cordl_internal_get_m_HorizontalPageSize() const;

  constexpr float_t& __cordl_internal_get_m_HorizontalPageSize();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_m_HorizontalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_m_HorizontalScrollerVisibility();

  constexpr float_t const& __cordl_internal_get_m_LastVelocityLerpTime() const;

  constexpr float_t& __cordl_internal_get_m_LastVelocityLerpTime();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LowBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LowBounds();

  constexpr ::UnityEngine::UIElements::ScrollViewMode const& __cordl_internal_get_m_Mode() const;

  constexpr ::UnityEngine::UIElements::ScrollViewMode& __cordl_internal_get_m_Mode();

  constexpr float_t const& __cordl_internal_get_m_MouseWheelScrollSize() const;

  constexpr float_t& __cordl_internal_get_m_MouseWheelScrollSize();

  constexpr bool const& __cordl_internal_get_m_MouseWheelScrollSizeIsInline() const;

  constexpr bool& __cordl_internal_get_m_MouseWheelScrollSizeIsInline();

  constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind const& __cordl_internal_get_m_NestedInteractionKind() const;

  constexpr ::UnityEngine::UIElements::ScrollView_NestedInteractionKind& __cordl_internal_get_m_NestedInteractionKind();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PointerStartPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PointerStartPosition();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_PostPointerUpAnimation() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_PostPointerUpAnimation();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_ScheduledLayoutPassResetItem() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScheduledLayoutPassResetItem();

  constexpr float_t const& __cordl_internal_get_m_ScrollDecelerationRate() const;

  constexpr float_t& __cordl_internal_get_m_ScrollDecelerationRate();

  constexpr float_t const& __cordl_internal_get_m_SingleLineHeight() const;

  constexpr float_t& __cordl_internal_get_m_SingleLineHeight();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_SpringBackVelocity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_SpringBackVelocity();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_StartPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_StartPosition();

  constexpr bool const& __cordl_internal_get_m_StartedMoving() const;

  constexpr bool& __cordl_internal_get_m_StartedMoving();

  constexpr bool const& __cordl_internal_get_m_TouchPointerMoveAllowed() const;

  constexpr bool& __cordl_internal_get_m_TouchPointerMoveAllowed();

  constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior const& __cordl_internal_get_m_TouchScrollBehavior() const;

  constexpr ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior& __cordl_internal_get_m_TouchScrollBehavior();

  constexpr bool const& __cordl_internal_get_m_TouchStoppedVelocity() const;

  constexpr bool& __cordl_internal_get_m_TouchStoppedVelocity();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Velocity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Velocity();

  constexpr float_t const& __cordl_internal_get_m_VerticalPageSize() const;

  constexpr float_t& __cordl_internal_get_m_VerticalPageSize();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_m_VerticalScrollerVisibility();

  constexpr float_t const& __cordl_internal_get_previousHorizontalTouchScrollTimeStamp() const;

  constexpr float_t& __cordl_internal_get_previousHorizontalTouchScrollTimeStamp();

  constexpr float_t const& __cordl_internal_get_previousVerticalTouchScrollTimeStamp() const;

  constexpr float_t& __cordl_internal_get_previousVerticalTouchScrollTimeStamp();

  constexpr void __cordl_internal_set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value);

  constexpr void __cordl_internal_set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value);

  constexpr void __cordl_internal_set_elapsedTimeSinceLastHorizontalTouchScroll(float_t value);

  constexpr void __cordl_internal_set_elapsedTimeSinceLastVerticalTouchScroll(float_t value);

  constexpr void __cordl_internal_set_k_ScaledPixelsPerPointMultiplier(float_t value);

  constexpr void __cordl_internal_set_k_TouchScrollInertiaBaseTimeInterval(float_t value);

  constexpr void __cordl_internal_set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr void __cordl_internal_set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ElasticAnimationIntervalMs(int64_t value);

  constexpr void __cordl_internal_set_m_Elasticity(float_t value);

  constexpr void __cordl_internal_set_m_FirstLayoutPass(int32_t value);

  constexpr void __cordl_internal_set_m_HighBounds(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_HorizontalPageSize(float_t value);

  constexpr void __cordl_internal_set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  constexpr void __cordl_internal_set_m_LastVelocityLerpTime(float_t value);

  constexpr void __cordl_internal_set_m_LowBounds(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Mode(::UnityEngine::UIElements::ScrollViewMode value);

  constexpr void __cordl_internal_set_m_MouseWheelScrollSize(float_t value);

  constexpr void __cordl_internal_set_m_MouseWheelScrollSizeIsInline(bool value);

  constexpr void __cordl_internal_set_m_NestedInteractionKind(::UnityEngine::UIElements::ScrollView_NestedInteractionKind value);

  constexpr void __cordl_internal_set_m_PointerStartPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_ScheduledLayoutPassResetItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_ScrollDecelerationRate(float_t value);

  constexpr void __cordl_internal_set_m_SingleLineHeight(float_t value);

  constexpr void __cordl_internal_set_m_SpringBackVelocity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_StartPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_StartedMoving(bool value);

  constexpr void __cordl_internal_set_m_TouchPointerMoveAllowed(bool value);

  constexpr void __cordl_internal_set_m_TouchScrollBehavior(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior value);

  constexpr void __cordl_internal_set_m_TouchStoppedVelocity(bool value);

  constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_VerticalPageSize(float_t value);

  constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  constexpr void __cordl_internal_set_previousHorizontalTouchScrollTimeStamp(float_t value);

  constexpr void __cordl_internal_set_previousVerticalTouchScrollTimeStamp(float_t value);

  /// @brief Method <.ctor>b__138_0, addr 0x6ba3268, size 0x30, virtual false, abstract: false, final false
  inline void __ctor_b__138_0(float_t value);

  /// @brief Method <.ctor>b__138_1, addr 0x6ba3298, size 0x30, virtual false, abstract: false, final false
  inline void __ctor_b__138_1(float_t value);

  /// @brief Method .ctor, addr 0x6b9dd5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b9dd64, size 0xea4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode);

  static inline ::StringW getStaticF_contentAndVerticalScrollUssClassName();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_elasticAnimationIntervalMsProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_elasticityProperty();

  static inline ::StringW getStaticF_hScrollerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_horizontalPageSizeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_horizontalScrollerVisibilityProperty();

  static inline ::StringW getStaticF_horizontalVariantContentUssClassName();

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline ::StringW getStaticF_horizontalVariantViewportUssClassName();

  static inline float_t getStaticF_k_DefaultElasticity();

  static inline float_t getStaticF_k_DefaultScrollDecelerationRate();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_modeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_mouseWheelScrollSizeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_nestedInteractionKindProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_scrollDecelerationRateProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_scrollOffsetProperty();

  static inline ::StringW getStaticF_scrollVariantUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_touchScrollBehaviorProperty();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_vScrollerUssClassName();

  static inline ::StringW getStaticF_verticalHorizontalVariantContentUssClassName();

  static inline ::StringW getStaticF_verticalHorizontalVariantUssClassName();

  static inline ::StringW getStaticF_verticalHorizontalVariantViewportUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_verticalPageSizeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_verticalScrollerVisibilityProperty();

  static inline ::StringW getStaticF_verticalVariantContentUssClassName();

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  static inline ::StringW getStaticF_verticalVariantViewportUssClassName();

  static inline ::StringW getStaticF_viewportUssClassName();

  /// @brief Method get_contentContainer, addr 0x6b9dd54, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_contentViewport, addr 0x6b9dd3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentViewport();

  /// @brief Method get_elasticAnimationIntervalMs, addr 0x6b9c158, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_elasticAnimationIntervalMs();

  /// @brief Method get_elasticity, addr 0x6b9d42c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_elasticity();

  /// @brief Method get_hasInertia, addr 0x6b9d30c, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasInertia();

  /// @brief Method get_horizontalPageSize, addr 0x6b9cbc8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_horizontalPageSize();

  /// @brief Method get_horizontalScroller, addr 0x6b9dd44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Scroller* get_horizontalScroller();

  /// @brief Method get_horizontalScrollerVisibility, addr 0x6b9bad0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollerVisibility get_horizontalScrollerVisibility();

  /// @brief Method get_isHorizontalScrollDisplayed, addr 0x6b9c504, size 0xc4, virtual false, abstract: false, final false
  inline bool get_isHorizontalScrollDisplayed();

  /// @brief Method get_isVerticalScrollDisplayed, addr 0x6b9c440, size 0xc4, virtual false, abstract: false, final false
  inline bool get_isVerticalScrollDisplayed();

  /// @brief Method get_mode, addr 0x6b9f338, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollViewMode get_mode();

  /// @brief Method get_mouseWheelScrollSize, addr 0x6b9d238, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mouseWheelScrollSize();

  /// @brief Method get_needsHorizontal, addr 0x6b9bbf8, size 0x48, virtual false, abstract: false, final false
  inline bool get_needsHorizontal();

  /// @brief Method get_needsVertical, addr 0x6b9bc40, size 0x4c, virtual false, abstract: false, final false
  inline bool get_needsVertical();

  /// @brief Method get_nestedInteractionKind, addr 0x6b9d650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView_NestedInteractionKind get_nestedInteractionKind();

  /// @brief Method get_scrollDecelerationRate, addr 0x6b9d31c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollDecelerationRate();

  /// @brief Method get_scrollOffset, addr 0x6b9c5c8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollOffset();

  /// @brief Method get_scrollableHeight, addr 0x6b9c3f0, size 0x50, virtual false, abstract: false, final false
  inline float_t get_scrollableHeight();

  /// @brief Method get_scrollableWidth, addr 0x6b9c3a0, size 0x50, virtual false, abstract: false, final false
  inline float_t get_scrollableWidth();

  /// @brief Method get_touchScrollBehavior, addr 0x6b9d53c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior get_touchScrollBehavior();

  /// @brief Method get_verticalPageSize, addr 0x6b9cf00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_verticalPageSize();

  /// @brief Method get_verticalScroller, addr 0x6b9dd4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Scroller* get_verticalScroller();

  /// @brief Method get_verticalScrollerVisibility, addr 0x6b9c028, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollerVisibility get_verticalScrollerVisibility();

  static inline void setStaticF_contentAndVerticalScrollUssClassName(::StringW value);

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_elasticAnimationIntervalMsProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_elasticityProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_hScrollerUssClassName(::StringW value);

  static inline void setStaticF_horizontalPageSizeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_horizontalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_horizontalVariantContentUssClassName(::StringW value);

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline void setStaticF_horizontalVariantViewportUssClassName(::StringW value);

  static inline void setStaticF_k_DefaultElasticity(float_t value);

  static inline void setStaticF_k_DefaultScrollDecelerationRate(float_t value);

  static inline void setStaticF_modeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_mouseWheelScrollSizeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_nestedInteractionKindProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_scrollDecelerationRateProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_scrollOffsetProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_scrollVariantUssClassName(::StringW value);

  static inline void setStaticF_touchScrollBehaviorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_vScrollerUssClassName(::StringW value);

  static inline void setStaticF_verticalHorizontalVariantContentUssClassName(::StringW value);

  static inline void setStaticF_verticalHorizontalVariantUssClassName(::StringW value);

  static inline void setStaticF_verticalHorizontalVariantViewportUssClassName(::StringW value);

  static inline void setStaticF_verticalPageSizeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_verticalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_verticalVariantContentUssClassName(::StringW value);

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  static inline void setStaticF_verticalVariantViewportUssClassName(::StringW value);

  static inline void setStaticF_viewportUssClassName(::StringW value);

  /// @brief Method set_elasticAnimationIntervalMs, addr 0x6b9c160, size 0x210, virtual false, abstract: false, final false
  inline void set_elasticAnimationIntervalMs(int64_t value);

  /// @brief Method set_elasticity, addr 0x6b9d434, size 0x108, virtual false, abstract: false, final false
  inline void set_elasticity(float_t value);

  /// @brief Method set_horizontalPageSize, addr 0x6b9cbd0, size 0x108, virtual false, abstract: false, final false
  inline void set_horizontalPageSize(float_t value);

  /// @brief Method set_horizontalScrollerVisibility, addr 0x6b9bad8, size 0x120, virtual false, abstract: false, final false
  inline void set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  /// @brief Method set_mode, addr 0x6b9f340, size 0xa0, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::UIElements::ScrollViewMode value);

  /// @brief Method set_mouseWheelScrollSize, addr 0x6b9d240, size 0xcc, virtual false, abstract: false, final false
  inline void set_mouseWheelScrollSize(float_t value);

  /// @brief Method set_nestedInteractionKind, addr 0x6b9d658, size 0x94, virtual false, abstract: false, final false
  inline void set_nestedInteractionKind(::UnityEngine::UIElements::ScrollView_NestedInteractionKind value);

  /// @brief Method set_scrollDecelerationRate, addr 0x6b9d324, size 0x108, virtual false, abstract: false, final false
  inline void set_scrollDecelerationRate(float_t value);

  /// @brief Method set_scrollOffset, addr 0x6b9c650, size 0x178, virtual false, abstract: false, final false
  inline void set_scrollOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_showHorizontal, addr 0x6b9c370, size 0x18, virtual false, abstract: false, final false
  inline void set_showHorizontal(bool value);

  /// @brief Method set_showVertical, addr 0x6b9c388, size 0x18, virtual false, abstract: false, final false
  inline void set_showVertical(bool value);

  /// @brief Method set_touchScrollBehavior, addr 0x6b9d544, size 0x10c, virtual false, abstract: false, final false
  inline void set_touchScrollBehavior(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior value);

  /// @brief Method set_verticalPageSize, addr 0x6b9cf08, size 0x108, virtual false, abstract: false, final false
  inline void set_verticalPageSize(float_t value);

  /// @brief Method set_verticalScrollerVisibility, addr 0x6b9c030, size 0x128, virtual false, abstract: false, final false
  inline void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView(ScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView(ScrollView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4310 };

  /// @brief Field m_FirstLayoutPass, offset: 0x4a8, size: 0x4, def value: None
  int32_t ___m_FirstLayoutPass;

  /// @brief Field m_HorizontalScrollerVisibility, offset: 0x4ac, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0x4b0, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___m_VerticalScrollerVisibility;

  /// @brief Field m_ElasticAnimationIntervalMs, offset: 0x4b8, size: 0x8, def value: None
  int64_t ___m_ElasticAnimationIntervalMs;

  /// @brief Field m_AttachedRootVisualContainer, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_AttachedRootVisualContainer;

  /// @brief Field m_SingleLineHeight, offset: 0x4c8, size: 0x4, def value: None
  float_t ___m_SingleLineHeight;

  /// @brief Field m_MouseWheelScrollSizeIsInline, offset: 0x4cc, size: 0x1, def value: None
  bool ___m_MouseWheelScrollSizeIsInline;

  /// @brief Field m_HorizontalPageSize, offset: 0x4d0, size: 0x4, def value: None
  float_t ___m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset: 0x4d4, size: 0x4, def value: None
  float_t ___m_VerticalPageSize;

  /// @brief Field m_MouseWheelScrollSize, offset: 0x4d8, size: 0x4, def value: None
  float_t ___m_MouseWheelScrollSize;

  /// @brief Field m_ScrollDecelerationRate, offset: 0x4dc, size: 0x4, def value: None
  float_t ___m_ScrollDecelerationRate;

  /// @brief Field k_ScaledPixelsPerPointMultiplier, offset: 0x4e0, size: 0x4, def value: None
  float_t ___k_ScaledPixelsPerPointMultiplier;

  /// @brief Field k_TouchScrollInertiaBaseTimeInterval, offset: 0x4e4, size: 0x4, def value: None
  float_t ___k_TouchScrollInertiaBaseTimeInterval;

  /// @brief Field m_Elasticity, offset: 0x4e8, size: 0x4, def value: None
  float_t ___m_Elasticity;

  /// @brief Field m_TouchScrollBehavior, offset: 0x4ec, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollView_TouchScrollBehavior ___m_TouchScrollBehavior;

  /// @brief Field m_NestedInteractionKind, offset: 0x4f0, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollView_NestedInteractionKind ___m_NestedInteractionKind;

  /// @brief Field <contentViewport>k__BackingField, offset: 0x4f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____contentViewport_k__BackingField;

  /// @brief Field <horizontalScroller>k__BackingField, offset: 0x500, size: 0x8, def value: None
  ::UnityEngine::UIElements::Scroller* ____horizontalScroller_k__BackingField;

  /// @brief Field <verticalScroller>k__BackingField, offset: 0x508, size: 0x8, def value: None
  ::UnityEngine::UIElements::Scroller* ____verticalScroller_k__BackingField;

  /// @brief Field m_ContentContainer, offset: 0x510, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_ContentAndVerticalScrollContainer, offset: 0x518, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentAndVerticalScrollContainer;

  /// @brief Field previousVerticalTouchScrollTimeStamp, offset: 0x520, size: 0x4, def value: None
  float_t ___previousVerticalTouchScrollTimeStamp;

  /// @brief Field previousHorizontalTouchScrollTimeStamp, offset: 0x524, size: 0x4, def value: None
  float_t ___previousHorizontalTouchScrollTimeStamp;

  /// @brief Field elapsedTimeSinceLastVerticalTouchScroll, offset: 0x528, size: 0x4, def value: None
  float_t ___elapsedTimeSinceLastVerticalTouchScroll;

  /// @brief Field elapsedTimeSinceLastHorizontalTouchScroll, offset: 0x52c, size: 0x4, def value: None
  float_t ___elapsedTimeSinceLastHorizontalTouchScroll;

  /// @brief Field m_Mode, offset: 0x530, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollViewMode ___m_Mode;

  /// @brief Field m_ScheduledLayoutPassResetItem, offset: 0x538, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScheduledLayoutPassResetItem;

  /// @brief Field m_StartPosition, offset: 0x540, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_StartPosition;

  /// @brief Field m_PointerStartPosition, offset: 0x548, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PointerStartPosition;

  /// @brief Field m_Velocity, offset: 0x550, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Velocity;

  /// @brief Field m_SpringBackVelocity, offset: 0x558, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_SpringBackVelocity;

  /// @brief Field m_LowBounds, offset: 0x560, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LowBounds;

  /// @brief Field m_HighBounds, offset: 0x568, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_HighBounds;

  /// @brief Field m_LastVelocityLerpTime, offset: 0x570, size: 0x4, def value: None
  float_t ___m_LastVelocityLerpTime;

  /// @brief Field m_StartedMoving, offset: 0x574, size: 0x1, def value: None
  bool ___m_StartedMoving;

  /// @brief Field m_TouchPointerMoveAllowed, offset: 0x575, size: 0x1, def value: None
  bool ___m_TouchPointerMoveAllowed;

  /// @brief Field m_TouchStoppedVelocity, offset: 0x576, size: 0x1, def value: None
  bool ___m_TouchStoppedVelocity;

  /// @brief Field m_CapturedTarget, offset: 0x578, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CapturedTarget;

  /// @brief Field m_CapturedTargetPointerMoveCallback, offset: 0x580, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* ___m_CapturedTargetPointerMoveCallback;

  /// @brief Field m_CapturedTargetPointerUpCallback, offset: 0x588, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_CapturedTargetPointerUpCallback;

  /// @brief Field m_PostPointerUpAnimation, offset: 0x590, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_PostPointerUpAnimation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_FirstLayoutPass) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HorizontalScrollerVisibility) == 0x4ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_VerticalScrollerVisibility) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ElasticAnimationIntervalMs) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_AttachedRootVisualContainer) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_SingleLineHeight) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_MouseWheelScrollSizeIsInline) == 0x4cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HorizontalPageSize) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_VerticalPageSize) == 0x4d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_MouseWheelScrollSize) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ScrollDecelerationRate) == 0x4dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___k_ScaledPixelsPerPointMultiplier) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___k_TouchScrollInertiaBaseTimeInterval) == 0x4e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Elasticity) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchScrollBehavior) == 0x4ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_NestedInteractionKind) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____contentViewport_k__BackingField) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____horizontalScroller_k__BackingField) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____verticalScroller_k__BackingField) == 0x508, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ContentContainer) == 0x510, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ContentAndVerticalScrollContainer) == 0x518, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___previousVerticalTouchScrollTimeStamp) == 0x520, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___previousHorizontalTouchScrollTimeStamp) == 0x524, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___elapsedTimeSinceLastVerticalTouchScroll) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___elapsedTimeSinceLastHorizontalTouchScroll) == 0x52c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Mode) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ScheduledLayoutPassResetItem) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_StartPosition) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_PointerStartPosition) == 0x548, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Velocity) == 0x550, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_SpringBackVelocity) == 0x558, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_LowBounds) == 0x560, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HighBounds) == 0x568, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_LastVelocityLerpTime) == 0x570, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_StartedMoving) == 0x574, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchPointerMoveAllowed) == 0x575, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchStoppedVelocity) == 0x576, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTarget) == 0x578, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTargetPointerMoveCallback) == 0x580, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTargetPointerUpCallback) == 0x588, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_PostPointerUpAnimation) == 0x590, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView, 0x598>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView_NestedInteractionKind, "UnityEngine.UIElements", "ScrollView/NestedInteractionKind");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView_TouchScrollBehavior, "UnityEngine.UIElements", "ScrollView/TouchScrollBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView_TouchScrollingResult, "UnityEngine.UIElements", "ScrollView/TouchScrollingResult");
NEED_NO_BOX(::UnityEngine::UIElements::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView*, "UnityEngine.UIElements", "ScrollView");
NEED_NO_BOX(::UnityEngine::UIElements::ScrollView_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView_UxmlFactory*, "UnityEngine.UIElements", "ScrollView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::ScrollView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView_UxmlTraits*, "UnityEngine.UIElements", "ScrollView/UxmlTraits");

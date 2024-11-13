#pragma once
// IWYU pragma private; include "UnityEngine/UI/LayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutGroup)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class ILayoutGroup;
}
namespace UnityEngine::UI {
class __LayoutGroup___DelayedSetDirty_d__56;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace UnityEngine::UI {
class __LayoutGroup___DelayedSetDirty_d__56;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutGroup);
MARK_REF_PTR_T(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56);
// Type: ::<DelayedSetDirty>d__56
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::LayoutGroup::<DelayedSetDirty>d__56*
class CORDL_TYPE __LayoutGroup___DelayedSetDirty_d__56 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rectTransform, put = __cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4a54fa4, size 0x88, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4a5502c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4a55034, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4a5506c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4a54fa0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x4a54f78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayoutGroup___DelayedSetDirty_d__56();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LayoutGroup___DelayedSetDirty_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LayoutGroup___DelayedSetDirty_d__56(__LayoutGroup___DelayedSetDirty_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LayoutGroup___DelayedSetDirty_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LayoutGroup___DelayedSetDirty_d__56(__LayoutGroup___DelayedSetDirty_d__56 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___rectTransform;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15066 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56, ___rectTransform) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::LayoutGroup
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::LayoutGroup*
class CORDL_TYPE LayoutGroup : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using _DelayedSetDirty_d__56 = ::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56;

  __declspec(property(get = get_childAlignment, put = set_childAlignment)) ::UnityEngine::TextAnchor childAlignment;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_isRootLayoutGroup)) bool isRootLayoutGroup;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Field m_ChildAlignment, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildAlignment, put = __cordl_internal_set_m_ChildAlignment)) ::UnityEngine::TextAnchor m_ChildAlignment;

  /// @brief Field m_Padding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Padding, put = __cordl_internal_set_m_Padding)) ::UnityEngine::RectOffset* m_Padding;

  /// @brief Field m_Rect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect)) ::UnityW<::UnityEngine::RectTransform> m_Rect;

  /// @brief Field m_RectChildren, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectChildren,
                      put = __cordl_internal_set_m_RectChildren)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* m_RectChildren;

  /// @brief Field m_TotalFlexibleSize, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TotalFlexibleSize, put = __cordl_internal_set_m_TotalFlexibleSize)) ::UnityEngine::Vector2 m_TotalFlexibleSize;

  /// @brief Field m_TotalMinSize, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TotalMinSize, put = __cordl_internal_set_m_TotalMinSize)) ::UnityEngine::Vector2 m_TotalMinSize;

  /// @brief Field m_TotalPreferredSize, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TotalPreferredSize, put = __cordl_internal_set_m_TotalPreferredSize)) ::UnityEngine::Vector2 m_TotalPreferredSize;

  /// @brief Field m_Tracker, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker m_Tracker;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_padding, put = set_padding)) ::UnityEngine::RectOffset* padding;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_rectChildren)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* rectChildren;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutGroup"
  constexpr operator ::UnityEngine::UI::ILayoutGroup*() noexcept;

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x4a52158, size 0x3b8, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method DelayedSetDirty, addr 0x4a54f18, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* rectTransform);

  /// @brief Method GetAlignmentOnAxis, addr 0x4a53f40, size 0x4c, virtual false, abstract: false, final false
  inline float_t GetAlignmentOnAxis(int32_t axis);

  /// @brief Method GetStartOffset, addr 0x4a52fc8, size 0x148, virtual false, abstract: false, final false
  inline float_t GetStartOffset(int32_t axis, float_t requiredSpaceWithoutPadding);

  /// @brief Method GetTotalFlexibleSize, addr 0x4a5449c, size 0x70, virtual false, abstract: false, final false
  inline float_t GetTotalFlexibleSize(int32_t axis);

  /// @brief Method GetTotalMinSize, addr 0x4a5450c, size 0x70, virtual false, abstract: false, final false
  inline float_t GetTotalMinSize(int32_t axis);

  /// @brief Method GetTotalPreferredSize, addr 0x4a5442c, size 0x70, virtual false, abstract: false, final false
  inline float_t GetTotalPreferredSize(int32_t axis);

  static inline ::UnityEngine::UI::LayoutGroup* New_ctor();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x4a54d00, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x4a54c84, size 0x7c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4a54b94, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x4a54ee4, size 0x30, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformChildrenChanged, addr 0x4a54f14, size 0x4, virtual true, abstract: false, final false
  inline void OnTransformChildrenChanged();

  /// @brief Method SetChildAlongAxis, addr 0x4a54d04, size 0xa8, virtual false, abstract: false, final false
  inline void SetChildAlongAxis(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos);

  /// @brief Method SetChildAlongAxis, addr 0x4a53110, size 0xb0, virtual false, abstract: false, final false
  inline void SetChildAlongAxis(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t size);

  /// @brief Method SetChildAlongAxisWithScale, addr 0x4a54200, size 0x22c, virtual false, abstract: false, final false
  inline void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t scaleFactor);

  /// @brief Method SetChildAlongAxisWithScale, addr 0x4a53f8c, size 0x274, virtual false, abstract: false, final false
  inline void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t size, float_t scaleFactor);

  /// @brief Method SetDirty, addr 0x4a54bb0, size 0xd4, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetLayoutHorizontal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutInputForAxis, addr 0x4a52510, size 0x80, virtual false, abstract: false, final false
  inline void SetLayoutInputForAxis(float_t totalMin, float_t totalPreferred, float_t totalFlexible, int32_t axis);

  /// @brief Method SetLayoutVertical, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLayoutVertical();

  /// @brief Method SetProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetProperty(ByRef<T> currentValue, T newValue);

  constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_m_ChildAlignment() const;

  constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_m_ChildAlignment();

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Padding();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __cordl_internal_get_m_Padding() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& __cordl_internal_get_m_RectChildren();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*> const& __cordl_internal_get_m_RectChildren() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_TotalFlexibleSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_TotalFlexibleSize();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_TotalMinSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_TotalMinSize();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_TotalPreferredSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_TotalPreferredSize();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr void __cordl_internal_set_m_ChildAlignment(::UnityEngine::TextAnchor value);

  constexpr void __cordl_internal_set_m_Padding(::UnityEngine::RectOffset* value);

  constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_RectChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* value);

  constexpr void __cordl_internal_set_m_TotalFlexibleSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_TotalMinSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_TotalPreferredSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method .ctor, addr 0x4a51e70, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childAlignment, addr 0x4a54af0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAnchor get_childAlignment();

  /// @brief Method get_flexibleHeight, addr 0x4a54b84, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x4a54b6c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_isRootLayoutGroup, addr 0x4a54dac, size 0x138, virtual false, abstract: false, final false
  inline bool get_isRootLayoutGroup();

  /// @brief Method get_layoutPriority, addr 0x4a54b8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_minHeight, addr 0x4a54b74, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x4a54b5c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_padding, addr 0x4a54a8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_padding();

  /// @brief Method get_preferredHeight, addr 0x4a54b7c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x4a54b64, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_rectChildren, addr 0x4a54b54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* get_rectChildren();

  /// @brief Method get_rectTransform, addr 0x4a52798, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutGroup"
  constexpr ::UnityEngine::UI::ILayoutGroup* i___UnityEngine__UI__ILayoutGroup() noexcept;

  /// @brief Method set_childAlignment, addr 0x4a54af8, size 0x5c, virtual false, abstract: false, final false
  inline void set_childAlignment(::UnityEngine::TextAnchor value);

  /// @brief Method set_padding, addr 0x4a54a94, size 0x5c, virtual false, abstract: false, final false
  inline void set_padding(::UnityEngine::RectOffset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutGroup(LayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutGroup(LayoutGroup const&) = delete;

  /// @brief Field m_Padding, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Padding;

  /// @brief Field m_ChildAlignment, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___m_ChildAlignment;

  /// @brief Field m_Rect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Rect;

  /// @brief Field m_Tracker, offset: 0x38, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  /// @brief Field m_TotalMinSize, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalMinSize;

  /// @brief Field m_TotalPreferredSize, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalPreferredSize;

  /// @brief Field m_TotalFlexibleSize, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalFlexibleSize;

  /// @brief Field m_RectChildren, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* ___m_RectChildren;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15067 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutGroup, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_Padding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_ChildAlignment) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_Rect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_Tracker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_TotalMinSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_TotalPreferredSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_TotalFlexibleSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::LayoutGroup, ___m_RectChildren) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutGroup*, "UnityEngine.UI", "LayoutGroup");
NEED_NO_BOX(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56*, "UnityEngine.UI", "LayoutGroup/<DelayedSetDirty>d__56");

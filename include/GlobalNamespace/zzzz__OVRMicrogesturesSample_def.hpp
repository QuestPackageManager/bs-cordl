#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogesturesSample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMicrogesturesSample)
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
namespace GlobalNamespace {
class OVRMicrogestureEventSource;
}
namespace GlobalNamespace {
class OVRMicrogesturesSample__HighlightIconCoroutine_d__22;
}
namespace GlobalNamespace {
class OVRMicrogesturesSample__ShowGestureLabel_d__26;
}
namespace GlobalNamespace {
struct OVRPlugin_Hand;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMicrogesturesSample;
}
namespace GlobalNamespace {
class OVRMicrogesturesSample__HighlightIconCoroutine_d__22;
}
namespace GlobalNamespace {
class OVRMicrogesturesSample__ShowGestureLabel_d__26;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMicrogesturesSample);
MARK_REF_PTR_T(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22);
MARK_REF_PTR_T(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogesturesSample/<HighlightIconCoroutine>d__22
class CORDL_TYPE OVRMicrogesturesSample__HighlightIconCoroutine_d__22 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> __4__this;

  /// @brief Field <initialCol>5__2, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__initialCol_5__2, put = __cordl_internal_set__initialCol_5__2)) ::UnityEngine::Color _initialCol_5__2;

  /// @brief Field <timer>5__3, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_5__3, put = __cordl_internal_set__timer_5__3)) float_t _timer_5__3;

  /// @brief Field navIcon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_navIcon, put = __cordl_internal_set_navIcon)) ::UnityW<::UnityEngine::UI::Image> navIcon;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cc4fa8, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cc50d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cc50d8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cc5110, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5cc4fa4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogesturesSample>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__initialCol_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__initialCol_5__2();

  constexpr float_t const& __cordl_internal_get__timer_5__3() const;

  constexpr float_t& __cordl_internal_get__timer_5__3();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_navIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_navIcon();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRMicrogesturesSample> value);

  constexpr void __cordl_internal_set__initialCol_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__timer_5__3(float_t value);

  constexpr void __cordl_internal_set_navIcon(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x5cc4be8, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRMicrogesturesSample__HighlightIconCoroutine_d__22();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample__HighlightIconCoroutine_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMicrogesturesSample__HighlightIconCoroutine_d__22(OVRMicrogesturesSample__HighlightIconCoroutine_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample__HighlightIconCoroutine_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMicrogesturesSample__HighlightIconCoroutine_d__22(OVRMicrogesturesSample__HighlightIconCoroutine_d__22 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7234 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> _____4__this;

  /// @brief Field navIcon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___navIcon;

  /// @brief Field <initialCol>5__2, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____initialCol_5__2;

  /// @brief Field <timer>5__3, offset: 0x40, size: 0x4, def value: None
  float_t ____timer_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, ___navIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, ____initialCol_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, ____timer_5__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogesturesSample/<ShowGestureLabel>d__26
class CORDL_TYPE OVRMicrogesturesSample__ShowGestureLabel_d__26 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> __4__this;

  /// @brief Field gestureLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gestureLabel, put = __cordl_internal_set_gestureLabel)) ::UnityW<::UnityEngine::UI::Text> gestureLabel;

  /// @brief Field label, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_label, put = __cordl_internal_set_label)) ::StringW label;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cc511c, size 0xe4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cc5200, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cc5208, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cc5240, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5cc5118, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogesturesSample>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_gestureLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_gestureLabel();

  constexpr ::StringW const& __cordl_internal_get_label() const;

  constexpr ::StringW& __cordl_internal_get_label();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRMicrogesturesSample> value);

  constexpr void __cordl_internal_set_gestureLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_label(::StringW value);

  /// @brief Method .ctor, addr 0x5cc4ec4, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRMicrogesturesSample__ShowGestureLabel_d__26();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample__ShowGestureLabel_d__26", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMicrogesturesSample__ShowGestureLabel_d__26(OVRMicrogesturesSample__ShowGestureLabel_d__26&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample__ShowGestureLabel_d__26", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMicrogesturesSample__ShowGestureLabel_d__26(OVRMicrogesturesSample__ShowGestureLabel_d__26 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7235 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field gestureLabel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___gestureLabel;

  /// @brief Field label, offset: 0x28, size: 0x8, def value: None
  ::StringW ___label;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMicrogesturesSample> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, ___gestureLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, ___label) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, _____4__this) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogesturesSample
class CORDL_TYPE OVRMicrogesturesSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HighlightIconCoroutine_d__22 = ::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22;

  using _ShowGestureLabel_d__26 = ::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26;

  /// @brief Field downArrowL, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_downArrowL, put = __cordl_internal_set_downArrowL)) ::UnityW<::UnityEngine::UI::Image> downArrowL;

  /// @brief Field downArrowR, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_downArrowR, put = __cordl_internal_set_downArrowR)) ::UnityW<::UnityEngine::UI::Image> downArrowR;

  /// @brief Field gestureShowDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_gestureShowDuration, put = __cordl_internal_set_gestureShowDuration)) float_t gestureShowDuration;

  /// @brief Field highlightColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_highlightColor, put = __cordl_internal_set_highlightColor)) ::UnityEngine::Color highlightColor;

  /// @brief Field highlightCoroutines, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightCoroutines,
                      put =
                          __cordl_internal_set_highlightCoroutines)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Coroutine*>* highlightCoroutines;

  /// @brief Field highlightDuration, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_highlightDuration, put = __cordl_internal_set_highlightDuration)) float_t highlightDuration;

  /// @brief Field initialColor, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_initialColor, put = __cordl_internal_set_initialColor)) ::UnityEngine::Color initialColor;

  /// @brief Field leftArrowL, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_leftArrowL, put = __cordl_internal_set_leftArrowL)) ::UnityW<::UnityEngine::UI::Image> leftArrowL;

  /// @brief Field leftArrowR, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_leftArrowR, put = __cordl_internal_set_leftArrowR)) ::UnityW<::UnityEngine::UI::Image> leftArrowR;

  /// @brief Field leftGestureLabel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_leftGestureLabel, put = __cordl_internal_set_leftGestureLabel)) ::UnityW<::UnityEngine::UI::Text> leftGestureLabel;

  /// @brief Field leftGestureSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_leftGestureSource, put = __cordl_internal_set_leftGestureSource)) ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> leftGestureSource;

  /// @brief Field rightArrowL, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rightArrowL, put = __cordl_internal_set_rightArrowL)) ::UnityW<::UnityEngine::UI::Image> rightArrowL;

  /// @brief Field rightArrowR, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_rightArrowR, put = __cordl_internal_set_rightArrowR)) ::UnityW<::UnityEngine::UI::Image> rightArrowR;

  /// @brief Field rightGestureLabel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rightGestureLabel, put = __cordl_internal_set_rightGestureLabel)) ::UnityW<::UnityEngine::UI::Text> rightGestureLabel;

  /// @brief Field rightGestureSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rightGestureSource, put = __cordl_internal_set_rightGestureSource)) ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> rightGestureSource;

  /// @brief Field selectIconL, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_selectIconL, put = __cordl_internal_set_selectIconL)) ::UnityW<::UnityEngine::UI::Image> selectIconL;

  /// @brief Field selectIconR, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_selectIconR, put = __cordl_internal_set_selectIconR)) ::UnityW<::UnityEngine::UI::Image> selectIconR;

  /// @brief Field upArrowL, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_upArrowL, put = __cordl_internal_set_upArrowL)) ::UnityW<::UnityEngine::UI::Image> upArrowL;

  /// @brief Field upArrowR, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_upArrowR, put = __cordl_internal_set_upArrowR)) ::UnityW<::UnityEngine::UI::Image> upArrowR;

  /// @brief Method HighlightGesture, addr 0x5cc49a8, size 0xa0, virtual false, abstract: false, final false
  inline void HighlightGesture(::GlobalNamespace::OVRPlugin_Hand hand, ::GlobalNamespace::OVRHand_MicrogestureType gesture);

  /// @brief Method HighlightIcon, addr 0x5cc4a48, size 0x140, virtual false, abstract: false, final false
  inline void HighlightIcon(::UnityEngine::UI::Image* icon);

  /// @brief Method HighlightIcon, addr 0x5cc4bf0, size 0x68, virtual false, abstract: false, final false
  inline void HighlightIcon(::UnityEngine::UI::Image* navIcon, bool state);

  /// @brief Method HighlightIconCoroutine, addr 0x5cc4b88, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HighlightIconCoroutine(::UnityEngine::UI::Image* navIcon);

  static inline ::GlobalNamespace::OVRMicrogesturesSample* New_ctor();

  /// @brief Method OnGestureRecognized, addr 0x5cc4c58, size 0xb4, virtual false, abstract: false, final false
  inline void OnGestureRecognized(::GlobalNamespace::OVRPlugin_Hand hand, ::GlobalNamespace::OVRHand_MicrogestureType gesture);

  /// @brief Method ShowGestureLabel, addr 0x5cc4e5c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowGestureLabel(::UnityEngine::UI::Text* gestureLabel, ::StringW label);

  /// @brief Method ShowRecognizedGestureLabel, addr 0x5cc4d0c, size 0x150, virtual false, abstract: false, final false
  inline void ShowRecognizedGestureLabel(::UnityEngine::UI::Text* gestureLabel, ::StringW label);

  /// @brief Method Start, addr 0x5cc4834, size 0x174, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__19_0, addr 0x5cc4f8c, size 0xc, virtual false, abstract: false, final false
  inline void _Start_b__19_0(::GlobalNamespace::OVRHand_MicrogestureType gesture);

  /// @brief Method <Start>b__19_1, addr 0x5cc4f98, size 0xc, virtual false, abstract: false, final false
  inline void _Start_b__19_1(::GlobalNamespace::OVRHand_MicrogestureType gesture);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_downArrowL() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_downArrowL();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_downArrowR() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_downArrowR();

  constexpr float_t const& __cordl_internal_get_gestureShowDuration() const;

  constexpr float_t& __cordl_internal_get_gestureShowDuration();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_highlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_highlightColor();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Coroutine*>* const& __cordl_internal_get_highlightCoroutines() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Coroutine*>*& __cordl_internal_get_highlightCoroutines();

  constexpr float_t const& __cordl_internal_get_highlightDuration() const;

  constexpr float_t& __cordl_internal_get_highlightDuration();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_initialColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_initialColor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_leftArrowL() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_leftArrowL();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_leftArrowR() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_leftArrowR();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_leftGestureLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_leftGestureLabel();

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> const& __cordl_internal_get_leftGestureSource() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>& __cordl_internal_get_leftGestureSource();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_rightArrowL() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_rightArrowL();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_rightArrowR() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_rightArrowR();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_rightGestureLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_rightGestureLabel();

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> const& __cordl_internal_get_rightGestureSource() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource>& __cordl_internal_get_rightGestureSource();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_selectIconL() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_selectIconL();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_selectIconR() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_selectIconR();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_upArrowL() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_upArrowL();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_upArrowR() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_upArrowR();

  constexpr void __cordl_internal_set_downArrowL(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_downArrowR(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_gestureShowDuration(float_t value);

  constexpr void __cordl_internal_set_highlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_highlightCoroutines(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Coroutine*>* value);

  constexpr void __cordl_internal_set_highlightDuration(float_t value);

  constexpr void __cordl_internal_set_initialColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_leftArrowL(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_leftArrowR(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_leftGestureLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_leftGestureSource(::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> value);

  constexpr void __cordl_internal_set_rightArrowL(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_rightArrowR(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_rightGestureLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_rightGestureSource(::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> value);

  constexpr void __cordl_internal_set_selectIconL(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_selectIconR(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_upArrowL(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_upArrowR(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x5cc4ecc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMicrogesturesSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMicrogesturesSample(OVRMicrogesturesSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogesturesSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMicrogesturesSample(OVRMicrogesturesSample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7236 };

  /// @brief Field leftGestureSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> ___leftGestureSource;

  /// @brief Field rightGestureSource, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMicrogestureEventSource> ___rightGestureSource;

  /// @brief Field leftGestureLabel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___leftGestureLabel;

  /// @brief Field rightGestureLabel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___rightGestureLabel;

  /// @brief Field gestureShowDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___gestureShowDuration;

  /// @brief Field leftArrowL, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___leftArrowL;

  /// @brief Field rightArrowL, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___rightArrowL;

  /// @brief Field upArrowL, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___upArrowL;

  /// @brief Field downArrowL, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___downArrowL;

  /// @brief Field selectIconL, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___selectIconL;

  /// @brief Field leftArrowR, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___leftArrowR;

  /// @brief Field rightArrowR, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___rightArrowR;

  /// @brief Field upArrowR, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___upArrowR;

  /// @brief Field downArrowR, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___downArrowR;

  /// @brief Field selectIconR, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___selectIconR;

  /// @brief Field initialColor, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ___initialColor;

  /// @brief Field highlightColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ___highlightColor;

  /// @brief Field highlightDuration, offset: 0xb8, size: 0x4, def value: None
  float_t ___highlightDuration;

  /// @brief Field highlightCoroutines, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Coroutine*>* ___highlightCoroutines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___leftGestureSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___rightGestureSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___leftGestureLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___rightGestureLabel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___gestureShowDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___leftArrowL) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___rightArrowL) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___upArrowL) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___downArrowL) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___selectIconL) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___leftArrowR) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___rightArrowR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___upArrowR) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___downArrowR) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___selectIconR) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___initialColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___highlightColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___highlightDuration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogesturesSample, ___highlightCoroutines) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMicrogesturesSample, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMicrogesturesSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMicrogesturesSample*, "", "OVRMicrogesturesSample");
NEED_NO_BOX(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMicrogesturesSample__HighlightIconCoroutine_d__22*, "", "OVRMicrogesturesSample/<HighlightIconCoroutine>d__22");
NEED_NO_BOX(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMicrogesturesSample__ShowGestureLabel_d__26*, "", "OVRMicrogesturesSample/<ShowGestureLabel>d__26");

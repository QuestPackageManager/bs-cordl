#pragma once
// IWYU pragma private; include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewControllerTransitionHelpers)
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___AnimationCoroutine_d__8;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoDismissTransition_d__4;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoPresentTransition_d__3;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoVerticalTransition_d__6;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass5_0;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass6_0;
}
namespace HMUI {
struct __ViewController__AnimationDirection;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HMUI {
class ViewControllerTransitionHelpers;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___AnimationCoroutine_d__8;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoDismissTransition_d__4;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoPresentTransition_d__3;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoVerticalTransition_d__6;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass5_0;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0);
// Type: ::<DoPresentTransition>d__3
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<DoPresentTransition>d__3*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoPresentTransition_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field animationDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection))::HMUI::__ViewController__AnimationDirection animationDirection;

  /// @brief Field moveOffsetMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2529764, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25297f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2529800, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2529840, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2529760, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::HMUI::__ViewController__AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::__ViewController__AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::__ViewController__AnimationDirection value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2529520, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewControllerTransitionHelpers___DoPresentTransition_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers___DoPresentTransition_d__3(__ViewControllerTransitionHelpers___DoPresentTransition_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers___DoPresentTransition_d__3(__ViewControllerTransitionHelpers___DoPresentTransition_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field animationDirection, offset: 0x20, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationDirection ___animationDirection;

  /// @brief Field toPresentViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, ___animationDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, ___toPresentViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, ___toDismissViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, ___moveOffsetMultiplier) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<DoDismissTransition>d__4
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<DoDismissTransition>d__4*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoDismissTransition_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field animationDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection))::HMUI::__ViewController__AnimationDirection animationDirection;

  /// @brief Field moveOffsetMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x252984c, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25298e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25298e8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2529928, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2529848, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::HMUI::__ViewController__AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::__ViewController__AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::__ViewController__AnimationDirection value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2529548, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewControllerTransitionHelpers___DoDismissTransition_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers___DoDismissTransition_d__4(__ViewControllerTransitionHelpers___DoDismissTransition_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers___DoDismissTransition_d__4(__ViewControllerTransitionHelpers___DoDismissTransition_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field animationDirection, offset: 0x20, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationDirection ___animationDirection;

  /// @brief Field toPresentViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, ___animationDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, ___toPresentViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, ___toDismissViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, ___moveOffsetMultiplier) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<>c__DisplayClass5_0*
class CORDL_TYPE __ViewControllerTransitionHelpers____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseCanvasGroupAlpha, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_baseCanvasGroupAlpha, put = __cordl_internal_set_baseCanvasGroupAlpha)) float_t baseCanvasGroupAlpha;

  /// @brief Field moveOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) float_t moveOffset;

  /// @brief Field toDismissViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  static inline ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* New_ctor();

  /// @brief Method <DoHorizontalTransition>b__0, addr 0x2529938, size 0xd0, virtual false, abstract: false, final false
  inline void _DoHorizontalTransition_b__0(float_t t);

  constexpr float_t const& __cordl_internal_get_baseCanvasGroupAlpha() const;

  constexpr float_t& __cordl_internal_get_baseCanvasGroupAlpha();

  constexpr float_t const& __cordl_internal_get_moveOffset() const;

  constexpr float_t& __cordl_internal_get_moveOffset();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set_baseCanvasGroupAlpha(float_t value);

  constexpr void __cordl_internal_set_moveOffset(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2529930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewControllerTransitionHelpers____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers____c__DisplayClass5_0(__ViewControllerTransitionHelpers____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers____c__DisplayClass5_0(__ViewControllerTransitionHelpers____c__DisplayClass5_0 const&) = delete;

  /// @brief Field toPresentViewController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field moveOffset, offset: 0x18, size: 0x4, def value: None
  float_t ___moveOffset;

  /// @brief Field toDismissViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field baseCanvasGroupAlpha, offset: 0x28, size: 0x4, def value: None
  float_t ___baseCanvasGroupAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, ___toPresentViewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, ___moveOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, ___toDismissViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, ___baseCanvasGroupAlpha) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: ::<DoHorizontalTransition>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<DoHorizontalTransition>d__5*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1))::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* __8__1;

  /// @brief Field moveOffsetMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2529a0c, size 0x158, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2529b64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2529b6c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2529bac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2529a08, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*& __cordl_internal_get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*> const& __cordl_internal_get___8__1() const;

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x25295f4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field toPresentViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, ___toPresentViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, ___toDismissViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, ___moveOffsetMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, _____8__1) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<>c__DisplayClass6_0*
class CORDL_TYPE __ViewControllerTransitionHelpers____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseCanvasGroupAlpha, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_baseCanvasGroupAlpha, put = __cordl_internal_set_baseCanvasGroupAlpha)) float_t baseCanvasGroupAlpha;

  /// @brief Field moveOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) float_t moveOffset;

  /// @brief Field toDismissViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  static inline ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* New_ctor();

  /// @brief Method <DoVerticalTransition>b__0, addr 0x2529bbc, size 0xe4, virtual false, abstract: false, final false
  inline void _DoVerticalTransition_b__0(float_t t);

  constexpr float_t const& __cordl_internal_get_baseCanvasGroupAlpha() const;

  constexpr float_t& __cordl_internal_get_baseCanvasGroupAlpha();

  constexpr float_t const& __cordl_internal_get_moveOffset() const;

  constexpr float_t& __cordl_internal_get_moveOffset();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set_baseCanvasGroupAlpha(float_t value);

  constexpr void __cordl_internal_set_moveOffset(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2529bb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewControllerTransitionHelpers____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers____c__DisplayClass6_0(__ViewControllerTransitionHelpers____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers____c__DisplayClass6_0(__ViewControllerTransitionHelpers____c__DisplayClass6_0 const&) = delete;

  /// @brief Field toPresentViewController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field moveOffset, offset: 0x18, size: 0x4, def value: None
  float_t ___moveOffset;

  /// @brief Field baseCanvasGroupAlpha, offset: 0x1c, size: 0x4, def value: None
  float_t ___baseCanvasGroupAlpha;

  /// @brief Field toDismissViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, ___toPresentViewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, ___moveOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, ___baseCanvasGroupAlpha) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, ___toDismissViewController) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: ::<DoVerticalTransition>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<DoVerticalTransition>d__6*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoVerticalTransition_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1))::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* __8__1;

  /// @brief Field moveOffsetMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController))::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController))::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2529ca4, size 0x15c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2529e00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2529e08, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2529e48, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2529ca0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*& __cordl_internal_get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*> const& __cordl_internal_get___8__1() const;

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x25296a0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewControllerTransitionHelpers___DoVerticalTransition_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers___DoVerticalTransition_d__6(__ViewControllerTransitionHelpers___DoVerticalTransition_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers___DoVerticalTransition_d__6(__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field toPresentViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, ___toPresentViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, ___toDismissViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, ___moveOffsetMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, _____8__1) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<AnimationCoroutine>d__8
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewControllerTransitionHelpers::<AnimationCoroutine>d__8*
class CORDL_TYPE __ViewControllerTransitionHelpers___AnimationCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <elapsedTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field transitionAnimation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionAnimation, put = __cordl_internal_set_transitionAnimation))::System::Action_1<float_t>* transitionAnimation;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2529e54, size 0xdc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2529f30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2529f38, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2529f78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2529e50, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_transitionAnimation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_transitionAnimation() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_transitionAnimation(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x2529730, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewControllerTransitionHelpers___AnimationCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewControllerTransitionHelpers___AnimationCoroutine_d__8(__ViewControllerTransitionHelpers___AnimationCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewControllerTransitionHelpers___AnimationCoroutine_d__8(__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field transitionAnimation, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___transitionAnimation;

  /// @brief Field <elapsedTime>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, ___transitionAnimation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, ____elapsedTime_5__2) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ViewControllerTransitionHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ViewControllerTransitionHelpers*
class CORDL_TYPE ViewControllerTransitionHelpers : public ::System::Object {
public:
  // Declarations
  using _AnimationCoroutine_d__8 = ::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8;

  using _DoDismissTransition_d__4 = ::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4;

  using _DoHorizontalTransition_d__5 = ::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;

  using _DoPresentTransition_d__3 = ::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3;

  using _DoVerticalTransition_d__6 = ::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6;

  using __c__DisplayClass5_0 = ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0;

  /// @brief Method AnimationCoroutine, addr 0x25296c8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* AnimationCoroutine(::System::Action_1<float_t>* transitionAnimation);

  /// @brief Method DoDismissTransition, addr 0x2529444, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoDismissTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                        ::HMUI::__ViewController__AnimationDirection animationDirection, float_t moveOffsetMultiplier);

  /// @brief Method DoHorizontalTransition, addr 0x2529570, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoHorizontalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                           float_t moveOffsetMultiplier);

  /// @brief Method DoPresentTransition, addr 0x2528e18, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoPresentTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                        ::HMUI::__ViewController__AnimationDirection animationDirection, float_t moveOffsetMultiplier);

  /// @brief Method DoVerticalTransition, addr 0x252961c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoVerticalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                         float_t moveOffsetMultiplier);

  /// @brief Method ImmediateTransition, addr 0x2528ea4, size 0xfc, virtual false, abstract: false, final false
  static inline void ImmediateTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController);

  static inline ::HMUI::ViewControllerTransitionHelpers* New_ctor();

  /// @brief Method .ctor, addr 0x2529758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers(ViewControllerTransitionHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers(ViewControllerTransitionHelpers const&) = delete;

  /// @brief Field kHorizontalTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalTransitionMoveOffset{ 2.0 };

  /// @brief Field kTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionDuration{ 0.4 };

  /// @brief Field kVerticalTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kVerticalTransitionMoveOffset{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers, 0x10>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8*, "HMUI", "ViewControllerTransitionHelpers/<AnimationCoroutine>d__8");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4*, "HMUI", "ViewControllerTransitionHelpers/<DoDismissTransition>d__4");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5*, "HMUI", "ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3*, "HMUI", "ViewControllerTransitionHelpers/<DoPresentTransition>d__3");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6*, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass6_0");

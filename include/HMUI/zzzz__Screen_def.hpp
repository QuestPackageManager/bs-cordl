#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __Screen___TransitionCoroutine_d__5;
}
namespace HMUI {
struct __ViewController__AnimationType;
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
// Forward declare root types
namespace HMUI {
class Screen;
}
namespace HMUI {
class __Screen___TransitionCoroutine_d__5;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Screen);
MARK_REF_PTR_T(::HMUI::__Screen___TransitionCoroutine_d__5);
// Type: ::<TransitionCoroutine>d__5
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::Screen::<TransitionCoroutine>d__5*
class CORDL_TYPE __Screen___TransitionCoroutine_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::Screen> __4__this;

  /// @brief Field <elapsedTime>5__4, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__4, put = __cordl_internal_set__elapsedTime_5__4)) float_t _elapsedTime_5__4;

  /// @brief Field <oldRootViewControllerStartAlpha>5__3, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__oldRootViewControllerStartAlpha_5__3,
                      put = __cordl_internal_set__oldRootViewControllerStartAlpha_5__3)) float_t _oldRootViewControllerStartAlpha_5__3;

  /// @brief Field <oldRootViewController>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__oldRootViewController_5__2, put = __cordl_internal_set__oldRootViewController_5__2))::UnityW<::HMUI::ViewController> _oldRootViewController_5__2;

  /// @brief Field animationType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_animationType, put = __cordl_internal_set_animationType))::HMUI::__ViewController__AnimationType animationType;

  /// @brief Field newRootViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newRootViewController, put = __cordl_internal_set_newRootViewController))::UnityW<::HMUI::ViewController> newRootViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x250eb38, size 0x504, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__Screen___TransitionCoroutine_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x250f0d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x250f0d8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x250f118, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x250eb34, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__4() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__4();

  constexpr float_t const& __cordl_internal_get__oldRootViewControllerStartAlpha_5__3() const;

  constexpr float_t& __cordl_internal_get__oldRootViewControllerStartAlpha_5__3();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__oldRootViewController_5__2() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__oldRootViewController_5__2();

  constexpr ::HMUI::__ViewController__AnimationType const& __cordl_internal_get_animationType() const;

  constexpr ::HMUI::__ViewController__AnimationType& __cordl_internal_get_animationType();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newRootViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newRootViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__elapsedTime_5__4(float_t value);

  constexpr void __cordl_internal_set__oldRootViewControllerStartAlpha_5__3(float_t value);

  constexpr void __cordl_internal_set__oldRootViewController_5__2(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationType(::HMUI::__ViewController__AnimationType value);

  constexpr void __cordl_internal_set_newRootViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x250eaf8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __Screen___TransitionCoroutine_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> _____4__this;

  /// @brief Field newRootViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newRootViewController;

  /// @brief Field animationType, offset: 0x30, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationType ___animationType;

  /// @brief Field <oldRootViewController>5__2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____oldRootViewController_5__2;

  /// @brief Field <oldRootViewControllerStartAlpha>5__3, offset: 0x40, size: 0x4, def value: None
  float_t ____oldRootViewControllerStartAlpha_5__3;

  /// @brief Field <elapsedTime>5__4, offset: 0x44, size: 0x4, def value: None
  float_t ____elapsedTime_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__Screen___TransitionCoroutine_d__5, 0x48>, "Size mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, ___newRootViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, ___animationType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, ____oldRootViewController_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, ____oldRootViewControllerStartAlpha_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::__Screen___TransitionCoroutine_d__5, ____elapsedTime_5__4) == 0x44, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::Screen
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::Screen*
class CORDL_TYPE Screen : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TransitionCoroutine_d__5 = ::HMUI::__Screen___TransitionCoroutine_d__5;

  /// @brief Field _isBeingDestroyed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isBeingDestroyed, put = __cordl_internal_set__isBeingDestroyed)) bool _isBeingDestroyed;

  /// @brief Field _rootViewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rootViewController, put = __cordl_internal_set__rootViewController))::UnityW<::HMUI::ViewController> _rootViewController;

  __declspec(property(get = get_isBeingDestroyed)) bool isBeingDestroyed;

  static inline ::HMUI::Screen* New_ctor();

  /// @brief Method OnDestroy, addr 0x250eb20, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetRootViewController, addr 0x250e9ac, size 0xd0, virtual false, abstract: false, final false
  inline void SetRootViewController(::HMUI::ViewController* newRootViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method TransitionCoroutine, addr 0x250ea7c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionCoroutine(::HMUI::ViewController* newRootViewController, ::HMUI::__ViewController__AnimationType animationType);

  constexpr bool const& __cordl_internal_get__isBeingDestroyed() const;

  constexpr bool& __cordl_internal_get__isBeingDestroyed();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__rootViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__rootViewController();

  constexpr void __cordl_internal_set__isBeingDestroyed(bool value);

  constexpr void __cordl_internal_set__rootViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x250eb2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isBeingDestroyed, addr 0x250e9a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBeingDestroyed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Screen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Screen(Screen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Screen(Screen const&) = delete;

  /// @brief Field _rootViewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____rootViewController;

  /// @brief Field _isBeingDestroyed, offset: 0x20, size: 0x1, def value: None
  bool ____isBeingDestroyed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Screen, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::Screen, ____rootViewController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::Screen, ____isBeingDestroyed) == 0x20, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Screen);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Screen*, "HMUI", "Screen");
NEED_NO_BOX(::HMUI::__Screen___TransitionCoroutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__Screen___TransitionCoroutine_d__5*, "HMUI", "Screen/<TransitionCoroutine>d__5");

#pragma once
// IWYU pragma private; include "HMUI/ContainerViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContainerViewController)
namespace HMUI {
class ContainerViewController__AddViewControllerCoroutine_d__16;
}
namespace HMUI {
class ContainerViewController__RemoveViewControllersCoroutine_d__18;
}
namespace HMUI {
class ContainerViewController___c;
}
namespace HMUI {
class Screen;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
class ContainerViewController;
}
namespace HMUI {
class ContainerViewController__AddViewControllerCoroutine_d__16;
}
namespace HMUI {
class ContainerViewController__RemoveViewControllersCoroutine_d__18;
}
namespace HMUI {
class ContainerViewController___c;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ContainerViewController);
MARK_REF_PTR_T(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16);
MARK_REF_PTR_T(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18);
MARK_REF_PTR_T(::HMUI::ContainerViewController___c);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ContainerViewController/<>c
class CORDL_TYPE ContainerViewController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HMUI::ContainerViewController___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* __9__14_0;

  static inline ::HMUI::ContainerViewController___c* New_ctor();

  /// @brief Method <IsChildInTransition>b__14_0, addr 0x2285ce8, size 0x18, virtual false, abstract: false, final false
  inline bool _IsChildInTransition_b__14_0(::HMUI::ViewController* x);

  /// @brief Method .ctor, addr 0x2285ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::ContainerViewController___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* getStaticF___9__14_0();

  static inline void setStaticF___9(::HMUI::ContainerViewController___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainerViewController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerViewController___c(ContainerViewController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerViewController___c(ContainerViewController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController___c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ContainerViewController/<AddViewControllerCoroutine>d__16
class CORDL_TYPE ContainerViewController__AddViewControllerCoroutine_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ContainerViewController> __4__this;

  /// @brief Field <elapsedTime>5__4, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__4, put = __cordl_internal_set__elapsedTime_5__4)) float_t _elapsedTime_5__4;

  /// @brief Field <transitionDuration>5__3, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionDuration_5__3, put = __cordl_internal_set__transitionDuration_5__3)) float_t _transitionDuration_5__3;

  /// @brief Field <viewControllers>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers_5__2,
                      put = __cordl_internal_set__viewControllers_5__2)) ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>
      _viewControllers_5__2;

  /// @brief Field animationLayouter, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_animationLayouter,
      put = __cordl_internal_set_animationLayouter)) ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter;

  /// @brief Field finishedCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field newViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newViewController, put = __cordl_internal_set_newViewController)) ::UnityW<::HMUI::ViewController> newViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2285d04, size 0x20c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2285f10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2285f18, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2285f50, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2285d00, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__4() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__4();

  constexpr float_t const& __cordl_internal_get__transitionDuration_5__3() const;

  constexpr float_t& __cordl_internal_get__transitionDuration_5__3();

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllers_5__2() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>& __cordl_internal_get__viewControllers_5__2();

  constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* const& __cordl_internal_get_animationLayouter() const;

  constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*& __cordl_internal_get_animationLayouter();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ContainerViewController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__4(float_t value);

  constexpr void __cordl_internal_set__transitionDuration_5__3(float_t value);

  constexpr void __cordl_internal_set__viewControllers_5__2(::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value);

  constexpr void __cordl_internal_set_animationLayouter(::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x228590c, size 0x28, virtual false, abstract: false, final false
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
  constexpr ContainerViewController__AddViewControllerCoroutine_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController__AddViewControllerCoroutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerViewController__AddViewControllerCoroutine_d__16(ContainerViewController__AddViewControllerCoroutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController__AddViewControllerCoroutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerViewController__AddViewControllerCoroutine_d__16(ContainerViewController__AddViewControllerCoroutine_d__16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16794 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ContainerViewController> _____4__this;

  /// @brief Field newViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newViewController;

  /// @brief Field immediately, offset: 0x30, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationLayouter, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* ___animationLayouter;

  /// @brief Field finishedCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <viewControllers>5__2, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> ____viewControllers_5__2;

  /// @brief Field <transitionDuration>5__3, offset: 0x50, size: 0x4, def value: None
  float_t ____transitionDuration_5__3;

  /// @brief Field <elapsedTime>5__4, offset: 0x54, size: 0x4, def value: None
  float_t ____elapsedTime_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ___animationLayouter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ___finishedCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ____viewControllers_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ____transitionDuration_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, ____elapsedTime_5__4) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16, 0x58>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ContainerViewController/<RemoveViewControllersCoroutine>d__18
class CORDL_TYPE ContainerViewController__RemoveViewControllersCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ContainerViewController> __4__this;

  /// @brief Field <elapsedTime>5__5, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__5, put = __cordl_internal_set__elapsedTime_5__5)) float_t _elapsedTime_5__5;

  /// @brief Field <transitionDuration>5__4, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionDuration_5__4, put = __cordl_internal_set__transitionDuration_5__4)) float_t _transitionDuration_5__4;

  /// @brief Field <viewControllersToRemoveSet>5__3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllersToRemoveSet_5__3,
                      put = __cordl_internal_set__viewControllersToRemoveSet_5__3)) ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* _viewControllersToRemoveSet_5__3;

  /// @brief Field <viewControllers>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers_5__2,
                      put = __cordl_internal_set__viewControllers_5__2)) ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>
      _viewControllers_5__2;

  /// @brief Field animationLayouter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_animationLayouter,
                      put = __cordl_internal_set_animationLayouter)) ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                        ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter;

  /// @brief Field finishedCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field viewControllersToRemove, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_viewControllersToRemove,
                      put = __cordl_internal_set_viewControllersToRemove)) ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>
      viewControllersToRemove;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2285f5c, size 0x308, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2286264, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x228626c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22862a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2285f58, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__5() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__5();

  constexpr float_t const& __cordl_internal_get__transitionDuration_5__4() const;

  constexpr float_t& __cordl_internal_get__transitionDuration_5__4();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* const& __cordl_internal_get__viewControllersToRemoveSet_5__3() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get__viewControllersToRemoveSet_5__3();

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllers_5__2() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>& __cordl_internal_get__viewControllers_5__2();

  constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                               ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* const&
  __cordl_internal_get_animationLayouter() const;

  constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                               ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*&
  __cordl_internal_get_animationLayouter();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get_viewControllersToRemove() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>& __cordl_internal_get_viewControllersToRemove();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ContainerViewController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__5(float_t value);

  constexpr void __cordl_internal_set__transitionDuration_5__4(float_t value);

  constexpr void __cordl_internal_set__viewControllersToRemoveSet_5__3(::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* value);

  constexpr void __cordl_internal_set__viewControllers_5__2(::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value);

  constexpr void __cordl_internal_set_animationLayouter(::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                           ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_viewControllersToRemove(::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value);

  /// @brief Method .ctor, addr 0x22859ec, size 0x28, virtual false, abstract: false, final false
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
  constexpr ContainerViewController__RemoveViewControllersCoroutine_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController__RemoveViewControllersCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerViewController__RemoveViewControllersCoroutine_d__18(ContainerViewController__RemoveViewControllersCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController__RemoveViewControllersCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerViewController__RemoveViewControllersCoroutine_d__18(ContainerViewController__RemoveViewControllersCoroutine_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16795 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ContainerViewController> _____4__this;

  /// @brief Field viewControllersToRemove, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> ___viewControllersToRemove;

  /// @brief Field immediately, offset: 0x30, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationLayouter, offset: 0x38, size: 0x8, def value: None
  ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*
      ___animationLayouter;

  /// @brief Field finishedCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <viewControllers>5__2, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> ____viewControllers_5__2;

  /// @brief Field <viewControllersToRemoveSet>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* ____viewControllersToRemoveSet_5__3;

  /// @brief Field <transitionDuration>5__4, offset: 0x58, size: 0x4, def value: None
  float_t ____transitionDuration_5__4;

  /// @brief Field <elapsedTime>5__5, offset: 0x5c, size: 0x4, def value: None
  float_t ____elapsedTime_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ___viewControllersToRemove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ___animationLayouter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ___finishedCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ____viewControllers_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ____viewControllersToRemoveSet_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ____transitionDuration_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, ____elapsedTime_5__5) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18, 0x60>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ContainerViewController
class CORDL_TYPE ContainerViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _AddViewControllerCoroutine_d__16 = ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16;

  using _RemoveViewControllersCoroutine_d__18 = ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18;

  using __c = ::HMUI::ContainerViewController___c;

  /// @brief Field _controllersContainer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersContainer, put = __cordl_internal_set__controllersContainer)) ::UnityW<::UnityEngine::RectTransform> _controllersContainer;

  /// @brief Field _viewControllers, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers,
                      put = __cordl_internal_set__viewControllers)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* _viewControllers;

  __declspec(property(get = get_controllersContainer)) ::UnityW<::UnityEngine::RectTransform> controllersContainer;

  __declspec(property(get = get_viewControllers)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers;

  /// @brief Method AddViewController, addr 0x228570c, size 0x174, virtual false, abstract: false, final false
  inline void AddViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter, bool immediately);

  /// @brief Method AddViewControllerCoroutine, addr 0x2285880, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator*
  AddViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                             ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter, bool immediately);

  /// @brief Method ClearChildViewControllers, addr 0x22852f8, size 0x128, virtual false, abstract: false, final false
  inline void ClearChildViewControllers();

  /// @brief Method DeactivateGameObject, addr 0x22851c8, size 0xe4, virtual true, abstract: false, final false
  inline void DeactivateGameObject();

  /// @brief Method GetNewXPositionsForViewControllers, addr 0x2285a14, size 0x1ec, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetNewXPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers, int32_t exludeFromEndCount);

  /// @brief Method IsChildInTransition, addr 0x2285618, size 0xf4, virtual false, abstract: false, final false
  inline bool IsChildInTransition();

  /// @brief Method LayoutViewControllers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers);

  static inline ::HMUI::ContainerViewController* New_ctor();

  /// @brief Method RemoveViewControllers, addr 0x2285934, size 0x2c, virtual false, abstract: false, final false
  inline void RemoveViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers, ::System::Action* finishedCallback,
                                    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                       ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                    bool immediately);

  /// @brief Method RemoveViewControllersCoroutine, addr 0x2285960, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RemoveViewControllersCoroutine(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllersToRemove,
                                                                            ::System::Action* finishedCallback,
                                                                            ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                               ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                                                            bool immediately);

  /// @brief Method SetChildViewController, addr 0x2285420, size 0xa0, virtual false, abstract: false, final false
  inline void SetChildViewController(::HMUI::ViewController* viewController);

  /// @brief Method SetChildViewControllers, addr 0x22854c0, size 0x158, virtual false, abstract: false, final false
  inline void SetChildViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  /// @brief Method __Activate, addr 0x2284e20, size 0x18c, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method __Deactivate, addr 0x2285060, size 0xcc, virtual true, abstract: false, final false
  inline void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);

  /// @brief Method __Init, addr 0x2284c34, size 0xd4, virtual true, abstract: false, final false
  inline void __Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__controllersContainer() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__controllersContainer();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* const& __cordl_internal_get__viewControllers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get__viewControllers();

  constexpr void __cordl_internal_set__controllersContainer(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value);

  /// @brief Method .ctor, addr 0x2285c00, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controllersContainer, addr 0x2284b84, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_controllersContainer();

  /// @brief Method get_viewControllers, addr 0x2284c2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* get_viewControllers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainerViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerViewController(ContainerViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerViewController(ContainerViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16796 };

  /// @brief Field _controllersContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____controllersContainer;

  /// @brief Field _viewControllers, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* ____viewControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ContainerViewController, ____controllersContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController, ____viewControllers) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController, 0x88>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ContainerViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController*, "HMUI", "ContainerViewController");
NEED_NO_BOX(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*, "HMUI", "ContainerViewController/<AddViewControllerCoroutine>d__16");
NEED_NO_BOX(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__18");
NEED_NO_BOX(::HMUI::ContainerViewController___c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController___c*, "HMUI", "ContainerViewController/<>c");

#pragma once
// IWYU pragma private; include "HMUI/ContainerViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContainerViewController)
namespace HMUI {
class Screen;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __ContainerViewController___AddViewControllerCoroutine_d__15;
}
namespace HMUI {
class __ContainerViewController___RemoveViewControllersCoroutine_d__17;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
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
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
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
class __ContainerViewController___AddViewControllerCoroutine_d__15;
}
namespace HMUI {
class __ContainerViewController___RemoveViewControllersCoroutine_d__17;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ContainerViewController);
MARK_REF_PTR_T(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15);
MARK_REF_PTR_T(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17);
// Type: ::<AddViewControllerCoroutine>d__15
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ContainerViewController::<AddViewControllerCoroutine>d__15*
class CORDL_TYPE __ContainerViewController___AddViewControllerCoroutine_d__15 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x2251754, size 0x20c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2251960, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2251968, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22519a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2251750, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__4() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__4();

  constexpr float_t const& __cordl_internal_get__transitionDuration_5__3() const;

  constexpr float_t& __cordl_internal_get__transitionDuration_5__3();

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllers_5__2() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>& __cordl_internal_get__viewControllers_5__2();

  constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*& __cordl_internal_get_animationLayouter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*> const&
  __cordl_internal_get_animationLayouter() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

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

  /// @brief Method .ctor, addr 0x22513d8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ContainerViewController___AddViewControllerCoroutine_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContainerViewController___AddViewControllerCoroutine_d__15(__ContainerViewController___AddViewControllerCoroutine_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContainerViewController___AddViewControllerCoroutine_d__15(__ContainerViewController___AddViewControllerCoroutine_d__15 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, 0x58>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ___animationLayouter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ___finishedCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ____viewControllers_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ____transitionDuration_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15, ____elapsedTime_5__4) == 0x54, "Offset mismatch!");

} // namespace HMUI
// Type: ::<RemoveViewControllersCoroutine>d__17
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ContainerViewController::<RemoveViewControllersCoroutine>d__17*
class CORDL_TYPE __ContainerViewController___RemoveViewControllersCoroutine_d__17 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x22519ac, size 0x308, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2251cb4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2251cbc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2251cf4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22519a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__5() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__5();

  constexpr float_t const& __cordl_internal_get__transitionDuration_5__4() const;

  constexpr float_t& __cordl_internal_get__transitionDuration_5__4();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get__viewControllersToRemoveSet_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllersToRemoveSet_5__3() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllers_5__2() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>& __cordl_internal_get__viewControllers_5__2();

  constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                               ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*&
  __cordl_internal_get_animationLayouter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                   ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*> const&
  __cordl_internal_get_animationLayouter() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

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

  /// @brief Method .ctor, addr 0x22514b8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ContainerViewController___RemoveViewControllersCoroutine_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContainerViewController___RemoveViewControllersCoroutine_d__17(__ContainerViewController___RemoveViewControllersCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContainerViewController___RemoveViewControllersCoroutine_d__17(__ContainerViewController___RemoveViewControllersCoroutine_d__17 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, 0x60>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ___viewControllersToRemove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ___animationLayouter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ___finishedCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ____viewControllers_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ____viewControllersToRemoveSet_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ____transitionDuration_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17, ____elapsedTime_5__5) == 0x5c, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ContainerViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ContainerViewController*
class CORDL_TYPE ContainerViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _AddViewControllerCoroutine_d__15 = ::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15;

  using _RemoveViewControllersCoroutine_d__17 = ::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17;

  /// @brief Field _controllersContainer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersContainer, put = __cordl_internal_set__controllersContainer)) ::UnityW<::UnityEngine::RectTransform> _controllersContainer;

  /// @brief Field _viewControllers, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers,
                      put = __cordl_internal_set__viewControllers)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* _viewControllers;

  __declspec(property(get = get_controllersContainer)) ::UnityW<::UnityEngine::RectTransform> controllersContainer;

  __declspec(property(get = get_viewControllers)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers;

  /// @brief Method AddViewController, addr 0x22511d8, size 0x174, virtual false, abstract: false, final false
  inline void AddViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter, bool immediately);

  /// @brief Method AddViewControllerCoroutine, addr 0x225134c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator*
  AddViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                             ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter, bool immediately);

  /// @brief Method ClearChildViewControllers, addr 0x2250eb8, size 0x128, virtual false, abstract: false, final false
  inline void ClearChildViewControllers();

  /// @brief Method DeactivateGameObject, addr 0x2250d88, size 0xe4, virtual true, abstract: false, final false
  inline void DeactivateGameObject();

  /// @brief Method GetNewXPositionsForViewControllers, addr 0x22514e0, size 0x1ec, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetNewXPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers, int32_t exludeFromEndCount);

  /// @brief Method LayoutViewControllers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers);

  static inline ::HMUI::ContainerViewController* New_ctor();

  /// @brief Method RemoveViewControllers, addr 0x2251400, size 0x2c, virtual false, abstract: false, final false
  inline void RemoveViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers, ::System::Action* finishedCallback,
                                    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                       ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                    bool immediately);

  /// @brief Method RemoveViewControllersCoroutine, addr 0x225142c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RemoveViewControllersCoroutine(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllersToRemove,
                                                                            ::System::Action* finishedCallback,
                                                                            ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                               ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                                                            bool immediately);

  /// @brief Method SetChildViewController, addr 0x2250fe0, size 0xa0, virtual false, abstract: false, final false
  inline void SetChildViewController(::HMUI::ViewController* viewController);

  /// @brief Method SetChildViewControllers, addr 0x2251080, size 0x158, virtual false, abstract: false, final false
  inline void SetChildViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  /// @brief Method __Activate, addr 0x22509e0, size 0x18c, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method __Deactivate, addr 0x2250c20, size 0xcc, virtual true, abstract: false, final false
  inline void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);

  /// @brief Method __Init, addr 0x22507f4, size 0xd4, virtual true, abstract: false, final false
  inline void __Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__controllersContainer() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__controllersContainer();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get__viewControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*> const& __cordl_internal_get__viewControllers() const;

  constexpr void __cordl_internal_set__controllersContainer(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value);

  /// @brief Method .ctor, addr 0x22516cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controllersContainer, addr 0x2250744, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_controllersContainer();

  /// @brief Method get_viewControllers, addr 0x22507ec, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _controllersContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____controllersContainer;

  /// @brief Field _viewControllers, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* ____viewControllers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController, 0x88>, "Size mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController, ____controllersContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController, ____viewControllers) == 0x80, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ContainerViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController*, "HMUI", "ContainerViewController");
NEED_NO_BOX(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15*, "HMUI", "ContainerViewController/<AddViewControllerCoroutine>d__15");
NEED_NO_BOX(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");

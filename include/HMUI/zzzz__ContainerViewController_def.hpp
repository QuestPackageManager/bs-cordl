#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContainerViewController)
namespace UnityEngine {
class RectTransform;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __ContainerViewController___RemoveViewControllersCoroutine_d__17;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace HMUI {
class __ContainerViewController___AddViewControllerCoroutine_d__15;
}
namespace HMUI {
class Screen;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13568))
// CS Name: ::ContainerViewController::<AddViewControllerCoroutine>d__15*
class CORDL_TYPE __ContainerViewController___AddViewControllerCoroutine_d__15 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::ContainerViewController* __4__this;

  /// @brief Field newViewController, offset 0x28, size 0x8
  __declspec(property(get = __get_newViewController, put = __set_newViewController))::HMUI::ViewController* newViewController;

  /// @brief Field immediately, offset 0x30, size 0x1
  __declspec(property(get = __get_immediately, put = __set_immediately)) bool immediately;

  /// @brief Field animationLayouter, offset 0x38, size 0x8
  __declspec(property(get = __get_animationLayouter,
                      put = __set_animationLayouter))::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>* animationLayouter;

  /// @brief Field finishedCallback, offset 0x40, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field <viewControllers>5__2, offset 0x48, size 0x8
  __declspec(property(get = __get__viewControllers_5__2, put = __set__viewControllers_5__2))::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> _viewControllers_5__2;

  /// @brief Field <transitionDuration>5__3, offset 0x50, size 0x4
  __declspec(property(get = __get__transitionDuration_5__3, put = __set__transitionDuration_5__3)) float_t _transitionDuration_5__3;

  /// @brief Field <elapsedTime>5__4, offset 0x54, size 0x4
  __declspec(property(get = __get__elapsedTime_5__4, put = __set__elapsedTime_5__4)) float_t _elapsedTime_5__4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::HMUI::ContainerViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ContainerViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::ContainerViewController* value);

  constexpr ::HMUI::ViewController*& __get_newViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get_newViewController() const;

  constexpr void __set_newViewController(::HMUI::ViewController* value);

  constexpr bool& __get_immediately();

  constexpr bool const& __get_immediately() const;

  constexpr void __set_immediately(bool value);

  constexpr ::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>*& __get_animationLayouter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>*> const& __get_animationLayouter() const;

  constexpr void __set_animationLayouter(::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>* value);

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>& __get__viewControllers_5__2();

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> const& __get__viewControllers_5__2() const;

  constexpr void __set__viewControllers_5__2(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> value);

  constexpr float_t& __get__transitionDuration_5__3();

  constexpr float_t const& __get__transitionDuration_5__3() const;

  constexpr void __set__transitionDuration_5__3(float_t value);

  constexpr float_t& __get__elapsedTime_5__4();

  constexpr float_t const& __get__elapsedTime_5__4() const;

  constexpr void __set__elapsedTime_5__4(float_t value);

  static inline ::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2125dd8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x21261b0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x21261b4, size 0x210, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x21263c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x21263cc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x212640c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContainerViewController___AddViewControllerCoroutine_d__15(__ContainerViewController___AddViewControllerCoroutine_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContainerViewController___AddViewControllerCoroutine_d__15(__ContainerViewController___AddViewControllerCoroutine_d__15 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContainerViewController___AddViewControllerCoroutine_d__15();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ContainerViewController* _____4__this;

  /// @brief Field newViewController, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ViewController* ___newViewController;

  /// @brief Field immediately, offset: 0x30, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationLayouter, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>* ___animationLayouter;

  /// @brief Field finishedCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <viewControllers>5__2, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> ____viewControllers_5__2;

  /// @brief Field <transitionDuration>5__3, offset: 0x50, size: 0x4, def value: None
  float_t ____transitionDuration_5__3;

  /// @brief Field <elapsedTime>5__4, offset: 0x54, size: 0x4, def value: None
  float_t ____elapsedTime_5__4;

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
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13569))
// CS Name: ::ContainerViewController::<RemoveViewControllersCoroutine>d__17*
class CORDL_TYPE __ContainerViewController___RemoveViewControllersCoroutine_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::ContainerViewController* __4__this;

  /// @brief Field viewControllersToRemove, offset 0x28, size 0x8
  __declspec(property(get = __get_viewControllersToRemove, put = __set_viewControllersToRemove))::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllersToRemove;

  /// @brief Field immediately, offset 0x30, size 0x1
  __declspec(property(get = __get_immediately, put = __set_immediately)) bool immediately;

  /// @brief Field animationLayouter, offset 0x38, size 0x8
  __declspec(property(get = __get_animationLayouter, put = __set_animationLayouter))::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>,
                                                                                                       ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>* animationLayouter;

  /// @brief Field finishedCallback, offset 0x40, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field <viewControllers>5__2, offset 0x48, size 0x8
  __declspec(property(get = __get__viewControllers_5__2, put = __set__viewControllers_5__2))::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> _viewControllers_5__2;

  /// @brief Field <viewControllersToRemoveSet>5__3, offset 0x50, size 0x8
  __declspec(property(get = __get__viewControllersToRemoveSet_5__3,
                      put = __set__viewControllersToRemoveSet_5__3))::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* _viewControllersToRemoveSet_5__3;

  /// @brief Field <transitionDuration>5__4, offset 0x58, size 0x4
  __declspec(property(get = __get__transitionDuration_5__4, put = __set__transitionDuration_5__4)) float_t _transitionDuration_5__4;

  /// @brief Field <elapsedTime>5__5, offset 0x5c, size 0x4
  __declspec(property(get = __get__elapsedTime_5__5, put = __set__elapsedTime_5__5)) float_t _elapsedTime_5__5;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::HMUI::ContainerViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ContainerViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::ContainerViewController* value);

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>& __get_viewControllersToRemove();

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> const& __get_viewControllersToRemove() const;

  constexpr void __set_viewControllersToRemove(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> value);

  constexpr bool& __get_immediately();

  constexpr bool const& __get_immediately() const;

  constexpr void __set_immediately(bool value);

  constexpr ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>*&
  __get_animationLayouter();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>*> const&
  __get_animationLayouter() const;

  constexpr void __set_animationLayouter(
      ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>* value);

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>& __get__viewControllers_5__2();

  constexpr ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> const& __get__viewControllers_5__2() const;

  constexpr void __set__viewControllers_5__2(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> value);

  constexpr ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*& __get__viewControllersToRemoveSet_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*> const& __get__viewControllersToRemoveSet_5__3() const;

  constexpr void __set__viewControllersToRemoveSet_5__3(::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* value);

  constexpr float_t& __get__transitionDuration_5__4();

  constexpr float_t const& __get__transitionDuration_5__4() const;

  constexpr void __set__transitionDuration_5__4(float_t value);

  constexpr float_t& __get__elapsedTime_5__5();

  constexpr float_t const& __get__elapsedTime_5__5() const;

  constexpr void __set__elapsedTime_5__5(float_t value);

  static inline ::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2125ed8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2126414, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2126418, size 0x2fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2126714, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x212671c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x212675c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContainerViewController___RemoveViewControllersCoroutine_d__17(__ContainerViewController___RemoveViewControllersCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContainerViewController___RemoveViewControllersCoroutine_d__17(__ContainerViewController___RemoveViewControllersCoroutine_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContainerViewController___RemoveViewControllersCoroutine_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ContainerViewController* _____4__this;

  /// @brief Field viewControllersToRemove, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> ___viewControllersToRemove;

  /// @brief Field immediately, offset: 0x30, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationLayouter, offset: 0x38, size: 0x8, def value: None
  ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>* ___animationLayouter;

  /// @brief Field finishedCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <viewControllers>5__2, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> ____viewControllers_5__2;

  /// @brief Field <viewControllersToRemoveSet>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* ____viewControllersToRemoveSet_5__3;

  /// @brief Field <transitionDuration>5__4, offset: 0x58, size: 0x4, def value: None
  float_t ____transitionDuration_5__4;

  /// @brief Field <elapsedTime>5__5, offset: 0x5c, size: 0x4, def value: None
  float_t ____elapsedTime_5__5;

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
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13570))
// CS Name: ::HMUI::ContainerViewController*
class CORDL_TYPE ContainerViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _RemoveViewControllersCoroutine_d__17 = ::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17;

  using _AddViewControllerCoroutine_d__15 = ::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15;

  /// @brief Field _controllersContainer, offset 0x70, size 0x8
  __declspec(property(get = __get__controllersContainer, put = __set__controllersContainer))::UnityEngine::RectTransform* _controllersContainer;

  /// @brief Field _viewControllers, offset 0x78, size 0x8
  __declspec(property(get = __get__viewControllers, put = __set__viewControllers))::System::Collections::Generic::List_1<::HMUI::ViewController*>* _viewControllers;

  __declspec(property(get = get_controllersContainer))::UnityEngine::RectTransform* controllersContainer;

  __declspec(property(get = get_viewControllers))::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers;

  constexpr ::UnityEngine::RectTransform*& __get__controllersContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__controllersContainer() const;

  constexpr void __set__controllersContainer(::UnityEngine::RectTransform* value);

  constexpr ::System::Collections::Generic::List_1<::HMUI::ViewController*>*& __get__viewControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::ViewController*>*> const& __get__viewControllers() const;

  constexpr void __set__viewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* value);

  /// @brief Method get_controllersContainer, addr 0x21253dc, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_controllersContainer();

  /// @brief Method get_viewControllers, addr 0x2125484, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HMUI::ViewController*>* get_viewControllers();

  /// @brief Method __Init, addr 0x212548c, size 0xd8, virtual true, abstract: false, final false
  inline void __Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController);

  /// @brief Method LayoutViewControllers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers);

  /// @brief Method __Activate, addr 0x2125564, size 0x190, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method __Deactivate, addr 0x21256f4, size 0xd0, virtual true, abstract: false, final false
  inline void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);

  /// @brief Method DeactivateGameObject, addr 0x21257c4, size 0xe8, virtual true, abstract: false, final false
  inline void DeactivateGameObject();

  /// @brief Method ClearChildViewControllers, addr 0x21258ac, size 0x124, virtual false, abstract: false, final false
  inline void ClearChildViewControllers();

  /// @brief Method SetChildViewController, addr 0x21259d0, size 0xa0, virtual false, abstract: false, final false
  inline void SetChildViewController(::HMUI::ViewController* viewController);

  /// @brief Method SetChildViewControllers, addr 0x2125a70, size 0x15c, virtual false, abstract: false, final false
  inline void SetChildViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  /// @brief Method AddViewController, addr 0x2125bcc, size 0x178, virtual false, abstract: false, final false
  /// @param immediately: bool (default: false)
  inline void AddViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                ::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>* animationLayouter, bool immediately = false);

  /// @brief Method AddViewControllerCoroutine, addr 0x2125d44, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AddViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                        ::System::Action_2<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>* animationLayouter,
                                                                        bool immediately);

  /// @brief Method RemoveViewControllers, addr 0x2125e00, size 0x44, virtual false, abstract: false, final false
  inline void RemoveViewControllers(
      ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers, ::System::Action* finishedCallback,
      ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>* animationLayouter,
      bool immediately);

  /// @brief Method RemoveViewControllersCoroutine, addr 0x2125e44, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RemoveViewControllersCoroutine(
      ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllersToRemove, ::System::Action* finishedCallback,
      ::System::Action_3<float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>* animationLayouter,
      bool immediately);

  /// @brief Method GetNewXPositionsForViewControllers, addr 0x2125f00, size 0x234, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetNewXPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers, int32_t exludeFromEndCount);

  static inline ::HMUI::ContainerViewController* New_ctor();

  /// @brief Method .ctor, addr 0x2126134, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContainerViewController(ContainerViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContainerViewController(ContainerViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContainerViewController();

public:
  /// @brief Field _controllersContainer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____controllersContainer;

  /// @brief Field _viewControllers, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HMUI::ViewController*>* ____viewControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ContainerViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController, ____controllersContainer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::ContainerViewController, ____viewControllers) == 0x78, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ContainerViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController*, "HMUI", "ContainerViewController");
NEED_NO_BOX(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ContainerViewController___AddViewControllerCoroutine_d__15*, "HMUI", "ContainerViewController/<AddViewControllerCoroutine>d__15");
NEED_NO_BOX(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ContainerViewController___RemoveViewControllersCoroutine_d__17*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");

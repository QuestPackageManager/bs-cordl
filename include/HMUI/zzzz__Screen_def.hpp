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
class __Screen___TransitionCoroutine_d__5;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13717)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13706))
// CS Name: ::Screen::<TransitionCoroutine>d__5*
class CORDL_TYPE __Screen___TransitionCoroutine_d__5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::Screen* __4__this;

  /// @brief Field newRootViewController, offset 0x28, size 0x8
  __declspec(property(get = __get_newRootViewController, put = __set_newRootViewController))::HMUI::ViewController* newRootViewController;

  /// @brief Field animationType, offset 0x30, size 0x4
  __declspec(property(get = __get_animationType, put = __set_animationType))::HMUI::__ViewController__AnimationType animationType;

  /// @brief Field <oldRootViewController>5__2, offset 0x38, size 0x8
  __declspec(property(get = __get__oldRootViewController_5__2, put = __set__oldRootViewController_5__2))::HMUI::ViewController* _oldRootViewController_5__2;

  /// @brief Field <oldRootViewControllerStartAlpha>5__3, offset 0x40, size 0x4
  __declspec(property(get = __get__oldRootViewControllerStartAlpha_5__3, put = __set__oldRootViewControllerStartAlpha_5__3)) float_t _oldRootViewControllerStartAlpha_5__3;

  /// @brief Field <elapsedTime>5__4, offset 0x44, size 0x4
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

  constexpr ::HMUI::Screen*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::Screen* value);

  constexpr ::HMUI::ViewController*& __get_newRootViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get_newRootViewController() const;

  constexpr void __set_newRootViewController(::HMUI::ViewController* value);

  constexpr ::HMUI::__ViewController__AnimationType& __get_animationType();

  constexpr ::HMUI::__ViewController__AnimationType const& __get_animationType() const;

  constexpr void __set_animationType(::HMUI::__ViewController__AnimationType value);

  constexpr ::HMUI::ViewController*& __get__oldRootViewController_5__2();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__oldRootViewController_5__2() const;

  constexpr void __set__oldRootViewController_5__2(::HMUI::ViewController* value);

  constexpr float_t& __get__oldRootViewControllerStartAlpha_5__3();

  constexpr float_t const& __get__oldRootViewControllerStartAlpha_5__3() const;

  constexpr void __set__oldRootViewControllerStartAlpha_5__3(float_t value);

  constexpr float_t& __get__elapsedTime_5__4();

  constexpr float_t const& __get__elapsedTime_5__4() const;

  constexpr void __set__elapsedTime_5__4(float_t value);

  static inline ::HMUI::__Screen___TransitionCoroutine_d__5* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fd421c size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fd4258 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fd425c size 0x504 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fd47f4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fd47fc size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fd483c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Screen___TransitionCoroutine_d__5();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::Screen* _____4__this;

  /// @brief Field newRootViewController, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ViewController* ___newRootViewController;

  /// @brief Field animationType, offset: 0x30, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationType ___animationType;

  /// @brief Field <oldRootViewController>5__2, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ViewController* ____oldRootViewController_5__2;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13707))
// CS Name: ::HMUI::Screen*
class CORDL_TYPE Screen : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TransitionCoroutine_d__5 = ::HMUI::__Screen___TransitionCoroutine_d__5;

  /// @brief Field _rootViewController, offset 0x18, size 0x8
  __declspec(property(get = __get__rootViewController, put = __set__rootViewController))::HMUI::ViewController* _rootViewController;

  /// @brief Field _isBeingDestroyed, offset 0x20, size 0x1
  __declspec(property(get = __get__isBeingDestroyed, put = __set__isBeingDestroyed)) bool _isBeingDestroyed;

  __declspec(property(get = get_isBeingDestroyed)) bool isBeingDestroyed;

  constexpr ::HMUI::ViewController*& __get__rootViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__rootViewController() const;

  constexpr void __set__rootViewController(::HMUI::ViewController* value);

  constexpr bool& __get__isBeingDestroyed();

  constexpr bool const& __get__isBeingDestroyed() const;

  constexpr void __set__isBeingDestroyed(bool value);

  /// @brief Method get_isBeingDestroyed addr 0x1fd40c8 size 0x8 virtual false final false
  inline bool get_isBeingDestroyed();

  /// @brief Method SetRootViewController addr 0x1fd40d0 size 0xd0 virtual false final false
  inline void SetRootViewController(::HMUI::ViewController* newRootViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method TransitionCoroutine addr 0x1fd41a0 size 0x7c virtual false final false
  inline ::System::Collections::IEnumerator* TransitionCoroutine(::HMUI::ViewController* newRootViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method OnDestroy addr 0x1fd4244 size 0xc virtual false final false
  inline void OnDestroy();

  static inline ::HMUI::Screen* New_ctor();

  /// @brief Method .ctor addr 0x1fd4250 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Screen(Screen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Screen(Screen const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Screen();

public:
  /// @brief Field _rootViewController, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ViewController* ____rootViewController;

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

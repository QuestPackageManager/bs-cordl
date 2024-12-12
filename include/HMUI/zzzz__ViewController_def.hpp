#pragma once
// IWYU pragma private; include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewControllerBase_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewController)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ContainerViewController;
}
namespace HMUI {
class Screen;
}
namespace HMUI {
struct ViewController_AnimationDirection;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController__DismissViewControllerCoroutine_d__54;
}
namespace HMUI {
class ViewController__PresentViewControllerCoroutine_d__50;
}
namespace HMUI {
class ViewController__ReplaceViewControllerCoroutine_d__52;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
struct ViewController_AnimationDirection;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class ViewController__DismissViewControllerCoroutine_d__54;
}
namespace HMUI {
class ViewController__PresentViewControllerCoroutine_d__50;
}
namespace HMUI {
class ViewController__ReplaceViewControllerCoroutine_d__52;
}
// Write type traits
MARK_VAL_T(::HMUI::ViewController_AnimationDirection);
MARK_VAL_T(::HMUI::ViewController_AnimationType);
MARK_REF_PTR_T(::HMUI::ViewController);
MARK_REF_PTR_T(::HMUI::ViewController__DismissViewControllerCoroutine_d__54);
MARK_REF_PTR_T(::HMUI::ViewController__PresentViewControllerCoroutine_d__50);
MARK_REF_PTR_T(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.ViewController/AnimationType
struct CORDL_TYPE ViewController_AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ViewController_AnimationType_Unwrapped
  enum struct __ViewController_AnimationType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_In = static_cast<int32_t>(0x1),
    __E_Out = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ViewController_AnimationType_Unwrapped() const noexcept {
    return static_cast<__ViewController_AnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewController_AnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ViewController_AnimationType(int32_t value__) noexcept;

  /// @brief Field In value: I32(1)
  static ::HMUI::ViewController_AnimationType const In;

  /// @brief Field None value: I32(0)
  static ::HMUI::ViewController_AnimationType const None;

  /// @brief Field Out value: I32(2)
  static ::HMUI::ViewController_AnimationType const Out;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16813 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController_AnimationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController_AnimationType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.ViewController/AnimationDirection
struct CORDL_TYPE ViewController_AnimationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ViewController_AnimationDirection_Unwrapped
  enum struct __ViewController_AnimationDirection_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ViewController_AnimationDirection_Unwrapped() const noexcept {
    return static_cast<__ViewController_AnimationDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewController_AnimationDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ViewController_AnimationDirection(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::HMUI::ViewController_AnimationDirection const Horizontal;

  /// @brief Field Vertical value: I32(1)
  static ::HMUI::ViewController_AnimationDirection const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16814 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController_AnimationDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController_AnimationDirection, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationDirection, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewController/<DismissViewControllerCoroutine>d__54
class CORDL_TYPE ViewController__DismissViewControllerCoroutine_d__54 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field <movingInViewController>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__movingInViewController_5__2, put = __cordl_internal_set__movingInViewController_5__2)) ::UnityW<::HMUI::ViewController> _movingInViewController_5__2;

  /// @brief Field animationDirection, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection)) ::HMUI::ViewController_AnimationDirection animationDirection;

  /// @brief Field finishedCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x228a240, size 0x1a0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewController__DismissViewControllerCoroutine_d__54* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x228a560, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x228a568, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x228a5a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x228a23c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__movingInViewController_5__2() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__movingInViewController_5__2();

  constexpr ::HMUI::ViewController_AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::ViewController_AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__movingInViewController_5__2(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  /// @brief Method .ctor, addr 0x228a03c, size 0x28, virtual false, abstract: false, final false
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
  constexpr ViewController__DismissViewControllerCoroutine_d__54();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewController__DismissViewControllerCoroutine_d__54", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewController__DismissViewControllerCoroutine_d__54(ViewController__DismissViewControllerCoroutine_d__54&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewController__DismissViewControllerCoroutine_d__54", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewController__DismissViewControllerCoroutine_d__54(ViewController__DismissViewControllerCoroutine_d__54 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16815 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> _____4__this;

  /// @brief Field immediately, offset: 0x28, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationDirection, offset: 0x2c, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <movingInViewController>5__2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____movingInViewController_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, ___immediately) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, ___animationDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, ___finishedCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__DismissViewControllerCoroutine_d__54, ____movingInViewController_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController__DismissViewControllerCoroutine_d__54, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationDirection, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewController/<PresentViewControllerCoroutine>d__50
class CORDL_TYPE ViewController__PresentViewControllerCoroutine_d__50 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field animationDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection)) ::HMUI::ViewController_AnimationDirection animationDirection;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
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

  /// @brief Method MoveNext, addr 0x228a5ac, size 0x210, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewController__PresentViewControllerCoroutine_d__50* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x228a840, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x228a848, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x228a880, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x228a5a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::HMUI::ViewController_AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::ViewController_AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2289ed8, size 0x28, virtual false, abstract: false, final false
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
  constexpr ViewController__PresentViewControllerCoroutine_d__50();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewController__PresentViewControllerCoroutine_d__50", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewController__PresentViewControllerCoroutine_d__50(ViewController__PresentViewControllerCoroutine_d__50&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewController__PresentViewControllerCoroutine_d__50", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewController__PresentViewControllerCoroutine_d__50(ViewController__PresentViewControllerCoroutine_d__50 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16816 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> _____4__this;

  /// @brief Field newViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newViewController;

  /// @brief Field immediately, offset: 0x30, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationDirection, offset: 0x34, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, ___animationDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__PresentViewControllerCoroutine_d__50, ___finishedCallback) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController__PresentViewControllerCoroutine_d__50, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationDirection, HMUI.ViewController::AnimationType, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewController/<ReplaceViewControllerCoroutine>d__52
class CORDL_TYPE ViewController__ReplaceViewControllerCoroutine_d__52 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field animationDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection)) ::HMUI::ViewController_AnimationDirection animationDirection;

  /// @brief Field animationType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_animationType, put = __cordl_internal_set_animationType)) ::HMUI::ViewController_AnimationType animationType;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field newViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newViewController, put = __cordl_internal_set_newViewController)) ::UnityW<::HMUI::ViewController> newViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x228a88c, size 0x254, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x228aae0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x228aae8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x228ab20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x228a888, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::HMUI::ViewController_AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::ViewController_AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::HMUI::ViewController_AnimationType const& __cordl_internal_get_animationType() const;

  constexpr ::HMUI::ViewController_AnimationType& __cordl_internal_get_animationType();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value);

  constexpr void __cordl_internal_set_animationType(::HMUI::ViewController_AnimationType value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2289f88, size 0x28, virtual false, abstract: false, final false
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
  constexpr ViewController__ReplaceViewControllerCoroutine_d__52();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewController__ReplaceViewControllerCoroutine_d__52", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewController__ReplaceViewControllerCoroutine_d__52(ViewController__ReplaceViewControllerCoroutine_d__52&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewController__ReplaceViewControllerCoroutine_d__52", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewController__ReplaceViewControllerCoroutine_d__52(ViewController__ReplaceViewControllerCoroutine_d__52 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16817 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> _____4__this;

  /// @brief Field newViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newViewController;

  /// @brief Field animationType, offset: 0x30, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationType ___animationType;

  /// @brief Field animationDirection, offset: 0x34, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, ___animationType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, ___animationDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, ___finishedCallback) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewControllerBase
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewController
class CORDL_TYPE ViewController : public ::HMUI::ViewControllerBase {
public:
  // Declarations
  using AnimationDirection = ::HMUI::ViewController_AnimationDirection;

  using AnimationType = ::HMUI::ViewController_AnimationType;

  using _DismissViewControllerCoroutine_d__54 = ::HMUI::ViewController__DismissViewControllerCoroutine_d__54;

  using _PresentViewControllerCoroutine_d__50 = ::HMUI::ViewController__PresentViewControllerCoroutine_d__50;

  using _ReplaceViewControllerCoroutine_d__52 = ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52;

  /// @brief Field <buttonBinder>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder_k__BackingField, put = __cordl_internal_set__buttonBinder_k__BackingField)) ::HMUI::ButtonBinder* _buttonBinder_k__BackingField;

  /// @brief Field _canvasGroup, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _childViewController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__childViewController, put = __cordl_internal_set__childViewController)) ::HMUI::ViewController* _childViewController;

  /// @brief Field _containerViewController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__containerViewController, put = __cordl_internal_set__containerViewController)) ::UnityW<::HMUI::ContainerViewController> _containerViewController;

  /// @brief Field _graphicRaycaster, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicRaycaster, put = __cordl_internal_set__graphicRaycaster)) ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> _graphicRaycaster;

  /// @brief Field _isActivated, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__isActivated, put = __cordl_internal_set__isActivated)) bool _isActivated;

  /// @brief Field _isInTransition, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get__isInTransition, put = __cordl_internal_set__isInTransition)) bool _isInTransition;

  /// @brief Field _parentViewController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__parentViewController, put = __cordl_internal_set__parentViewController)) ::HMUI::ViewController* _parentViewController;

  /// @brief Field _rectTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _screen, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__screen, put = __cordl_internal_set__screen)) ::UnityW<::HMUI::Screen> _screen;

  /// @brief Field _wasActivatedBefore, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__wasActivatedBefore, put = __cordl_internal_set__wasActivatedBefore)) bool _wasActivatedBefore;

  __declspec(property(get = get_buttonBinder, put = set_buttonBinder)) ::HMUI::ButtonBinder* buttonBinder;

  __declspec(property(get = get_canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> canvasGroup;

  __declspec(property(get = get_childViewController)) ::HMUI::ViewController* childViewController;

  __declspec(property(get = get_containerViewController)) ::UnityW<::HMUI::ContainerViewController> containerViewController;

  __declspec(property(get = get_enableUserInteractions, put = set_enableUserInteractions)) bool enableUserInteractions;

  __declspec(property(get = get_graphicRaycaster)) ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> graphicRaycaster;

  __declspec(property(get = get_isActivated)) bool isActivated;

  __declspec(property(get = get_isInTransition, put = set_isInTransition)) bool isInTransition;

  __declspec(property(get = get_isInViewControllerHierarchy)) bool isInViewControllerHierarchy;

  __declspec(property(get = get_parentViewController)) ::HMUI::ViewController* parentViewController;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_screen)) ::UnityW<::HMUI::Screen> screen;

  __declspec(property(get = get_wasActivatedBefore)) bool wasActivatedBefore;

  /// @brief Method DeactivateGameObject, addr 0x22832ec, size 0x4c, virtual true, abstract: false, final false
  inline void DeactivateGameObject();

  /// @brief Method DidActivate, addr 0x2289d7c, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2289d80, size 0x4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method DismissViewControllerCoroutine, addr 0x2289fb0, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DismissViewControllerCoroutine(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method IsViewControllerInHierarchy, addr 0x228a064, size 0x180, virtual false, abstract: false, final false
  inline bool IsViewControllerInHierarchy(::HMUI::ViewController* viewController);

  /// @brief Method Log, addr 0x228a1e4, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  static inline ::HMUI::ViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2289d34, size 0x48, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PresentViewControllerCoroutine, addr 0x2289e48, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PresentViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                            ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method ReplaceViewControllerCoroutine, addr 0x2289f00, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ReplaceViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                            ::HMUI::ViewController_AnimationType animationType, ::HMUI::ViewController_AnimationDirection animationDirection);

  /// @brief Method __Activate, addr 0x2282fec, size 0xb4, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method __Deactivate, addr 0x228316c, size 0x9c, virtual true, abstract: false, final false
  inline void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);

  /// @brief Method __DismissViewController, addr 0x2285800, size 0x24, virtual false, abstract: false, final false
  inline void __DismissViewController(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method __Init, addr 0x2282d48, size 0x118, virtual true, abstract: false, final false
  inline void __Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController);

  /// @brief Method __PresentViewController, addr 0x2285da4, size 0x24, virtual false, abstract: false, final false
  inline void __PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method __ReplaceViewController, addr 0x22860dc, size 0x20, virtual false, abstract: false, final false
  inline void __ReplaceViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                      ::HMUI::ViewController_AnimationDirection animationDirection);

  /// @brief Method __ResetViewController, addr 0x2289d84, size 0xc4, virtual true, abstract: false, final false
  inline void __ResetViewController();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder_k__BackingField() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder_k__BackingField();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::HMUI::ViewController* const& __cordl_internal_get__childViewController() const;

  constexpr ::HMUI::ViewController*& __cordl_internal_get__childViewController();

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get__containerViewController() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get__containerViewController();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> const& __cordl_internal_get__graphicRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster>& __cordl_internal_get__graphicRaycaster();

  constexpr bool const& __cordl_internal_get__isActivated() const;

  constexpr bool& __cordl_internal_get__isActivated();

  constexpr bool const& __cordl_internal_get__isInTransition() const;

  constexpr bool& __cordl_internal_get__isInTransition();

  constexpr ::HMUI::ViewController* const& __cordl_internal_get__parentViewController() const;

  constexpr ::HMUI::ViewController*& __cordl_internal_get__parentViewController();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__screen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__screen();

  constexpr bool const& __cordl_internal_get__wasActivatedBefore() const;

  constexpr bool& __cordl_internal_get__wasActivatedBefore();

  constexpr void __cordl_internal_set__buttonBinder_k__BackingField(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__childViewController(::HMUI::ViewController* value);

  constexpr void __cordl_internal_set__containerViewController(::UnityW<::HMUI::ContainerViewController> value);

  constexpr void __cordl_internal_set__graphicRaycaster(::UnityW<::UnityEngine::EventSystems::BaseRaycaster> value);

  constexpr void __cordl_internal_set__isActivated(bool value);

  constexpr void __cordl_internal_set__isInTransition(bool value);

  constexpr void __cordl_internal_set__parentViewController(::HMUI::ViewController* value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__screen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__wasActivatedBefore(bool value);

  /// @brief Method .ctor, addr 0x2283cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_buttonBinder, addr 0x2289d24, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ButtonBinder* get_buttonBinder();

  /// @brief Method get_canvasGroup, addr 0x2289090, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CanvasGroup> get_canvasGroup();

  /// @brief Method get_childViewController, addr 0x2289be8, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ViewController* get_childViewController();

  /// @brief Method get_containerViewController, addr 0x2289bd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ContainerViewController> get_containerViewController();

  /// @brief Method get_enableUserInteractions, addr 0x2289c74, size 0x1c, virtual false, abstract: false, final false
  inline bool get_enableUserInteractions();

  /// @brief Method get_graphicRaycaster, addr 0x2289c90, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> get_graphicRaycaster();

  /// @brief Method get_isActivated, addr 0x2289c50, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActivated();

  /// @brief Method get_isInTransition, addr 0x2289c60, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInTransition();

  /// @brief Method get_isInViewControllerHierarchy, addr 0x2289bf0, size 0x60, virtual false, abstract: false, final false
  inline bool get_isInViewControllerHierarchy();

  /// @brief Method get_parentViewController, addr 0x2289be0, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ViewController* get_parentViewController();

  /// @brief Method get_rectTransform, addr 0x22884fc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_screen, addr 0x2289bd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_screen();

  /// @brief Method get_wasActivatedBefore, addr 0x2289c58, size 0x8, virtual false, abstract: false, final false
  inline bool get_wasActivatedBefore();

  /// @brief Method set_buttonBinder, addr 0x2289d2c, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method set_enableUserInteractions, addr 0x228982c, size 0x24, virtual false, abstract: false, final false
  inline void set_enableUserInteractions(bool value);

  /// @brief Method set_isInTransition, addr 0x2289c68, size 0xc, virtual false, abstract: false, final false
  inline void set_isInTransition(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewController(ViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewController(ViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16818 };

  /// @brief Field kTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionDuration{ static_cast<float_t>(0.4f) };

  /// @brief Field kTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kTransitionMoveOffset{ static_cast<float_t>(2.0f) };

  /// @brief Field <buttonBinder>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder_k__BackingField;

  /// @brief Field _containerViewController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ContainerViewController> ____containerViewController;

  /// @brief Field _parentViewController, offset: 0x40, size: 0x8, def value: None
  ::HMUI::ViewController* ____parentViewController;

  /// @brief Field _childViewController, offset: 0x48, size: 0x8, def value: None
  ::HMUI::ViewController* ____childViewController;

  /// @brief Field _screen, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____screen;

  /// @brief Field _rectTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _canvasGroup, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _wasActivatedBefore, offset: 0x68, size: 0x1, def value: None
  bool ____wasActivatedBefore;

  /// @brief Field _isActivated, offset: 0x69, size: 0x1, def value: None
  bool ____isActivated;

  /// @brief Field _isInTransition, offset: 0x6a, size: 0x1, def value: None
  bool ____isInTransition;

  /// @brief Field _graphicRaycaster, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> ____graphicRaycaster;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewController, ____buttonBinder_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____containerViewController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____parentViewController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____childViewController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____screen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____rectTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____canvasGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____wasActivatedBefore) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____isActivated) == 0x69, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____isInTransition) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____graphicRaycaster) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewController, 0x78>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController_AnimationDirection, "HMUI", "ViewController/AnimationDirection");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController_AnimationType, "HMUI", "ViewController/AnimationType");
NEED_NO_BOX(::HMUI::ViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController*, "HMUI", "ViewController");
NEED_NO_BOX(::HMUI::ViewController__DismissViewControllerCoroutine_d__54);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController__DismissViewControllerCoroutine_d__54*, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__54");
NEED_NO_BOX(::HMUI::ViewController__PresentViewControllerCoroutine_d__50);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController__PresentViewControllerCoroutine_d__50*, "HMUI", "ViewController/<PresentViewControllerCoroutine>d__50");
NEED_NO_BOX(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*, "HMUI", "ViewController/<ReplaceViewControllerCoroutine>d__52");

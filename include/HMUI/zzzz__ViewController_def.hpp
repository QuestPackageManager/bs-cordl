#pragma once
// IWYU pragma private; include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
struct __ViewController__AnimationDirection;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace HMUI {
class __ViewController__DidActivateDelegate;
}
namespace HMUI {
class __ViewController__DidDeactivateDelegate;
}
namespace HMUI {
class __ViewController___DismissViewControllerCoroutine_d__62;
}
namespace HMUI {
class __ViewController___PresentViewControllerCoroutine_d__58;
}
namespace HMUI {
class __ViewController___ReplaceViewControllerCoroutine_d__60;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
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
struct __ViewController__AnimationDirection;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __ViewController__DidActivateDelegate;
}
namespace HMUI {
class __ViewController__DidDeactivateDelegate;
}
namespace HMUI {
class __ViewController___DismissViewControllerCoroutine_d__62;
}
namespace HMUI {
class __ViewController___PresentViewControllerCoroutine_d__58;
}
namespace HMUI {
class __ViewController___ReplaceViewControllerCoroutine_d__60;
}
// Write type traits
MARK_VAL_T(::HMUI::__ViewController__AnimationDirection);
MARK_VAL_T(::HMUI::__ViewController__AnimationType);
MARK_REF_PTR_T(::HMUI::ViewController);
MARK_REF_PTR_T(::HMUI::__ViewController__DidActivateDelegate);
MARK_REF_PTR_T(::HMUI::__ViewController__DidDeactivateDelegate);
MARK_REF_PTR_T(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62);
MARK_REF_PTR_T(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58);
MARK_REF_PTR_T(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60);
// Type: ::DidActivateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewController::DidActivateDelegate*
class CORDL_TYPE __ViewController__DidActivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x253dc5c, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x253dd1c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x253dc3c, size 0x20, virtual true, abstract: false, final false
  inline void Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::HMUI::__ViewController__DidActivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x253db78, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewController__DidActivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewController__DidActivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewController__DidActivateDelegate(__ViewController__DidActivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewController__DidActivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewController__DidActivateDelegate(__ViewController__DidActivateDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController__DidActivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Type: ::DidDeactivateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewController::DidDeactivateDelegate*
class CORDL_TYPE __ViewController__DidDeactivateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x253de08, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x253deac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x253ddec, size 0x1c, virtual true, abstract: false, final false
  inline void Invoke(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::HMUI::__ViewController__DidDeactivateDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x253dd28, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewController__DidDeactivateDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewController__DidDeactivateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewController__DidDeactivateDelegate(__ViewController__DidDeactivateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewController__DidDeactivateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewController__DidDeactivateDelegate(__ViewController__DidDeactivateDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController__DidDeactivateDelegate, 0x80>, "Size mismatch!");

} // namespace HMUI
// Type: ::AnimationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ViewController::AnimationType
struct CORDL_TYPE __ViewController__AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ViewController__AnimationType_Unwrapped
  enum struct ____ViewController__AnimationType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_In = static_cast<int32_t>(0x1),
    __E_Out = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ViewController__AnimationType_Unwrapped() const noexcept {
    return static_cast<____ViewController__AnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewController__AnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ViewController__AnimationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field In value: static_cast<int32_t>(0x1)
  static ::HMUI::__ViewController__AnimationType const In;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::HMUI::__ViewController__AnimationType const None;

  /// @brief Field Out value: static_cast<int32_t>(0x2)
  static ::HMUI::__ViewController__AnimationType const Out;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController__AnimationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewController__AnimationType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::AnimationDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ViewController::AnimationDirection
struct CORDL_TYPE __ViewController__AnimationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ViewController__AnimationDirection_Unwrapped
  enum struct ____ViewController__AnimationDirection_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ViewController__AnimationDirection_Unwrapped() const noexcept {
    return static_cast<____ViewController__AnimationDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ViewController__AnimationDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ViewController__AnimationDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::HMUI::__ViewController__AnimationDirection const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::HMUI::__ViewController__AnimationDirection const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController__AnimationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewController__AnimationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::<PresentViewControllerCoroutine>d__58
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewController::<PresentViewControllerCoroutine>d__58*
class CORDL_TYPE __ViewController___PresentViewControllerCoroutine_d__58 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field animationDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection))::HMUI::__ViewController__AnimationDirection animationDirection;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field newViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newViewController, put = __cordl_internal_set_newViewController))::UnityW<::HMUI::ViewController> newViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x253debc, size 0x210, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewController___PresentViewControllerCoroutine_d__58* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x253e254, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x253e25c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x253e29c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x253deb8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::HMUI::__ViewController__AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::__ViewController__AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::__ViewController__AnimationDirection value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x253d5ec, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewController___PresentViewControllerCoroutine_d__58();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___PresentViewControllerCoroutine_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewController___PresentViewControllerCoroutine_d__58(__ViewController___PresentViewControllerCoroutine_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___PresentViewControllerCoroutine_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewController___PresentViewControllerCoroutine_d__58(__ViewController___PresentViewControllerCoroutine_d__58 const&) = delete;

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
  ::HMUI::__ViewController__AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, ___immediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, ___animationDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58, ___finishedCallback) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<ReplaceViewControllerCoroutine>d__60
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewController::<ReplaceViewControllerCoroutine>d__60*
class CORDL_TYPE __ViewController___ReplaceViewControllerCoroutine_d__60 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field animationDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection))::HMUI::__ViewController__AnimationDirection animationDirection;

  /// @brief Field animationType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_animationType, put = __cordl_internal_set_animationType))::HMUI::__ViewController__AnimationType animationType;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field newViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newViewController, put = __cordl_internal_set_newViewController))::UnityW<::HMUI::ViewController> newViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x253e2a8, size 0x25c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x253e504, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x253e50c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x253e54c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x253e2a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::HMUI::__ViewController__AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::__ViewController__AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::HMUI::__ViewController__AnimationType const& __cordl_internal_get_animationType() const;

  constexpr ::HMUI::__ViewController__AnimationType& __cordl_internal_get_animationType();

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::__ViewController__AnimationDirection value);

  constexpr void __cordl_internal_set_animationType(::HMUI::__ViewController__AnimationType value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x253d6c4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewController___ReplaceViewControllerCoroutine_d__60();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___ReplaceViewControllerCoroutine_d__60", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewController___ReplaceViewControllerCoroutine_d__60(__ViewController___ReplaceViewControllerCoroutine_d__60&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___ReplaceViewControllerCoroutine_d__60", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewController___ReplaceViewControllerCoroutine_d__60(__ViewController___ReplaceViewControllerCoroutine_d__60 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> _____4__this;

  /// @brief Field newViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newViewController;

  /// @brief Field animationType, offset: 0x30, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationType ___animationType;

  /// @brief Field animationDirection, offset: 0x34, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, ___newViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, ___animationType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, ___animationDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60, ___finishedCallback) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: ::<DismissViewControllerCoroutine>d__62
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ViewController::<DismissViewControllerCoroutine>d__62*
class CORDL_TYPE __ViewController___DismissViewControllerCoroutine_d__62 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::ViewController> __4__this;

  /// @brief Field <movingInViewController>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__movingInViewController_5__2, put = __cordl_internal_set__movingInViewController_5__2))::UnityW<::HMUI::ViewController> _movingInViewController_5__2;

  /// @brief Field animationDirection, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection))::HMUI::__ViewController__AnimationDirection animationDirection;

  /// @brief Field finishedCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x253e558, size 0x1a0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::__ViewController___DismissViewControllerCoroutine_d__62* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x253e784, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x253e78c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x253e7cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x253e554, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__movingInViewController_5__2() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__movingInViewController_5__2();

  constexpr ::HMUI::__ViewController__AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::__ViewController__AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishedCallback() const;

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__movingInViewController_5__2(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::__ViewController__AnimationDirection value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  /// @brief Method .ctor, addr 0x253d7a4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ViewController___DismissViewControllerCoroutine_d__62();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___DismissViewControllerCoroutine_d__62", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ViewController___DismissViewControllerCoroutine_d__62(__ViewController___DismissViewControllerCoroutine_d__62&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ViewController___DismissViewControllerCoroutine_d__62", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ViewController___DismissViewControllerCoroutine_d__62(__ViewController___DismissViewControllerCoroutine_d__62 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> _____4__this;

  /// @brief Field immediately, offset: 0x28, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field animationDirection, offset: 0x2c, size: 0x4, def value: None
  ::HMUI::__ViewController__AnimationDirection ___animationDirection;

  /// @brief Field finishedCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <movingInViewController>5__2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____movingInViewController_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, ___immediately) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, ___animationDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, ___finishedCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62, ____movingInViewController_5__2) == 0x38, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ViewController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ViewController*
class CORDL_TYPE ViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationDirection = ::HMUI::__ViewController__AnimationDirection;

  using AnimationType = ::HMUI::__ViewController__AnimationType;

  using DidActivateDelegate = ::HMUI::__ViewController__DidActivateDelegate;

  using DidDeactivateDelegate = ::HMUI::__ViewController__DidDeactivateDelegate;

  using _DismissViewControllerCoroutine_d__62 = ::HMUI::__ViewController___DismissViewControllerCoroutine_d__62;

  using _PresentViewControllerCoroutine_d__58 = ::HMUI::__ViewController___PresentViewControllerCoroutine_d__58;

  using _ReplaceViewControllerCoroutine_d__60 = ::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60;

  /// @brief Field <buttonBinder>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder_k__BackingField, put = __cordl_internal_set__buttonBinder_k__BackingField))::HMUI::ButtonBinder* _buttonBinder_k__BackingField;

  /// @brief Field _canvasGroup, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _childViewController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__childViewController, put = __cordl_internal_set__childViewController))::UnityW<::HMUI::ViewController> _childViewController;

  /// @brief Field _containerViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__containerViewController, put = __cordl_internal_set__containerViewController))::UnityW<::HMUI::ContainerViewController> _containerViewController;

  /// @brief Field _graphicRaycaster, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicRaycaster, put = __cordl_internal_set__graphicRaycaster))::UnityW<::UnityEngine::EventSystems::BaseRaycaster> _graphicRaycaster;

  /// @brief Field _isActivated, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__isActivated, put = __cordl_internal_set__isActivated)) bool _isActivated;

  /// @brief Field _isInTransition, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__isInTransition, put = __cordl_internal_set__isInTransition)) bool _isInTransition;

  /// @brief Field _parentViewController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentViewController, put = __cordl_internal_set__parentViewController))::UnityW<::HMUI::ViewController> _parentViewController;

  /// @brief Field _rectTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform))::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _screen, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__screen, put = __cordl_internal_set__screen))::UnityW<::HMUI::Screen> _screen;

  /// @brief Field _wasActivatedBefore, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__wasActivatedBefore, put = __cordl_internal_set__wasActivatedBefore)) bool _wasActivatedBefore;

  __declspec(property(get = get_buttonBinder, put = set_buttonBinder))::HMUI::ButtonBinder* buttonBinder;

  __declspec(property(get = get_canvasGroup))::UnityW<::UnityEngine::CanvasGroup> canvasGroup;

  __declspec(property(get = get_childViewController))::UnityW<::HMUI::ViewController> childViewController;

  __declspec(property(get = get_containerViewController))::UnityW<::HMUI::ContainerViewController> containerViewController;

  /// @brief Field didActivateEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didActivateEvent, put = __cordl_internal_set_didActivateEvent))::HMUI::__ViewController__DidActivateDelegate* didActivateEvent;

  /// @brief Field didDeactivateEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeactivateEvent, put = __cordl_internal_set_didDeactivateEvent))::HMUI::__ViewController__DidDeactivateDelegate* didDeactivateEvent;

  __declspec(property(get = get_enableUserInteractions, put = set_enableUserInteractions)) bool enableUserInteractions;

  __declspec(property(get = get_graphicRaycaster))::UnityW<::UnityEngine::EventSystems::BaseRaycaster> graphicRaycaster;

  __declspec(property(get = get_isActivated)) bool isActivated;

  __declspec(property(get = get_isInTransition, put = set_isInTransition)) bool isInTransition;

  __declspec(property(get = get_isInViewControllerHierarchy)) bool isInViewControllerHierarchy;

  __declspec(property(get = get_parentViewController))::UnityW<::HMUI::ViewController> parentViewController;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_screen))::UnityW<::HMUI::Screen> screen;

  __declspec(property(get = get_wasActivatedBefore)) bool wasActivatedBefore;

  /// @brief Method DeactivateGameObject, addr 0x253d954, size 0x4c, virtual true, abstract: false, final false
  inline void DeactivateGameObject();

  /// @brief Method DidActivate, addr 0x253d350, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x253d354, size 0x4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method DismissViewControllerCoroutine, addr 0x253d710, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DismissViewControllerCoroutine(::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationDirection animationDirection, bool immediately);

  /// @brief Method IsViewControllerInHierarchy, addr 0x253d9a0, size 0x180, virtual false, abstract: false, final false
  inline bool IsViewControllerInHierarchy(::HMUI::ViewController* viewController);

  /// @brief Method Log, addr 0x253db20, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  static inline ::HMUI::ViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x253d308, size 0x48, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PresentViewControllerCoroutine, addr 0x253d554, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PresentViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                            ::HMUI::__ViewController__AnimationDirection animationDirection, bool immediately);

  /// @brief Method ReplaceViewControllerCoroutine, addr 0x253d634, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ReplaceViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                            ::HMUI::__ViewController__AnimationType animationType, ::HMUI::__ViewController__AnimationDirection animationDirection);

  /// @brief Method __Activate, addr 0x253d7cc, size 0xd0, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method __Deactivate, addr 0x253d89c, size 0xb8, virtual true, abstract: false, final false
  inline void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);

  /// @brief Method __DismissViewController, addr 0x253d6ec, size 0x24, virtual false, abstract: false, final false
  inline void __DismissViewController(::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationDirection animationDirection, bool immediately);

  /// @brief Method __Init, addr 0x253d358, size 0x118, virtual true, abstract: false, final false
  inline void __Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController);

  /// @brief Method __PresentViewController, addr 0x253d530, size 0x24, virtual false, abstract: false, final false
  inline void __PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationDirection animationDirection, bool immediately);

  /// @brief Method __ReplaceViewController, addr 0x253d614, size 0x20, virtual false, abstract: false, final false
  inline void __ReplaceViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType,
                                      ::HMUI::__ViewController__AnimationDirection animationDirection);

  /// @brief Method __ResetViewController, addr 0x253d470, size 0xc0, virtual true, abstract: false, final false
  inline void __ResetViewController();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__childViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__childViewController();

  constexpr ::UnityW<::HMUI::ContainerViewController> const& __cordl_internal_get__containerViewController() const;

  constexpr ::UnityW<::HMUI::ContainerViewController>& __cordl_internal_get__containerViewController();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> const& __cordl_internal_get__graphicRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster>& __cordl_internal_get__graphicRaycaster();

  constexpr bool const& __cordl_internal_get__isActivated() const;

  constexpr bool& __cordl_internal_get__isActivated();

  constexpr bool const& __cordl_internal_get__isInTransition() const;

  constexpr bool& __cordl_internal_get__isInTransition();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__parentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__parentViewController();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::HMUI::Screen> const& __cordl_internal_get__screen() const;

  constexpr ::UnityW<::HMUI::Screen>& __cordl_internal_get__screen();

  constexpr bool const& __cordl_internal_get__wasActivatedBefore() const;

  constexpr bool& __cordl_internal_get__wasActivatedBefore();

  constexpr ::HMUI::__ViewController__DidActivateDelegate*& __cordl_internal_get_didActivateEvent();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewController__DidActivateDelegate*> const& __cordl_internal_get_didActivateEvent() const;

  constexpr ::HMUI::__ViewController__DidDeactivateDelegate*& __cordl_internal_get_didDeactivateEvent();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewController__DidDeactivateDelegate*> const& __cordl_internal_get_didDeactivateEvent() const;

  constexpr void __cordl_internal_set__buttonBinder_k__BackingField(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__childViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__containerViewController(::UnityW<::HMUI::ContainerViewController> value);

  constexpr void __cordl_internal_set__graphicRaycaster(::UnityW<::UnityEngine::EventSystems::BaseRaycaster> value);

  constexpr void __cordl_internal_set__isActivated(bool value);

  constexpr void __cordl_internal_set__isInTransition(bool value);

  constexpr void __cordl_internal_set__parentViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__screen(::UnityW<::HMUI::Screen> value);

  constexpr void __cordl_internal_set__wasActivatedBefore(bool value);

  constexpr void __cordl_internal_set_didActivateEvent(::HMUI::__ViewController__DidActivateDelegate* value);

  constexpr void __cordl_internal_set_didDeactivateEvent(::HMUI::__ViewController__DidDeactivateDelegate* value);

  /// @brief Method .ctor, addr 0x253cf2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didActivateEvent, addr 0x253d088, size 0x9c, virtual false, abstract: false, final false
  inline void add_didActivateEvent(::HMUI::__ViewController__DidActivateDelegate* value);

  /// @brief Method add_didDeactivateEvent, addr 0x253d1c0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didDeactivateEvent(::HMUI::__ViewController__DidDeactivateDelegate* value);

  /// @brief Method get_buttonBinder, addr 0x253d2f8, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ButtonBinder* get_buttonBinder();

  /// @brief Method get_canvasGroup, addr 0x253c234, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CanvasGroup> get_canvasGroup();

  /// @brief Method get_childViewController, addr 0x253cf4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_childViewController();

  /// @brief Method get_containerViewController, addr 0x253cf34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ContainerViewController> get_containerViewController();

  /// @brief Method get_enableUserInteractions, addr 0x253cfd8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_enableUserInteractions();

  /// @brief Method get_graphicRaycaster, addr 0x253cff4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> get_graphicRaycaster();

  /// @brief Method get_isActivated, addr 0x253cfb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActivated();

  /// @brief Method get_isInTransition, addr 0x253cfc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInTransition();

  /// @brief Method get_isInViewControllerHierarchy, addr 0x253cf54, size 0x60, virtual false, abstract: false, final false
  inline bool get_isInViewControllerHierarchy();

  /// @brief Method get_parentViewController, addr 0x253cf44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_parentViewController();

  /// @brief Method get_rectTransform, addr 0x253b5dc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_screen, addr 0x253cf3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::Screen> get_screen();

  /// @brief Method get_wasActivatedBefore, addr 0x253cfbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_wasActivatedBefore();

  /// @brief Method remove_didActivateEvent, addr 0x253d124, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didActivateEvent(::HMUI::__ViewController__DidActivateDelegate* value);

  /// @brief Method remove_didDeactivateEvent, addr 0x253d25c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didDeactivateEvent(::HMUI::__ViewController__DidDeactivateDelegate* value);

  /// @brief Method set_buttonBinder, addr 0x253d300, size 0x8, virtual false, abstract: false, final false
  inline void set_buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method set_enableUserInteractions, addr 0x253cb4c, size 0x24, virtual false, abstract: false, final false
  inline void set_enableUserInteractions(bool value);

  /// @brief Method set_isInTransition, addr 0x253cfcc, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field didActivateEvent, offset: 0x18, size: 0x8, def value: None
  ::HMUI::__ViewController__DidActivateDelegate* ___didActivateEvent;

  /// @brief Field didDeactivateEvent, offset: 0x20, size: 0x8, def value: None
  ::HMUI::__ViewController__DidDeactivateDelegate* ___didDeactivateEvent;

  /// @brief Field <buttonBinder>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder_k__BackingField;

  /// @brief Field _containerViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ContainerViewController> ____containerViewController;

  /// @brief Field _parentViewController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____parentViewController;

  /// @brief Field _childViewController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____childViewController;

  /// @brief Field _screen, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::Screen> ____screen;

  /// @brief Field _rectTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _canvasGroup, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _wasActivatedBefore, offset: 0x60, size: 0x1, def value: None
  bool ____wasActivatedBefore;

  /// @brief Field _isActivated, offset: 0x61, size: 0x1, def value: None
  bool ____isActivated;

  /// @brief Field _isInTransition, offset: 0x62, size: 0x1, def value: None
  bool ____isInTransition;

  /// @brief Field _graphicRaycaster, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> ____graphicRaycaster;

  /// @brief Field kTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionDuration{ 0.4 };

  /// @brief Field kTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kTransitionMoveOffset{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewController, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::ViewController, ___didActivateEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ___didDeactivateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____buttonBinder_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____containerViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____parentViewController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____childViewController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____screen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____rectTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____canvasGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____wasActivatedBefore) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____isActivated) == 0x61, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____isInTransition) == 0x62, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewController, ____graphicRaycaster) == 0x68, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController__AnimationDirection, "HMUI", "ViewController/AnimationDirection");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController__AnimationType, "HMUI", "ViewController/AnimationType");
NEED_NO_BOX(::HMUI::ViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController*, "HMUI", "ViewController");
NEED_NO_BOX(::HMUI::__ViewController__DidActivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController__DidActivateDelegate*, "HMUI", "ViewController/DidActivateDelegate");
NEED_NO_BOX(::HMUI::__ViewController__DidDeactivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController__DidDeactivateDelegate*, "HMUI", "ViewController/DidDeactivateDelegate");
NEED_NO_BOX(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController___DismissViewControllerCoroutine_d__62*, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__62");
NEED_NO_BOX(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController___PresentViewControllerCoroutine_d__58*, "HMUI", "ViewController/<PresentViewControllerCoroutine>d__58");
NEED_NO_BOX(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewController___ReplaceViewControllerCoroutine_d__60*, "HMUI", "ViewController/<ReplaceViewControllerCoroutine>d__60");

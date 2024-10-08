#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultEventSystem)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class RuntimePanel;
}
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__FocusBasedEventSequenceContext;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__IInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__Input;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__NoInput;
}
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__UpdateMode;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem____c;
}
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__UpdateMode;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__IInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__Input;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem__NoInput;
}
namespace UnityEngine::UIElements {
class __DefaultEventSystem____c;
}
namespace UnityEngine::UIElements {
struct __DefaultEventSystem__FocusBasedEventSequenceContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultEventSystem);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__IInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__Input);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem__NoInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DefaultEventSystem____c);
MARK_VAL_T(::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext);
// Type: ::UpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::DefaultEventSystem::UpdateMode
struct CORDL_TYPE __DefaultEventSystem__UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DefaultEventSystem__UpdateMode_Unwrapped
  enum struct ____DefaultEventSystem__UpdateMode_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_IgnoreIfAppNotFocused = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DefaultEventSystem__UpdateMode_Unwrapped() const noexcept {
    return static_cast<____DefaultEventSystem__UpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__UpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DefaultEventSystem__UpdateMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Always value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode const Always;

  /// @brief Field IgnoreIfAppNotFocused value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode const IgnoreIfAppNotFocused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::FocusBasedEventSequenceContext
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::DefaultEventSystem::FocusBasedEventSequenceContext
struct CORDL_TYPE __DefaultEventSystem__FocusBasedEventSequenceContext {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x499ba2c, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x499ad34, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::DefaultEventSystem* es);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__FocusBasedEventSequenceContext();

  // Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: None }]
  constexpr __DefaultEventSystem__FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem* es) noexcept;

  /// @brief Field es, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DefaultEventSystem* es;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5702 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext, es) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::IInput
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::IInput*
class CORDL_TYPE __DefaultEventSystem__IInput {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Method ClearLastPenContactEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  /// @brief Method get_anyKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_unscaledTime();

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__IInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__IInput(__DefaultEventSystem__IInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__IInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__IInput(__DefaultEventSystem__IInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5703 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::Input
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::Input*
class CORDL_TYPE __DefaultEventSystem__Input : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept;

  /// @brief Method ClearLastPenContactEvent, addr 0x499ba60, size 0x8, virtual true, abstract: false, final true
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0x499ba54, size 0xc, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x499ba48, size 0xc, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0x499ba68, size 0x38, virtual true, abstract: false, final true
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0x499bae8, size 0xc, virtual true, abstract: false, final true
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x499baf4, size 0xc, virtual true, abstract: false, final true
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x499baa8, size 0x38, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::__DefaultEventSystem__Input* New_ctor();

  /// @brief Method .ctor, addr 0x4999064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anyKey, addr 0x499bb10, size 0x8, virtual true, abstract: false, final true
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0x499bb20, size 0x24, virtual true, abstract: false, final true
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0x499bb08, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0x499bb00, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x499bae0, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x499baa0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0x499bb18, size 0x8, virtual true, abstract: false, final true
  inline float_t get_unscaledTime();

  /// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__Input(__DefaultEventSystem__Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__Input(__DefaultEventSystem__Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5704 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__Input, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::NoInput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::NoInput*
class CORDL_TYPE __DefaultEventSystem__NoInput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_anyKey)) bool anyKey;

  __declspec(property(get = get_doubleClickTime)) float_t doubleClickTime;

  __declspec(property(get = get_mouseButtonCount)) int32_t mouseButtonCount;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector3 mousePosition;

  __declspec(property(get = get_mousePresent)) bool mousePresent;

  __declspec(property(get = get_touchCount)) int32_t touchCount;

  __declspec(property(get = get_unscaledTime)) float_t unscaledTime;

  /// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept;

  /// @brief Method ClearLastPenContactEvent, addr 0x499bb70, size 0x4, virtual true, abstract: false, final true
  inline void ClearLastPenContactEvent();

  /// @brief Method GetAxisRaw, addr 0x499bb4c, size 0x8, virtual true, abstract: false, final true
  inline float_t GetAxisRaw(::StringW axis);

  /// @brief Method GetButtonDown, addr 0x499bb44, size 0x8, virtual true, abstract: false, final true
  inline bool GetButtonDown(::StringW button);

  /// @brief Method GetLastPenContactEvent, addr 0x499bb74, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::PenData GetLastPenContactEvent();

  /// @brief Method GetMouseButtonDown, addr 0x499bb8c, size 0x8, virtual true, abstract: false, final true
  inline bool GetMouseButtonDown(int32_t button);

  /// @brief Method GetMouseButtonUp, addr 0x499bb94, size 0x8, virtual true, abstract: false, final true
  inline bool GetMouseButtonUp(int32_t button);

  /// @brief Method GetTouch, addr 0x499bb5c, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Touch GetTouch(int32_t index);

  static inline ::UnityEngine::UIElements::__DefaultEventSystem__NoInput* New_ctor();

  /// @brief Method .ctor, addr 0x499906c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anyKey, addr 0x499bbb4, size 0x8, virtual true, abstract: false, final true
  inline bool get_anyKey();

  /// @brief Method get_doubleClickTime, addr 0x499bbc4, size 0xc, virtual true, abstract: false, final true
  inline float_t get_doubleClickTime();

  /// @brief Method get_mouseButtonCount, addr 0x499bbac, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_mouseButtonCount();

  /// @brief Method get_mousePosition, addr 0x499bb9c, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_mousePosition();

  /// @brief Method get_mousePresent, addr 0x499bb84, size 0x8, virtual true, abstract: false, final true
  inline bool get_mousePresent();

  /// @brief Method get_touchCount, addr 0x499bb54, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_touchCount();

  /// @brief Method get_unscaledTime, addr 0x499bbbc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_unscaledTime();

  /// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem__NoInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__NoInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem__NoInput(__DefaultEventSystem__NoInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem__NoInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem__NoInput(__DefaultEventSystem__NoInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5705 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem__NoInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DefaultEventSystem::<>c*
class CORDL_TYPE __DefaultEventSystem____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__DefaultEventSystem____c* __9;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__30_0, put = setStaticF___9__30_0)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__30_0;

  /// @brief Field <>9__30_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__30_1, put = setStaticF___9__30_1)) ::System::Func_4<
      ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>* __9__30_1;

  /// @brief Field <>9__30_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__30_2,
                             put = setStaticF___9__30_2)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* __9__30_2;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__36_0,
      put = setStaticF___9__36_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__36_0;

  /// @brief Field <>9__36_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_1,
                             put = setStaticF___9__36_1)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>,
                                                                           ::UnityEngine::UIElements::EventBase*>* __9__36_1;

  /// @brief Field <>9__36_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_2,
                             put = setStaticF___9__36_2)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>,
                                                                           ::UnityEngine::UIElements::EventBase*>* __9__36_2;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__37_0;

  /// @brief Field <>9__37_1, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__37_1, put = setStaticF___9__37_1)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__37_1;

  /// @brief Field <>9__37_2, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__37_2, put = setStaticF___9__37_2)) ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* __9__37_2;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_0,
                             put = setStaticF___9__45_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* __9__45_0;

  /// @brief Field <>9__46_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__46_0,
                             put = setStaticF___9__46_0)) ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* __9__46_0;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0)) ::System::Func_2<
      ::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,
      ::UnityEngine::UIElements::EventBase*>* __9__53_0;

  static inline ::UnityEngine::UIElements::__DefaultEventSystem____c* New_ctor();

  /// @brief Method <ProcessMouseEvents>b__36_0, addr 0x499bddc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__36_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <ProcessMouseEvents>b__36_1, addr 0x499be78, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__36_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessMouseEvents>b__36_2, addr 0x499be8c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessMouseEvents_b__36_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta,
                                                                           ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers> t);

  /// @brief Method <ProcessPenEvents>b__46_0, addr 0x499c1d0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessPenEvents_b__46_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::PenData _pen);

  /// @brief Method <ProcessTabEvent>b__53_0, addr 0x499c27c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTabEvent_b__53_0(
      ::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::__DefaultEventSystem__IInput*> t);

  /// @brief Method <ProcessTouchEvents>b__45_0, addr 0x499c104, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _ProcessTouchEvents_b__45_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Touch _touch);

  /// @brief Method <SendIMGUIEvents>b__30_0, addr 0x499bc34, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__30_0(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendIMGUIEvents>b__30_1, addr 0x499bc98, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__30_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 _,
                                                                        ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2> t);

  /// @brief Method <SendIMGUIEvents>b__30_2, addr 0x499bd34, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendIMGUIEvents_b__30_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Event* evt);

  /// @brief Method <SendInputEvents>b__37_0, addr 0x499bea0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__37_0(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendInputEvents>b__37_1, addr 0x499bf34, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__37_1(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <SendInputEvents>b__37_2, addr 0x499c01c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* _SendInputEvents_b__37_2(::UnityEngine::UIElements::DefaultEventSystem* self);

  /// @brief Method <.cctor>b__58_0, addr 0x499c368, size 0x8, virtual false, abstract: false, final false
  inline bool __cctor_b__58_0();

  /// @brief Method .ctor, addr 0x499bc2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__DefaultEventSystem____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__30_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__30_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__30_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__36_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__36_1();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__36_2();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__37_0();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__37_1();

  static inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__37_2();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__45_0();

  static inline ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* getStaticF___9__46_0();

  static inline ::System::Func_2<
      ::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,
      ::UnityEngine::UIElements::EventBase*>*
  getStaticF___9__53_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__DefaultEventSystem____c* value);

  static inline void setStaticF___9__30_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__30_1(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers, ::UnityEngine::Vector2>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__30_2(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void
  setStaticF___9__36_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__36_1(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__36_2(
      ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t, int32_t, ::UnityEngine::EventModifiers>, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__37_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__37_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__45_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__46_0(::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData, ::UnityEngine::UIElements::EventBase*>* value);

  static inline void setStaticF___9__53_0(
      ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, ::UnityEngine::EventModifiers, ::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,
                       ::UnityEngine::UIElements::EventBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultEventSystem____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultEventSystem____c(__DefaultEventSystem____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultEventSystem____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultEventSystem____c(__DefaultEventSystem____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5706 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DefaultEventSystem____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DefaultEventSystem
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 149, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DefaultEventSystem*
class CORDL_TYPE DefaultEventSystem : public ::System::Object {
public:
  // Declarations
  using FocusBasedEventSequenceContext = ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext;

  using IInput = ::UnityEngine::UIElements::__DefaultEventSystem__IInput;

  using Input = ::UnityEngine::UIElements::__DefaultEventSystem__Input;

  using NoInput = ::UnityEngine::UIElements::__DefaultEventSystem__NoInput;

  using UpdateMode = ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode;

  using __c = ::UnityEngine::UIElements::__DefaultEventSystem____c;

  /// @brief Field IsEditorRemoteConnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IsEditorRemoteConnected, put = setStaticF_IsEditorRemoteConnected)) ::System::Func_1<bool>* IsEditorRemoteConnected;

  __declspec(property(get = get_focusedPanel, put = set_focusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* focusedPanel;

  __declspec(property(get = get_input)) ::UnityEngine::UIElements::__DefaultEventSystem__IInput* input;

  __declspec(property(get = get_isAppFocused)) bool isAppFocused;

  /// @brief Field m_CancelButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelButton, put = __cordl_internal_set_m_CancelButton)) ::StringW m_CancelButton;

  /// @brief Field m_ConsecutiveMoveCount, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMoveCount, put = __cordl_internal_set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_CurrentModifiers, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentModifiers, put = __cordl_internal_set_m_CurrentModifiers)) ::UnityEngine::EventModifiers m_CurrentModifiers;

  /// @brief Field m_Event, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Event, put = __cordl_internal_set_m_Event)) ::UnityEngine::Event* m_Event;

  /// @brief Field m_FocusedPanel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FocusedPanel, put = __cordl_internal_set_m_FocusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_FocusedPanel;

  /// @brief Field m_HorizontalAxis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalAxis, put = __cordl_internal_set_m_HorizontalAxis)) ::StringW m_HorizontalAxis;

  /// @brief Field m_Input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input)) ::UnityEngine::UIElements::__DefaultEventSystem__IInput* m_Input;

  /// @brief Field m_InputActionsPerSecond, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputActionsPerSecond, put = __cordl_internal_set_m_InputActionsPerSecond)) float_t m_InputActionsPerSecond;

  /// @brief Field m_IsMoveFromKeyboard, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMoveFromKeyboard, put = __cordl_internal_set_m_IsMoveFromKeyboard)) bool m_IsMoveFromKeyboard;

  /// @brief Field m_LastMouseClickCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastMouseClickCount, put = __cordl_internal_set_m_LastMouseClickCount)) int32_t m_LastMouseClickCount;

  /// @brief Field m_LastMousePosition, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMousePosition, put = __cordl_internal_set_m_LastMousePosition)) ::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_LastMousePressButton, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastMousePressButton, put = __cordl_internal_set_m_LastMousePressButton)) int32_t m_LastMousePressButton;

  /// @brief Field m_LastMoveVector, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMoveVector, put = __cordl_internal_set_m_LastMoveVector)) ::UnityEngine::Vector2 m_LastMoveVector;

  /// @brief Field m_MouseProcessedAtLeastOnce, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseProcessedAtLeastOnce, put = __cordl_internal_set_m_MouseProcessedAtLeastOnce)) bool m_MouseProcessedAtLeastOnce;

  /// @brief Field m_NextMousePressTime, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextMousePressTime, put = __cordl_internal_set_m_NextMousePressTime)) float_t m_NextMousePressTime;

  /// @brief Field m_PrevActionTime, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevActionTime, put = __cordl_internal_set_m_PrevActionTime)) float_t m_PrevActionTime;

  /// @brief Field m_PreviousFocusedElement, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousFocusedElement, put = __cordl_internal_set_m_PreviousFocusedElement)) ::UnityEngine::UIElements::Focusable* m_PreviousFocusedElement;

  /// @brief Field m_PreviousFocusedPanel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousFocusedPanel, put = __cordl_internal_set_m_PreviousFocusedPanel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_PreviousFocusedPanel;

  /// @brief Field m_RepeatDelay, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepeatDelay, put = __cordl_internal_set_m_RepeatDelay)) float_t m_RepeatDelay;

  /// @brief Field m_SendingPenEvent, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendingPenEvent, put = __cordl_internal_set_m_SendingPenEvent)) bool m_SendingPenEvent;

  /// @brief Field m_SendingTouchEvents, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SendingTouchEvents, put = __cordl_internal_set_m_SendingTouchEvents)) bool m_SendingTouchEvents;

  /// @brief Field m_SubmitButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubmitButton, put = __cordl_internal_set_m_SubmitButton)) ::StringW m_SubmitButton;

  /// @brief Field m_VerticalAxis, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalAxis, put = __cordl_internal_set_m_VerticalAxis)) ::StringW m_VerticalAxis;

  /// @brief Method FocusBasedEventSequence, addr 0x499a258, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext FocusBasedEventSequence();

  /// @brief Method GetDefaultInput, addr 0x4998ed0, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* GetDefaultInput();

  /// @brief Method GetRawMoveVector, addr 0x499b58c, size 0x2b4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetRawMoveVector();

  /// @brief Method MakePenEvent, addr 0x499b4d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* MakePenEvent(::UnityEngine::PenData pen, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method MakeTouchEvent, addr 0x499b354, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventBase* MakeTouchEvent(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers);

  static inline ::UnityEngine::UIElements::DefaultEventSystem* New_ctor();

  /// @brief Method OnFocusEvent, addr 0x499b2d8, size 0x4, virtual false, abstract: false, final false
  inline void OnFocusEvent(::UnityEngine::UIElements::RuntimePanel* panel, ::UnityEngine::UIElements::FocusEvent* evt);

  /// @brief Method ProcessMouseEvents, addr 0x499990c, size 0x94c, virtual false, abstract: false, final false
  inline void ProcessMouseEvents();

  /// @brief Method ProcessPenEvents, addr 0x49991f4, size 0x2cc, virtual false, abstract: false, final false
  inline bool ProcessPenEvents();

  /// @brief Method ProcessTabEvent, addr 0x499ad7c, size 0x188, virtual false, abstract: false, final false
  inline void ProcessTabEvent(::UnityEngine::Event* e, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method ProcessTouchEvents, addr 0x49994c0, size 0x44c, virtual false, abstract: false, final false
  inline bool ProcessTouchEvents();

  /// @brief Method SendFocusBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg> inline void SendFocusBasedEvent(::System::Func_2<TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg);

  /// @brief Method SendIMGUIEvents, addr 0x499a278, size 0x758, virtual false, abstract: false, final false
  inline void SendIMGUIEvents();

  /// @brief Method SendInputEvents, addr 0x499a9d0, size 0x364, virtual false, abstract: false, final false
  inline void SendInputEvents();

  /// @brief Method SendPositionBasedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArg>
  inline void SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay,
                                     ::System::Func_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, TArg, ::UnityEngine::UIElements::EventBase*>* evtFactory, TArg arg, bool deselectIfNoTarget);

  /// @brief Method ShouldIgnoreEventsOnAppNotFocused, addr 0x4999074, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldIgnoreEventsOnAppNotFocused();

  /// @brief Method ShouldSendMoveFromInput, addr 0x499af04, size 0x3d4, virtual false, abstract: false, final false
  inline bool ShouldSendMoveFromInput();

  /// @brief Method Update, addr 0x49990ec, size 0x108, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode updateMode);

  /// @brief Method UpdateFocusedPanel, addr 0x499b2dc, size 0x78, virtual false, abstract: false, final false
  inline void UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* runtimePanel);

  constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelButton();

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount();

  constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get_m_CurrentModifiers() const;

  constexpr ::UnityEngine::EventModifiers& __cordl_internal_get_m_CurrentModifiers();

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_Event();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __cordl_internal_get_m_Event() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_FocusedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_FocusedPanel() const;

  constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis();

  constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput*& __cordl_internal_get_m_Input();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__DefaultEventSystem__IInput*> const& __cordl_internal_get_m_Input() const;

  constexpr float_t const& __cordl_internal_get_m_InputActionsPerSecond() const;

  constexpr float_t& __cordl_internal_get_m_InputActionsPerSecond();

  constexpr bool const& __cordl_internal_get_m_IsMoveFromKeyboard() const;

  constexpr bool& __cordl_internal_get_m_IsMoveFromKeyboard();

  constexpr int32_t const& __cordl_internal_get_m_LastMouseClickCount() const;

  constexpr int32_t& __cordl_internal_get_m_LastMouseClickCount();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMousePosition();

  constexpr int32_t const& __cordl_internal_get_m_LastMousePressButton() const;

  constexpr int32_t& __cordl_internal_get_m_LastMousePressButton();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMoveVector() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMoveVector();

  constexpr bool const& __cordl_internal_get_m_MouseProcessedAtLeastOnce() const;

  constexpr bool& __cordl_internal_get_m_MouseProcessedAtLeastOnce();

  constexpr float_t const& __cordl_internal_get_m_NextMousePressTime() const;

  constexpr float_t& __cordl_internal_get_m_NextMousePressTime();

  constexpr float_t const& __cordl_internal_get_m_PrevActionTime() const;

  constexpr float_t& __cordl_internal_get_m_PrevActionTime();

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_PreviousFocusedElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __cordl_internal_get_m_PreviousFocusedElement() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_PreviousFocusedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_PreviousFocusedPanel() const;

  constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

  constexpr float_t& __cordl_internal_get_m_RepeatDelay();

  constexpr bool const& __cordl_internal_get_m_SendingPenEvent() const;

  constexpr bool& __cordl_internal_get_m_SendingPenEvent();

  constexpr bool const& __cordl_internal_get_m_SendingTouchEvents() const;

  constexpr bool& __cordl_internal_get_m_SendingTouchEvents();

  constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

  constexpr ::StringW& __cordl_internal_get_m_SubmitButton();

  constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

  constexpr ::StringW& __cordl_internal_get_m_VerticalAxis();

  constexpr void __cordl_internal_set_m_CancelButton(::StringW value);

  constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentModifiers(::UnityEngine::EventModifiers value);

  constexpr void __cordl_internal_set_m_Event(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::UIElements::__DefaultEventSystem__IInput* value);

  constexpr void __cordl_internal_set_m_InputActionsPerSecond(float_t value);

  constexpr void __cordl_internal_set_m_IsMoveFromKeyboard(bool value);

  constexpr void __cordl_internal_set_m_LastMouseClickCount(int32_t value);

  constexpr void __cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LastMousePressButton(int32_t value);

  constexpr void __cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_MouseProcessedAtLeastOnce(bool value);

  constexpr void __cordl_internal_set_m_NextMousePressTime(float_t value);

  constexpr void __cordl_internal_set_m_PrevActionTime(float_t value);

  constexpr void __cordl_internal_set_m_PreviousFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr void __cordl_internal_set_m_PreviousFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_RepeatDelay(float_t value);

  constexpr void __cordl_internal_set_m_SendingPenEvent(bool value);

  constexpr void __cordl_internal_set_m_SendingTouchEvents(bool value);

  constexpr void __cordl_internal_set_m_SubmitButton(::StringW value);

  constexpr void __cordl_internal_set_m_VerticalAxis(::StringW value);

  /// @brief Method .ctor, addr 0x499b840, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<bool>* getStaticF_IsEditorRemoteConnected();

  /// @brief Method get_focusedPanel, addr 0x4999094, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_focusedPanel();

  /// @brief Method get_input, addr 0x4998eac, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* get_input();

  /// @brief Method get_isAppFocused, addr 0x4998e5c, size 0x50, virtual false, abstract: false, final false
  inline bool get_isAppFocused();

  static inline void setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>* value);

  /// @brief Method set_focusedPanel, addr 0x499909c, size 0x50, virtual false, abstract: false, final false
  inline void set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEventSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEventSystem(DefaultEventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEventSystem(DefaultEventSystem const&) = delete;

  /// @brief Field m_Input, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::__DefaultEventSystem__IInput* ___m_Input;

  /// @brief Field m_HorizontalAxis, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_HorizontalAxis;

  /// @brief Field m_VerticalAxis, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_VerticalAxis;

  /// @brief Field m_SubmitButton, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_SubmitButton;

  /// @brief Field m_CancelButton, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_CancelButton;

  /// @brief Field m_InputActionsPerSecond, offset: 0x38, size: 0x4, def value: None
  float_t ___m_InputActionsPerSecond;

  /// @brief Field m_RepeatDelay, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_RepeatDelay;

  /// @brief Field m_SendingTouchEvents, offset: 0x40, size: 0x1, def value: None
  bool ___m_SendingTouchEvents;

  /// @brief Field m_SendingPenEvent, offset: 0x41, size: 0x1, def value: None
  bool ___m_SendingPenEvent;

  /// @brief Field m_Event, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_Event;

  /// @brief Field m_FocusedPanel, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_FocusedPanel;

  /// @brief Field m_PreviousFocusedPanel, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_PreviousFocusedPanel;

  /// @brief Field m_PreviousFocusedElement, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_PreviousFocusedElement;

  /// @brief Field m_CurrentModifiers, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ___m_CurrentModifiers;

  /// @brief Field m_LastMousePressButton, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_LastMousePressButton;

  /// @brief Field m_NextMousePressTime, offset: 0x70, size: 0x4, def value: None
  float_t ___m_NextMousePressTime;

  /// @brief Field m_LastMouseClickCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___m_LastMouseClickCount;

  /// @brief Field m_LastMousePosition, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MouseProcessedAtLeastOnce, offset: 0x80, size: 0x1, def value: None
  bool ___m_MouseProcessedAtLeastOnce;

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastMoveVector, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMoveVector;

  /// @brief Field m_PrevActionTime, offset: 0x90, size: 0x4, def value: None
  float_t ___m_PrevActionTime;

  /// @brief Field m_IsMoveFromKeyboard, offset: 0x94, size: 0x1, def value: None
  bool ___m_IsMoveFromKeyboard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultEventSystem, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_Input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_HorizontalAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_VerticalAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_SubmitButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_CancelButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_InputActionsPerSecond) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_RepeatDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_SendingTouchEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_SendingPenEvent) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_Event) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_FocusedPanel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PreviousFocusedPanel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PreviousFocusedElement) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_CurrentModifiers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LastMousePressButton) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_NextMousePressTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LastMouseClickCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LastMousePosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_MouseProcessedAtLeastOnce) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_ConsecutiveMoveCount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_LastMoveVector) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_PrevActionTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultEventSystem, ___m_IsMoveFromKeyboard) == 0x94, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode, "UnityEngine.UIElements", "DefaultEventSystem/UpdateMode");
NEED_NO_BOX(::UnityEngine::UIElements::DefaultEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultEventSystem*, "UnityEngine.UIElements", "DefaultEventSystem");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__IInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__IInput*, "UnityEngine.UIElements", "DefaultEventSystem/IInput");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__Input*, "UnityEngine.UIElements", "DefaultEventSystem/Input");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem__NoInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__NoInput*, "UnityEngine.UIElements", "DefaultEventSystem/NoInput");
NEED_NO_BOX(::UnityEngine::UIElements::__DefaultEventSystem____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem____c*, "UnityEngine.UIElements", "DefaultEventSystem/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext, "UnityEngine.UIElements", "DefaultEventSystem/FocusBasedEventSequenceContext");

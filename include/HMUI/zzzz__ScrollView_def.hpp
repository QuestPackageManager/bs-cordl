#pragma once
// IWYU pragma private; include "HMUI/ScrollView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class EventSystemListener;
}
namespace HMUI {
class ItemForFocussedScrolling;
}
namespace HMUI {
class VerticalScrollIndicator;
}
namespace HMUI {
struct __ScrollView__ScrollDirection;
}
namespace HMUI {
struct __ScrollView__ScrollType;
}
namespace HMUI {
struct __ScrollView__ScrollViewDirection;
}
namespace HMUI {
class __ScrollView____c;
}
namespace HMUI {
class __ScrollView____c__DisplayClass55_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass56_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
struct __ScrollView__ScrollDirection;
}
namespace HMUI {
struct __ScrollView__ScrollType;
}
namespace HMUI {
struct __ScrollView__ScrollViewDirection;
}
namespace HMUI {
class ScrollView;
}
namespace HMUI {
class __ScrollView____c;
}
namespace HMUI {
class __ScrollView____c__DisplayClass55_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass56_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_0;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_1;
}
// Write type traits
MARK_VAL_T(::HMUI::__ScrollView__ScrollDirection);
MARK_VAL_T(::HMUI::__ScrollView__ScrollType);
MARK_VAL_T(::HMUI::__ScrollView__ScrollViewDirection);
MARK_REF_PTR_T(::HMUI::ScrollView);
MARK_REF_PTR_T(::HMUI::__ScrollView____c);
MARK_REF_PTR_T(::HMUI::__ScrollView____c__DisplayClass55_0);
MARK_REF_PTR_T(::HMUI::__ScrollView____c__DisplayClass56_0);
MARK_REF_PTR_T(::HMUI::__ScrollView____c__DisplayClass61_0);
MARK_REF_PTR_T(::HMUI::__ScrollView____c__DisplayClass61_1);
// Type: ::ScrollType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ScrollView::ScrollType
struct CORDL_TYPE __ScrollView__ScrollType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__ScrollType_Unwrapped
  enum struct ____ScrollView__ScrollType_Unwrapped : int32_t {
    __E_PageSize = static_cast<int32_t>(0x0),
    __E_FixedCellSize = static_cast<int32_t>(0x1),
    __E_FocusItems = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__ScrollType_Unwrapped() const noexcept {
    return static_cast<____ScrollView__ScrollType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FixedCellSize value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollType const FixedCellSize;

  /// @brief Field FocusItems value: static_cast<int32_t>(0x2)
  static ::HMUI::__ScrollView__ScrollType const FocusItems;

  /// @brief Field PageSize value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollType const PageSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ScrollDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ScrollView::ScrollDirection
struct CORDL_TYPE __ScrollView__ScrollDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__ScrollDirection_Unwrapped
  enum struct ____ScrollView__ScrollDirection_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Up = static_cast<int32_t>(0x1),
    __E_Down = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
    __E_Right = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__ScrollDirection_Unwrapped() const noexcept {
    return static_cast<____ScrollView__ScrollDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Down value: static_cast<int32_t>(0x2)
  static ::HMUI::__ScrollView__ScrollDirection const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::HMUI::__ScrollView__ScrollDirection const Left;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollDirection const None;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::HMUI::__ScrollView__ScrollDirection const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollDirection const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16052 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollDirection, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ScrollViewDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ScrollView::ScrollViewDirection
struct CORDL_TYPE __ScrollView__ScrollViewDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__ScrollViewDirection_Unwrapped
  enum struct ____ScrollView__ScrollViewDirection_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x0),
    __E_Horizontal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__ScrollViewDirection_Unwrapped() const noexcept {
    return static_cast<____ScrollView__ScrollViewDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollViewDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollViewDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollViewDirection const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollViewDirection const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollViewDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollViewDirection, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollView::<>c*
class CORDL_TYPE __ScrollView____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HMUI::__ScrollView____c* __9;

  /// @brief Field <>9__42_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_1, put = setStaticF___9__42_1)) ::System::Func_2<float_t, float_t>* __9__42_1;

  /// @brief Field <>9__42_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_3, put = setStaticF___9__42_3)) ::System::Func_2<float_t, float_t>* __9__42_3;

  static inline ::HMUI::__ScrollView____c* New_ctor();

  /// @brief Method <Awake>b__42_1, addr 0x39a5958, size 0x4, virtual false, abstract: false, final false
  inline float_t _Awake_b__42_1(float_t i);

  /// @brief Method <Awake>b__42_3, addr 0x39a595c, size 0x4, virtual false, abstract: false, final false
  inline float_t _Awake_b__42_3(float_t i);

  /// @brief Method .ctor, addr 0x39a5950, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::__ScrollView____c* getStaticF___9();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__42_1();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__42_3();

  static inline void setStaticF___9(::HMUI::__ScrollView____c* value);

  static inline void setStaticF___9__42_1(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__42_3(::System::Func_2<float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c(__ScrollView____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c(__ScrollView____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass55_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollView::<>c__DisplayClass55_0*
class CORDL_TYPE __ScrollView____c__DisplayClass55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) float_t threshold;

  static inline ::HMUI::__ScrollView____c__DisplayClass55_0* New_ctor();

  /// @brief Method <PageUpButtonPressed>b__0, addr 0x39a5960, size 0x10, virtual false, abstract: false, final false
  inline bool _PageUpButtonPressed_b__0(float_t pos);

  constexpr float_t const& __cordl_internal_get_threshold() const;

  constexpr float_t& __cordl_internal_get_threshold();

  constexpr void __cordl_internal_set_threshold(float_t value);

  /// @brief Method .ctor, addr 0x39a54c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass55_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass55_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass55_0(__ScrollView____c__DisplayClass55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass55_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass55_0(__ScrollView____c__DisplayClass55_0 const&) = delete;

  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass55_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass55_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass56_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollView::<>c__DisplayClass56_0*
class CORDL_TYPE __ScrollView____c__DisplayClass56_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) float_t threshold;

  static inline ::HMUI::__ScrollView____c__DisplayClass56_0* New_ctor();

  /// @brief Method <PageDownButtonPressed>b__0, addr 0x39a5970, size 0x10, virtual false, abstract: false, final false
  inline bool _PageDownButtonPressed_b__0(float_t pos);

  constexpr float_t const& __cordl_internal_get_threshold() const;

  constexpr float_t& __cordl_internal_get_threshold();

  constexpr void __cordl_internal_set_threshold(float_t value);

  /// @brief Method .ctor, addr 0x39a57d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass56_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass56_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass56_0(__ScrollView____c__DisplayClass56_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass56_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass56_0(__ScrollView____c__DisplayClass56_0 const&) = delete;

  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass56_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass56_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass61_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollView::<>c__DisplayClass61_0*
class CORDL_TYPE __ScrollView____c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) float_t threshold;

  static inline ::HMUI::__ScrollView____c__DisplayClass61_0* New_ctor();

  /// @brief Method <HandleJoystickWasCenteredThisFrame>b__0, addr 0x39a5980, size 0x10, virtual false, abstract: false, final false
  inline bool _HandleJoystickWasCenteredThisFrame_b__0(float_t pos);

  constexpr float_t const& __cordl_internal_get_threshold() const;

  constexpr float_t& __cordl_internal_get_threshold();

  constexpr void __cordl_internal_set_threshold(float_t value);

  /// @brief Method .ctor, addr 0x39a5844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass61_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass61_0(__ScrollView____c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass61_0(__ScrollView____c__DisplayClass61_0 const&) = delete;

  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass61_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass61_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass61_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollView::<>c__DisplayClass61_1*
class CORDL_TYPE __ScrollView____c__DisplayClass61_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) float_t threshold;

  static inline ::HMUI::__ScrollView____c__DisplayClass61_1* New_ctor();

  /// @brief Method <HandleJoystickWasCenteredThisFrame>b__1, addr 0x39a5990, size 0x10, virtual false, abstract: false, final false
  inline bool _HandleJoystickWasCenteredThisFrame_b__1(float_t pos);

  constexpr float_t const& __cordl_internal_get_threshold() const;

  constexpr float_t& __cordl_internal_get_threshold();

  constexpr void __cordl_internal_set_threshold(float_t value);

  /// @brief Method .ctor, addr 0x39a584c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass61_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass61_1(__ScrollView____c__DisplayClass61_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass61_1(__ScrollView____c__DisplayClass61_1 const&) = delete;

  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass61_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass61_1, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ScrollView
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScrollView*
class CORDL_TYPE ScrollView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ScrollDirection = ::HMUI::__ScrollView__ScrollDirection;

  using ScrollType = ::HMUI::__ScrollView__ScrollType;

  using ScrollViewDirection = ::HMUI::__ScrollView__ScrollViewDirection;

  using __c = ::HMUI::__ScrollView____c;

  using __c__DisplayClass55_0 = ::HMUI::__ScrollView____c__DisplayClass55_0;

  using __c__DisplayClass56_0 = ::HMUI::__ScrollView____c__DisplayClass56_0;

  using __c__DisplayClass61_0 = ::HMUI::__ScrollView____c__DisplayClass61_0;

  using __c__DisplayClass61_1 = ::HMUI::__ScrollView____c__DisplayClass61_1;

  /// @brief Field _buttonBinder, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _contentRectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__contentRectTransform, put = __cordl_internal_set__contentRectTransform)) ::UnityW<::UnityEngine::RectTransform> _contentRectTransform;

  /// @brief Field _destinationPos, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__destinationPos, put = __cordl_internal_set__destinationPos)) float_t _destinationPos;

  /// @brief Field _eventSystemListener, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSystemListener, put = __cordl_internal_set__eventSystemListener)) ::UnityW<::HMUI::EventSystemListener> _eventSystemListener;

  /// @brief Field _fixedCellSize, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__fixedCellSize, put = __cordl_internal_set__fixedCellSize)) float_t _fixedCellSize;

  /// @brief Field _isHoveredByPointer, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get__isHoveredByPointer, put = __cordl_internal_set__isHoveredByPointer)) bool _isHoveredByPointer;

  /// @brief Field _joystickQuickSnapMaxTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__joystickQuickSnapMaxTime, put = __cordl_internal_set__joystickQuickSnapMaxTime)) float_t _joystickQuickSnapMaxTime;

  /// @brief Field _joystickScrollSpeed, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__joystickScrollSpeed, put = __cordl_internal_set__joystickScrollSpeed)) float_t _joystickScrollSpeed;

  /// @brief Field _joystickScrollStartTime, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__joystickScrollStartTime, put = __cordl_internal_set__joystickScrollStartTime)) float_t _joystickScrollStartTime;

  /// @brief Field _lastJoystickScrollDirection, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__lastJoystickScrollDirection,
                      put = __cordl_internal_set__lastJoystickScrollDirection)) ::HMUI::__ScrollView__ScrollDirection _lastJoystickScrollDirection;

  /// @brief Field _pageDownButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pageDownButton, put = __cordl_internal_set__pageDownButton)) ::UnityW<::UnityEngine::UI::Button> _pageDownButton;

  /// @brief Field _pageStepNormalizedSize, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__pageStepNormalizedSize, put = __cordl_internal_set__pageStepNormalizedSize)) float_t _pageStepNormalizedSize;

  /// @brief Field _pageUpButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pageUpButton, put = __cordl_internal_set__pageUpButton)) ::UnityW<::UnityEngine::UI::Button> _pageUpButton;

  /// @brief Field _platformHelper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__platformHelper, put = __cordl_internal_set__platformHelper)) ::GlobalNamespace::IVRPlatformHelper* _platformHelper;

  /// @brief Field _scrollFocusPositions, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollFocusPositions, put = __cordl_internal_set__scrollFocusPositions)) ::ArrayW<float_t, ::Array<float_t>*> _scrollFocusPositions;

  /// @brief Field _scrollItemRelativeThresholdPosition, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__scrollItemRelativeThresholdPosition, put = __cordl_internal_set__scrollItemRelativeThresholdPosition)) float_t _scrollItemRelativeThresholdPosition;

  /// @brief Field _scrollType, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__scrollType, put = __cordl_internal_set__scrollType)) ::HMUI::__ScrollView__ScrollType _scrollType;

  /// @brief Field _scrollViewDirection, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__scrollViewDirection, put = __cordl_internal_set__scrollViewDirection)) ::HMUI::__ScrollView__ScrollViewDirection _scrollViewDirection;

  /// @brief Field _scrollingLastFrame, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get__scrollingLastFrame, put = __cordl_internal_set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _shouldAnimate, offset 0x6e, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldAnimate, put = __cordl_internal_set__shouldAnimate)) bool _shouldAnimate;

  /// @brief Field _smooth, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _verticalScrollIndicator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__verticalScrollIndicator, put = __cordl_internal_set__verticalScrollIndicator)) ::UnityW<::HMUI::VerticalScrollIndicator> _verticalScrollIndicator;

  /// @brief Field _viewport, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__viewport, put = __cordl_internal_set__viewport)) ::UnityW<::UnityEngine::RectTransform> _viewport;

  __declspec(property(get = get_contentSize)) float_t contentSize;

  __declspec(property(get = get_contentTransform)) ::UnityW<::UnityEngine::RectTransform> contentTransform;

  __declspec(property(get = get_position)) float_t position;

  __declspec(property(get = get_scrollPageSize)) float_t scrollPageSize;

  /// @brief Field scrollPositionChangedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollPositionChangedEvent, put = __cordl_internal_set_scrollPositionChangedEvent)) ::System::Action_1<float_t>* scrollPositionChangedEvent;

  __declspec(property(get = get_scrollableSize)) float_t scrollableSize;

  __declspec(property(get = get_viewportTransform)) ::UnityW<::UnityEngine::RectTransform> viewportTransform;

  /// @brief Method Awake, addr 0x39a3d3c, size 0x4dc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckScrollInput, addr 0x39a44c0, size 0x15c, virtual false, abstract: false, final false
  inline void CheckScrollInput();

  /// @brief Method HandleJoystickWasCenteredThisFrame, addr 0x39a4710, size 0x45c, virtual false, abstract: false, final false
  inline void HandleJoystickWasCenteredThisFrame();

  /// @brief Method HandleJoystickWasNotCenteredThisFrame, addr 0x39a461c, size 0xf4, virtual false, abstract: false, final false
  inline void HandleJoystickWasNotCenteredThisFrame(::UnityEngine::Vector2 deltaPos);

  /// @brief Method HandlePointerDidEnter, addr 0x39a57d8, size 0x14, virtual false, abstract: false, final false
  inline void HandlePointerDidEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method HandlePointerDidExit, addr 0x39a57ec, size 0x8, virtual false, abstract: false, final false
  inline void HandlePointerDidExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::ScrollView* New_ctor();

  /// @brief Method OnDestroy, addr 0x39a438c, size 0x134, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PageDownButtonPressed, addr 0x39a54c8, size 0x308, virtual false, abstract: false, final false
  inline void PageDownButtonPressed();

  /// @brief Method PageUpButtonPressed, addr 0x39a51e8, size 0x2d8, virtual false, abstract: false, final false
  inline void PageUpButtonPressed();

  /// @brief Method RefreshButtons, addr 0x39a427c, size 0x110, virtual false, abstract: false, final false
  inline void RefreshButtons();

  /// @brief Method ResolveScrollDirection, addr 0x39a57f4, size 0x50, virtual false, abstract: false, final false
  inline ::HMUI::__ScrollView__ScrollDirection ResolveScrollDirection(::UnityEngine::Vector2 deltaPos);

  /// @brief Method ScrollTo, addr 0x39a3a3c, size 0xc4, virtual false, abstract: false, final false
  inline void ScrollTo(float_t destinationPos, bool animated);

  /// @brief Method ScrollToEnd, addr 0x39a4f84, size 0x40, virtual false, abstract: false, final false
  inline void ScrollToEnd(bool animated);

  /// @brief Method ScrollToWorldPosition, addr 0x39a4fc4, size 0x48, virtual false, abstract: false, final false
  inline void ScrollToWorldPosition(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, bool animated);

  /// @brief Method ScrollToWorldPositionIfOutsideArea, addr 0x39a50bc, size 0xb0, virtual false, abstract: false, final false
  inline void ScrollToWorldPositionIfOutsideArea(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, float_t relativeBoundaryStart, float_t relativeBoundaryEnd, bool animated);

  /// @brief Method SetContentSize, addr 0x39a4d60, size 0x1f8, virtual false, abstract: false, final false
  inline void SetContentSize(float_t contentSize);

  /// @brief Method SetDestinationPos, addr 0x39a516c, size 0x50, virtual false, abstract: false, final false
  inline void SetDestinationPos(float_t value);

  /// @brief Method Update, addr 0x39a4b6c, size 0x120, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateContentSize, addr 0x39a4218, size 0x64, virtual false, abstract: false, final false
  inline void UpdateContentSize();

  /// @brief Method UpdateVerticalScrollIndicator, addr 0x39a4c8c, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateVerticalScrollIndicator(float_t posY);

  /// @brief Method WorldPositionToScrollViewPosition, addr 0x39a500c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 WorldPositionToScrollViewPosition(::UnityEngine::Vector3 worldPosition);

  /// @brief Method <Awake>b__42_0, addr 0x39a5884, size 0x3c, virtual false, abstract: false, final false
  inline float_t _Awake_b__42_0(::HMUI::ItemForFocussedScrolling* item);

  /// @brief Method <Awake>b__42_2, addr 0x39a58c0, size 0x34, virtual false, abstract: false, final false
  inline float_t _Awake_b__42_2(::HMUI::ItemForFocussedScrolling* item);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentRectTransform();

  constexpr float_t const& __cordl_internal_get__destinationPos() const;

  constexpr float_t& __cordl_internal_get__destinationPos();

  constexpr ::UnityW<::HMUI::EventSystemListener> const& __cordl_internal_get__eventSystemListener() const;

  constexpr ::UnityW<::HMUI::EventSystemListener>& __cordl_internal_get__eventSystemListener();

  constexpr float_t const& __cordl_internal_get__fixedCellSize() const;

  constexpr float_t& __cordl_internal_get__fixedCellSize();

  constexpr bool const& __cordl_internal_get__isHoveredByPointer() const;

  constexpr bool& __cordl_internal_get__isHoveredByPointer();

  constexpr float_t const& __cordl_internal_get__joystickQuickSnapMaxTime() const;

  constexpr float_t& __cordl_internal_get__joystickQuickSnapMaxTime();

  constexpr float_t const& __cordl_internal_get__joystickScrollSpeed() const;

  constexpr float_t& __cordl_internal_get__joystickScrollSpeed();

  constexpr float_t const& __cordl_internal_get__joystickScrollStartTime() const;

  constexpr float_t& __cordl_internal_get__joystickScrollStartTime();

  constexpr ::HMUI::__ScrollView__ScrollDirection const& __cordl_internal_get__lastJoystickScrollDirection() const;

  constexpr ::HMUI::__ScrollView__ScrollDirection& __cordl_internal_get__lastJoystickScrollDirection();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__pageDownButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__pageDownButton();

  constexpr float_t const& __cordl_internal_get__pageStepNormalizedSize() const;

  constexpr float_t& __cordl_internal_get__pageStepNormalizedSize();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__pageUpButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__pageUpButton();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__platformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__platformHelper() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__scrollFocusPositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__scrollFocusPositions();

  constexpr float_t const& __cordl_internal_get__scrollItemRelativeThresholdPosition() const;

  constexpr float_t& __cordl_internal_get__scrollItemRelativeThresholdPosition();

  constexpr ::HMUI::__ScrollView__ScrollType const& __cordl_internal_get__scrollType() const;

  constexpr ::HMUI::__ScrollView__ScrollType& __cordl_internal_get__scrollType();

  constexpr ::HMUI::__ScrollView__ScrollViewDirection const& __cordl_internal_get__scrollViewDirection() const;

  constexpr ::HMUI::__ScrollView__ScrollViewDirection& __cordl_internal_get__scrollViewDirection();

  constexpr bool const& __cordl_internal_get__scrollingLastFrame() const;

  constexpr bool& __cordl_internal_get__scrollingLastFrame();

  constexpr bool const& __cordl_internal_get__shouldAnimate() const;

  constexpr bool& __cordl_internal_get__shouldAnimate();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr ::UnityW<::HMUI::VerticalScrollIndicator> const& __cordl_internal_get__verticalScrollIndicator() const;

  constexpr ::UnityW<::HMUI::VerticalScrollIndicator>& __cordl_internal_get__verticalScrollIndicator();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewport() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewport();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_scrollPositionChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_scrollPositionChangedEvent() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__contentRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__destinationPos(float_t value);

  constexpr void __cordl_internal_set__eventSystemListener(::UnityW<::HMUI::EventSystemListener> value);

  constexpr void __cordl_internal_set__fixedCellSize(float_t value);

  constexpr void __cordl_internal_set__isHoveredByPointer(bool value);

  constexpr void __cordl_internal_set__joystickQuickSnapMaxTime(float_t value);

  constexpr void __cordl_internal_set__joystickScrollSpeed(float_t value);

  constexpr void __cordl_internal_set__joystickScrollStartTime(float_t value);

  constexpr void __cordl_internal_set__lastJoystickScrollDirection(::HMUI::__ScrollView__ScrollDirection value);

  constexpr void __cordl_internal_set__pageDownButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__pageStepNormalizedSize(float_t value);

  constexpr void __cordl_internal_set__pageUpButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__scrollFocusPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__scrollItemRelativeThresholdPosition(float_t value);

  constexpr void __cordl_internal_set__scrollType(::HMUI::__ScrollView__ScrollType value);

  constexpr void __cordl_internal_set__scrollViewDirection(::HMUI::__ScrollView__ScrollViewDirection value);

  constexpr void __cordl_internal_set__scrollingLastFrame(bool value);

  constexpr void __cordl_internal_set__shouldAnimate(bool value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__verticalScrollIndicator(::UnityW<::HMUI::VerticalScrollIndicator> value);

  constexpr void __cordl_internal_set__viewport(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x39a5854, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_scrollPositionChangedEvent, addr 0x39a3b08, size 0xb0, virtual false, abstract: false, final false
  inline void add_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_contentSize, addr 0x39a3cdc, size 0x30, virtual false, abstract: false, final false
  inline float_t get_contentSize();

  /// @brief Method get_contentTransform, addr 0x39a3c70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_contentTransform();

  /// @brief Method get_position, addr 0x39a3c78, size 0x30, virtual false, abstract: false, final false
  inline float_t get_position();

  /// @brief Method get_scrollPageSize, addr 0x39a3d0c, size 0x30, virtual false, abstract: false, final false
  inline float_t get_scrollPageSize();

  /// @brief Method get_scrollableSize, addr 0x39a3ca8, size 0x34, virtual false, abstract: false, final false
  inline float_t get_scrollableSize();

  /// @brief Method get_viewportTransform, addr 0x39a3c68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_viewportTransform();

  /// @brief Method remove_scrollPositionChangedEvent, addr 0x39a3bb8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView(ScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView(ScrollView const&) = delete;

  /// @brief Field _viewport, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewport;

  /// @brief Field _contentRectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentRectTransform;

  /// @brief Field _scrollViewDirection, offset: 0x30, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollViewDirection ____scrollViewDirection;

  /// @brief Field _pageUpButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____pageUpButton;

  /// @brief Field _pageDownButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____pageDownButton;

  /// @brief Field _verticalScrollIndicator, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::VerticalScrollIndicator> ____verticalScrollIndicator;

  /// @brief Field _smooth, offset: 0x50, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _joystickScrollSpeed, offset: 0x54, size: 0x4, def value: None
  float_t ____joystickScrollSpeed;

  /// @brief Field _joystickQuickSnapMaxTime, offset: 0x58, size: 0x4, def value: None
  float_t ____joystickQuickSnapMaxTime;

  /// @brief Field _scrollType, offset: 0x5c, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollType ____scrollType;

  /// @brief Field _fixedCellSize, offset: 0x60, size: 0x4, def value: None
  float_t ____fixedCellSize;

  /// @brief Field _scrollItemRelativeThresholdPosition, offset: 0x64, size: 0x4, def value: None
  float_t ____scrollItemRelativeThresholdPosition;

  /// @brief Field _pageStepNormalizedSize, offset: 0x68, size: 0x4, def value: None
  float_t ____pageStepNormalizedSize;

  /// @brief Field _scrollingLastFrame, offset: 0x6c, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  /// @brief Field _isHoveredByPointer, offset: 0x6d, size: 0x1, def value: None
  bool ____isHoveredByPointer;

  /// @brief Field _shouldAnimate, offset: 0x6e, size: 0x1, def value: None
  bool ____shouldAnimate;

  /// @brief Field _platformHelper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____platformHelper;

  /// @brief Field scrollPositionChangedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___scrollPositionChangedEvent;

  /// @brief Field _buttonBinder, offset: 0x80, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _destinationPos, offset: 0x88, size: 0x4, def value: None
  float_t ____destinationPos;

  /// @brief Field _scrollFocusPositions, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____scrollFocusPositions;

  /// @brief Field _eventSystemListener, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::EventSystemListener> ____eventSystemListener;

  /// @brief Field _lastJoystickScrollDirection, offset: 0xa0, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollDirection ____lastJoystickScrollDirection;

  /// @brief Field _joystickScrollStartTime, offset: 0xa4, size: 0x4, def value: None
  float_t ____joystickScrollStartTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16059 };

  /// @brief Field kThumbstickThreshold offset 0xffffffff size 0x4
  static constexpr float_t kThumbstickThreshold{ 0.01 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollView, 0xa8>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____viewport) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____contentRectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollViewDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageUpButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageDownButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____verticalScrollIndicator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____smooth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickScrollSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickQuickSnapMaxTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollType) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____fixedCellSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollItemRelativeThresholdPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageStepNormalizedSize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollingLastFrame) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____isHoveredByPointer) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____shouldAnimate) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____platformHelper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ___scrollPositionChangedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____buttonBinder) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____destinationPos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollFocusPositions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____eventSystemListener) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____lastJoystickScrollDirection) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickScrollStartTime) == 0xa4, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView__ScrollDirection, "HMUI", "ScrollView/ScrollDirection");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView__ScrollType, "HMUI", "ScrollView/ScrollType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView__ScrollViewDirection, "HMUI", "ScrollView/ScrollViewDirection");
NEED_NO_BOX(::HMUI::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollView*, "HMUI", "ScrollView");
NEED_NO_BOX(::HMUI::__ScrollView____c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView____c*, "HMUI", "ScrollView/<>c");
NEED_NO_BOX(::HMUI::__ScrollView____c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView____c__DisplayClass55_0*, "HMUI", "ScrollView/<>c__DisplayClass55_0");
NEED_NO_BOX(::HMUI::__ScrollView____c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView____c__DisplayClass56_0*, "HMUI", "ScrollView/<>c__DisplayClass56_0");
NEED_NO_BOX(::HMUI::__ScrollView____c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView____c__DisplayClass61_0*, "HMUI", "ScrollView/<>c__DisplayClass61_0");
NEED_NO_BOX(::HMUI::__ScrollView____c__DisplayClass61_1);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollView____c__DisplayClass61_1*, "HMUI", "ScrollView/<>c__DisplayClass61_1");

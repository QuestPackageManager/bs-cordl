#pragma once
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
namespace HMUI {
class __ScrollView____c__DisplayClass56_0;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace HMUI {
class __ScrollView____c__DisplayClass55_0;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class ItemForFocussedScrolling;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
struct __ScrollView__ScrollType;
}
namespace HMUI {
struct __ScrollView__ScrollViewDirection;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_1;
}
namespace HMUI {
class __ScrollView____c;
}
namespace HMUI {
struct __ScrollView__ScrollDirection;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace HMUI {
class EventSystemListener;
}
namespace UnityEngine {
struct Vector2;
}
namespace HMUI {
class VerticalScrollIndicator;
}
namespace UnityEngine {
struct Vector3;
}
namespace HMUI {
class __ScrollView____c__DisplayClass61_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13757))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PageSize value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollType const PageSize;

  /// @brief Field FixedCellSize value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollType const FixedCellSize;

  /// @brief Field FocusItems value: static_cast<int32_t>(0x2)
  static ::HMUI::__ScrollView__ScrollType const FocusItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ScrollDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13758))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollDirection const None;

  /// @brief Field Up value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollDirection const Up;

  /// @brief Field Down value: static_cast<int32_t>(0x2)
  static ::HMUI::__ScrollView__ScrollDirection const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::HMUI::__ScrollView__ScrollDirection const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::HMUI::__ScrollView__ScrollDirection const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollDirection, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ScrollViewDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13759))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__ScrollViewDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__ScrollViewDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Vertical value: static_cast<int32_t>(0x0)
  static ::HMUI::__ScrollView__ScrollViewDirection const Vertical;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::HMUI::__ScrollView__ScrollViewDirection const Horizontal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView__ScrollViewDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView__ScrollViewDirection, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13760))
// CS Name: ::ScrollView::<>c*
class CORDL_TYPE __ScrollView____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HMUI::__ScrollView____c* __9;

  /// @brief Field <>9__42_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_1, put = setStaticF___9__42_1))::System::Func_2<float_t, float_t>* __9__42_1;

  /// @brief Field <>9__42_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_3, put = setStaticF___9__42_3))::System::Func_2<float_t, float_t>* __9__42_3;

  static inline void setStaticF___9(::HMUI::__ScrollView____c* value);

  static inline ::HMUI::__ScrollView____c* getStaticF___9();

  static inline void setStaticF___9__42_1(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__42_1();

  static inline void setStaticF___9__42_3(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__42_3();

  static inline ::HMUI::__ScrollView____c* New_ctor();

  /// @brief Method .ctor addr 0x1fed458 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__42_1 addr 0x1fed460 size 0x4 virtual false final false
  inline float_t _Awake_b__42_1(float_t i);

  /// @brief Method <Awake>b__42_3 addr 0x1fed464 size 0x4 virtual false final false
  inline float_t _Awake_b__42_3(float_t i);

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c(__ScrollView____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c(__ScrollView____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass55_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13761))
// CS Name: ::ScrollView::<>c__DisplayClass55_0*
class CORDL_TYPE __ScrollView____c__DisplayClass55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __get_threshold, put = __set_threshold)) float_t threshold;

  constexpr float_t& __get_threshold();

  constexpr float_t const& __get_threshold() const;

  constexpr void __set_threshold(float_t value);

  static inline ::HMUI::__ScrollView____c__DisplayClass55_0* New_ctor();

  /// @brief Method .ctor addr 0x1fecfb4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PageUpButtonPressed>b__0 addr 0x1fed468 size 0x10 virtual false final false
  inline bool _PageUpButtonPressed_b__0(float_t pos);

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass55_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass55_0(__ScrollView____c__DisplayClass55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass55_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass55_0(__ScrollView____c__DisplayClass55_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass55_0();

public:
  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass55_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass55_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass56_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13762))
// CS Name: ::ScrollView::<>c__DisplayClass56_0*
class CORDL_TYPE __ScrollView____c__DisplayClass56_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __get_threshold, put = __set_threshold)) float_t threshold;

  constexpr float_t& __get_threshold();

  constexpr float_t const& __get_threshold() const;

  constexpr void __set_threshold(float_t value);

  static inline ::HMUI::__ScrollView____c__DisplayClass56_0* New_ctor();

  /// @brief Method .ctor addr 0x1fed2d0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PageDownButtonPressed>b__0 addr 0x1fed478 size 0x10 virtual false final false
  inline bool _PageDownButtonPressed_b__0(float_t pos);

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass56_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass56_0(__ScrollView____c__DisplayClass56_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass56_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass56_0(__ScrollView____c__DisplayClass56_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass56_0();

public:
  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass56_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass56_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass61_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13763))
// CS Name: ::ScrollView::<>c__DisplayClass61_0*
class CORDL_TYPE __ScrollView____c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __get_threshold, put = __set_threshold)) float_t threshold;

  constexpr float_t& __get_threshold();

  constexpr float_t const& __get_threshold() const;

  constexpr void __set_threshold(float_t value);

  static inline ::HMUI::__ScrollView____c__DisplayClass61_0* New_ctor();

  /// @brief Method .ctor addr 0x1fed344 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleJoystickWasCenteredThisFrame>b__0 addr 0x1fed488 size 0x10 virtual false final false
  inline bool _HandleJoystickWasCenteredThisFrame_b__0(float_t pos);

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass61_0(__ScrollView____c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass61_0(__ScrollView____c__DisplayClass61_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass61_0();

public:
  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass61_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass61_0, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass61_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13764))
// CS Name: ::ScrollView::<>c__DisplayClass61_1*
class CORDL_TYPE __ScrollView____c__DisplayClass61_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field threshold, offset 0x10, size 0x4
  __declspec(property(get = __get_threshold, put = __set_threshold)) float_t threshold;

  constexpr float_t& __get_threshold();

  constexpr float_t const& __get_threshold() const;

  constexpr void __set_threshold(float_t value);

  static inline ::HMUI::__ScrollView____c__DisplayClass61_1* New_ctor();

  /// @brief Method .ctor addr 0x1fed34c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleJoystickWasCenteredThisFrame>b__1 addr 0x1fed498 size 0x10 virtual false final false
  inline bool _HandleJoystickWasCenteredThisFrame_b__1(float_t pos);

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView____c__DisplayClass61_1(__ScrollView____c__DisplayClass61_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView____c__DisplayClass61_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView____c__DisplayClass61_1(__ScrollView____c__DisplayClass61_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView____c__DisplayClass61_1();

public:
  /// @brief Field threshold, offset: 0x10, size: 0x4, def value: None
  float_t ___threshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollView____c__DisplayClass61_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ScrollView____c__DisplayClass61_1, ___threshold) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ScrollView
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13757)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(13759)),
// TypeDefinitionIndex(TypeDefinitionIndex(13758))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13765)) CS Name: ::HMUI::ScrollView*
class CORDL_TYPE ScrollView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass61_1 = ::HMUI::__ScrollView____c__DisplayClass61_1;

  using __c__DisplayClass61_0 = ::HMUI::__ScrollView____c__DisplayClass61_0;

  using __c__DisplayClass56_0 = ::HMUI::__ScrollView____c__DisplayClass56_0;

  using __c__DisplayClass55_0 = ::HMUI::__ScrollView____c__DisplayClass55_0;

  using __c = ::HMUI::__ScrollView____c;

  using ScrollViewDirection = ::HMUI::__ScrollView__ScrollViewDirection;

  using ScrollDirection = ::HMUI::__ScrollView__ScrollDirection;

  using ScrollType = ::HMUI::__ScrollView__ScrollType;

  /// @brief Field _viewport, offset 0x18, size 0x8
  __declspec(property(get = __get__viewport, put = __set__viewport))::UnityEngine::RectTransform* _viewport;

  /// @brief Field _contentRectTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__contentRectTransform, put = __set__contentRectTransform))::UnityEngine::RectTransform* _contentRectTransform;

  /// @brief Field _scrollViewDirection, offset 0x28, size 0x4
  __declspec(property(get = __get__scrollViewDirection, put = __set__scrollViewDirection))::HMUI::__ScrollView__ScrollViewDirection _scrollViewDirection;

  /// @brief Field _pageUpButton, offset 0x30, size 0x8
  __declspec(property(get = __get__pageUpButton, put = __set__pageUpButton))::UnityEngine::UI::Button* _pageUpButton;

  /// @brief Field _pageDownButton, offset 0x38, size 0x8
  __declspec(property(get = __get__pageDownButton, put = __set__pageDownButton))::UnityEngine::UI::Button* _pageDownButton;

  /// @brief Field _verticalScrollIndicator, offset 0x40, size 0x8
  __declspec(property(get = __get__verticalScrollIndicator, put = __set__verticalScrollIndicator))::HMUI::VerticalScrollIndicator* _verticalScrollIndicator;

  /// @brief Field _smooth, offset 0x48, size 0x4
  __declspec(property(get = __get__smooth, put = __set__smooth)) float_t _smooth;

  /// @brief Field _joystickScrollSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __get__joystickScrollSpeed, put = __set__joystickScrollSpeed)) float_t _joystickScrollSpeed;

  /// @brief Field _joystickQuickSnapMaxTime, offset 0x50, size 0x4
  __declspec(property(get = __get__joystickQuickSnapMaxTime, put = __set__joystickQuickSnapMaxTime)) float_t _joystickQuickSnapMaxTime;

  /// @brief Field _scrollType, offset 0x54, size 0x4
  __declspec(property(get = __get__scrollType, put = __set__scrollType))::HMUI::__ScrollView__ScrollType _scrollType;

  /// @brief Field _fixedCellSize, offset 0x58, size 0x4
  __declspec(property(get = __get__fixedCellSize, put = __set__fixedCellSize)) float_t _fixedCellSize;

  /// @brief Field _scrollItemRelativeThresholdPosition, offset 0x5c, size 0x4
  __declspec(property(get = __get__scrollItemRelativeThresholdPosition, put = __set__scrollItemRelativeThresholdPosition)) float_t _scrollItemRelativeThresholdPosition;

  /// @brief Field _pageStepNormalizedSize, offset 0x60, size 0x4
  __declspec(property(get = __get__pageStepNormalizedSize, put = __set__pageStepNormalizedSize)) float_t _pageStepNormalizedSize;

  /// @brief Field _scrollingLastFrame, offset 0x64, size 0x1
  __declspec(property(get = __get__scrollingLastFrame, put = __set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _isHoveredByPointer, offset 0x65, size 0x1
  __declspec(property(get = __get__isHoveredByPointer, put = __set__isHoveredByPointer)) bool _isHoveredByPointer;

  /// @brief Field _shouldAnimate, offset 0x66, size 0x1
  __declspec(property(get = __get__shouldAnimate, put = __set__shouldAnimate)) bool _shouldAnimate;

  /// @brief Field _platformHelper, offset 0x68, size 0x8
  __declspec(property(get = __get__platformHelper, put = __set__platformHelper))::GlobalNamespace::IVRPlatformHelper* _platformHelper;

  /// @brief Field scrollPositionChangedEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_scrollPositionChangedEvent, put = __set_scrollPositionChangedEvent))::System::Action_1<float_t>* scrollPositionChangedEvent;

  /// @brief Field _buttonBinder, offset 0x78, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _destinationPos, offset 0x80, size 0x4
  __declspec(property(get = __get__destinationPos, put = __set__destinationPos)) float_t _destinationPos;

  /// @brief Field _scrollFocusPositions, offset 0x88, size 0x8
  __declspec(property(get = __get__scrollFocusPositions, put = __set__scrollFocusPositions))::ArrayW<float_t, ::Array<float_t>*> _scrollFocusPositions;

  /// @brief Field _eventSystemListener, offset 0x90, size 0x8
  __declspec(property(get = __get__eventSystemListener, put = __set__eventSystemListener))::HMUI::EventSystemListener* _eventSystemListener;

  /// @brief Field _lastJoystickScrollDirection, offset 0x98, size 0x4
  __declspec(property(get = __get__lastJoystickScrollDirection, put = __set__lastJoystickScrollDirection))::HMUI::__ScrollView__ScrollDirection _lastJoystickScrollDirection;

  /// @brief Field _joystickScrollStartTime, offset 0x9c, size 0x4
  __declspec(property(get = __get__joystickScrollStartTime, put = __set__joystickScrollStartTime)) float_t _joystickScrollStartTime;

  __declspec(property(get = get_viewportTransform))::UnityEngine::RectTransform* viewportTransform;

  __declspec(property(get = get_contentTransform))::UnityEngine::RectTransform* contentTransform;

  __declspec(property(get = get_position)) float_t position;

  __declspec(property(get = get_scrollableSize)) float_t scrollableSize;

  __declspec(property(get = get_scrollPageSize)) float_t scrollPageSize;

  __declspec(property(get = get_contentSize)) float_t contentSize;

  constexpr ::UnityEngine::RectTransform*& __get__viewport();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__viewport() const;

  constexpr void __set__viewport(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get__contentRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__contentRectTransform() const;

  constexpr void __set__contentRectTransform(::UnityEngine::RectTransform* value);

  constexpr ::HMUI::__ScrollView__ScrollViewDirection& __get__scrollViewDirection();

  constexpr ::HMUI::__ScrollView__ScrollViewDirection const& __get__scrollViewDirection() const;

  constexpr void __set__scrollViewDirection(::HMUI::__ScrollView__ScrollViewDirection value);

  constexpr ::UnityEngine::UI::Button*& __get__pageUpButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__pageUpButton() const;

  constexpr void __set__pageUpButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__pageDownButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__pageDownButton() const;

  constexpr void __set__pageDownButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::VerticalScrollIndicator*& __get__verticalScrollIndicator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::VerticalScrollIndicator*> const& __get__verticalScrollIndicator() const;

  constexpr void __set__verticalScrollIndicator(::HMUI::VerticalScrollIndicator* value);

  constexpr float_t& __get__smooth();

  constexpr float_t const& __get__smooth() const;

  constexpr void __set__smooth(float_t value);

  constexpr float_t& __get__joystickScrollSpeed();

  constexpr float_t const& __get__joystickScrollSpeed() const;

  constexpr void __set__joystickScrollSpeed(float_t value);

  constexpr float_t& __get__joystickQuickSnapMaxTime();

  constexpr float_t const& __get__joystickQuickSnapMaxTime() const;

  constexpr void __set__joystickQuickSnapMaxTime(float_t value);

  constexpr ::HMUI::__ScrollView__ScrollType& __get__scrollType();

  constexpr ::HMUI::__ScrollView__ScrollType const& __get__scrollType() const;

  constexpr void __set__scrollType(::HMUI::__ScrollView__ScrollType value);

  constexpr float_t& __get__fixedCellSize();

  constexpr float_t const& __get__fixedCellSize() const;

  constexpr void __set__fixedCellSize(float_t value);

  constexpr float_t& __get__scrollItemRelativeThresholdPosition();

  constexpr float_t const& __get__scrollItemRelativeThresholdPosition() const;

  constexpr void __set__scrollItemRelativeThresholdPosition(float_t value);

  constexpr float_t& __get__pageStepNormalizedSize();

  constexpr float_t const& __get__pageStepNormalizedSize() const;

  constexpr void __set__pageStepNormalizedSize(float_t value);

  constexpr bool& __get__scrollingLastFrame();

  constexpr bool const& __get__scrollingLastFrame() const;

  constexpr void __set__scrollingLastFrame(bool value);

  constexpr bool& __get__isHoveredByPointer();

  constexpr bool const& __get__isHoveredByPointer() const;

  constexpr void __set__isHoveredByPointer(bool value);

  constexpr bool& __get__shouldAnimate();

  constexpr bool const& __get__shouldAnimate() const;

  constexpr void __set__shouldAnimate(bool value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__platformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__platformHelper() const;

  constexpr void __set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Action_1<float_t>*& __get_scrollPositionChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_scrollPositionChangedEvent() const;

  constexpr void __set_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr float_t& __get__destinationPos();

  constexpr float_t const& __get__destinationPos() const;

  constexpr void __set__destinationPos(float_t value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__scrollFocusPositions();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__scrollFocusPositions() const;

  constexpr void __set__scrollFocusPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::HMUI::EventSystemListener*& __get__eventSystemListener();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::EventSystemListener*> const& __get__eventSystemListener() const;

  constexpr void __set__eventSystemListener(::HMUI::EventSystemListener* value);

  constexpr ::HMUI::__ScrollView__ScrollDirection& __get__lastJoystickScrollDirection();

  constexpr ::HMUI::__ScrollView__ScrollDirection const& __get__lastJoystickScrollDirection() const;

  constexpr void __set__lastJoystickScrollDirection(::HMUI::__ScrollView__ScrollDirection value);

  constexpr float_t& __get__joystickScrollStartTime();

  constexpr float_t const& __get__joystickScrollStartTime() const;

  constexpr void __set__joystickScrollStartTime(float_t value);

  /// @brief Method add_scrollPositionChangedEvent addr 0x1feb540 size 0xb0 virtual false final false
  inline void add_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_scrollPositionChangedEvent addr 0x1feb5f0 size 0xb0 virtual false final false
  inline void remove_scrollPositionChangedEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_viewportTransform addr 0x1feb6a0 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_viewportTransform();

  /// @brief Method get_contentTransform addr 0x1feb6a8 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_contentTransform();

  /// @brief Method get_position addr 0x1feb6b0 size 0x30 virtual false final false
  inline float_t get_position();

  /// @brief Method get_scrollableSize addr 0x1feb6e0 size 0x34 virtual false final false
  inline float_t get_scrollableSize();

  /// @brief Method get_scrollPageSize addr 0x1feb768 size 0x54 virtual false final false
  inline float_t get_scrollPageSize();

  /// @brief Method get_contentSize addr 0x1feb714 size 0x54 virtual false final false
  inline float_t get_contentSize();

  /// @brief Method Awake addr 0x1feb7bc size 0x4e8 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x1febe48 size 0x13c virtual false final false
  inline void OnDestroy();

  /// @brief Method CheckScrollInput addr 0x1febf84 size 0x15c virtual false final false
  inline void CheckScrollInput();

  /// @brief Method Update addr 0x1fec628 size 0x120 virtual false final false
  inline void Update();

  /// @brief Method SetContentSize addr 0x1fec81c size 0x220 virtual false final false
  inline void SetContentSize(float_t contentSize);

  /// @brief Method UpdateContentSize addr 0x1febca4 size 0x94 virtual false final false
  inline void UpdateContentSize();

  /// @brief Method ScrollToEnd addr 0x1feca68 size 0x40 virtual false final false
  inline void ScrollToEnd(bool animated);

  /// @brief Method ScrollToWorldPosition addr 0x1fecaa8 size 0x48 virtual false final false
  inline void ScrollToWorldPosition(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, bool animated);

  /// @brief Method ScrollToWorldPositionIfOutsideArea addr 0x1fecba0 size 0xb0 virtual false final false
  inline void ScrollToWorldPositionIfOutsideArea(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, float_t relativeBoundaryStart, float_t relativeBoundaryEnd, bool animated);

  /// @brief Method ScrollTo addr 0x1feb474 size 0xc4 virtual false final false
  inline void ScrollTo(float_t destinationPos, bool animated);

  /// @brief Method WorldPositionToScrollViewPosition addr 0x1fecaf0 size 0xb0 virtual false final false
  inline ::UnityEngine::Vector2 WorldPositionToScrollViewPosition(::UnityEngine::Vector3 worldPosition);

  /// @brief Method SetDestinationPos addr 0x1fecc50 size 0x54 virtual false final false
  inline void SetDestinationPos(float_t value);

  /// @brief Method UpdateVerticalScrollIndicator addr 0x1fec748 size 0xd4 virtual false final false
  inline void UpdateVerticalScrollIndicator(float_t posY);

  /// @brief Method PageUpButtonPressed addr 0x1feccd0 size 0x2e4 virtual false final false
  inline void PageUpButtonPressed();

  /// @brief Method PageDownButtonPressed addr 0x1fecfbc size 0x314 virtual false final false
  inline void PageDownButtonPressed();

  /// @brief Method RefreshButtons addr 0x1febd38 size 0x110 virtual false final false
  inline void RefreshButtons();

  /// @brief Method HandlePointerDidEnter addr 0x1fed2d8 size 0x14 virtual false final false
  inline void HandlePointerDidEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method HandlePointerDidExit addr 0x1fed2ec size 0x8 virtual false final false
  inline void HandlePointerDidExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method HandleJoystickWasNotCenteredThisFrame addr 0x1fec0e0 size 0xf4 virtual false final false
  inline void HandleJoystickWasNotCenteredThisFrame(::UnityEngine::Vector2 deltaPos);

  /// @brief Method HandleJoystickWasCenteredThisFrame addr 0x1fec1d4 size 0x454 virtual false final false
  inline void HandleJoystickWasCenteredThisFrame();

  /// @brief Method ResolveScrollDirection addr 0x1fed2f4 size 0x50 virtual false final false
  inline ::HMUI::__ScrollView__ScrollDirection ResolveScrollDirection(::UnityEngine::Vector2 deltaPos);

  static inline ::HMUI::ScrollView* New_ctor();

  /// @brief Method .ctor addr 0x1fed354 size 0x30 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__42_0 addr 0x1fed384 size 0x3c virtual false final false
  inline float_t _Awake_b__42_0(::HMUI::ItemForFocussedScrolling* item);

  /// @brief Method <Awake>b__42_2 addr 0x1fed3c0 size 0x34 virtual false final false
  inline float_t _Awake_b__42_2(::HMUI::ItemForFocussedScrolling* item);

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView(ScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView(ScrollView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView();

public:
  /// @brief Field _viewport, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____viewport;

  /// @brief Field _contentRectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____contentRectTransform;

  /// @brief Field _scrollViewDirection, offset: 0x28, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollViewDirection ____scrollViewDirection;

  /// @brief Field _pageUpButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____pageUpButton;

  /// @brief Field _pageDownButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____pageDownButton;

  /// @brief Field _verticalScrollIndicator, offset: 0x40, size: 0x8, def value: None
  ::HMUI::VerticalScrollIndicator* ____verticalScrollIndicator;

  /// @brief Field _smooth, offset: 0x48, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _joystickScrollSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ____joystickScrollSpeed;

  /// @brief Field _joystickQuickSnapMaxTime, offset: 0x50, size: 0x4, def value: None
  float_t ____joystickQuickSnapMaxTime;

  /// @brief Field _scrollType, offset: 0x54, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollType ____scrollType;

  /// @brief Field _fixedCellSize, offset: 0x58, size: 0x4, def value: None
  float_t ____fixedCellSize;

  /// @brief Field _scrollItemRelativeThresholdPosition, offset: 0x5c, size: 0x4, def value: None
  float_t ____scrollItemRelativeThresholdPosition;

  /// @brief Field _pageStepNormalizedSize, offset: 0x60, size: 0x4, def value: None
  float_t ____pageStepNormalizedSize;

  /// @brief Field _scrollingLastFrame, offset: 0x64, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  /// @brief Field _isHoveredByPointer, offset: 0x65, size: 0x1, def value: None
  bool ____isHoveredByPointer;

  /// @brief Field _shouldAnimate, offset: 0x66, size: 0x1, def value: None
  bool ____shouldAnimate;

  /// @brief Field _platformHelper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____platformHelper;

  /// @brief Field scrollPositionChangedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___scrollPositionChangedEvent;

  /// @brief Field _buttonBinder, offset: 0x78, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _destinationPos, offset: 0x80, size: 0x4, def value: None
  float_t ____destinationPos;

  /// @brief Field _scrollFocusPositions, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____scrollFocusPositions;

  /// @brief Field _eventSystemListener, offset: 0x90, size: 0x8, def value: None
  ::HMUI::EventSystemListener* ____eventSystemListener;

  /// @brief Field _lastJoystickScrollDirection, offset: 0x98, size: 0x4, def value: None
  ::HMUI::__ScrollView__ScrollDirection ____lastJoystickScrollDirection;

  /// @brief Field _joystickScrollStartTime, offset: 0x9c, size: 0x4, def value: None
  float_t ____joystickScrollStartTime;

  /// @brief Field kThumbstickThreshold offset 0xffffffff size 0x4
  static constexpr float_t kThumbstickThreshold{ 0.01 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollView, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____viewport) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____contentRectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollViewDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageUpButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageDownButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____verticalScrollIndicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____smooth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickScrollSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickQuickSnapMaxTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____fixedCellSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollItemRelativeThresholdPosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____pageStepNormalizedSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollingLastFrame) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____isHoveredByPointer) == 0x65, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____shouldAnimate) == 0x66, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____platformHelper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ___scrollPositionChangedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____buttonBinder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____destinationPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____scrollFocusPositions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____eventSystemListener) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____lastJoystickScrollDirection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollView, ____joystickScrollStartTime) == 0x9c, "Offset mismatch!");

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

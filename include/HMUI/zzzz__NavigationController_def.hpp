#pragma once
// IWYU pragma private; include "HMUI/NavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationController)
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __NavigationController__Alignment;
}
namespace HMUI {
struct __NavigationController__Orientation;
}
namespace HMUI {
class __NavigationController____c__DisplayClass10_0;
}
namespace HMUI {
class __NavigationController____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
struct __NavigationController__Alignment;
}
namespace HMUI {
struct __NavigationController__Orientation;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
class __NavigationController____c__DisplayClass10_0;
}
namespace HMUI {
class __NavigationController____c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::HMUI::__NavigationController__Alignment);
MARK_VAL_T(::HMUI::__NavigationController__Orientation);
MARK_REF_PTR_T(::HMUI::NavigationController);
MARK_REF_PTR_T(::HMUI::__NavigationController____c__DisplayClass10_0);
MARK_REF_PTR_T(::HMUI::__NavigationController____c__DisplayClass8_0);
// Type: ::Orientation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::NavigationController::Orientation
struct CORDL_TYPE __NavigationController__Orientation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NavigationController__Orientation_Unwrapped
  enum struct ____NavigationController__Orientation_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NavigationController__Orientation_Unwrapped() const noexcept {
    return static_cast<____NavigationController__Orientation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationController__Orientation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NavigationController__Orientation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::HMUI::__NavigationController__Orientation const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::HMUI::__NavigationController__Orientation const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController__Orientation, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__NavigationController__Orientation, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::Alignment
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::NavigationController::Alignment
struct CORDL_TYPE __NavigationController__Alignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NavigationController__Alignment_Unwrapped
  enum struct ____NavigationController__Alignment_Unwrapped : int32_t {
    __E_Beginning = static_cast<int32_t>(0x0),
    __E_Middle = static_cast<int32_t>(0x1),
    __E_End = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NavigationController__Alignment_Unwrapped() const noexcept {
    return static_cast<____NavigationController__Alignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationController__Alignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NavigationController__Alignment(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Beginning value: static_cast<int32_t>(0x0)
  static ::HMUI::__NavigationController__Alignment const Beginning;

  /// @brief Field End value: static_cast<int32_t>(0x2)
  static ::HMUI::__NavigationController__Alignment const End;

  /// @brief Field Middle value: static_cast<int32_t>(0x1)
  static ::HMUI::__NavigationController__Alignment const Middle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController__Alignment, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__NavigationController__Alignment, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::NavigationController::<>c__DisplayClass8_0*
class CORDL_TYPE __NavigationController____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::NavigationController> __4__this;

  /// @brief Field endPositions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_endPositions, put = __cordl_internal_set_endPositions))::ArrayW<float_t, ::Array<float_t>*> endPositions;

  /// @brief Field startPositions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_startPositions, put = __cordl_internal_set_startPositions))::ArrayW<float_t, ::Array<float_t>*> startPositions;

  /// @brief Field viewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController))::UnityW<::HMUI::ViewController> viewController;

  static inline ::HMUI::__NavigationController____c__DisplayClass8_0* New_ctor();

  /// @brief Method <PushViewController>g__AnimationLayouter|0, addr 0x25263cc, size 0x2a8, virtual false, abstract: false, final false
  inline void _PushViewController_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  constexpr ::UnityW<::HMUI::NavigationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::NavigationController>& __cordl_internal_get___4__this();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_endPositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_endPositions();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_startPositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_startPositions();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::NavigationController> value);

  constexpr void __cordl_internal_set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x252611c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationController____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigationController____c__DisplayClass8_0(__NavigationController____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigationController____c__DisplayClass8_0(__NavigationController____c__DisplayClass8_0 const&) = delete;

  /// @brief Field startPositions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___startPositions;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::NavigationController> _____4__this;

  /// @brief Field viewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___viewController;

  /// @brief Field endPositions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___endPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController____c__DisplayClass8_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass8_0, ___startPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass8_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass8_0, ___viewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass8_0, ___endPositions) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::NavigationController::<>c__DisplayClass10_0*
class CORDL_TYPE __NavigationController____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::HMUI::NavigationController> __4__this;

  /// @brief Field endPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_endPositions, put = __cordl_internal_set_endPositions))::ArrayW<float_t, ::Array<float_t>*> endPositions;

  /// @brief Field moveOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) float_t moveOffset;

  /// @brief Field startPositions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_startPositions, put = __cordl_internal_set_startPositions))::ArrayW<float_t, ::Array<float_t>*> startPositions;

  static inline ::HMUI::__NavigationController____c__DisplayClass10_0* New_ctor();

  /// @brief Method <PopViewControllers>g__AnimationLayouter|0, addr 0x2526674, size 0x274, virtual false, abstract: false, final false
  inline void _PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                         ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* removingViewControllers);

  constexpr ::UnityW<::HMUI::NavigationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::NavigationController>& __cordl_internal_get___4__this();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_endPositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_endPositions();

  constexpr float_t const& __cordl_internal_get_moveOffset() const;

  constexpr float_t& __cordl_internal_get_moveOffset();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_startPositions() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_startPositions();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::NavigationController> value);

  constexpr void __cordl_internal_set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_moveOffset(float_t value);

  constexpr void __cordl_internal_set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x2526320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationController____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigationController____c__DisplayClass10_0(__NavigationController____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigationController____c__DisplayClass10_0(__NavigationController____c__DisplayClass10_0 const&) = delete;

  /// @brief Field startPositions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___startPositions;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::NavigationController> _____4__this;

  /// @brief Field endPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___endPositions;

  /// @brief Field moveOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___moveOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController____c__DisplayClass10_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass10_0, ___startPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass10_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass10_0, ___endPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__NavigationController____c__DisplayClass10_0, ___moveOffset) == 0x28, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::NavigationController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::NavigationController*
class CORDL_TYPE NavigationController : public ::HMUI::ContainerViewController {
public:
  // Declarations
  using Alignment = ::HMUI::__NavigationController__Alignment;

  using Orientation = ::HMUI::__NavigationController__Orientation;

  using __c__DisplayClass10_0 = ::HMUI::__NavigationController____c__DisplayClass10_0;

  using __c__DisplayClass8_0 = ::HMUI::__NavigationController____c__DisplayClass8_0;

  /// @brief Field _alignment, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__alignment, put = __cordl_internal_set__alignment))::HMUI::__NavigationController__Alignment _alignment;

  /// @brief Field _edgeSize, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__edgeSize, put = __cordl_internal_set__edgeSize)) float_t _edgeSize;

  /// @brief Field _orientation, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__orientation, put = __cordl_internal_set__orientation))::HMUI::__NavigationController__Orientation _orientation;

  /// @brief Field _reversedStacking, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__reversedStacking, put = __cordl_internal_set__reversedStacking)) bool _reversedStacking;

  /// @brief Field _viewControllersSeparator, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__viewControllersSeparator, put = __cordl_internal_set__viewControllersSeparator)) float_t _viewControllersSeparator;

  /// @brief Method GetNewPositionsForViewControllers, addr 0x2525afc, size 0x4f4, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers,
                                                                                ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* fixedViewControllers, float_t fixedEndPos);

  /// @brief Method LayoutViewControllers, addr 0x25259e4, size 0x118, virtual true, abstract: false, final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers);

  static inline ::HMUI::NavigationController* New_ctor();

  /// @brief Method PopViewController, addr 0x2526124, size 0x14, virtual false, abstract: false, final false
  inline void PopViewController(::System::Action* finishedCallback, bool immediately);

  /// @brief Method PopViewControllers, addr 0x2526138, size 0x1e8, virtual false, abstract: false, final false
  inline void PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method PositionVector, addr 0x252601c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 PositionVector(float_t pos);

  /// @brief Method PushViewController, addr 0x252603c, size 0xe0, virtual false, abstract: false, final false
  inline void PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method SetupViewControllerRect, addr 0x2525ff0, size 0x2c, virtual false, abstract: false, final false
  inline void SetupViewControllerRect(::HMUI::ViewController* viewController);

  constexpr ::HMUI::__NavigationController__Alignment const& __cordl_internal_get__alignment() const;

  constexpr ::HMUI::__NavigationController__Alignment& __cordl_internal_get__alignment();

  constexpr float_t const& __cordl_internal_get__edgeSize() const;

  constexpr float_t& __cordl_internal_get__edgeSize();

  constexpr ::HMUI::__NavigationController__Orientation const& __cordl_internal_get__orientation() const;

  constexpr ::HMUI::__NavigationController__Orientation& __cordl_internal_get__orientation();

  constexpr bool const& __cordl_internal_get__reversedStacking() const;

  constexpr bool& __cordl_internal_get__reversedStacking();

  constexpr float_t const& __cordl_internal_get__viewControllersSeparator() const;

  constexpr float_t& __cordl_internal_get__viewControllersSeparator();

  constexpr void __cordl_internal_set__alignment(::HMUI::__NavigationController__Alignment value);

  constexpr void __cordl_internal_set__edgeSize(float_t value);

  constexpr void __cordl_internal_set__orientation(::HMUI::__NavigationController__Orientation value);

  constexpr void __cordl_internal_set__reversedStacking(bool value);

  constexpr void __cordl_internal_set__viewControllersSeparator(float_t value);

  /// @brief Method .ctor, addr 0x25263bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationController(NavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationController(NavigationController const&) = delete;

  /// @brief Field _orientation, offset: 0x80, size: 0x4, def value: None
  ::HMUI::__NavigationController__Orientation ____orientation;

  /// @brief Field _reversedStacking, offset: 0x84, size: 0x1, def value: None
  bool ____reversedStacking;

  /// @brief Field _alignment, offset: 0x88, size: 0x4, def value: None
  ::HMUI::__NavigationController__Alignment ____alignment;

  /// @brief Field _edgeSize, offset: 0x8c, size: 0x4, def value: None
  float_t ____edgeSize;

  /// @brief Field _viewControllersSeparator, offset: 0x90, size: 0x4, def value: None
  float_t ____viewControllersSeparator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NavigationController, 0x98>, "Size mismatch!");

static_assert(offsetof(::HMUI::NavigationController, ____orientation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::NavigationController, ____reversedStacking) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HMUI::NavigationController, ____alignment) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::NavigationController, ____edgeSize) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HMUI::NavigationController, ____viewControllersSeparator) == 0x90, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController__Alignment, "HMUI", "NavigationController/Alignment");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController__Orientation, "HMUI", "NavigationController/Orientation");
NEED_NO_BOX(::HMUI::NavigationController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NavigationController*, "HMUI", "NavigationController");
NEED_NO_BOX(::HMUI::__NavigationController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController____c__DisplayClass10_0*, "HMUI", "NavigationController/<>c__DisplayClass10_0");
NEED_NO_BOX(::HMUI::__NavigationController____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController____c__DisplayClass8_0*, "HMUI", "NavigationController/<>c__DisplayClass8_0");

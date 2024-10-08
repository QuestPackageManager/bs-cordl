#pragma once
// IWYU pragma private; include "HMUI/StackedController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StackedController)
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __StackedController____c__DisplayClass5_0;
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
// Forward declare root types
namespace HMUI {
class StackedController;
}
namespace HMUI {
class __StackedController____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::StackedController);
MARK_REF_PTR_T(::HMUI::__StackedController____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::StackedController::<>c__DisplayClass5_0*
class CORDL_TYPE __StackedController____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field numberOfViewControllersToPop, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_numberOfViewControllersToPop, put = __cordl_internal_set_numberOfViewControllersToPop)) int32_t numberOfViewControllersToPop;

  static inline ::HMUI::__StackedController____c__DisplayClass5_0* New_ctor();

  /// @brief Method <PopViewControllers>g__AnimationLayouter|0, addr 0x224c524, size 0x74, virtual false, abstract: false, final false
  inline void _PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                         ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* removingViewControllers);

  constexpr int32_t const& __cordl_internal_get_numberOfViewControllersToPop() const;

  constexpr int32_t& __cordl_internal_get_numberOfViewControllersToPop();

  constexpr void __cordl_internal_set_numberOfViewControllersToPop(int32_t value);

  /// @brief Method .ctor, addr 0x224c480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StackedController____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StackedController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StackedController____c__DisplayClass5_0(__StackedController____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StackedController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StackedController____c__DisplayClass5_0(__StackedController____c__DisplayClass5_0 const&) = delete;

  /// @brief Field numberOfViewControllersToPop, offset: 0x10, size: 0x4, def value: None
  int32_t ___numberOfViewControllersToPop;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__StackedController____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__StackedController____c__DisplayClass5_0, ___numberOfViewControllersToPop) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::StackedController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::StackedController*
class CORDL_TYPE StackedController : public ::HMUI::ContainerViewController {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::HMUI::__StackedController____c__DisplayClass5_0;

  __declspec(property(get = get_topStackedViewController)) ::UnityW<::HMUI::ViewController> topStackedViewController;

  /// @brief Method LayoutViewControllers, addr 0x224c0ec, size 0xe8, virtual true, abstract: false, final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers);

  static inline ::HMUI::StackedController* New_ctor();

  /// @brief Method PopViewController, addr 0x224c2c0, size 0x14, virtual false, abstract: false, final false
  inline void PopViewController(::System::Action* finishedCallback, bool immediately);

  /// @brief Method PopViewControllers, addr 0x224c2d4, size 0x1ac, virtual false, abstract: false, final false
  inline void PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method PushViewController, addr 0x224c220, size 0xa0, virtual false, abstract: false, final false
  inline void PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method SetupViewControllerRect, addr 0x224c1d4, size 0x28, virtual false, abstract: false, final false
  static inline void SetupViewControllerRect(::HMUI::ViewController* viewController, int32_t index);

  /// @brief Method <PushViewController>g__AnimationLayouter|3_0, addr 0x224c48c, size 0x98, virtual false, abstract: false, final false
  static inline void _PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  /// @brief Method .ctor, addr 0x224c488, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_topStackedViewController, addr 0x224c074, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_topStackedViewController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackedController(StackedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackedController(StackedController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::StackedController, 0x88>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::StackedController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackedController*, "HMUI", "StackedController");
NEED_NO_BOX(::HMUI::__StackedController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__StackedController____c__DisplayClass5_0*, "HMUI", "StackedController/<>c__DisplayClass5_0");

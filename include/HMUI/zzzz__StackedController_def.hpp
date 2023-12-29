#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StackedController)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HMUI {
class __StackedController____c__DisplayClass5_0;
}
namespace System {
class Action;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13712))
// CS Name: ::StackedController::<>c__DisplayClass5_0*
class CORDL_TYPE __StackedController____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field numberOfViewControllersToPop, offset 0x10, size 0x4
  __declspec(property(get = __get_numberOfViewControllersToPop, put = __set_numberOfViewControllersToPop)) int32_t numberOfViewControllersToPop;

  constexpr int32_t& __get_numberOfViewControllersToPop();

  constexpr int32_t const& __get_numberOfViewControllersToPop() const;

  constexpr void __set_numberOfViewControllersToPop(int32_t value);

  static inline ::HMUI::__StackedController____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x1fd5310 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PopViewControllers>g__AnimationLayouter|0 addr 0x1fd544c size 0x74 virtual false final false
  inline void _PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                         ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* removingViewControllers);

  // Ctor Parameters [CppParam { name: "", ty: "__StackedController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StackedController____c__DisplayClass5_0(__StackedController____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StackedController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StackedController____c__DisplayClass5_0(__StackedController____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StackedController____c__DisplayClass5_0();

public:
  /// @brief Field numberOfViewControllersToPop, offset: 0x10, size: 0x4, def value: None
  int32_t ___numberOfViewControllersToPop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__StackedController____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::HMUI::__StackedController____c__DisplayClass5_0, ___numberOfViewControllersToPop) == 0x10, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::StackedController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13689))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13713))
// CS Name: ::HMUI::StackedController*
class CORDL_TYPE StackedController : public ::HMUI::ContainerViewController {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::HMUI::__StackedController____c__DisplayClass5_0;

  __declspec(property(get = get_topStackedViewController))::HMUI::ViewController* topStackedViewController;

  /// @brief Method get_topStackedViewController addr 0x1fd4ef0 size 0x78 virtual false final false
  inline ::HMUI::ViewController* get_topStackedViewController();

  /// @brief Method LayoutViewControllers addr 0x1fd4f68 size 0xe8 virtual true final false
  inline void LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers);

  /// @brief Method PushViewController addr 0x1fd509c size 0xac virtual false final false
  inline void PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method PopViewController addr 0x1fd5148 size 0x14 virtual false final false
  inline void PopViewController(::System::Action* finishedCallback, bool immediately);

  /// @brief Method PopViewControllers addr 0x1fd515c size 0x1b4 virtual false final false
  inline void PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method SetupViewControllerRect addr 0x1fd5050 size 0x28 virtual false final false
  static inline void SetupViewControllerRect(::HMUI::ViewController* viewController, int32_t index);

  static inline ::HMUI::StackedController* New_ctor();

  /// @brief Method .ctor addr 0x1fd53ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PushViewController>g__AnimationLayouter|3_0 addr 0x1fd53b4 size 0x98 virtual false final false
  static inline void _PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  // Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackedController(StackedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackedController(StackedController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackedController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::StackedController, 0x80>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::StackedController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackedController*, "HMUI", "StackedController");
NEED_NO_BOX(::HMUI::__StackedController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__StackedController____c__DisplayClass5_0*, "HMUI", "StackedController/<>c__DisplayClass5_0");

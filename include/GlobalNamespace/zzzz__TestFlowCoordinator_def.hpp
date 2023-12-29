#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(TestFlowCoordinator)
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class TestFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestFlowCoordinator);
// Type: ::TestFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13699))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5622))
// CS Name: ::TestFlowCoordinator*
class CORDL_TYPE TestFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _viewController, offset 0xa8, size 0x8
  __declspec(property(get = __get__viewController, put = __set__viewController))::HMUI::ViewController* _viewController;

  /// @brief Field _leftViewController, offset 0xb0, size 0x8
  __declspec(property(get = __get__leftViewController, put = __set__leftViewController))::HMUI::ViewController* _leftViewController;

  /// @brief Field _rightViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__rightViewController, put = __set__rightViewController))::HMUI::ViewController* _rightViewController;

  /// @brief Field _bottomScreenViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__bottomScreenViewController, put = __set__bottomScreenViewController))::HMUI::ViewController* _bottomScreenViewController;

  /// @brief Field _topScreenViewController, offset 0xc8, size 0x8
  __declspec(property(get = __get__topScreenViewController, put = __set__topScreenViewController))::HMUI::ViewController* _topScreenViewController;

  constexpr ::HMUI::ViewController*& __get__viewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__viewController() const;

  constexpr void __set__viewController(::HMUI::ViewController* value);

  constexpr ::HMUI::ViewController*& __get__leftViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__leftViewController() const;

  constexpr void __set__leftViewController(::HMUI::ViewController* value);

  constexpr ::HMUI::ViewController*& __get__rightViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__rightViewController() const;

  constexpr void __set__rightViewController(::HMUI::ViewController* value);

  constexpr ::HMUI::ViewController*& __get__bottomScreenViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__bottomScreenViewController() const;

  constexpr void __set__bottomScreenViewController(::HMUI::ViewController* value);

  constexpr ::HMUI::ViewController*& __get__topScreenViewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get__topScreenViewController() const;

  constexpr void __set__topScreenViewController(::HMUI::ViewController* value);

  /// @brief Method DidActivate addr 0x2159204 size 0x1c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::TestFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x2159220 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestFlowCoordinator(TestFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestFlowCoordinator(TestFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestFlowCoordinator();

public:
  /// @brief Field _viewController, offset: 0xa8, size: 0x8, def value: None
  ::HMUI::ViewController* ____viewController;

  /// @brief Field _leftViewController, offset: 0xb0, size: 0x8, def value: None
  ::HMUI::ViewController* ____leftViewController;

  /// @brief Field _rightViewController, offset: 0xb8, size: 0x8, def value: None
  ::HMUI::ViewController* ____rightViewController;

  /// @brief Field _bottomScreenViewController, offset: 0xc0, size: 0x8, def value: None
  ::HMUI::ViewController* ____bottomScreenViewController;

  /// @brief Field _topScreenViewController, offset: 0xc8, size: 0x8, def value: None
  ::HMUI::ViewController* ____topScreenViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestFlowCoordinator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____viewController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____leftViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____rightViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____bottomScreenViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____topScreenViewController) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestFlowCoordinator*, "", "TestFlowCoordinator");

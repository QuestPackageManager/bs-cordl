#pragma once
// IWYU pragma private; include "GlobalNamespace/TestFlowCoordinator.hpp"
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
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestFlowCoordinator
class CORDL_TYPE TestFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _bottomScreenViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__bottomScreenViewController, put = __cordl_internal_set__bottomScreenViewController)) ::UnityW<::HMUI::ViewController> _bottomScreenViewController;

  /// @brief Field _leftViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftViewController, put = __cordl_internal_set__leftViewController)) ::UnityW<::HMUI::ViewController> _leftViewController;

  /// @brief Field _rightViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightViewController, put = __cordl_internal_set__rightViewController)) ::UnityW<::HMUI::ViewController> _rightViewController;

  /// @brief Field _topScreenViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__topScreenViewController, put = __cordl_internal_set__topScreenViewController)) ::UnityW<::HMUI::ViewController> _topScreenViewController;

  /// @brief Field _viewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__viewController, put = __cordl_internal_set__viewController)) ::UnityW<::HMUI::ViewController> _viewController;

  /// @brief Method DidActivate, addr 0x3b4f0fc, size 0x1c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::TestFlowCoordinator* New_ctor();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__bottomScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__bottomScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__leftViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__leftViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__rightViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__rightViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__topScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__topScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__viewController();

  constexpr void __cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__leftViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__rightViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x3b4f118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestFlowCoordinator(TestFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestFlowCoordinator(TestFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5310 };

  /// @brief Field _viewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____viewController;

  /// @brief Field _leftViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____leftViewController;

  /// @brief Field _rightViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____rightViewController;

  /// @brief Field _bottomScreenViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____bottomScreenViewController;

  /// @brief Field _topScreenViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____topScreenViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____viewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____leftViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____rightViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____bottomScreenViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestFlowCoordinator, ____topScreenViewController) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestFlowCoordinator, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestFlowCoordinator*, "", "TestFlowCoordinator");

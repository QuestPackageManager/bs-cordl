#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(StartupErrorFlowCoordinator)
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
namespace GlobalNamespace {
class StartupErrorViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartupErrorFlowCoordinator);
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorFlowCoordinator
class CORDL_TYPE StartupErrorFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _startupErrorSceneSetupData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorSceneSetupData,
                      put = __cordl_internal_set__startupErrorSceneSetupData)) ::GlobalNamespace::StartupErrorSceneSetupData* _startupErrorSceneSetupData;

  /// @brief Field _startupErrorViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorViewController, put = __cordl_internal_set__startupErrorViewController)) ::UnityW<::GlobalNamespace::StartupErrorViewController>
      _startupErrorViewController;

  /// @brief Method DidActivate, addr 0x5864f64, size 0x80, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::StartupErrorFlowCoordinator* New_ctor();

  constexpr ::GlobalNamespace::StartupErrorSceneSetupData* const& __cordl_internal_get__startupErrorSceneSetupData() const;

  constexpr ::GlobalNamespace::StartupErrorSceneSetupData*& __cordl_internal_get__startupErrorSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::StartupErrorViewController> const& __cordl_internal_get__startupErrorViewController() const;

  constexpr ::UnityW<::GlobalNamespace::StartupErrorViewController>& __cordl_internal_get__startupErrorViewController();

  constexpr void __cordl_internal_set__startupErrorSceneSetupData(::GlobalNamespace::StartupErrorSceneSetupData* value);

  constexpr void __cordl_internal_set__startupErrorViewController(::UnityW<::GlobalNamespace::StartupErrorViewController> value);

  /// @brief Method .ctor, addr 0x5864fe4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorFlowCoordinator(StartupErrorFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorFlowCoordinator(StartupErrorFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6387 };

  /// @brief Field _startupErrorViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StartupErrorViewController> ____startupErrorViewController;

  /// @brief Field _startupErrorSceneSetupData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::StartupErrorSceneSetupData* ____startupErrorSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartupErrorFlowCoordinator, ____startupErrorViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartupErrorFlowCoordinator, ____startupErrorSceneSetupData) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartupErrorFlowCoordinator, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartupErrorFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartupErrorFlowCoordinator*, "", "StartupErrorFlowCoordinator");

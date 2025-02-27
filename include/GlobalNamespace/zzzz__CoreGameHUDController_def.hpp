#pragma once
// IWYU pragma private; include "GlobalNamespace/CoreGameHUDController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoreGameHUDController)
namespace GlobalNamespace {
class CoreGameHUDController_InitData;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace GlobalNamespace {
class CoreGameHUDController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoreGameHUDController);
MARK_REF_PTR_T(::GlobalNamespace::CoreGameHUDController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoreGameHUDController/InitData
class CORDL_TYPE CoreGameHUDController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field advancedHUD, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHUD, put = __cordl_internal_set_advancedHUD)) bool advancedHUD;

  /// @brief Field hide, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hide, put = __cordl_internal_set_hide)) bool hide;

  /// @brief Field showEnergyPanel, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_showEnergyPanel, put = __cordl_internal_set_showEnergyPanel)) bool showEnergyPanel;

  static inline ::GlobalNamespace::CoreGameHUDController_InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD);

  constexpr bool const& __cordl_internal_get_advancedHUD() const;

  constexpr bool& __cordl_internal_get_advancedHUD();

  constexpr bool const& __cordl_internal_get_hide() const;

  constexpr bool& __cordl_internal_get_hide();

  constexpr bool const& __cordl_internal_get_showEnergyPanel() const;

  constexpr bool& __cordl_internal_get_showEnergyPanel();

  constexpr void __cordl_internal_set_advancedHUD(bool value);

  constexpr void __cordl_internal_set_hide(bool value);

  constexpr void __cordl_internal_set_showEnergyPanel(bool value);

  /// @brief Method .ctor, addr 0x3bb41fc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool hide, bool showEnergyPanel, bool advancedHUD);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreGameHUDController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreGameHUDController_InitData(CoreGameHUDController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreGameHUDController_InitData(CoreGameHUDController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4407 };

  /// @brief Field hide, offset: 0x10, size: 0x1, def value: None
  bool ___hide;

  /// @brief Field showEnergyPanel, offset: 0x11, size: 0x1, def value: None
  bool ___showEnergyPanel;

  /// @brief Field advancedHUD, offset: 0x12, size: 0x1, def value: None
  bool ___advancedHUD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoreGameHUDController_InitData, ___hide) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController_InitData, ___showEnergyPanel) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController_InitData, ___advancedHUD) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreGameHUDController_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoreGameHUDController
class CORDL_TYPE CoreGameHUDController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::CoreGameHUDController_InitData;

  /// @brief Field _canvasGroup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _energyPanelGO, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__energyPanelGO, put = __cordl_internal_set__energyPanelGO)) ::UnityW<::UnityEngine::GameObject> _energyPanelGO;

  /// @brief Field _immediateRankGO, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__immediateRankGO, put = __cordl_internal_set__immediateRankGO)) ::UnityW<::UnityEngine::GameObject> _immediateRankGO;

  /// @brief Field _relativeScoreGO, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeScoreGO, put = __cordl_internal_set__relativeScoreGO)) ::UnityW<::UnityEngine::GameObject> _relativeScoreGO;

  /// @brief Field _songProgressPanelGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songProgressPanelGO, put = __cordl_internal_set__songProgressPanelGO)) ::UnityW<::UnityEngine::GameObject> _songProgressPanelGO;

  __declspec(property(put = set_alpha)) float_t alpha;

  __declspec(property(get = get_energyPanelGo)) ::UnityW<::UnityEngine::GameObject> energyPanelGo;

  __declspec(property(get = get_immediateRankGo)) ::UnityW<::UnityEngine::GameObject> immediateRankGo;

  __declspec(property(get = get_relativeScoreGo)) ::UnityW<::UnityEngine::GameObject> relativeScoreGo;

  __declspec(property(get = get_songProgressPanelGO)) ::UnityW<::UnityEngine::GameObject> songProgressPanelGO;

  /// @brief Method Initialize, addr 0x3bb4164, size 0x90, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::CoreGameHUDController_InitData* initData);

  static inline ::GlobalNamespace::CoreGameHUDController* New_ctor();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__energyPanelGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__energyPanelGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__immediateRankGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__immediateRankGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__relativeScoreGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__relativeScoreGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__songProgressPanelGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__songProgressPanelGO();

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__energyPanelGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__immediateRankGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__relativeScoreGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__songProgressPanelGO(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3bb41f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_energyPanelGo, addr 0x3bb4140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_energyPanelGo();

  /// @brief Method get_immediateRankGo, addr 0x3bb4138, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_immediateRankGo();

  /// @brief Method get_relativeScoreGo, addr 0x3bb4130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_relativeScoreGo();

  /// @brief Method get_songProgressPanelGO, addr 0x3bb4128, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_songProgressPanelGO();

  /// @brief Method set_alpha, addr 0x3bb4148, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreGameHUDController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreGameHUDController(CoreGameHUDController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreGameHUDController(CoreGameHUDController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4408 };

  /// @brief Field _songProgressPanelGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____songProgressPanelGO;

  /// @brief Field _relativeScoreGO, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____relativeScoreGO;

  /// @brief Field _immediateRankGO, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____immediateRankGO;

  /// @brief Field _energyPanelGO, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____energyPanelGO;

  /// @brief Field _canvasGroup, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____songProgressPanelGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____relativeScoreGO) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____immediateRankGO) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____energyPanelGO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____canvasGroup) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreGameHUDController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoreGameHUDController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreGameHUDController*, "", "CoreGameHUDController");
NEED_NO_BOX(::GlobalNamespace::CoreGameHUDController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreGameHUDController_InitData*, "", "CoreGameHUDController/InitData");

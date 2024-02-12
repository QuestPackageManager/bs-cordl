#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoreGameHUDController)
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
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
class __CoreGameHUDController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoreGameHUDController);
MARK_REF_PTR_T(::GlobalNamespace::__CoreGameHUDController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4384))
// CS Name: ::CoreGameHUDController::InitData*
class CORDL_TYPE __CoreGameHUDController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hide, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hide, put = __cordl_internal_set_hide)) bool hide;

  /// @brief Field showEnergyPanel, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_showEnergyPanel, put = __cordl_internal_set_showEnergyPanel)) bool showEnergyPanel;

  /// @brief Field advancedHUD, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHUD, put = __cordl_internal_set_advancedHUD)) bool advancedHUD;

  constexpr bool& __cordl_internal_get_hide();

  constexpr bool const& __cordl_internal_get_hide() const;

  constexpr void __cordl_internal_set_hide(bool value);

  constexpr bool& __cordl_internal_get_showEnergyPanel();

  constexpr bool const& __cordl_internal_get_showEnergyPanel() const;

  constexpr void __cordl_internal_set_showEnergyPanel(bool value);

  constexpr bool& __cordl_internal_get_advancedHUD();

  constexpr bool const& __cordl_internal_get_advancedHUD() const;

  constexpr void __cordl_internal_set_advancedHUD(bool value);

  static inline ::GlobalNamespace::__CoreGameHUDController__InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD);

  /// @brief Method .ctor, addr 0x237d718, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool hide, bool showEnergyPanel, bool advancedHUD);

  // Ctor Parameters [CppParam { name: "", ty: "__CoreGameHUDController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreGameHUDController__InitData(__CoreGameHUDController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreGameHUDController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreGameHUDController__InitData(__CoreGameHUDController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreGameHUDController__InitData();

public:
  /// @brief Field hide, offset: 0x10, size: 0x1, def value: None
  bool ___hide;

  /// @brief Field showEnergyPanel, offset: 0x11, size: 0x1, def value: None
  bool ___showEnergyPanel;

  /// @brief Field advancedHUD, offset: 0x12, size: 0x1, def value: None
  bool ___advancedHUD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CoreGameHUDController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoreGameHUDController__InitData, ___hide) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoreGameHUDController__InitData, ___showEnergyPanel) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CoreGameHUDController__InitData, ___advancedHUD) == 0x12, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CoreGameHUDController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4385))
// CS Name: ::CoreGameHUDController*
class CORDL_TYPE CoreGameHUDController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__CoreGameHUDController__InitData;

  /// @brief Field _songProgressPanelGO, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__songProgressPanelGO, put = __cordl_internal_set__songProgressPanelGO))::UnityW<::UnityEngine::GameObject> _songProgressPanelGO;

  /// @brief Field _relativeScoreGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeScoreGO, put = __cordl_internal_set__relativeScoreGO))::UnityW<::UnityEngine::GameObject> _relativeScoreGO;

  /// @brief Field _immediateRankGO, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__immediateRankGO, put = __cordl_internal_set__immediateRankGO))::UnityW<::UnityEngine::GameObject> _immediateRankGO;

  /// @brief Field _energyPanelGO, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__energyPanelGO, put = __cordl_internal_set__energyPanelGO))::UnityW<::UnityEngine::GameObject> _energyPanelGO;

  /// @brief Field _canvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  __declspec(property(get = get_songProgressPanelGO))::UnityW<::UnityEngine::GameObject> songProgressPanelGO;

  __declspec(property(get = get_relativeScoreGo))::UnityW<::UnityEngine::GameObject> relativeScoreGo;

  __declspec(property(get = get_immediateRankGo))::UnityW<::UnityEngine::GameObject> immediateRankGo;

  __declspec(property(get = get_energyPanelGo))::UnityW<::UnityEngine::GameObject> energyPanelGo;

  __declspec(property(put = set_alpha)) float_t alpha;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__songProgressPanelGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__songProgressPanelGO() const;

  constexpr void __cordl_internal_set__songProgressPanelGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__relativeScoreGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__relativeScoreGO() const;

  constexpr void __cordl_internal_set__relativeScoreGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__immediateRankGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__immediateRankGO() const;

  constexpr void __cordl_internal_set__immediateRankGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__energyPanelGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__energyPanelGO() const;

  constexpr void __cordl_internal_set__energyPanelGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  /// @brief Method get_songProgressPanelGO, addr 0x237d644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_songProgressPanelGO();

  /// @brief Method get_relativeScoreGo, addr 0x237d64c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_relativeScoreGo();

  /// @brief Method get_immediateRankGo, addr 0x237d654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_immediateRankGo();

  /// @brief Method get_energyPanelGo, addr 0x237d65c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_energyPanelGo();

  /// @brief Method set_alpha, addr 0x237d664, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method Initialize, addr 0x237d680, size 0x90, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__CoreGameHUDController__InitData* initData);

  static inline ::GlobalNamespace::CoreGameHUDController* New_ctor();

  /// @brief Method .ctor, addr 0x237d710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreGameHUDController(CoreGameHUDController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreGameHUDController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreGameHUDController(CoreGameHUDController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreGameHUDController();

public:
  /// @brief Field _songProgressPanelGO, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____songProgressPanelGO;

  /// @brief Field _relativeScoreGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____relativeScoreGO;

  /// @brief Field _immediateRankGO, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____immediateRankGO;

  /// @brief Field _energyPanelGO, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____energyPanelGO;

  /// @brief Field _canvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreGameHUDController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____songProgressPanelGO) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____relativeScoreGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____immediateRankGO) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____energyPanelGO) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoreGameHUDController, ____canvasGroup) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoreGameHUDController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreGameHUDController*, "", "CoreGameHUDController");
NEED_NO_BOX(::GlobalNamespace::__CoreGameHUDController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CoreGameHUDController__InitData*, "", "CoreGameHUDController/InitData");

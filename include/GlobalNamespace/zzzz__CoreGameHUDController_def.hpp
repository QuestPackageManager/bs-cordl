#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoreGameHUDController)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5031))
// CS Name: ::CoreGameHUDController::InitData*
class CORDL_TYPE __CoreGameHUDController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hide, offset 0x10, size 0x1
  __declspec(property(get = __get_hide, put = __set_hide)) bool hide;

  /// @brief Field showEnergyPanel, offset 0x11, size 0x1
  __declspec(property(get = __get_showEnergyPanel, put = __set_showEnergyPanel)) bool showEnergyPanel;

  /// @brief Field advancedHUD, offset 0x12, size 0x1
  __declspec(property(get = __get_advancedHUD, put = __set_advancedHUD)) bool advancedHUD;

  constexpr bool& __get_hide();

  constexpr bool const& __get_hide() const;

  constexpr void __set_hide(bool value);

  constexpr bool& __get_showEnergyPanel();

  constexpr bool const& __get_showEnergyPanel() const;

  constexpr void __set_showEnergyPanel(bool value);

  constexpr bool& __get_advancedHUD();

  constexpr bool const& __get_advancedHUD() const;

  constexpr void __set_advancedHUD(bool value);

  static inline ::GlobalNamespace::__CoreGameHUDController__InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD);

  /// @brief Method .ctor, addr 0x23c0068, size 0x40, virtual false, abstract: false, final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5032))
// CS Name: ::CoreGameHUDController*
class CORDL_TYPE CoreGameHUDController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__CoreGameHUDController__InitData;

  /// @brief Field _songProgressPanelGO, offset 0x18, size 0x8
  __declspec(property(get = __get__songProgressPanelGO, put = __set__songProgressPanelGO))::UnityEngine::GameObject* _songProgressPanelGO;

  /// @brief Field _relativeScoreGO, offset 0x20, size 0x8
  __declspec(property(get = __get__relativeScoreGO, put = __set__relativeScoreGO))::UnityEngine::GameObject* _relativeScoreGO;

  /// @brief Field _immediateRankGO, offset 0x28, size 0x8
  __declspec(property(get = __get__immediateRankGO, put = __set__immediateRankGO))::UnityEngine::GameObject* _immediateRankGO;

  /// @brief Field _energyPanelGO, offset 0x30, size 0x8
  __declspec(property(get = __get__energyPanelGO, put = __set__energyPanelGO))::UnityEngine::GameObject* _energyPanelGO;

  /// @brief Field _canvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  __declspec(property(get = get_songProgressPanelGO))::UnityEngine::GameObject* songProgressPanelGO;

  __declspec(property(get = get_relativeScoreGo))::UnityEngine::GameObject* relativeScoreGo;

  __declspec(property(get = get_immediateRankGo))::UnityEngine::GameObject* immediateRankGo;

  __declspec(property(get = get_energyPanelGo))::UnityEngine::GameObject* energyPanelGo;

  __declspec(property(put = set_alpha)) float_t alpha;

  constexpr ::UnityEngine::GameObject*& __get__songProgressPanelGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__songProgressPanelGO() const;

  constexpr void __set__songProgressPanelGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__relativeScoreGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__relativeScoreGO() const;

  constexpr void __set__relativeScoreGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__immediateRankGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__immediateRankGO() const;

  constexpr void __set__immediateRankGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__energyPanelGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__energyPanelGO() const;

  constexpr void __set__energyPanelGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  /// @brief Method get_songProgressPanelGO, addr 0x23bff94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_songProgressPanelGO();

  /// @brief Method get_relativeScoreGo, addr 0x23bff9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_relativeScoreGo();

  /// @brief Method get_immediateRankGo, addr 0x23bffa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_immediateRankGo();

  /// @brief Method get_energyPanelGo, addr 0x23bffac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_energyPanelGo();

  /// @brief Method set_alpha, addr 0x23bffb4, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method Initialize, addr 0x23bffd0, size 0x90, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__CoreGameHUDController__InitData* initData);

  static inline ::GlobalNamespace::CoreGameHUDController* New_ctor();

  /// @brief Method .ctor, addr 0x23c0060, size 0x8, virtual false, abstract: false, final false
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
  ::UnityEngine::GameObject* ____songProgressPanelGO;

  /// @brief Field _relativeScoreGO, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____relativeScoreGO;

  /// @brief Field _immediateRankGO, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____immediateRankGO;

  /// @brief Field _energyPanelGO, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____energyPanelGO;

  /// @brief Field _canvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

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

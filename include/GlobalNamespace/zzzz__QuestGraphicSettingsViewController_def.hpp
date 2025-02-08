#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestGraphicSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuestGraphicSettingsViewController)
namespace GlobalNamespace {
class PresetsSettingsController;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestGraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestGraphicSettingsViewController);
// Dependencies GraphicSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuestGraphicSettingsViewController
class CORDL_TYPE QuestGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  /// @brief Field _120HzMode, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__120HzMode, put = __cordl_internal_set__120HzMode)) ::UnityW<::UnityEngine::UI::Toggle> _120HzMode;

  /// @brief Field _mirror, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__mirror, put = __cordl_internal_set__mirror)) ::UnityW<::GlobalNamespace::PresetsSettingsController> _mirror;

  /// @brief Field _stinsonOnlyEntries, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__stinsonOnlyEntries,
                      put = __cordl_internal_set__stinsonOnlyEntries)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _stinsonOnlyEntries;

  /// @brief Method DidActivate, addr 0x3afee4c, size 0x24c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3aff098, size 0x108, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Handle120HzToggleValueChanged, addr 0x3aff1bc, size 0x40, virtual false, abstract: false, final false
  inline void Handle120HzToggleValueChanged(bool newState);

  /// @brief Method HandleMirrorChanged, addr 0x3aff1a0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMirrorChanged(int32_t newValue);

  static inline ::GlobalNamespace::QuestGraphicSettingsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__120HzMode() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__120HzMode();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mirror() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mirror();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__stinsonOnlyEntries() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__stinsonOnlyEntries();

  constexpr void __cordl_internal_set__120HzMode(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__mirror(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__stinsonOnlyEntries(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x3aff1fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestGraphicSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4949 };

  /// @brief Field _mirror, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mirror;

  /// @brief Field _120HzMode, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____stinsonOnlyEntries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____mirror) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____120HzMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____stinsonOnlyEntries) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestGraphicSettingsViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestGraphicSettingsViewController*, "", "QuestGraphicSettingsViewController");

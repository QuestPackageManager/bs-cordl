#pragma once
// IWYU pragma private; include "GlobalNamespace/PCAppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PCAppInit)
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
template <typename T> class LazyInject_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PCAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PCAppInit);
// Dependencies BeatSaber.Init.BSAppInit
namespace GlobalNamespace {
// Is value type: false
// CS Name: PCAppInit
class CORDL_TYPE PCAppInit : public ::BeatSaber::Init::BSAppInit {
public:
  // Declarations
  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit)) ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>
      _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSystemInit, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit)) ::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel,
                      put = __cordl_internal_set__playerDataModel)) ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* _playerDataModel;

  /// @brief Field _settingsApplicator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x271b4c0, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method InstallBindings, addr 0x271b7ec, size 0x244, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PCAppInit* New_ctor();

  /// @brief Method RepeatableSetupAsync, addr 0x271b528, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x271b5c8, size 0x224, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* const& __cordl_internal_get__playerDataModel() const;

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>*& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__playerDataModel(::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  /// @brief Method .ctor, addr 0x271ba30, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PCAppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PCAppInit(PCAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PCAppInit(PCAppInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17795 };

  /// @brief Field kMissingOpenXRRuntimeErrorSubtitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorSubtitle{ u"LABEL_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field kMissingOpenXRRuntimeErrorTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorTitle{ u"TITLE_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field _mainSystemInit, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _settingsApplicator, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* ____playerDataModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PCAppInit, ____mainSystemInit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____settingsApplicator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____defaultScenesTransitionsFromInit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____playerDataModel) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PCAppInit, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PCAppInit*, "", "PCAppInit");

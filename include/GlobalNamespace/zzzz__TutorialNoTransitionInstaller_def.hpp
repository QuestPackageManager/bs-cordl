#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(TutorialNoTransitionInstaller)
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoTransitionInstaller);
// Type: ::TutorialNoTransitionInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialNoTransitionInstaller*
class CORDL_TYPE TutorialNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _playerSpecificSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings, put = __cordl_internal_set__playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData))::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> _scenesTransitionSetupData;

  /// @brief Method InstallBindings, addr 0x26a1460, size 0x40, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::TutorialNoTransitionInstaller* New_ctor();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26a1880, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoTransitionInstaller(TutorialNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoTransitionInstaller(TutorialNoTransitionInstaller const&) = delete;

  /// @brief Field _scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  /// @brief Field _playerSpecificSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoTransitionInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoTransitionInstaller, ____scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoTransitionInstaller, ____playerSpecificSettings) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoTransitionInstaller*, "", "TutorialNoTransitionInstaller");

#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardGameplayInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardGameplayInstaller)
namespace GlobalNamespace {
class GameplayAdditionalInformationSetupData;
}
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplayInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardGameplayInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardGameplayInstaller
class CORDL_TYPE StandardGameplayInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _gameplayAdditionalInformation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayAdditionalInformation,
                      put = __cordl_internal_set__gameplayAdditionalInformation)) ::GlobalNamespace::GameplayAdditionalInformationSetupData* _gameplayAdditionalInformation;

  /// @brief Field _standardSceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__standardSceneSetupData,
                      put = __cordl_internal_set__standardSceneSetupData)) ::GlobalNamespace::StandardGameplaySceneSetupData* _standardSceneSetupData;

  /// @brief Method InstallBindings, addr 0x58512e0, size 0x3f8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::StandardGameplayInstaller* New_ctor();

  constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const& __cordl_internal_get__gameplayAdditionalInformation() const;

  constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& __cordl_internal_get__gameplayAdditionalInformation();

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData* const& __cordl_internal_get__standardSceneSetupData() const;

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& __cordl_internal_get__standardSceneSetupData();

  constexpr void __cordl_internal_set__gameplayAdditionalInformation(::GlobalNamespace::GameplayAdditionalInformationSetupData* value);

  constexpr void __cordl_internal_set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value);

  /// @brief Method .ctor, addr 0x58516d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplayInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplayInstaller(StandardGameplayInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplayInstaller(StandardGameplayInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6313 };

  /// @brief Field _standardSceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StandardGameplaySceneSetupData* ____standardSceneSetupData;

  /// @brief Field _gameplayAdditionalInformation, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayAdditionalInformationSetupData* ____gameplayAdditionalInformation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardGameplayInstaller, ____standardSceneSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplayInstaller, ____gameplayAdditionalInformation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplayInstaller, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplayInstaller*, "", "StandardGameplayInstaller");

#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSceneSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSceneSetup)
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnvironmentSceneSetup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentSceneSetup*, "", "EnvironmentSceneSetup");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentSceneSetup
class CORDL_TYPE EnvironmentSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _environmentsList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsList, put = __cordl_internal_set__environmentsList)) ::GlobalNamespace::EnvironmentsListModel* _environmentsList;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::EnvironmentSceneSetupData* _sceneSetupData;

  /// @brief Field trackLaneYPositionPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_trackLaneYPositionPropertyId, put = setStaticF_trackLaneYPositionPropertyId)) int32_t trackLaneYPositionPropertyId;

  /// @brief Method InstallBindings, addr 0x5909bfc, size 0x1c4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::EnvironmentSceneSetup* New_ctor();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsList() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsList();

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__environmentsList(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value);

  /// @brief Method .ctor, addr 0x5909dc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_trackLaneYPositionPropertyId();

  static inline void setStaticF_trackLaneYPositionPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSceneSetup(EnvironmentSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSceneSetup(EnvironmentSceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6691 };

  /// @brief Field _environmentsList, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsList;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetup, ____environmentsList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetup, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentSceneSetup) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

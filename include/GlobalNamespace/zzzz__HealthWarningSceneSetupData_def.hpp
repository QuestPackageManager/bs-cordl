#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningSceneSetupData);
// Type: ::HealthWarningSceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15408))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6053))
// CS Name: ::HealthWarningSceneSetupData*
class CORDL_TYPE HealthWarningSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field _nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nextScenesTransitionSetupData,
                      put = __cordl_internal_set__nextScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> _nextScenesTransitionSetupData;

  __declspec(property(get = get_nextScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> nextScenesTransitionSetupData;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__nextScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__nextScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set__nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method get_nextScenesTransitionSetupData, addr 0x231ccb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> get_nextScenesTransitionSetupData();

  static inline ::GlobalNamespace::HealthWarningSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor, addr 0x231ccb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningSceneSetupData(HealthWarningSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningSceneSetupData(HealthWarningSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningSceneSetupData();

public:
  /// @brief Field _nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningSceneSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningSceneSetupData, ____nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningSceneSetupData*, "", "HealthWarningSceneSetupData");

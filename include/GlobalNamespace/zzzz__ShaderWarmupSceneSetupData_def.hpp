#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderWarmupSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(ShaderWarmupSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupSceneSetupData);
// Type: ::ShaderWarmupSceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderWarmupSceneSetupData*
class CORDL_TYPE ShaderWarmupSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field <nextScenesTransitionSetupData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nextScenesTransitionSetupData_k__BackingField,
                      put = __cordl_internal_set__nextScenesTransitionSetupData_k__BackingField)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      _nextScenesTransitionSetupData_k__BackingField;

  __declspec(property(get = get_nextScenesTransitionSetupData, put = set_nextScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> nextScenesTransitionSetupData;

  static inline ::GlobalNamespace::ShaderWarmupSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__nextScenesTransitionSetupData_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__nextScenesTransitionSetupData_k__BackingField();

  constexpr void __cordl_internal_set__nextScenesTransitionSetupData_k__BackingField(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3ac6450, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method get_nextScenesTransitionSetupData, addr 0x3ac6440, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> get_nextScenesTransitionSetupData();

  /// @brief Method set_nextScenesTransitionSetupData, addr 0x3ac6448, size 0x8, virtual false, abstract: false, final false
  inline void set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData const&) = delete;

  /// @brief Field <nextScenesTransitionSetupData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____nextScenesTransitionSetupData_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderWarmupSceneSetupData, ____nextScenesTransitionSetupData_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetupData*, "", "ShaderWarmupSceneSetupData");

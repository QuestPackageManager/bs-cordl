#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(SingleFixedSceneScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneSetupData;
}
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class SingleFixedSceneScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO);
// Type: ::SingleFixedSceneScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15418))
// CS Name: ::SingleFixedSceneScenesTransitionSetupDataSO*
class CORDL_TYPE SingleFixedSceneScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _sceneInfo, offset 0x30, size 0x8
  __declspec(property(get = __get__sceneInfo, put = __set__sceneInfo))::GlobalNamespace::SceneInfo* _sceneInfo;

  __declspec(property(get = get_sceneInfo))::GlobalNamespace::SceneInfo* sceneInfo;

  constexpr ::GlobalNamespace::SceneInfo*& __get__sceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__sceneInfo() const;

  constexpr void __set__sceneInfo(::GlobalNamespace::SceneInfo* value);

  /// @brief Method get_sceneInfo addr 0xe23c24 size 0x8 virtual false final false
  inline ::GlobalNamespace::SceneInfo* get_sceneInfo();

  /// @brief Method Init addr 0xe23494 size 0xf0 virtual false final false
  inline void Init(::GlobalNamespace::SceneSetupData* sceneSetupData);

  static inline ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor addr 0xe2366c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleFixedSceneScenesTransitionSetupDataSO();

public:
  /// @brief Field _sceneInfo, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____sceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*, "", "SingleFixedSceneScenesTransitionSetupDataSO");

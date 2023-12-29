#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FixedScenesScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedScenesScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO);
// Type: ::FixedScenesScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13939))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13935))
// CS Name: ::FixedScenesScenesTransitionSetupDataSO*
class CORDL_TYPE FixedScenesScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _sceneInfos, offset 0x30, size 0x8
  __declspec(property(get = __get__sceneInfos, put = __set__sceneInfos))::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> _sceneInfos;

  constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>& __get__sceneInfos();

  constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> const& __get__sceneInfos() const;

  constexpr void __set__sceneInfos(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value);

  /// @brief Method Init addr 0x1fa120c size 0x10 virtual false final false
  inline void Init();

  static inline ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor addr 0x1fa1228 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedScenesScenesTransitionSetupDataSO();

public:
  /// @brief Field _sceneInfos, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> ____sceneInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO, ____sceneInfos) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*, "", "FixedScenesScenesTransitionSetupDataSO");

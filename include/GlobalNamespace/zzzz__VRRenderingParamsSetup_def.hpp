#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRenderingParamsSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRRenderingParamsSetup)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IRenderingParamsApplicator;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRenderingParamsSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRRenderingParamsSetup);
// Dependencies SceneType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRenderingParamsSetup
class CORDL_TYPE VRRenderingParamsSetup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _applicator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__applicator, put = __cordl_internal_set__applicator)) ::GlobalNamespace::IRenderingParamsApplicator* _applicator;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _sceneType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneType, put = __cordl_internal_set__sceneType)) ::GlobalNamespace::SceneType _sceneType;

  static inline ::GlobalNamespace::VRRenderingParamsSetup* New_ctor();

  /// @brief Method OnEnable, addr 0x3b2eef4, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::GlobalNamespace::IRenderingParamsApplicator* const& __cordl_internal_get__applicator() const;

  constexpr ::GlobalNamespace::IRenderingParamsApplicator*& __cordl_internal_get__applicator();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::GlobalNamespace::SceneType const& __cordl_internal_get__sceneType() const;

  constexpr ::GlobalNamespace::SceneType& __cordl_internal_get__sceneType();

  constexpr void __cordl_internal_set__applicator(::GlobalNamespace::IRenderingParamsApplicator* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__sceneType(::GlobalNamespace::SceneType value);

  /// @brief Method .ctor, addr 0x3b2efc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRRenderingParamsSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRRenderingParamsSetup(VRRenderingParamsSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRRenderingParamsSetup(VRRenderingParamsSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5178 };

  /// @brief Field _sceneType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::SceneType ____sceneType;

  /// @brief Field _applicator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IRenderingParamsApplicator* ____applicator;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____sceneType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____applicator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRRenderingParamsSetup, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRRenderingParamsSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRRenderingParamsSetup*, "", "VRRenderingParamsSetup");

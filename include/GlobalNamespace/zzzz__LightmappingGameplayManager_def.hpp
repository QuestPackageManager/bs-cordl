#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightmappingGameplayManager)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingGameplayManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmappingGameplayManager);
// Type: ::LightmappingGameplayManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5017))
// CS Name: ::LightmappingGameplayManager*
class CORDL_TYPE LightmappingGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  /// @brief Method Start, addr 0x23bb8b4, size 0x188, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::LightmappingGameplayManager* New_ctor();

  /// @brief Method .ctor, addr 0x23bba3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingGameplayManager(LightmappingGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingGameplayManager(LightmappingGameplayManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingGameplayManager();

public:
  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingGameplayManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingGameplayManager, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingGameplayManager*, "", "LightmappingGameplayManager");

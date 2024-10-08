#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmappingGameplayManager.hpp"
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmappingGameplayManager*
class CORDL_TYPE LightmappingGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  static inline ::GlobalNamespace::LightmappingGameplayManager* New_ctor();

  /// @brief Method Start, addr 0x3b29050, size 0x174, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  /// @brief Method .ctor, addr 0x3b291c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingGameplayManager(LightmappingGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingGameplayManager(LightmappingGameplayManager const&) = delete;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingGameplayManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingGameplayManager, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingGameplayManager*, "", "LightmappingGameplayManager");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseResultsEnvironmentController)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseResultsEnvironmentController);
// Type: ::BaseResultsEnvironmentController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4808))
// CS Name: ::BaseResultsEnvironmentController*
class CORDL_TYPE BaseResultsEnvironmentController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Activate addr 0x2241be8 size 0x24 virtual true final false
  inline void Activate(bool immediately);

  /// @brief Method Deactivate addr 0x2241c0c size 0x24 virtual true final false
  inline void Deactivate(bool immediately);

  /// @brief Method Setup addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  static inline ::GlobalNamespace::BaseResultsEnvironmentController* New_ctor();

  /// @brief Method .ctor addr 0x2241c30 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseResultsEnvironmentController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseResultsEnvironmentController(BaseResultsEnvironmentController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseResultsEnvironmentController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseResultsEnvironmentController(BaseResultsEnvironmentController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseResultsEnvironmentController();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseResultsEnvironmentController, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseResultsEnvironmentController*, "", "BaseResultsEnvironmentController");

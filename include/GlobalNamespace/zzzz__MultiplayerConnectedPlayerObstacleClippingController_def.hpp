#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObstacleClippingController)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
// Type: ::MultiplayerConnectedPlayerObstacleClippingController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5140))
// CS Name: ::MultiplayerConnectedPlayerObstacleClippingController*
class CORDL_TYPE MultiplayerConnectedPlayerObstacleClippingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockControllers, offset 0x18, size 0x8
  __declspec(property(get = __get__materialPropertyBlockControllers,
                      put = __set__materialPropertyBlockControllers))::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,
                                                                              ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> _materialPropertyBlockControllers;

  /// @brief Field _clippingPlanePositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__clippingPlanePositionID, put = setStaticF__clippingPlanePositionID)) int32_t _clippingPlanePositionID;

  /// @brief Field _clippingPlaneNormalID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__clippingPlaneNormalID, put = setStaticF__clippingPlaneNormalID)) int32_t _clippingPlaneNormalID;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

  constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value);

  static inline void setStaticF__clippingPlanePositionID(int32_t value);

  static inline int32_t getStaticF__clippingPlanePositionID();

  static inline void setStaticF__clippingPlaneNormalID(int32_t value);

  static inline int32_t getStaticF__clippingPlaneNormalID();

  /// @brief Method SetClippingParams, addr 0x23d7a5c, size 0x14c, virtual false, abstract: false, final false
  inline void SetClippingParams(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* New_ctor();

  /// @brief Method .ctor, addr 0x23d7ba8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerObstacleClippingController();

public:
  /// @brief Field _materialPropertyBlockControllers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> ____materialPropertyBlockControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController, ____materialPropertyBlockControllers) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, "", "MultiplayerConnectedPlayerObstacleClippingController");

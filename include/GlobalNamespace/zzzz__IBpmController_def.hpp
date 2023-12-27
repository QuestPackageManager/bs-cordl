#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBpmController)
// Forward declare root types
namespace GlobalNamespace {
class IBpmController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBpmController);
// Type: ::IBpmController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4834))
// CS Name: ::IBpmController*
class CORDL_TYPE IBpmController {
public:
  // Declarations
  __declspec(property(get = get_currentBpm)) float_t currentBpm;

  __declspec(property(get = get_oneBeatDuration)) float_t oneBeatDuration;

  /// @brief Method get_currentBpm addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_currentBpm();

  /// @brief Method get_oneBeatDuration addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_oneBeatDuration();

  // Ctor Parameters [CppParam { name: "", ty: "IBpmController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBpmController(IBpmController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBpmController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBpmController(IBpmController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBpmController*, "", "IBpmController");

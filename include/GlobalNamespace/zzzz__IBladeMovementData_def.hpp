#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBladeMovementData)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class IBladeMovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBladeMovementData);
// Type: ::IBladeMovementData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15010))
// CS Name: ::IBladeMovementData*
class CORDL_TYPE IBladeMovementData {
public:
  // Declarations
  __declspec(property(get = get_bladeSpeed)) float_t bladeSpeed;

  __declspec(property(get = get_lastAddedData))::GlobalNamespace::BladeMovementDataElement lastAddedData;

  __declspec(property(get = get_prevAddedData))::GlobalNamespace::BladeMovementDataElement prevAddedData;

  /// @brief Method get_bladeSpeed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_bladeSpeed();

  /// @brief Method get_lastAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::BladeMovementDataElement get_lastAddedData();

  /// @brief Method get_prevAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::BladeMovementDataElement get_prevAddedData();

  // Ctor Parameters [CppParam { name: "", ty: "IBladeMovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBladeMovementData(IBladeMovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBladeMovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBladeMovementData(IBladeMovementData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBladeMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBladeMovementData*, "", "IBladeMovementData");

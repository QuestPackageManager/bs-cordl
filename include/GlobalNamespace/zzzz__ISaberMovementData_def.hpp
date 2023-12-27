#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISaberMovementData)
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberMovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberMovementData);
// Type: ::ISaberMovementData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15012))
// CS Name: ::ISaberMovementData*
class CORDL_TYPE ISaberMovementData {
public:
  // Declarations
  __declspec(property(get = get_lastAddedData))::GlobalNamespace::BladeMovementDataElement lastAddedData;

  /// @brief Method get_lastAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::BladeMovementDataElement get_lastAddedData();

  /// @brief Method AddDataProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  /// @brief Method RemoveDataProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  /// @brief Method RequestLastDataProcessing addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  /// @brief Method ComputeSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t ComputeSwingRating(float_t overrideSegmentAngle);

  /// @brief Method ComputeSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t ComputeSwingRating();

  // Ctor Parameters [CppParam { name: "", ty: "ISaberMovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaberMovementData(ISaberMovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaberMovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberMovementData(ISaberMovementData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberMovementData*, "", "ISaberMovementData");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISaberSwingRatingCounterDidFinishReceiver)
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver);
// Type: ::ISaberSwingRatingCounterDidFinishReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14888))
// CS Name: ::ISaberSwingRatingCounterDidFinishReceiver*
class CORDL_TYPE ISaberSwingRatingCounterDidFinishReceiver {
public:
  // Declarations
  /// @brief Method HandleSaberSwingRatingCounterDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidFinishReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaberSwingRatingCounterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidFinishReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberSwingRatingCounterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*, "", "ISaberSwingRatingCounterDidFinishReceiver");

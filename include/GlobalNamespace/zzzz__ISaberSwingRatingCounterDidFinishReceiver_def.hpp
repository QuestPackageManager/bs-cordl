#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISaberSwingRatingCounterDidFinishReceiver
class CORDL_TYPE ISaberSwingRatingCounterDidFinishReceiver {
public:
  // Declarations
  /// @brief Method HandleSaberSwingRatingCounterDidFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSaberSwingRatingCounterDidFinish(::GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidFinishReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberSwingRatingCounterDidFinishReceiver(ISaberSwingRatingCounterDidFinishReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17000 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*, "", "ISaberSwingRatingCounterDidFinishReceiver");

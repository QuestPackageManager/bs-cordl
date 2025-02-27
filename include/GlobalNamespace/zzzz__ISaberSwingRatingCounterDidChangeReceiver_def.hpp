#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberSwingRatingCounterDidChangeReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISaberSwingRatingCounterDidChangeReceiver)
namespace GlobalNamespace {
class ISaberSwingRatingCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISaberSwingRatingCounterDidChangeReceiver
class CORDL_TYPE ISaberSwingRatingCounterDidChangeReceiver {
public:
  // Declarations
  /// @brief Method HandleSaberSwingRatingCounterDidChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float_t rating);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberSwingRatingCounterDidChangeReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberSwingRatingCounterDidChangeReceiver(ISaberSwingRatingCounterDidChangeReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*, "", "ISaberSwingRatingCounterDidChangeReceiver");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WeightUtility)
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class WeightUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::WeightUtility);
// Type: UnityEngine.Timeline::WeightUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::WeightUtility*
class CORDL_TYPE WeightUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method NormalizeMixer, addr 0x2db88ec, size 0x188, virtual false, abstract: false, final false
  static inline float_t NormalizeMixer(::UnityEngine::Playables::Playable mixer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeightUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeightUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeightUtility(WeightUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeightUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeightUtility(WeightUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::WeightUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::WeightUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::WeightUtility*, "UnityEngine.Timeline", "WeightUtility");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInterval)
// Forward declare root types
namespace UnityEngine::Timeline {
class IInterval;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IInterval);
// Type: UnityEngine.Timeline::IInterval
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14149))
// CS Name: ::UnityEngine.Timeline::IInterval*
class CORDL_TYPE IInterval {
public:
  // Declarations
  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  /// @brief Method get_intervalStart addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_intervalStart();

  /// @brief Method get_intervalEnd addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_intervalEnd();

  // Ctor Parameters [CppParam { name: "", ty: "IInterval", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInterval(IInterval&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInterval", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInterval(IInterval const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IInterval);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IInterval*, "UnityEngine.Timeline", "IInterval");

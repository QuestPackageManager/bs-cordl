#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IInterval.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInterval)
// Forward declare root types
namespace UnityEngine::Timeline {
class IInterval;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::IInterval*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::IInterval*, "UnityEngine.Timeline", "IInterval");
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.IInterval
class CORDL_TYPE IInterval {
public:
  // Declarations
  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  /// @brief Method get_intervalEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  // Ctor Parameters [CppParam { name: "", ty: "IInterval", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInterval(IInterval const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline

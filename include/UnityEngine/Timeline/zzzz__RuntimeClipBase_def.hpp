#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/RuntimeClipBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeClipBase)
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClipBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::RuntimeClipBase);
// Dependencies UnityEngine.Timeline.RuntimeElement
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.RuntimeClipBase
class CORDL_TYPE RuntimeClipBase : public ::UnityEngine::Timeline::RuntimeElement {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  __declspec(property(get = get_start)) double_t start;

  static inline ::UnityEngine::Timeline::RuntimeClipBase* New_ctor();

  /// @brief Method .ctor, addr 0x4824f2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_intervalEnd, addr 0x482557c, size 0x84, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0x482550c, size 0x70, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  /// @brief Method get_start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline double_t get_start();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeClipBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeClipBase(RuntimeClipBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeClipBase(RuntimeClipBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeClipBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClipBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClipBase*, "UnityEngine.Timeline", "RuntimeClipBase");

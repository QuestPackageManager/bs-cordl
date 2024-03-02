#pragma once
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
// Type: UnityEngine.Timeline::RuntimeClipBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::RuntimeClipBase*
class CORDL_TYPE RuntimeClipBase : public ::UnityEngine::Timeline::RuntimeElement {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  __declspec(property(get = get_start)) double_t start;

  static inline ::UnityEngine::Timeline::RuntimeClipBase* New_ctor();

  /// @brief Method .ctor, addr 0x2d4f610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_duration();

  /// @brief Method get_intervalEnd, addr 0x2d4fc60, size 0x84, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0x2d4fbf0, size 0x70, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  /// @brief Method get_start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeClipBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClipBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClipBase*, "UnityEngine.Timeline", "RuntimeClipBase");

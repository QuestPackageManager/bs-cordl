#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/InfiniteRuntimeClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InfiniteRuntimeClip)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class InfiniteRuntimeClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::InfiniteRuntimeClip);
// Dependencies UnityEngine.Playables.Playable, UnityEngine.Timeline.RuntimeElement
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.InfiniteRuntimeClip
class CORDL_TYPE InfiniteRuntimeClip : public ::UnityEngine::Timeline::RuntimeElement {
public:
  // Declarations
  __declspec(property(put = set_enable)) bool enable;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  /// @brief Field kIntervalEnd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kIntervalEnd, put = setStaticF_kIntervalEnd)) int64_t kIntervalEnd;

  /// @brief Field m_Playable, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Playable, put = __cordl_internal_set_m_Playable)) ::UnityEngine::Playables::Playable m_Playable;

  /// @brief Method DisableAt, addr 0x48249ec, size 0x6c, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method EvaluateAt, addr 0x4824994, size 0x58, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  static inline ::UnityEngine::Timeline::InfiniteRuntimeClip* New_ctor(::UnityEngine::Playables::Playable playable);

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_Playable() const;

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_Playable();

  constexpr void __cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value);

  /// @brief Method .ctor, addr 0x48114ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::Playable playable);

  static inline int64_t getStaticF_kIntervalEnd();

  /// @brief Method get_intervalEnd, addr 0x48248c8, size 0x58, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0x48248c0, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  static inline void setStaticF_kIntervalEnd(int64_t value);

  /// @brief Method set_enable, addr 0x4824920, size 0x74, virtual true, abstract: false, final false
  inline void set_enable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfiniteRuntimeClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfiniteRuntimeClip(InfiniteRuntimeClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfiniteRuntimeClip(InfiniteRuntimeClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15844 };

  /// @brief Field m_Playable, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_Playable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::InfiniteRuntimeClip, ___m_Playable) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::InfiniteRuntimeClip, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::InfiniteRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::InfiniteRuntimeClip*, "UnityEngine.Timeline", "InfiniteRuntimeClip");

#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/RuntimeClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RuntimeClip)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::RuntimeClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
// Dependencies UnityEngine.Playables.Playable, UnityEngine.Timeline.RuntimeClipBase
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.RuntimeClip
class CORDL_TYPE RuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase {
public:
  // Declarations
  __declspec(property(get = get_clip)) ::UnityEngine::Timeline::TimelineClip* clip;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(put = set_enable)) bool enable;

  /// @brief Field m_Clip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clip, put = __cordl_internal_set_m_Clip)) ::UnityEngine::Timeline::TimelineClip* m_Clip;

  /// @brief Field m_ParentMixer, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ParentMixer, put = __cordl_internal_set_m_ParentMixer)) ::UnityEngine::Playables::Playable m_ParentMixer;

  /// @brief Field m_Playable, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Playable, put = __cordl_internal_set_m_Playable)) ::UnityEngine::Playables::Playable m_Playable;

  __declspec(property(get = get_mixer)) ::UnityEngine::Playables::Playable mixer;

  __declspec(property(get = get_playable)) ::UnityEngine::Playables::Playable playable;

  __declspec(property(get = get_start)) double_t start;

  /// @brief Method Create, addr 0x69bfc00, size 0x88, virtual false, abstract: false, final false
  inline void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method DisableAt, addr 0x69c00a4, size 0x160, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method EvaluateAt, addr 0x69bfea8, size 0x1fc, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  static inline ::UnityEngine::Timeline::RuntimeClip* New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                               ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method SetDuration, addr 0x69bfe4c, size 0x5c, virtual false, abstract: false, final false
  inline void SetDuration(double_t duration);

  /// @brief Method SetTime, addr 0x69bfdf0, size 0x5c, virtual false, abstract: false, final false
  inline void SetTime(double_t time);

  constexpr ::UnityEngine::Timeline::TimelineClip* const& __cordl_internal_get_m_Clip() const;

  constexpr ::UnityEngine::Timeline::TimelineClip*& __cordl_internal_get_m_Clip();

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_ParentMixer() const;

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_ParentMixer();

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_Playable() const;

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_Playable();

  constexpr void __cordl_internal_set_m_Clip(::UnityEngine::Timeline::TimelineClip* value);

  constexpr void __cordl_internal_set_m_ParentMixer(::UnityEngine::Playables::Playable value);

  constexpr void __cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value);

  /// @brief Method .ctor, addr 0x69aa308, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method get_clip, addr 0x69bfc88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* get_clip();

  /// @brief Method get_duration, addr 0x69bfbe8, size 0x14, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_mixer, addr 0x69bfc90, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_mixer();

  /// @brief Method get_playable, addr 0x69bfc9c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_playable();

  /// @brief Method get_start, addr 0x69bfbc0, size 0x28, virtual true, abstract: false, final false
  inline double_t get_start();

  /// @brief Method set_enable, addr 0x69bfca8, size 0x148, virtual true, abstract: false, final false
  inline void set_enable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeClip(RuntimeClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeClip(RuntimeClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19031 };

  /// @brief Field m_Clip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Timeline::TimelineClip* ___m_Clip;

  /// @brief Field m_Playable, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_Playable;

  /// @brief Field m_ParentMixer, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_ParentMixer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_Clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_Playable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_ParentMixer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::RuntimeClip) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Timeline

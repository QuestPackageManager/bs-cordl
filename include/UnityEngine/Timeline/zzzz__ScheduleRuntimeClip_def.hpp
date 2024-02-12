#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScheduleRuntimeClip)
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
class ScheduleRuntimeClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ScheduleRuntimeClip);
// Type: UnityEngine.Timeline::ScheduleRuntimeClip
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9196)), TypeDefinitionIndex(TypeDefinitionIndex(13836))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13838))
// CS Name: ::UnityEngine.Timeline::ScheduleRuntimeClip*
class CORDL_TYPE ScheduleRuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase {
public:
  // Declarations
  /// @brief Field m_Clip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clip, put = __cordl_internal_set_m_Clip))::UnityEngine::Timeline::TimelineClip* m_Clip;

  /// @brief Field m_Playable, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Playable, put = __cordl_internal_set_m_Playable))::UnityEngine::Playables::Playable m_Playable;

  /// @brief Field m_ParentMixer, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ParentMixer, put = __cordl_internal_set_m_ParentMixer))::UnityEngine::Playables::Playable m_ParentMixer;

  /// @brief Field m_StartDelay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartDelay, put = __cordl_internal_set_m_StartDelay)) double_t m_StartDelay;

  /// @brief Field m_FinishTail, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinishTail, put = __cordl_internal_set_m_FinishTail)) double_t m_FinishTail;

  /// @brief Field m_Started, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Started, put = __cordl_internal_set_m_Started)) bool m_Started;

  __declspec(property(get = get_start)) double_t start;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_clip))::UnityEngine::Timeline::TimelineClip* clip;

  __declspec(property(get = get_mixer))::UnityEngine::Playables::Playable mixer;

  __declspec(property(get = get_playable))::UnityEngine::Playables::Playable playable;

  __declspec(property(put = set_enable)) bool enable;

  constexpr ::UnityEngine::Timeline::TimelineClip*& __cordl_internal_get_m_Clip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TimelineClip*> const& __cordl_internal_get_m_Clip() const;

  constexpr void __cordl_internal_set_m_Clip(::UnityEngine::Timeline::TimelineClip* value);

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_Playable();

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_Playable() const;

  constexpr void __cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value);

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_ParentMixer();

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_ParentMixer() const;

  constexpr void __cordl_internal_set_m_ParentMixer(::UnityEngine::Playables::Playable value);

  constexpr double_t& __cordl_internal_get_m_StartDelay();

  constexpr double_t const& __cordl_internal_get_m_StartDelay() const;

  constexpr void __cordl_internal_set_m_StartDelay(double_t value);

  constexpr double_t& __cordl_internal_get_m_FinishTail();

  constexpr double_t const& __cordl_internal_get_m_FinishTail() const;

  constexpr void __cordl_internal_set_m_FinishTail(double_t value);

  constexpr bool& __cordl_internal_get_m_Started();

  constexpr bool const& __cordl_internal_get_m_Started() const;

  constexpr void __cordl_internal_set_m_Started(bool value);

  /// @brief Method get_start, addr 0x2c65c20, size 0x78, virtual true, abstract: false, final false
  inline double_t get_start();

  /// @brief Method get_duration, addr 0x2c65c98, size 0x4c, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method SetTime, addr 0x2c65ce4, size 0x58, virtual false, abstract: false, final false
  inline void SetTime(double_t time);

  /// @brief Method get_clip, addr 0x2c65d3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* get_clip();

  /// @brief Method get_mixer, addr 0x2c65d44, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_mixer();

  /// @brief Method get_playable, addr 0x2c65d50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_playable();

  static inline ::UnityEngine::Timeline::ScheduleRuntimeClip* New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                                       ::UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail);

  /// @brief Method .ctor, addr 0x2c6051c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer, double_t startDelay,
                    double_t finishTail);

  /// @brief Method Create, addr 0x2c65d5c, size 0x98, virtual false, abstract: false, final false
  inline void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer, double_t startDelay,
                     double_t finishTail);

  /// @brief Method set_enable, addr 0x2c65df4, size 0x104, virtual true, abstract: false, final false
  inline void set_enable(bool value);

  /// @brief Method EvaluateAt, addr 0x2c65ef8, size 0x268, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method DisableAt, addr 0x2c66160, size 0x10, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  // Ctor Parameters [CppParam { name: "", ty: "ScheduleRuntimeClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScheduleRuntimeClip(ScheduleRuntimeClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScheduleRuntimeClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScheduleRuntimeClip(ScheduleRuntimeClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScheduleRuntimeClip();

public:
  /// @brief Field m_Clip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Timeline::TimelineClip* ___m_Clip;

  /// @brief Field m_Playable, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_Playable;

  /// @brief Field m_ParentMixer, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_ParentMixer;

  /// @brief Field m_StartDelay, offset: 0x40, size: 0x8, def value: None
  double_t ___m_StartDelay;

  /// @brief Field m_FinishTail, offset: 0x48, size: 0x8, def value: None
  double_t ___m_FinishTail;

  /// @brief Field m_Started, offset: 0x50, size: 0x1, def value: None
  bool ___m_Started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ScheduleRuntimeClip, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_Clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_Playable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_ParentMixer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_StartDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_FinishTail) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ScheduleRuntimeClip, ___m_Started) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ScheduleRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ScheduleRuntimeClip*, "UnityEngine.Timeline", "ScheduleRuntimeClip");

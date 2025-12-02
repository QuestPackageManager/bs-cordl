#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimeControlPlayable)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class ITimeControl;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeControlPlayable);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimeControlPlayable
class CORDL_TYPE TimeControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_started, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_started, put = __cordl_internal_set_m_started)) bool m_started;

  /// @brief Field m_timeControl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_timeControl, put = __cordl_internal_set_m_timeControl)) ::UnityEngine::Timeline::ITimeControl* m_timeControl;

  /// @brief Method Create, addr 0x67aa008, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                 ::UnityEngine::Timeline::ITimeControl* timeControl);

  /// @brief Method Initialize, addr 0x67aa110, size 0x8, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Timeline::ITimeControl* timeControl);

  static inline ::UnityEngine::Timeline::TimeControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x67aa2cc, size 0xb4, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x67aa214, size 0xb8, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame, addr 0x67aa118, size 0xfc, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  constexpr bool const& __cordl_internal_get_m_started() const;

  constexpr bool& __cordl_internal_get_m_started();

  constexpr ::UnityEngine::Timeline::ITimeControl* const& __cordl_internal_get_m_timeControl() const;

  constexpr ::UnityEngine::Timeline::ITimeControl*& __cordl_internal_get_m_timeControl();

  constexpr void __cordl_internal_set_m_started(bool value);

  constexpr void __cordl_internal_set_m_timeControl(::UnityEngine::Timeline::ITimeControl* value);

  /// @brief Method .ctor, addr 0x67aa380, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeControlPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeControlPlayable(TimeControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeControlPlayable(TimeControlPlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18871 };

  /// @brief Field m_timeControl, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Timeline::ITimeControl* ___m_timeControl;

  /// @brief Field m_started, offset: 0x18, size: 0x1, def value: None
  bool ___m_started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeControlPlayable, ___m_timeControl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeControlPlayable, ___m_started) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeControlPlayable, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimeControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeControlPlayable*, "UnityEngine.Timeline", "TimeControlPlayable");

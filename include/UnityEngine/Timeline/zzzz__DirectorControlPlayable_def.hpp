#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DirectorControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectorControlPlayable)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class PlayableDirector;
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
// Forward declare root types
namespace UnityEngine::Timeline {
class DirectorControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::DirectorControlPlayable);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.DirectorControlPlayable
class CORDL_TYPE DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field director, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_director, put = __cordl_internal_set_director)) ::UnityW<::UnityEngine::Playables::PlayableDirector> director;

  /// @brief Field m_AssetDuration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetDuration, put = __cordl_internal_set_m_AssetDuration)) double_t m_AssetDuration;

  /// @brief Field m_SyncTime, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SyncTime, put = __cordl_internal_set_m_SyncTime)) bool m_SyncTime;

  /// @brief Method Create, addr 0x48228e8, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                     ::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method DetectDiscontinuity, addr 0x4827f6c, size 0x114, virtual false, abstract: false, final false
  inline bool DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method DetectOutOfSync, addr 0x4828644, size 0x14c, virtual false, abstract: false, final false
  inline bool DetectOutOfSync(::UnityEngine::Playables::Playable playable);

  static inline ::UnityEngine::Timeline::DirectorControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x482833c, size 0x100, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x4828268, size 0xd4, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnPlayableDestroy, addr 0x4827cf8, size 0xc0, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame, addr 0x4827db8, size 0x1b4, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame, addr 0x482843c, size 0x208, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method SyncSpeed, addr 0x4828080, size 0x128, virtual false, abstract: false, final false
  inline void SyncSpeed(double_t speed);

  /// @brief Method SyncStart, addr 0x48281a8, size 0xc0, virtual false, abstract: false, final false
  inline void SyncStart(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method SyncStop, addr 0x4828928, size 0xcc, virtual false, abstract: false, final false
  inline void SyncStop(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method UpdateTime, addr 0x4828790, size 0x198, virtual false, abstract: false, final false
  inline void UpdateTime(::UnityEngine::Playables::Playable playable);

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_director() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_director();

  constexpr double_t const& __cordl_internal_get_m_AssetDuration() const;

  constexpr double_t& __cordl_internal_get_m_AssetDuration();

  constexpr bool const& __cordl_internal_get_m_SyncTime() const;

  constexpr bool& __cordl_internal_get_m_SyncTime();

  constexpr void __cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set_m_AssetDuration(double_t value);

  constexpr void __cordl_internal_set_m_SyncTime(bool value);

  /// @brief Method .ctor, addr 0x48289f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectorControlPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectorControlPlayable(DirectorControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectorControlPlayable(DirectorControlPlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15871 };

  /// @brief Field director, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ___director;

  /// @brief Field m_SyncTime, offset: 0x18, size: 0x1, def value: None
  bool ___m_SyncTime;

  /// @brief Field m_AssetDuration, offset: 0x20, size: 0x8, def value: None
  double_t ___m_AssetDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___director) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_SyncTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_AssetDuration) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DirectorControlPlayable, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::DirectorControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");

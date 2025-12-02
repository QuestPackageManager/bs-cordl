#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DirectorControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
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
namespace UnityEngine::Timeline {
struct DirectorControlPlayable_PauseAction;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct DirectorControlPlayable_PauseAction;
}
namespace UnityEngine::Timeline {
class DirectorControlPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::DirectorControlPlayable_PauseAction);
MARK_REF_PTR_T(::UnityEngine::Timeline::DirectorControlPlayable);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.DirectorControlPlayable/PauseAction
struct CORDL_TYPE DirectorControlPlayable_PauseAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DirectorControlPlayable_PauseAction_Unwrapped
  enum struct __DirectorControlPlayable_PauseAction_Unwrapped : int32_t {
    __E_StopDirector = static_cast<int32_t>(0x0),
    __E_PauseDirector = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DirectorControlPlayable_PauseAction_Unwrapped() const noexcept {
    return static_cast<__DirectorControlPlayable_PauseAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectorControlPlayable_PauseAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DirectorControlPlayable_PauseAction(int32_t value__) noexcept;

  /// @brief Field PauseDirector value: I32(1)
  static ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction const PauseDirector;

  /// @brief Field StopDirector value: I32(0)
  static ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction const StopDirector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable_PauseAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DirectorControlPlayable_PauseAction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Timeline.DirectorControlPlayable::PauseAction
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.DirectorControlPlayable
class CORDL_TYPE DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using PauseAction = ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction;

  /// @brief Field director, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_director, put = __cordl_internal_set_director)) ::UnityW<::UnityEngine::Playables::PlayableDirector> director;

  /// @brief Field m_AssetDuration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetDuration, put = __cordl_internal_set_m_AssetDuration)) double_t m_AssetDuration;

  /// @brief Field m_SyncTime, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SyncTime, put = __cordl_internal_set_m_SyncTime)) bool m_SyncTime;

  /// @brief Field pauseAction, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseAction, put = __cordl_internal_set_pauseAction)) ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction pauseAction;

  /// @brief Method Create, addr 0x67a2d0c, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                     ::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method DetectDiscontinuity, addr 0x67a84f4, size 0x11c, virtual false, abstract: false, final false
  inline bool DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method DetectOutOfSync, addr 0x67a8cc4, size 0x154, virtual false, abstract: false, final false
  inline bool DetectOutOfSync(::UnityEngine::Playables::Playable playable);

  static inline ::UnityEngine::Timeline::DirectorControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x67a8958, size 0x11c, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x67a8880, size 0xd8, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnPlayableDestroy, addr 0x67a8280, size 0xc4, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame, addr 0x67a8344, size 0x1b0, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame, addr 0x67a8a74, size 0x250, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method SyncSpeed, addr 0x67a8610, size 0x158, virtual false, abstract: false, final false
  inline void SyncSpeed(double_t speed);

  /// @brief Method SyncStart, addr 0x67a8768, size 0x118, virtual false, abstract: false, final false
  inline void SyncStart(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method SyncStop, addr 0x67a8fac, size 0xf8, virtual false, abstract: false, final false
  inline void SyncStop(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method UpdateTime, addr 0x67a8e18, size 0x194, virtual false, abstract: false, final false
  inline void UpdateTime(::UnityEngine::Playables::Playable playable);

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_director() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_director();

  constexpr double_t const& __cordl_internal_get_m_AssetDuration() const;

  constexpr double_t& __cordl_internal_get_m_AssetDuration();

  constexpr bool const& __cordl_internal_get_m_SyncTime() const;

  constexpr bool& __cordl_internal_get_m_SyncTime();

  constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction const& __cordl_internal_get_pauseAction() const;

  constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction& __cordl_internal_get_pauseAction();

  constexpr void __cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set_m_AssetDuration(double_t value);

  constexpr void __cordl_internal_set_m_SyncTime(bool value);

  constexpr void __cordl_internal_set_pauseAction(::UnityEngine::Timeline::DirectorControlPlayable_PauseAction value);

  /// @brief Method .ctor, addr 0x67a90a4, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18866 };

  /// @brief Field director, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ___director;

  /// @brief Field pauseAction, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction ___pauseAction;

  /// @brief Field m_SyncTime, offset: 0x1c, size: 0x1, def value: None
  bool ___m_SyncTime;

  /// @brief Field m_AssetDuration, offset: 0x20, size: 0x8, def value: None
  double_t ___m_AssetDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___director) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___pauseAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_SyncTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DirectorControlPlayable, ___m_AssetDuration) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DirectorControlPlayable, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DirectorControlPlayable_PauseAction, "UnityEngine.Timeline", "DirectorControlPlayable/PauseAction");
NEED_NO_BOX(::UnityEngine::Timeline::DirectorControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");

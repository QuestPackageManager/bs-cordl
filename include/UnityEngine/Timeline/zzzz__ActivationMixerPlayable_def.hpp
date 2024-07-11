#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationMixerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationMixerPlayable)
namespace System {
class Object;
}
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
struct __ActivationTrack__PostPlaybackState;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationMixerPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationMixerPlayable);
// Type: UnityEngine.Timeline::ActivationMixerPlayable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ActivationMixerPlayable*
class CORDL_TYPE ActivationMixerPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_BoundGameObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundGameObject, put = __cordl_internal_set_m_BoundGameObject))::UnityW<::UnityEngine::GameObject> m_BoundGameObject;

  /// @brief Field m_BoundGameObjectInitialStateIsActive, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BoundGameObjectInitialStateIsActive, put = __cordl_internal_set_m_BoundGameObjectInitialStateIsActive)) bool m_BoundGameObjectInitialStateIsActive;

  /// @brief Field m_PostPlaybackState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PostPlaybackState, put = __cordl_internal_set_m_PostPlaybackState))::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState m_PostPlaybackState;

  __declspec(property(get = get_postPlaybackState, put = set_postPlaybackState))::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState postPlaybackState;

  /// @brief Method Create, addr 0x33bbefc, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  static inline ::UnityEngine::Timeline::ActivationMixerPlayable* New_ctor();

  /// @brief Method OnPlayableDestroy, addr 0x33bbf90, size 0xc0, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x33bc050, size 0x1c4, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_BoundGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_BoundGameObject();

  constexpr bool const& __cordl_internal_get_m_BoundGameObjectInitialStateIsActive() const;

  constexpr bool& __cordl_internal_get_m_BoundGameObjectInitialStateIsActive();

  constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const& __cordl_internal_get_m_PostPlaybackState() const;

  constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState& __cordl_internal_get_m_PostPlaybackState();

  constexpr void __cordl_internal_set_m_BoundGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_BoundGameObjectInitialStateIsActive(bool value);

  constexpr void __cordl_internal_set_m_PostPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value);

  /// @brief Method .ctor, addr 0x33bc214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_postPlaybackState, addr 0x33bbf80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState get_postPlaybackState();

  /// @brief Method set_postPlaybackState, addr 0x33bbf88, size 0x8, virtual false, abstract: false, final false
  inline void set_postPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationMixerPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationMixerPlayable(ActivationMixerPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationMixerPlayable(ActivationMixerPlayable const&) = delete;

  /// @brief Field m_PostPlaybackState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState ___m_PostPlaybackState;

  /// @brief Field m_BoundGameObjectInitialStateIsActive, offset: 0x14, size: 0x1, def value: None
  bool ___m_BoundGameObjectInitialStateIsActive;

  /// @brief Field m_BoundGameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_BoundGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationMixerPlayable, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationMixerPlayable, ___m_PostPlaybackState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationMixerPlayable, ___m_BoundGameObjectInitialStateIsActive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationMixerPlayable, ___m_BoundGameObject) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ActivationMixerPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationMixerPlayable*, "UnityEngine.Timeline", "ActivationMixerPlayable");

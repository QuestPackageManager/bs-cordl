#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationTrack)
namespace UnityEngine::Timeline {
struct __ActivationTrack__PostPlaybackState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
class ActivationMixerPlayable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __ActivationTrack__PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationTrack;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState);
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationTrack);
// Type: ::PostPlaybackState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13827))
// CS Name: ::ActivationTrack::PostPlaybackState
struct CORDL_TYPE __ActivationTrack__PostPlaybackState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ActivationTrack__PostPlaybackState_Unwrapped
  enum struct ____ActivationTrack__PostPlaybackState_Unwrapped : int32_t {
    __E_Active = static_cast<int32_t>(0x0),
    __E_Inactive = static_cast<int32_t>(0x1),
    __E_Revert = static_cast<int32_t>(0x2),
    __E_LeaveAsIs = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ActivationTrack__PostPlaybackState_Unwrapped() const noexcept {
    return static_cast<____ActivationTrack__PostPlaybackState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ActivationTrack__PostPlaybackState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActivationTrack__PostPlaybackState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Active value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const Active;

  /// @brief Field Inactive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const Inactive;

  /// @brief Field Revert value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const Revert;

  /// @brief Field LeaveAsIs value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const LeaveAsIs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::ActivationTrack
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13827)), TypeDefinitionIndex(TypeDefinitionIndex(13862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13828))
// CS Name: ::UnityEngine.Timeline::ActivationTrack*
class CORDL_TYPE ActivationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  using PostPlaybackState = ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState;

  /// @brief Field m_PostPlaybackState, offset 0xa0, size 0x4
  __declspec(property(get = __get_m_PostPlaybackState, put = __set_m_PostPlaybackState))::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState m_PostPlaybackState;

  /// @brief Field m_ActivationMixer, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_ActivationMixer, put = __set_m_ActivationMixer))::UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer;

  __declspec(property(get = get_postPlaybackState, put = set_postPlaybackState))::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState postPlaybackState;

  constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState& __get_m_PostPlaybackState();

  constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const& __get_m_PostPlaybackState() const;

  constexpr void __set_m_PostPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value);

  constexpr ::UnityEngine::Timeline::ActivationMixerPlayable*& __get_m_ActivationMixer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::ActivationMixerPlayable*> const& __get_m_ActivationMixer() const;

  constexpr void __set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable* value);

  /// @brief Method CanCompileClips, addr 0x2c4ed14, size 0x5c, virtual true, abstract: false, final false
  inline bool CanCompileClips();

  /// @brief Method get_postPlaybackState, addr 0x2c4ee20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState get_postPlaybackState();

  /// @brief Method set_postPlaybackState, addr 0x2c4ee28, size 0x14, virtual false, abstract: false, final false
  inline void set_postPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value);

  /// @brief Method CreateTrackMixer, addr 0x2c4ee50, size 0xe4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method UpdateTrackMode, addr 0x2c4ee3c, size 0x14, virtual false, abstract: false, final false
  inline void UpdateTrackMode();

  /// @brief Method GatherProperties, addr 0x2c4ef34, size 0x12c, virtual true, abstract: false, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method OnCreateClip, addr 0x2c4f1d8, size 0x50, virtual true, abstract: false, final false
  inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);

  static inline ::UnityEngine::Timeline::ActivationTrack* New_ctor();

  /// @brief Method .ctor, addr 0x2c4f22c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationTrack(ActivationTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationTrack(ActivationTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationTrack();

public:
  /// @brief Field m_PostPlaybackState, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState ___m_PostPlaybackState;

  /// @brief Field m_ActivationMixer, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Timeline::ActivationMixerPlayable* ___m_ActivationMixer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationTrack, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationTrack, ___m_PostPlaybackState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationTrack, ___m_ActivationMixer) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState, "UnityEngine.Timeline", "ActivationTrack/PostPlaybackState");
NEED_NO_BOX(::UnityEngine::Timeline::ActivationTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationTrack*, "UnityEngine.Timeline", "ActivationTrack");

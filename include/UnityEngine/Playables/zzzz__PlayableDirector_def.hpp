#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Playables {
struct DirectorUpdateMode;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableDirector);
// Dependencies UnityEngine.Behaviour, UnityEngine.IExposedPropertyTable
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_extrapolationMode, put = set_extrapolationMode)) ::UnityEngine::Playables::DirectorWrapMode extrapolationMode;

  __declspec(property(get = get_initialTime, put = set_initialTime)) double_t initialTime;

  /// @brief Field paused, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_paused, put = __cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* paused;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_playableAsset, put = set_playableAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset> playableAsset;

  __declspec(property(get = get_playableGraph)) ::UnityEngine::Playables::PlayableGraph playableGraph;

  /// @brief Field played, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_played, put = __cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* played;

  __declspec(property(get = get_state)) ::UnityEngine::Playables::PlayState state;

  /// @brief Field stopped, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stopped, put = __cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* stopped;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_timeUpdateMode, put = set_timeUpdateMode)) ::UnityEngine::Playables::DirectorUpdateMode timeUpdateMode;

  /// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
  constexpr operator ::UnityEngine::IExposedPropertyTable*() noexcept;

  /// @brief Method ClearGenericBinding, addr 0x48d39dc, size 0x44, virtual false, abstract: false, final false
  inline void ClearGenericBinding(::UnityEngine::Object* key);

  /// @brief Method ClearReferenceValue, addr 0x48d37b4, size 0x48, virtual true, abstract: false, final true
  inline void ClearReferenceValue(::UnityEngine::PropertyName id);

  /// @brief Method ClearReferenceValue_Injected, addr 0x48d37fc, size 0x44, virtual true, abstract: false, final true
  inline void ClearReferenceValue_Injected(::ByRef<::UnityEngine::PropertyName> id);

  /// @brief Method DeferredEvaluate, addr 0x48d3068, size 0x3c, virtual false, abstract: false, final false
  inline void DeferredEvaluate();

  /// @brief Method Evaluate, addr 0x48d3644, size 0x3c, virtual false, abstract: false, final false
  inline void Evaluate();

  /// @brief Method EvaluateNextFrame, addr 0x48d30a4, size 0x3c, virtual false, abstract: false, final false
  inline void EvaluateNextFrame();

  /// @brief Method GetGenericBinding, addr 0x48d3998, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object* key);

  /// @brief Method GetGraphHandle, addr 0x48d2f14, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle();

  /// @brief Method GetGraphHandle_Injected, addr 0x48d3adc, size 0x44, virtual false, abstract: false, final false
  inline void GetGraphHandle_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> ret);

  /// @brief Method GetPlayOnAwake, addr 0x48d2fa4, size 0x3c, virtual false, abstract: false, final false
  inline bool GetPlayOnAwake();

  /// @brief Method GetPlayState, addr 0x48d2c70, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// @brief Method GetReferenceValue, addr 0x48d38ec, size 0x58, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName id, ::ByRef<bool> idValid);

  /// @brief Method GetReferenceValue_Injected, addr 0x48d3944, size 0x54, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue_Injected(::ByRef<::UnityEngine::PropertyName> id, ::ByRef<bool> idValid);

  /// @brief Method GetWrapMode, addr 0x48d2d70, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode();

  /// @brief Method HasGenericBinding, addr 0x48d3a98, size 0x44, virtual false, abstract: false, final false
  inline bool HasGenericBinding(::UnityEngine::Object* key);

  /// @brief Method Internal_GetPlayableAsset, addr 0x48d2e4c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset();

  /// @brief Method Internal_SetGenericBinding, addr 0x48d3424, size 0x54, virtual false, abstract: false, final false
  inline void Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  static inline ::UnityEngine::Playables::PlayableDirector* New_ctor();

  /// @brief Method Pause, addr 0x48d3700, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x48d3394, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x48d3170, size 0xec, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::PlayableAsset* asset);

  /// @brief Method Play, addr 0x48d325c, size 0x138, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method Play, addr 0x48d30e0, size 0x48, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method PlayOnFrame, addr 0x48d3128, size 0x48, virtual false, abstract: false, final false
  inline void PlayOnFrame(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method PlayOnFrame_Injected, addr 0x48d3680, size 0x44, virtual false, abstract: false, final false
  inline void PlayOnFrame_Injected(::ByRef<::UnityEngine::Playables::FrameRate> frameRate);

  /// @brief Method ProcessPendingGraphChanges, addr 0x48d3a5c, size 0x3c, virtual false, abstract: false, final false
  inline void ProcessPendingGraphChanges();

  /// @brief Method RebindPlayableGraphOutputs, addr 0x48d3a20, size 0x3c, virtual false, abstract: false, final false
  inline void RebindPlayableGraphOutputs();

  /// @brief Method RebuildGraph, addr 0x48d3778, size 0x3c, virtual false, abstract: false, final false
  inline void RebuildGraph();

  /// @brief Method ResetFrameTiming, addr 0x48d3f40, size 0x28, virtual false, abstract: false, final false
  static inline void ResetFrameTiming();

  /// @brief Method Resume, addr 0x48d373c, size 0x3c, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method SendOnPlayableDirectorPause, addr 0x48d3f88, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorPause();

  /// @brief Method SendOnPlayableDirectorPlay, addr 0x48d3f68, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorPlay();

  /// @brief Method SendOnPlayableDirectorStop, addr 0x48d3fa8, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorStop();

  /// @brief Method SetGenericBinding, addr 0x48d33d0, size 0x54, virtual false, abstract: false, final false
  inline void SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  /// @brief Method SetPlayOnAwake, addr 0x48d3024, size 0x44, virtual false, abstract: false, final false
  inline void SetPlayOnAwake(bool on);

  /// @brief Method SetPlayableAsset, addr 0x48d2ecc, size 0x44, virtual false, abstract: false, final false
  inline void SetPlayableAsset(::UnityEngine::ScriptableObject* asset);

  /// @brief Method SetReferenceValue, addr 0x48d3840, size 0x58, virtual true, abstract: false, final true
  inline void SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value);

  /// @brief Method SetReferenceValue_Injected, addr 0x48d3898, size 0x54, virtual true, abstract: false, final true
  inline void SetReferenceValue_Injected(::ByRef<::UnityEngine::PropertyName> id, ::UnityEngine::Object* value);

  /// @brief Method SetWrapMode, addr 0x48d2cf0, size 0x44, virtual false, abstract: false, final false
  inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method Stop, addr 0x48d36c4, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_paused() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_played() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_stopped() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped();

  constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method .ctor, addr 0x48d3fc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_paused, addr 0x48d3c80, size 0xb0, virtual false, abstract: false, final false
  inline void add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method add_played, addr 0x48d3b20, size 0xb0, virtual false, abstract: false, final false
  inline void add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method add_stopped, addr 0x48d3de0, size 0xb0, virtual false, abstract: false, final false
  inline void add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method get_duration, addr 0x48d3608, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_extrapolationMode, addr 0x48d2d34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();

  /// @brief Method get_initialTime, addr 0x48d35cc, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_initialTime();

  /// @brief Method get_playOnAwake, addr 0x48d2f68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playableAsset, addr 0x48d2dac, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset();

  /// @brief Method get_playableGraph, addr 0x48d2f10, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_state, addr 0x48d2c34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState get_state();

  /// @brief Method get_time, addr 0x48d3544, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_timeUpdateMode, addr 0x48d34bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode();

  /// @brief Convert to "::UnityEngine::IExposedPropertyTable"
  constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

  /// @brief Method remove_paused, addr 0x48d3d30, size 0xb0, virtual false, abstract: false, final false
  inline void remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method remove_played, addr 0x48d3bd0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method remove_stopped, addr 0x48d3e90, size 0xb0, virtual false, abstract: false, final false
  inline void remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method set_extrapolationMode, addr 0x48d2cac, size 0x44, virtual false, abstract: false, final false
  inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode value);

  /// @brief Method set_initialTime, addr 0x48d3580, size 0x4c, virtual false, abstract: false, final false
  inline void set_initialTime(double_t value);

  /// @brief Method set_playOnAwake, addr 0x48d2fe0, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playableAsset, addr 0x48d2e88, size 0x44, virtual false, abstract: false, final false
  inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset* value);

  /// @brief Method set_time, addr 0x48d34f8, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method set_timeUpdateMode, addr 0x48d3478, size 0x44, virtual false, abstract: false, final false
  inline void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableDirector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableDirector(PlayableDirector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableDirector(PlayableDirector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18850 };

  /// @brief Field played, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___played;

  /// @brief Field paused, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___paused;

  /// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___stopped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class IExposedPropertyTable;
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
// Type: UnityEngine.Playables::PlayableDirector
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16211))
// CS Name: ::UnityEngine.Playables::PlayableDirector*
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field played, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_played, put = __cordl_internal_set_played))::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* played;

  /// @brief Field paused, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_paused, put = __cordl_internal_set_paused))::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* paused;

  /// @brief Field stopped, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stopped, put = __cordl_internal_set_stopped))::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* stopped;

  __declspec(property(get = get_state))::UnityEngine::Playables::PlayState state;

  __declspec(property(get = get_extrapolationMode, put = set_extrapolationMode))::UnityEngine::Playables::DirectorWrapMode extrapolationMode;

  __declspec(property(get = get_playableAsset, put = set_playableAsset))::UnityW<::UnityEngine::Playables::PlayableAsset> playableAsset;

  __declspec(property(get = get_playableGraph))::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_timeUpdateMode, put = set_timeUpdateMode))::UnityEngine::Playables::DirectorUpdateMode timeUpdateMode;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_initialTime, put = set_initialTime)) double_t initialTime;

  __declspec(property(get = get_duration)) double_t duration;

  /// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
  constexpr operator ::UnityEngine::IExposedPropertyTable*() noexcept;

  /// @brief Convert to "::UnityEngine::IExposedPropertyTable"
  constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_played() const;

  constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_paused() const;

  constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_stopped() const;

  constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method get_state, addr 0x2d05444, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState get_state();

  /// @brief Method set_extrapolationMode, addr 0x2d054bc, size 0x44, virtual false, abstract: false, final false
  inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode value);

  /// @brief Method get_extrapolationMode, addr 0x2d05544, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();

  /// @brief Method get_playableAsset, addr 0x2d055bc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset();

  /// @brief Method set_playableAsset, addr 0x2d05698, size 0x44, virtual false, abstract: false, final false
  inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset* value);

  /// @brief Method get_playableGraph, addr 0x2d05720, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_playOnAwake, addr 0x2d05778, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method set_playOnAwake, addr 0x2d057f0, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method DeferredEvaluate, addr 0x2d05878, size 0x3c, virtual false, abstract: false, final false
  inline void DeferredEvaluate();

  /// @brief Method Play, addr 0x2d058f0, size 0x48, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method Play, addr 0x2d05980, size 0xf0, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::PlayableAsset* asset);

  /// @brief Method Play, addr 0x2d05a70, size 0x13c, virtual false, abstract: false, final false
  inline void Play(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method SetGenericBinding, addr 0x2d05be8, size 0x54, virtual false, abstract: false, final false
  inline void SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  /// @brief Method set_timeUpdateMode, addr 0x2d05c90, size 0x44, virtual false, abstract: false, final false
  inline void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value);

  /// @brief Method get_timeUpdateMode, addr 0x2d05cd4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode();

  /// @brief Method set_time, addr 0x2d05d10, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method get_time, addr 0x2d05d5c, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method set_initialTime, addr 0x2d05d98, size 0x4c, virtual false, abstract: false, final false
  inline void set_initialTime(double_t value);

  /// @brief Method get_initialTime, addr 0x2d05de4, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_initialTime();

  /// @brief Method get_duration, addr 0x2d05e20, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method Evaluate, addr 0x2d05e5c, size 0x3c, virtual false, abstract: false, final false
  inline void Evaluate();

  /// @brief Method PlayOnFrame, addr 0x2d05938, size 0x48, virtual false, abstract: false, final false
  inline void PlayOnFrame(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method Play, addr 0x2d05bac, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Stop, addr 0x2d05edc, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Pause, addr 0x2d05f18, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x2d05f54, size 0x3c, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method RebuildGraph, addr 0x2d05f90, size 0x3c, virtual false, abstract: false, final false
  inline void RebuildGraph();

  /// @brief Method ClearReferenceValue, addr 0x2d05fcc, size 0x48, virtual true, abstract: false, final true
  inline void ClearReferenceValue(::UnityEngine::PropertyName id);

  /// @brief Method SetReferenceValue, addr 0x2d06058, size 0x58, virtual true, abstract: false, final true
  inline void SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value);

  /// @brief Method GetReferenceValue, addr 0x2d06104, size 0x58, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid);

  /// @brief Method GetGenericBinding, addr 0x2d061b0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object* key);

  /// @brief Method ClearGenericBinding, addr 0x2d061f4, size 0x44, virtual false, abstract: false, final false
  inline void ClearGenericBinding(::UnityEngine::Object* key);

  /// @brief Method RebindPlayableGraphOutputs, addr 0x2d06238, size 0x3c, virtual false, abstract: false, final false
  inline void RebindPlayableGraphOutputs();

  /// @brief Method ProcessPendingGraphChanges, addr 0x2d06274, size 0x3c, virtual false, abstract: false, final false
  inline void ProcessPendingGraphChanges();

  /// @brief Method HasGenericBinding, addr 0x2d062b0, size 0x44, virtual false, abstract: false, final false
  inline bool HasGenericBinding(::UnityEngine::Object* key);

  /// @brief Method GetPlayState, addr 0x2d05480, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// @brief Method SetWrapMode, addr 0x2d05500, size 0x44, virtual false, abstract: false, final false
  inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method GetWrapMode, addr 0x2d05580, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode();

  /// @brief Method EvaluateNextFrame, addr 0x2d058b4, size 0x3c, virtual false, abstract: false, final false
  inline void EvaluateNextFrame();

  /// @brief Method GetGraphHandle, addr 0x2d05724, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle();

  /// @brief Method SetPlayOnAwake, addr 0x2d05834, size 0x44, virtual false, abstract: false, final false
  inline void SetPlayOnAwake(bool on);

  /// @brief Method GetPlayOnAwake, addr 0x2d057b4, size 0x3c, virtual false, abstract: false, final false
  inline bool GetPlayOnAwake();

  /// @brief Method Internal_SetGenericBinding, addr 0x2d05c3c, size 0x54, virtual false, abstract: false, final false
  inline void Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  /// @brief Method SetPlayableAsset, addr 0x2d056dc, size 0x44, virtual false, abstract: false, final false
  inline void SetPlayableAsset(::UnityEngine::ScriptableObject* asset);

  /// @brief Method Internal_GetPlayableAsset, addr 0x2d0565c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset();

  /// @brief Method add_played, addr 0x2d06338, size 0xb0, virtual false, abstract: false, final false
  inline void add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method remove_played, addr 0x2d063e8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method add_paused, addr 0x2d06498, size 0xb0, virtual false, abstract: false, final false
  inline void add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method remove_paused, addr 0x2d06548, size 0xb0, virtual false, abstract: false, final false
  inline void remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method add_stopped, addr 0x2d065f8, size 0xb0, virtual false, abstract: false, final false
  inline void add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method remove_stopped, addr 0x2d066a8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  /// @brief Method ResetFrameTiming, addr 0x2d06758, size 0x28, virtual false, abstract: false, final false
  static inline void ResetFrameTiming();

  /// @brief Method SendOnPlayableDirectorPlay, addr 0x2d06780, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorPlay();

  /// @brief Method SendOnPlayableDirectorPause, addr 0x2d067a0, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorPause();

  /// @brief Method SendOnPlayableDirectorStop, addr 0x2d067c0, size 0x20, virtual false, abstract: false, final false
  inline void SendOnPlayableDirectorStop();

  static inline ::UnityEngine::Playables::PlayableDirector* New_ctor();

  /// @brief Method .ctor, addr 0x2d067e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method PlayOnFrame_Injected, addr 0x2d05e98, size 0x44, virtual false, abstract: false, final false
  inline void PlayOnFrame_Injected(ByRef<::UnityEngine::Playables::FrameRate> frameRate);

  /// @brief Method ClearReferenceValue_Injected, addr 0x2d06014, size 0x44, virtual true, abstract: false, final true
  inline void ClearReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id);

  /// @brief Method SetReferenceValue_Injected, addr 0x2d060b0, size 0x54, virtual true, abstract: false, final true
  inline void SetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ::UnityEngine::Object* value);

  /// @brief Method GetReferenceValue_Injected, addr 0x2d0615c, size 0x54, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ByRef<bool> idValid);

  /// @brief Method GetGraphHandle_Injected, addr 0x2d062f4, size 0x44, virtual false, abstract: false, final false
  inline void GetGraphHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> ret);

  // Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableDirector(PlayableDirector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableDirector(PlayableDirector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableDirector();

public:
  /// @brief Field played, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___played;

  /// @brief Field paused, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___paused;

  /// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* ___stopped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");

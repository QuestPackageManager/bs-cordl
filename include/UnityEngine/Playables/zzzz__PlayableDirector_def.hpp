#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
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
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_extrapolationMode, put=set_extrapolationMode)) ::UnityEngine::Playables::DirectorWrapMode  extrapolationMode;

 __declspec(property(get=get_initialTime, put=set_initialTime)) double_t  initialTime;

/// @brief Field paused, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  paused;

 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(get=get_playableAsset, put=set_playableAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  playableAsset;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

/// @brief Field played, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  played;

 __declspec(property(get=get_state)) ::UnityEngine::Playables::PlayState  state;

/// @brief Field stopped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopped, put=__cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  stopped;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

 __declspec(property(get=get_timeUpdateMode, put=set_timeUpdateMode)) ::UnityEngine::Playables::DirectorUpdateMode  timeUpdateMode;

/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr operator  ::UnityEngine::IExposedPropertyTable*() noexcept;

/// @brief Method ClearGenericBinding, addr 0x69dd67c, size 0xc0, virtual false, abstract: false, final false
inline void ClearGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method ClearGenericBinding_Injected, addr 0x69dd73c, size 0x44, virtual false, abstract: false, final false
static inline void ClearGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key) ;

/// @brief Method ClearReferenceValue, addr 0x69dd104, size 0x94, virtual true, abstract: false, final true
inline void ClearReferenceValue(::UnityEngine::PropertyName  id) ;

/// @brief Method ClearReferenceValue_Injected, addr 0x69dd198, size 0x44, virtual false, abstract: false, final false
static inline void ClearReferenceValue_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::PropertyName>  id) ;

/// @brief Method DeferredEvaluate, addr 0x69dc32c, size 0x4, virtual false, abstract: false, final false
inline void DeferredEvaluate() ;

/// @brief Method Evaluate, addr 0x69dccd8, size 0x80, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method EvaluateNextFrame, addr 0x69dc330, size 0x80, virtual false, abstract: false, final false
inline void EvaluateNextFrame() ;

/// @brief Method EvaluateNextFrame_Injected, addr 0x69ddab8, size 0x3c, virtual false, abstract: false, final false
static inline void EvaluateNextFrame_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Evaluate_Injected, addr 0x69dcd58, size 0x3c, virtual false, abstract: false, final false
static inline void Evaluate_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetGenericBinding, addr 0x69dd4b0, size 0x188, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method GetGenericBinding_Injected, addr 0x69dd638, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key) ;

/// @brief Method GetGraphHandle, addr 0x69dc17c, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle() ;

/// @brief Method GetGraphHandle_Injected, addr 0x69ddaf4, size 0x44, virtual false, abstract: false, final false
static inline void GetGraphHandle_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetPlayOnAwake, addr 0x69dc218, size 0x80, virtual false, abstract: false, final false
inline bool GetPlayOnAwake() ;

/// @brief Method GetPlayOnAwake_Injected, addr 0x69ddb7c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetPlayOnAwake_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPlayState, addr 0x69dbd48, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetPlayState_Injected, addr 0x69dd9fc, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayState GetPlayState_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetReferenceValue, addr 0x69dd2fc, size 0x160, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName  id, ::ByRef<bool>  idValid) ;

/// @brief Method GetReferenceValue_Injected, addr 0x69dd45c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetReferenceValue_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::PropertyName>  id, ::ByRef<bool>  idValid) ;

/// @brief Method GetWrapMode, addr 0x69dbe60, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode() ;

/// @brief Method GetWrapMode_Injected, addr 0x69dda7c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method HasGenericBinding, addr 0x69dd8f8, size 0xc0, virtual false, abstract: false, final false
inline bool HasGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method HasGenericBinding_Injected, addr 0x69dd9b8, size 0x44, virtual false, abstract: false, final false
static inline bool HasGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key) ;

/// @brief Method Internal_GetPlayableAsset, addr 0x69dbf64, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset() ;

/// @brief Method Internal_GetPlayableAsset_Injected, addr 0x69ddc50, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_GetPlayableAsset_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_SetGenericBinding, addr 0x69dc67c, size 0xe0, virtual false, abstract: false, final false
inline void Internal_SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

/// @brief Method Internal_SetGenericBinding_Injected, addr 0x69ddbb8, size 0x54, virtual false, abstract: false, final false
static inline void Internal_SetGenericBinding_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  key, ::System::IntPtr  value) ;

static inline ::UnityEngine::Playables::PlayableDirector* New_ctor() ;

/// @brief Method Pause, addr 0x69dced0, size 0x80, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Pause_Injected, addr 0x69dcf50, size 0x3c, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Play, addr 0x69dc5f8, size 0x80, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x69dc44c, size 0xd0, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method Play, addr 0x69dc51c, size 0xdc, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Play, addr 0x69dc3b0, size 0x8, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame, addr 0x69dc3b8, size 0x94, virtual false, abstract: false, final false
inline void PlayOnFrame(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame_Injected, addr 0x69dcd94, size 0x44, virtual false, abstract: false, final false
static inline void PlayOnFrame_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Playables::FrameRate>  frameRate) ;

/// @brief Method Play_Injected, addr 0x69dcdd8, size 0x3c, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ProcessPendingGraphChanges, addr 0x69dd83c, size 0x80, virtual false, abstract: false, final false
inline void ProcessPendingGraphChanges() ;

/// @brief Method ProcessPendingGraphChanges_Injected, addr 0x69dd8bc, size 0x3c, virtual false, abstract: false, final false
static inline void ProcessPendingGraphChanges_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method RebindPlayableGraphOutputs, addr 0x69dd780, size 0x80, virtual false, abstract: false, final false
inline void RebindPlayableGraphOutputs() ;

/// @brief Method RebindPlayableGraphOutputs_Injected, addr 0x69dd800, size 0x3c, virtual false, abstract: false, final false
static inline void RebindPlayableGraphOutputs_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method RebuildGraph, addr 0x69dd048, size 0x80, virtual false, abstract: false, final false
inline void RebuildGraph() ;

/// @brief Method RebuildGraph_Injected, addr 0x69dd0c8, size 0x3c, virtual false, abstract: false, final false
static inline void RebuildGraph_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetFrameTiming, addr 0x69de10c, size 0x28, virtual false, abstract: false, final false
static inline void ResetFrameTiming() ;

/// @brief Method Resume, addr 0x69dcf8c, size 0x80, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method Resume_Injected, addr 0x69dd00c, size 0x3c, virtual false, abstract: false, final false
static inline void Resume_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SendOnPlayableDirectorPause, addr 0x69de154, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPause() ;

/// @brief Method SendOnPlayableDirectorPlay, addr 0x69de134, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPlay() ;

/// @brief Method SendOnPlayableDirectorStop, addr 0x69de174, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorStop() ;

/// @brief Method SetGenericBinding, addr 0x69dc678, size 0x4, virtual false, abstract: false, final false
inline void SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

/// @brief Method SetPlayOnAwake, addr 0x69dc29c, size 0x90, virtual false, abstract: false, final false
inline void SetPlayOnAwake(bool  on) ;

/// @brief Method SetPlayOnAwake_Injected, addr 0x69ddb38, size 0x44, virtual false, abstract: false, final false
static inline void SetPlayOnAwake_Injected(::System::IntPtr  _unity_self, bool  on) ;

/// @brief Method SetPlayableAsset, addr 0x69dc0b8, size 0xc0, virtual false, abstract: false, final false
inline void SetPlayableAsset(::UnityEngine::ScriptableObject*  asset) ;

/// @brief Method SetPlayableAsset_Injected, addr 0x69ddc0c, size 0x44, virtual false, abstract: false, final false
static inline void SetPlayableAsset_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  asset) ;

/// @brief Method SetReferenceValue, addr 0x69dd1dc, size 0xcc, virtual true, abstract: false, final true
inline void SetReferenceValue(::UnityEngine::PropertyName  id, ::UnityEngine::Object*  value) ;

/// @brief Method SetReferenceValue_Injected, addr 0x69dd2a8, size 0x54, virtual false, abstract: false, final false
static inline void SetReferenceValue_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::PropertyName>  id, ::System::IntPtr  value) ;

/// @brief Method SetWrapMode, addr 0x69dbdcc, size 0x90, virtual false, abstract: false, final false
inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method SetWrapMode_Injected, addr 0x69dda38, size 0x44, virtual false, abstract: false, final false
static inline void SetWrapMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Stop, addr 0x69dce14, size 0x80, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop_Injected, addr 0x69dce94, size 0x3c, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_paused() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_played() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_stopped() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped() ;

constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method .ctor, addr 0x69de194, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_paused, addr 0x69dde0c, size 0xc0, virtual false, abstract: false, final false
inline void add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method add_played, addr 0x69ddc8c, size 0xc0, virtual false, abstract: false, final false
inline void add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method add_stopped, addr 0x69ddf8c, size 0xc0, virtual false, abstract: false, final false
inline void add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method get_duration, addr 0x69dcc1c, size 0x80, virtual false, abstract: false, final false
inline double_t get_duration() ;

/// @brief Method get_duration_Injected, addr 0x69dcc9c, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_duration_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_extrapolationMode, addr 0x69dbe5c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode() ;

/// @brief Method get_initialTime, addr 0x69dcb60, size 0x80, virtual false, abstract: false, final false
inline double_t get_initialTime() ;

/// @brief Method get_initialTime_Injected, addr 0x69dcbe0, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_initialTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_playOnAwake, addr 0x69dc214, size 0x4, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_playableAsset, addr 0x69dbee0, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset() ;

/// @brief Method get_playableGraph, addr 0x69dc178, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_state, addr 0x69dbd44, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_time, addr 0x69dc9c8, size 0x80, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_timeUpdateMode, addr 0x69dc830, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode() ;

/// @brief Method get_timeUpdateMode_Injected, addr 0x69dc8b0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time_Injected, addr 0x69dca48, size 0x3c, virtual false, abstract: false, final false
static inline double_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

/// @brief Method remove_paused, addr 0x69ddecc, size 0xc0, virtual false, abstract: false, final false
inline void remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method remove_played, addr 0x69ddd4c, size 0xc0, virtual false, abstract: false, final false
inline void remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method remove_stopped, addr 0x69de04c, size 0xc0, virtual false, abstract: false, final false
inline void remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method set_extrapolationMode, addr 0x69dbdc8, size 0x4, virtual false, abstract: false, final false
inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode  value) ;

/// @brief Method set_initialTime, addr 0x69dca84, size 0x90, virtual false, abstract: false, final false
inline void set_initialTime(double_t  value) ;

/// @brief Method set_initialTime_Injected, addr 0x69dcb14, size 0x4c, virtual false, abstract: false, final false
static inline void set_initialTime_Injected(::System::IntPtr  _unity_self, double_t  value) ;

/// @brief Method set_playOnAwake, addr 0x69dc298, size 0x4, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playableAsset, addr 0x69dc0b4, size 0x4, virtual false, abstract: false, final false
inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method set_time, addr 0x69dc8ec, size 0x90, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_timeUpdateMode, addr 0x69dc75c, size 0x90, virtual false, abstract: false, final false
inline void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value) ;

/// @brief Method set_timeUpdateMode_Injected, addr 0x69dc7ec, size 0x44, virtual false, abstract: false, final false
static inline void set_timeUpdateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Playables::DirectorUpdateMode  value) ;

/// @brief Method set_time_Injected, addr 0x69dc97c, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableDirector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableDirector(PlayableDirector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableDirector(PlayableDirector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22436};

/// @brief Field played, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___played;

/// @brief Field paused, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___paused;

/// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___stopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");

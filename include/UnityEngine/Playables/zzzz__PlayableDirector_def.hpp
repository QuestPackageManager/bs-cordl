#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine::Playables {
struct PlayState;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16120))
// CS Name: ::UnityEngine.Playables::PlayableDirector*
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field played, offset 0x18, size 0x8
  __declspec(property(get = __get_played, put = __set_played))::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* played;

  /// @brief Field paused, offset 0x20, size 0x8
  __declspec(property(get = __get_paused, put = __set_paused))::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* paused;

  /// @brief Field stopped, offset 0x28, size 0x8
  __declspec(property(get = __get_stopped, put = __set_stopped))::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* stopped;

  __declspec(property(get = get_state))::UnityEngine::Playables::PlayState state;

  __declspec(property(get = get_extrapolationMode))::UnityEngine::Playables::DirectorWrapMode extrapolationMode;

  __declspec(property(get = get_playableAsset))::UnityEngine::Playables::PlayableAsset* playableAsset;

  __declspec(property(get = get_playableGraph))::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_duration)) double_t duration;

  /// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
  constexpr operator ::UnityEngine::IExposedPropertyTable*() noexcept;

  constexpr ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& __get_played();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*> const& __get_played() const;

  constexpr void __set_played(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value);

  constexpr ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& __get_paused();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*> const& __get_paused() const;

  constexpr void __set_paused(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value);

  constexpr ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& __get_stopped();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*> const& __get_stopped() const;

  constexpr void __set_stopped(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* value);

  /// @brief Method get_state addr 0x2cfa768 size 0x3c virtual false final false
  inline ::UnityEngine::Playables::PlayState get_state();

  /// @brief Method get_extrapolationMode addr 0x2cfa7e0 size 0x3c virtual false final false
  inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();

  /// @brief Method get_playableAsset addr 0x2cfa858 size 0xa0 virtual false final false
  inline ::UnityEngine::Playables::PlayableAsset* get_playableAsset();

  /// @brief Method get_playableGraph addr 0x2cfa934 size 0x4 virtual false final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method Play addr 0x2cfa98c size 0x48 virtual false final false
  inline void Play(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method SetGenericBinding addr 0x2cfaa1c size 0x54 virtual false final false
  inline void SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  /// @brief Method set_time addr 0x2cfaac4 size 0x4c virtual false final false
  inline void set_time(double_t value);

  /// @brief Method get_time addr 0x2cfab10 size 0x3c virtual false final false
  inline double_t get_time();

  /// @brief Method get_duration addr 0x2cfab4c size 0x3c virtual false final false
  inline double_t get_duration();

  /// @brief Method Evaluate addr 0x2cfab88 size 0x3c virtual false final false
  inline void Evaluate();

  /// @brief Method PlayOnFrame addr 0x2cfa9d4 size 0x48 virtual false final false
  inline void PlayOnFrame(::UnityEngine::Playables::FrameRate frameRate);

  /// @brief Method Play addr 0x2cfac08 size 0x3c virtual false final false
  inline void Play();

  /// @brief Method Stop addr 0x2cfac44 size 0x3c virtual false final false
  inline void Stop();

  /// @brief Method Pause addr 0x2cfac80 size 0x3c virtual false final false
  inline void Pause();

  /// @brief Method SetReferenceValue addr 0x2cfacbc size 0x58 virtual true final true
  inline void SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value);

  /// @brief Method GetReferenceValue addr 0x2cfad68 size 0x58 virtual true final true
  inline ::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid);

  /// @brief Method GetGenericBinding addr 0x2cfae14 size 0x44 virtual false final false
  inline ::UnityEngine::Object* GetGenericBinding(::UnityEngine::Object* key);

  /// @brief Method GetPlayState addr 0x2cfa7a4 size 0x3c virtual false final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// @brief Method GetWrapMode addr 0x2cfa81c size 0x3c virtual false final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode();

  /// @brief Method GetGraphHandle addr 0x2cfa938 size 0x54 virtual false final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle();

  /// @brief Method Internal_SetGenericBinding addr 0x2cfaa70 size 0x54 virtual false final false
  inline void Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value);

  /// @brief Method Internal_GetPlayableAsset addr 0x2cfa8f8 size 0x3c virtual false final false
  inline ::UnityEngine::ScriptableObject* Internal_GetPlayableAsset();

  /// @brief Method SendOnPlayableDirectorPlay addr 0x2cfae9c size 0x20 virtual false final false
  inline void SendOnPlayableDirectorPlay();

  /// @brief Method SendOnPlayableDirectorPause addr 0x2cfaebc size 0x20 virtual false final false
  inline void SendOnPlayableDirectorPause();

  /// @brief Method SendOnPlayableDirectorStop addr 0x2cfaedc size 0x20 virtual false final false
  inline void SendOnPlayableDirectorStop();

  /// @brief Method PlayOnFrame_Injected addr 0x2cfabc4 size 0x44 virtual false final false
  inline void PlayOnFrame_Injected(ByRef<::UnityEngine::Playables::FrameRate> frameRate);

  /// @brief Method SetReferenceValue_Injected addr 0x2cfad14 size 0x54 virtual true final true
  inline void SetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ::UnityEngine::Object* value);

  /// @brief Method GetReferenceValue_Injected addr 0x2cfadc0 size 0x54 virtual true final true
  inline ::UnityEngine::Object* GetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ByRef<bool> idValid);

  /// @brief Method GetGraphHandle_Injected addr 0x2cfae58 size 0x44 virtual false final false
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
  ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* ___played;

  /// @brief Field paused, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* ___paused;

  /// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* ___stopped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");

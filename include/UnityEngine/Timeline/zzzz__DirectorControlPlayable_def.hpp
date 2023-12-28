#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectorControlPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class DirectorControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::DirectorControlPlayable);
// Type: UnityEngine.Timeline::DirectorControlPlayable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13904))
// CS Name: ::UnityEngine.Timeline::DirectorControlPlayable*
class CORDL_TYPE DirectorControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field director, offset 0x10, size 0x8
  __declspec(property(get = __get_director, put = __set_director))::UnityEngine::Playables::PlayableDirector* director;

  /// @brief Field m_SyncTime, offset 0x18, size 0x1
  __declspec(property(get = __get_m_SyncTime, put = __set_m_SyncTime)) bool m_SyncTime;

  /// @brief Field m_AssetDuration, offset 0x20, size 0x8
  __declspec(property(get = __get_m_AssetDuration, put = __set_m_AssetDuration)) double_t m_AssetDuration;

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get_director();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get_director() const;

  constexpr void __set_director(::UnityEngine::Playables::PlayableDirector* value);

  constexpr bool& __get_m_SyncTime();

  constexpr bool const& __get_m_SyncTime() const;

  constexpr void __set_m_SyncTime(bool value);

  constexpr double_t& __get_m_AssetDuration();

  constexpr double_t const& __get_m_AssetDuration() const;

  constexpr void __set_m_AssetDuration(double_t value);

  /// @brief Method Create addr 0x2c65364 size 0x130 virtual false final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                     ::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method OnPlayableDestroy addr 0x2c6a7c0 size 0xc0 virtual true final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame addr 0x2c6a880 size 0x1b4 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay addr 0x2c6ad34 size 0xd4 virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause addr 0x2c6ae08 size 0x100 virtual true final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame addr 0x2c6af08 size 0x200 virtual true final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method SyncSpeed addr 0x2c6ab48 size 0x12c virtual false final false
  inline void SyncSpeed(double_t speed);

  /// @brief Method SyncStart addr 0x2c6ac74 size 0xc0 virtual false final false
  inline void SyncStart(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method SyncStop addr 0x2c6b3e4 size 0x84 virtual false final false
  inline void SyncStop(::UnityEngine::Playables::PlayableGraph graph, double_t time);

  /// @brief Method DetectDiscontinuity addr 0x2c6aa34 size 0x114 virtual false final false
  inline bool DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method DetectOutOfSync addr 0x2c6b108 size 0x14c virtual false final false
  inline bool DetectOutOfSync(::UnityEngine::Playables::Playable playable);

  /// @brief Method UpdateTime addr 0x2c6b254 size 0x190 virtual false final false
  inline void UpdateTime(::UnityEngine::Playables::Playable playable);

  static inline ::UnityEngine::Timeline::DirectorControlPlayable* New_ctor();

  /// @brief Method .ctor addr 0x2c6b468 size 0x1010 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectorControlPlayable(DirectorControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectorControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectorControlPlayable(DirectorControlPlayable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectorControlPlayable();

public:
  /// @brief Field director, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ___director;

  /// @brief Field m_SyncTime, offset: 0x18, size: 0x1, def value: None
  bool ___m_SyncTime;

  /// @brief Field m_AssetDuration, offset: 0x20, size: 0x8, def value: None
  double_t ___m_AssetDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DirectorControlPlayable, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::DirectorControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");

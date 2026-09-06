#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableExtensions)
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::PlayableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableExtensions*, "UnityEngine.Playables", "PlayableExtensions");
// [Extension]
// Dependencies System.Object, UnityEngine.Playables.IPlayable
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableExtensions
class CORDL_TYPE PlayableExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method GetDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline double_t GetDuration(U playable);

  /// [Extension]
  /// @brief Method GetGraph, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::PlayableGraph GetGraph(U playable);

  /// [Extension]
  /// @brief Method GetInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::Playable GetInput(U playable, int32_t inputPort);

  /// [Extension]
  /// @brief Method GetInputCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline int32_t GetInputCount(U playable);

  /// [Extension]
  /// @brief Method GetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline float_t GetInputWeight(U playable, int32_t inputIndex);

  /// [Extension]
  /// @brief Method GetOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::Playable GetOutput(U playable, int32_t outputPort);

  /// [Extension]
  /// @brief Method GetPlayState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::PlayState GetPlayState(U playable);

  /// [Extension]
  /// @brief Method GetPreviousTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline double_t GetPreviousTime(U playable);

  /// [Extension]
  /// @brief Method GetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline double_t GetTime(U playable);

  /// [Extension]
  /// @brief Method GetTimeWrapMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode(U playable);

  /// [Extension]
  /// @brief Method IsDone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline bool IsDone(U playable);

  /// [Extension]
  /// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline bool IsValid(U playable);

  /// [Extension]
  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void Pause(U playable);

  /// [Extension]
  /// @brief Method Play, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void Play(U playable);

  /// [Extension]
  /// @brief Method SetDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetDuration(U playable, double_t value);

  /// [Extension]
  /// @brief Method SetInputCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetInputCount(U playable, int32_t value);

  /// [Extension]
  /// @brief Method SetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<V, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
  static inline void SetInputWeight(U playable, V input, float_t weight);

  /// [Extension]
  /// @brief Method SetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetInputWeight(U playable, int32_t inputIndex, float_t weight);

  /// [Extension]
  /// @brief Method SetPropagateSetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetPropagateSetTime(U playable, bool value);

  /// [Extension]
  /// @brief Method SetSpeed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetSpeed(U playable, double_t value);

  /// [Extension]
  /// @brief Method SetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetTime(U playable, double_t value);

  /// [Extension]
  /// @brief Method SetTimeWrapMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetTimeWrapMode(U playable, ::UnityEngine::Playables::DirectorWrapMode value);

  /// [Extension]
  /// @brief Method SetTraversalMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetTraversalMode(U playable, ::UnityEngine::Playables::PlayableTraversalMode mode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableExtensions(PlayableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableExtensions(PlayableExtensionsconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::PlayableExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Playables

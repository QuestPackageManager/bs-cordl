#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableExtensions);
// Type: UnityEngine.Playables::PlayableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::PlayableExtensions*
class CORDL_TYPE PlayableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline double_t GetDuration(U playable);

  /// @brief Method GetGraph, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::UnityEngine::Playables::PlayableGraph GetGraph(U playable);

  /// @brief Method GetInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::UnityEngine::Playables::Playable GetInput(U playable, int32_t inputPort);

  /// @brief Method GetInputCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline int32_t GetInputCount(U playable);

  /// @brief Method GetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline float_t GetInputWeight(U playable, int32_t inputIndex);

  /// @brief Method GetPlayState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::UnityEngine::Playables::PlayState GetPlayState(U playable);

  /// @brief Method GetPreviousTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline double_t GetPreviousTime(U playable);

  /// @brief Method GetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline double_t GetTime(U playable);

  /// @brief Method GetTimeWrapMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode(U playable);

  /// @brief Method IsDone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline bool IsDone(U playable);

  /// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline bool IsValid(U playable);

  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void Pause(U playable);

  /// @brief Method Play, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void Play(U playable);

  /// @brief Method SetDuration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetDuration(U playable, double_t value);

  /// @brief Method SetInputCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetInputCount(U playable, int32_t value);

  /// @brief Method SetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V> static inline void SetInputWeight(U playable, V input, float_t weight);

  /// @brief Method SetInputWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetInputWeight(U playable, int32_t inputIndex, float_t weight);

  /// @brief Method SetPropagateSetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetPropagateSetTime(U playable, bool value);

  /// @brief Method SetSpeed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetSpeed(U playable, double_t value);

  /// @brief Method SetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetTime(U playable, double_t value);

  /// @brief Method SetTimeWrapMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetTimeWrapMode(U playable, ::UnityEngine::Playables::DirectorWrapMode value);

  /// @brief Method SetTraversalMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetTraversalMode(U playable, ::UnityEngine::Playables::PlayableTraversalMode mode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableExtensions(PlayableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableExtensions(PlayableExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableExtensions*, "UnityEngine.Playables", "PlayableExtensions");

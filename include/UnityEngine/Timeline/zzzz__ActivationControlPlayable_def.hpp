#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationControlPlayable)
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
struct ActivationControlPlayable_InitialState;
}
namespace UnityEngine::Timeline {
struct ActivationControlPlayable_PostPlaybackState;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct ActivationControlPlayable_InitialState;
}
namespace UnityEngine::Timeline {
struct ActivationControlPlayable_PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationControlPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::ActivationControlPlayable_InitialState);
MARK_VAL_T(::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState);
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationControlPlayable);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
struct CORDL_TYPE ActivationControlPlayable_PostPlaybackState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ActivationControlPlayable_PostPlaybackState_Unwrapped
  enum struct __ActivationControlPlayable_PostPlaybackState_Unwrapped : int32_t {
    __E_Active = static_cast<int32_t>(0x0),
    __E_Inactive = static_cast<int32_t>(0x1),
    __E_Revert = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ActivationControlPlayable_PostPlaybackState_Unwrapped() const noexcept {
    return static_cast<__ActivationControlPlayable_PostPlaybackState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationControlPlayable_PostPlaybackState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ActivationControlPlayable_PostPlaybackState(int32_t value__) noexcept;

  /// @brief Field Active value: I32(0)
  static ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState const Active;

  /// @brief Field Inactive value: I32(1)
  static ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState const Inactive;

  /// @brief Field Revert value: I32(2)
  static ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState const Revert;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15867 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.ActivationControlPlayable/InitialState
struct CORDL_TYPE ActivationControlPlayable_InitialState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ActivationControlPlayable_InitialState_Unwrapped
  enum struct __ActivationControlPlayable_InitialState_Unwrapped : int32_t {
    __E_Unset = static_cast<int32_t>(0x0),
    __E_Active = static_cast<int32_t>(0x1),
    __E_Inactive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ActivationControlPlayable_InitialState_Unwrapped() const noexcept {
    return static_cast<__ActivationControlPlayable_InitialState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationControlPlayable_InitialState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ActivationControlPlayable_InitialState(int32_t value__) noexcept;

  /// @brief Field Active value: I32(1)
  static ::UnityEngine::Timeline::ActivationControlPlayable_InitialState const Active;

  /// @brief Field Inactive value: I32(2)
  static ::UnityEngine::Timeline::ActivationControlPlayable_InitialState const Inactive;

  /// @brief Field Unset value: I32(0)
  static ::UnityEngine::Timeline::ActivationControlPlayable_InitialState const Unset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable_InitialState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationControlPlayable_InitialState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Timeline.ActivationControlPlayable::InitialState, UnityEngine.Timeline.ActivationControlPlayable::PostPlaybackState
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ActivationControlPlayable
class CORDL_TYPE ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using InitialState = ::UnityEngine::Timeline::ActivationControlPlayable_InitialState;

  using PostPlaybackState = ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState;

  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field m_InitialState, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialState, put = __cordl_internal_set_m_InitialState)) ::UnityEngine::Timeline::ActivationControlPlayable_InitialState m_InitialState;

  /// @brief Field postPlayback, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_postPlayback, put = __cordl_internal_set_postPlayback)) ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback;

  /// @brief Method Create, addr 0x4822734, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlaybackState);

  static inline ::UnityEngine::Timeline::ActivationControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x4827864, size 0xa8, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x48277dc, size 0x88, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnGraphStart, addr 0x4827994, size 0x94, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x4827a28, size 0xcc, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x482790c, size 0x88, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* userData);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_InitialState const& __cordl_internal_get_m_InitialState() const;

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_InitialState& __cordl_internal_get_m_InitialState();

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState const& __cordl_internal_get_postPlayback() const;

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState& __cordl_internal_get_postPlayback();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_InitialState(::UnityEngine::Timeline::ActivationControlPlayable_InitialState value);

  constexpr void __cordl_internal_set_postPlayback(::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState value);

  /// @brief Method .ctor, addr 0x4827af4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationControlPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationControlPlayable(ActivationControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationControlPlayable(ActivationControlPlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15869 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field postPlayback, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState ___postPlayback;

  /// @brief Field m_InitialState, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Timeline::ActivationControlPlayable_InitialState ___m_InitialState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___postPlayback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___m_InitialState) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationControlPlayable, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable_InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
NEED_NO_BOX(::UnityEngine::Timeline::ActivationControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");

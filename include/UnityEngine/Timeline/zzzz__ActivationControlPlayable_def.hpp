#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
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
struct __ActivationControlPlayable__InitialState;
}
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__PostPlaybackState;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__InitialState;
}
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationControlPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState);
MARK_VAL_T(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState);
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationControlPlayable);
// Type: ::PostPlaybackState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::ActivationControlPlayable::PostPlaybackState
struct CORDL_TYPE __ActivationControlPlayable__PostPlaybackState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ActivationControlPlayable__PostPlaybackState_Unwrapped
  enum struct ____ActivationControlPlayable__PostPlaybackState_Unwrapped : int32_t {
    __E_Active = static_cast<int32_t>(0x0),
    __E_Inactive = static_cast<int32_t>(0x1),
    __E_Revert = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ActivationControlPlayable__PostPlaybackState_Unwrapped() const noexcept {
    return static_cast<____ActivationControlPlayable__PostPlaybackState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActivationControlPlayable__PostPlaybackState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ActivationControlPlayable__PostPlaybackState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Active value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Active;

  /// @brief Field Inactive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Inactive;

  /// @brief Field Revert value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Revert;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::InitialState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::ActivationControlPlayable::InitialState
struct CORDL_TYPE __ActivationControlPlayable__InitialState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ActivationControlPlayable__InitialState_Unwrapped
  enum struct ____ActivationControlPlayable__InitialState_Unwrapped : int32_t {
    __E_Unset = static_cast<int32_t>(0x0),
    __E_Active = static_cast<int32_t>(0x1),
    __E_Inactive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ActivationControlPlayable__InitialState_Unwrapped() const noexcept {
    return static_cast<____ActivationControlPlayable__InitialState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActivationControlPlayable__InitialState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ActivationControlPlayable__InitialState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Active value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Active;

  /// @brief Field Inactive value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Inactive;

  /// @brief Field Unset value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Unset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15816 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::ActivationControlPlayable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ActivationControlPlayable*
class CORDL_TYPE ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using InitialState = ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState;

  using PostPlaybackState = ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState;

  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field m_InitialState, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialState, put = __cordl_internal_set_m_InitialState)) ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState m_InitialState;

  /// @brief Field postPlayback, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_postPlayback, put = __cordl_internal_set_postPlayback)) ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState postPlayback;

  /// @brief Method Create, addr 0x47ab340, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState postPlaybackState);

  static inline ::UnityEngine::Timeline::ActivationControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x47b0470, size 0xa8, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x47b03e8, size 0x88, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnGraphStart, addr 0x47b05a0, size 0x94, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x47b0634, size 0xcc, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x47b0518, size 0x88, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* userData);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const& __cordl_internal_get_m_InitialState() const;

  constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState& __cordl_internal_get_m_InitialState();

  constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const& __cordl_internal_get_postPlayback() const;

  constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState& __cordl_internal_get_postPlayback();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_InitialState(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState value);

  constexpr void __cordl_internal_set_postPlayback(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState value);

  /// @brief Method .ctor, addr 0x47b0700, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field postPlayback, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState ___postPlayback;

  /// @brief Field m_InitialState, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState ___m_InitialState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15817 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationControlPlayable, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___postPlayback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ActivationControlPlayable, ___m_InitialState) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
NEED_NO_BOX(::UnityEngine::Timeline::ActivationControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");

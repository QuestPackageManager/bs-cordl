#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationState)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationState_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class AnimationState;
}
namespace UnityEngine {
class AnimationState_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationState);
MARK_REF_PTR_T(::UnityEngine::AnimationState_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState/BindingsMarshaller
class CORDL_TYPE AnimationState_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6800a4c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AnimationState* animationState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationState_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationState_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationState_BindingsMarshaller(AnimationState_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationState_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationState_BindingsMarshaller(AnimationState_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationState_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.TrackedReference
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState
class CORDL_TYPE AnimationState : public ::UnityEngine::TrackedReference {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AnimationState_BindingsMarshaller;

  __declspec(property(get = get_clip)) ::UnityW<::UnityEngine::AnimationClip> clip;

  __declspec(property(put = set_normalizedTime)) float_t normalizedTime;

  __declspec(property(put = set_speed)) float_t speed;

  __declspec(property(put = set_time)) float_t time;

  static inline ::UnityEngine::AnimationState* New_ctor();

  /// @brief Method .ctor, addr 0x6800a48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clip, addr 0x67ffe64, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_clip_Injected, addr 0x6800a0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_clip_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_normalizedTime, addr 0x68008b4, size 0x60, virtual false, abstract: false, final false
  inline void set_normalizedTime(float_t value);

  /// @brief Method set_normalizedTime_Injected, addr 0x6800914, size 0x4c, virtual false, abstract: false, final false
  static inline void set_normalizedTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_speed, addr 0x6800960, size 0x60, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_speed_Injected, addr 0x68009c0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_speed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_time, addr 0x6800808, size 0x60, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_time_Injected, addr 0x6800868, size 0x4c, virtual false, abstract: false, final false
  static inline void set_time_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationState(AnimationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationState(AnimationState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationState, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");
NEED_NO_BOX(::UnityEngine::AnimationState_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState_BindingsMarshaller*, "UnityEngine", "AnimationState/BindingsMarshaller");

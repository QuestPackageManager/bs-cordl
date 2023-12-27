#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationMotionXToDeltaPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class IPlayable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationMotionXToDeltaPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable);
// Type: UnityEngine.Animations::AnimationMotionXToDeltaPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14898))
// CS Name: ::UnityEngine.Animations::AnimationMotionXToDeltaPlayable
struct CORDL_TYPE AnimationMotionXToDeltaPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable))::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_NullPlayable;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);

  static inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable getStaticF_m_NullPlayable();

  /// @brief Method Create addr 0x2c9877c size 0x90 virtual false final false
  static inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(::UnityEngine::Playables::PlayableGraph graph);

  /// @brief Method CreateHandle addr 0x2c9880c size 0xe0 virtual false final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph);

  /// @brief Method .ctor addr 0x2c988ec size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method GetHandle addr 0x2c98a38 size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method op_Implicit addr 0x2c98a44 size 0x30 virtual false final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable playable);

  /// @brief Method Equals addr 0x2c98a74 size 0x78 virtual true final true
  inline bool Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable other);

  /// @brief Method SetAbsoluteMotion addr 0x2c98aec size 0x84 virtual false final false
  inline void SetAbsoluteMotion(bool value);

  /// @brief Method CreateHandleInternal addr 0x2c989ac size 0x8c virtual false final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method SetAbsoluteMotionInternal addr 0x2c98b70 size 0x44 virtual false final false
  static inline void SetAbsoluteMotionInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method CreateHandleInternal_Injected addr 0x2c98bb4 size 0x44 virtual false final false
  static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationMotionXToDeltaPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");

#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationStream)
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationStream);
// Dependencies System.IntPtr
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationStream
struct CORDL_TYPE AnimationStream {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationStream();

  // Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "constant", ty: "::System::IntPtr", modifiers: "", def_value:
  // None }, CppParam { name: "input", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "output", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name:
  // "workspace", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "inputStreamAccessor", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name:
  // "animationHandleBinder", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr AnimationStream(uint32_t m_AnimatorBindingsVersion, ::System::IntPtr constant, ::System::IntPtr input, ::System::IntPtr output, ::System::IntPtr workspace,
                            ::System::IntPtr inputStreamAccessor, ::System::IntPtr animationHandleBinder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field m_AnimatorBindingsVersion, offset: 0x0, size: 0x4, def value: None
  uint32_t m_AnimatorBindingsVersion;

  /// @brief Field constant, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr constant;

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr input;

  /// @brief Field output, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr output;

  /// @brief Field workspace, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr workspace;

  /// @brief Field inputStreamAccessor, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr inputStreamAccessor;

  /// @brief Field animationHandleBinder, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr animationHandleBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationStream, m_AnimatorBindingsVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, constant) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, output) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, workspace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, inputStreamAccessor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationStream, animationHandleBinder) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationStream, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationStream, "UnityEngine.Animations", "AnimationStream");

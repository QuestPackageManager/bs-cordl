#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SubPassDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__AttachmentIndexArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SubPassDescriptor)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SubPassDescriptor);
// Dependencies UnityEngine.Rendering.AttachmentIndexArray, UnityEngine.Rendering.SubPassFlags
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SubPassDescriptor
struct CORDL_TYPE SubPassDescriptor {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubPassDescriptor();

  // Ctor Parameters [CppParam { name: "inputs", ty: "::UnityEngine::Rendering::AttachmentIndexArray", modifiers: "", def_value: None }, CppParam { name: "colorOutputs", ty:
  // "::UnityEngine::Rendering::AttachmentIndexArray", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Rendering::SubPassFlags", modifiers: "", def_value: None }]
  constexpr SubPassDescriptor(::UnityEngine::Rendering::AttachmentIndexArray inputs, ::UnityEngine::Rendering::AttachmentIndexArray colorOutputs,
                              ::UnityEngine::Rendering::SubPassFlags flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10766 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  /// @brief Field inputs, offset: 0x0, size: 0x24, def value: None
  ::UnityEngine::Rendering::AttachmentIndexArray inputs;

  /// @brief Field colorOutputs, offset: 0x24, size: 0x24, def value: None
  ::UnityEngine::Rendering::AttachmentIndexArray colorOutputs;

  /// @brief Field flags, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::SubPassFlags flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SubPassDescriptor, inputs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SubPassDescriptor, colorOutputs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SubPassDescriptor, flags) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SubPassDescriptor, 0x4c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SubPassDescriptor, "UnityEngine.Rendering", "SubPassDescriptor");

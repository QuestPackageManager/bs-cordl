#pragma once
// IWYU pragma private; include "UnityEngine/Audio/UpdateArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateArguments)
namespace UnityEngine::Audio {
struct AvailableData_ProcessorInstance_Element;
}
namespace UnityEngine::Audio {
struct ControlHeader;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct UpdateArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::UpdateArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::UpdateArguments, "UnityEngine.Audio", "UpdateArguments");
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.UpdateArguments
struct CORDL_TYPE UpdateArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateArguments();

  // Ctor Parameters [CppParam { name: "ControlContext", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "FirstElement", ty:
  // "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value:
  // None, comment: None }]
  constexpr UpdateArguments(::UnityEngine::Audio::ControlHeader* ControlContext, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* FirstElement, ::Unity::Audio::Handle Self) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field ControlContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::ControlHeader* ControlContext;

  /// @brief Field FirstElement, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* FirstElement;

  /// @brief Field Self, offset: 0x10, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::UpdateArguments, ControlContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::UpdateArguments, FirstElement) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::UpdateArguments, Self) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::UpdateArguments) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Audio

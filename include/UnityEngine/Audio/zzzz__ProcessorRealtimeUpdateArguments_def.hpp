#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorRealtimeUpdateArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProcessorRealtimeUpdateArguments)
namespace UnityEngine::Audio {
struct AvailableData_ProcessorInstance_Element;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessorRealtimeUpdateArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments, "UnityEngine.Audio", "ProcessorRealtimeUpdateArguments");
// Dependencies Unity.Audio.Handle, UnityEngine.Audio.RealtimeAccess
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorRealtimeUpdateArguments
struct CORDL_TYPE ProcessorRealtimeUpdateArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorRealtimeUpdateArguments();

  // Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty:
  // "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value:
  // None, comment: None }]
  constexpr ProcessorRealtimeUpdateArguments(::UnityEngine::Audio::RealtimeAccess Access, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head, ::Unity::Audio::Handle Self) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20396 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Access, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Audio::RealtimeAccess Access;

  /// @brief Field Head, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head;

  /// @brief Field Self, offset: 0x18, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments, Access) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments, Head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments, Self) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorRealtimeUpdateArguments) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Audio

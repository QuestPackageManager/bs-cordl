#pragma once
// IWYU pragma private; include "UnityEngine/Audio/MessageArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MessageArguments)
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct MessageArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::MessageArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::MessageArguments, "UnityEngine.Audio", "MessageArguments");
// Dependencies Unity.Audio.Handle, UnityEngine.Audio.ProcessorInstance::Response
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.MessageArguments
struct CORDL_TYPE MessageArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageArguments();

  // Ctor Parameters [CppParam { name: "Context", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "MessageData", ty:
  // "::UnityEngine::Audio::ProcessorInstance_Message*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Self", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "StatusReturn", ty: "::UnityEngine::Audio::ProcessorInstance_Response", modifiers: "", def_value: None, comment: None }]
  constexpr MessageArguments(::UnityEngine::Audio::ControlHeader* Context, ::UnityEngine::Audio::ProcessorInstance_Message* MessageData, ::Unity::Audio::Handle Self,
                             ::UnityEngine::Audio::ProcessorInstance_Response StatusReturn) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Context, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::ControlHeader* Context;

  /// @brief Field MessageData, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Audio::ProcessorInstance_Message* MessageData;

  /// @brief Field Self, offset: 0x10, size: 0x10, def value: None
  ::Unity::Audio::Handle Self;

  /// @brief Field StatusReturn, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Audio::ProcessorInstance_Response StatusReturn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::MessageArguments, Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::MessageArguments, MessageData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::MessageArguments, Self) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::MessageArguments, StatusReturn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::MessageArguments) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Audio

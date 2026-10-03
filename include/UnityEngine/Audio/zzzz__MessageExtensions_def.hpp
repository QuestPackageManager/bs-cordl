#pragma once
// IWYU pragma private; include "UnityEngine/Audio/MessageExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MessageExtensions)
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Message;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Response;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
// Forward declare root types
namespace UnityEngine::Audio {
class MessageExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::MessageExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::MessageExtensions*, "UnityEngine.Audio", "MessageExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.MessageExtensions
class CORDL_TYPE MessageExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline T Get(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_Message> message);

  /// [Extension]
  /// @brief Method SendMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline ::UnityEngine::Audio::ProcessorInstance_Response SendMessage(::UnityEngine::Audio::ControlContext context, ::UnityEngine::Audio::ProcessorInstance processorInstance, T message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageExtensions(MessageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageExtensions(MessageExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20336 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::MessageExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio

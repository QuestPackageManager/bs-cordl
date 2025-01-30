#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingContext)
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::StreamingContext);
// Dependencies System.Runtime.Serialization.StreamingContextStates
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.StreamingContext
struct CORDL_TYPE StreamingContext {
public:
  // Declarations
  __declspec(property(get = get_Context)) ::System::Object* Context;

  __declspec(property(get = get_State)) ::System::Runtime::Serialization::StreamingContextStates State;

  /// @brief Method Equals, addr 0x3d00274, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3d00324, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x3d00254, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContextStates state);

  /// @brief Method .ctor, addr 0x3d00260, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContextStates state, ::System::Object* additional);

  /// @brief Method get_Context, addr 0x3d0026c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Context();

  /// @brief Method get_State, addr 0x3d0032c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::StreamingContextStates get_State();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamingContext();

  // Ctor Parameters [CppParam { name: "m_additionalContext", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_state", ty:
  // "::System::Runtime::Serialization::StreamingContextStates", modifiers: "", def_value: None }]
  constexpr StreamingContext(::System::Object* m_additionalContext, ::System::Runtime::Serialization::StreamingContextStates m_state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3235 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_additionalContext, offset: 0x0, size: 0x8, def value: None
  ::System::Object* m_additionalContext;

  /// @brief Field m_state, offset: 0x8, size: 0x4, def value: None
  ::System::Runtime::Serialization::StreamingContextStates m_state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::StreamingContext, m_additionalContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::StreamingContext, m_state) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContext, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");

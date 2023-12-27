#pragma once
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
// Type: System.Runtime.Serialization::StreamingContext
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3236))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3235))
// CS Name: ::System.Runtime.Serialization::StreamingContext
struct CORDL_TYPE StreamingContext {
public:
  // Declarations
  __declspec(property(get = get_Context))::System::Object* Context;

  __declspec(property(get = get_State))::System::Runtime::Serialization::StreamingContextStates State;

  /// @brief Method .ctor addr 0x24bf8f0 size 0xc virtual false final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContextStates state);

  /// @brief Method .ctor addr 0x24bf8fc size 0xc virtual false final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContextStates state, ::System::Object* additional);

  /// @brief Method get_Context addr 0x24bf908 size 0x8 virtual false final false
  inline ::System::Object* get_Context();

  /// @brief Method Equals addr 0x24bf910 size 0xb0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x24bf9c0 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method get_State addr 0x24bf9c8 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::StreamingContextStates get_State();

  // Ctor Parameters [CppParam { name: "m_additionalContext", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "m_state", ty:
  // "::System::Runtime::Serialization::StreamingContextStates", modifiers: "", def_value: None }]
  constexpr StreamingContext(::System::Object* m_additionalContext, ::System::Runtime::Serialization::StreamingContextStates m_state) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamingContext();

  /// @brief Field m_additionalContext, offset: 0x0, size: 0x8, def value: None
  ::System::Object* m_additionalContext;

  /// @brief Field m_state, offset: 0x8, size: 0x4, def value: None
  ::System::Runtime::Serialization::StreamingContextStates m_state;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContext, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");

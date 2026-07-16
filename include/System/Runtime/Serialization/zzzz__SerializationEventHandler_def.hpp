#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SerializationEventHandler)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::SerializationEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::SerializationEventHandler*, "System.Runtime.Serialization", "SerializationEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationEventHandler
class CORDL_TYPE SerializationEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5b49e38, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Serialization::SerializationEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5b49dcc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationEventHandler(SerializationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationEventHandler(SerializationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::SerializationEventHandler) == 0x80, "Size mismatch!");

} // namespace System::Runtime::Serialization

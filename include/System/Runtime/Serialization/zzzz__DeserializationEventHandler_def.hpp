#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DeserializationEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(DeserializationEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DeserializationEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DeserializationEventHandler
class CORDL_TYPE DeserializationEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3cf57bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender);

  static inline ::System::Runtime::Serialization::DeserializationEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3cf56bc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializationEventHandler(DeserializationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializationEventHandler(DeserializationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DeserializationEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DeserializationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DeserializationEventHandler*, "System.Runtime.Serialization", "DeserializationEventHandler");

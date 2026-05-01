#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IDeserializationCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeserializationCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IDeserializationCallback);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IDeserializationCallback
class CORDL_TYPE IDeserializationCallback {
public:
  // Declarations
  /// @brief Method OnDeserialization, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "IDeserializationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeserializationCallback(IDeserializationCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IDeserializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDeserializationCallback*, "System.Runtime.Serialization", "IDeserializationCallback");

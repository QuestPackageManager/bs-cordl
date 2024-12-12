#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializable)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializable;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializable);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ISerializable
class CORDL_TYPE ISerializable {
public:
  // Declarations
  /// @brief Method GetObjectData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializable(ISerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializable*, "System.Runtime.Serialization", "ISerializable");

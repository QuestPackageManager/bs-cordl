#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializable)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializable;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializable);
// Type: System.Runtime.Serialization::ISerializable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3196))
// CS Name: ::System.Runtime.Serialization::ISerializable*
class CORDL_TYPE ISerializable {
public:
  // Declarations
  /// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializable(ISerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializable(ISerializable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializable*, "System.Runtime.Serialization", "ISerializable");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISafeSerializationData)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISafeSerializationData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISafeSerializationData);
// Type: System.Runtime.Serialization::ISafeSerializationData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3226))
// CS Name: ::System.Runtime.Serialization::ISafeSerializationData*
class CORDL_TYPE ISafeSerializationData {
public:
  // Declarations
  /// @brief Method CompleteDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CompleteDeserialization(::System::Object* deserialized);

  // Ctor Parameters [CppParam { name: "", ty: "ISafeSerializationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISafeSerializationData(ISafeSerializationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISafeSerializationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISafeSerializationData(ISafeSerializationData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISafeSerializationData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISafeSerializationData*, "System.Runtime.Serialization", "ISafeSerializationData");

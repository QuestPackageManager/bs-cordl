#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISafeSerializationData.hpp"
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
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ISafeSerializationData
class CORDL_TYPE ISafeSerializationData {
public:
  // Declarations
  /// @brief Method CompleteDeserialization, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CompleteDeserialization(::System::Object* deserialized);

  // Ctor Parameters [CppParam { name: "", ty: "ISafeSerializationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISafeSerializationData(ISafeSerializationData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISafeSerializationData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISafeSerializationData*, "System.Runtime.Serialization", "ISafeSerializationData");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IDataContractSurrogate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDataContractSurrogate)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IDataContractSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IDataContractSurrogate);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IDataContractSurrogate
class CORDL_TYPE IDataContractSurrogate {
public:
  // Declarations
  /// @brief Method GetDataContractType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* GetDataContractType(::System::Type* type);

  /// @brief Method GetDeserializedObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetDeserializedObject(::System::Object* obj, ::System::Type* targetType);

  /// @brief Method GetObjectToSerialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetObjectToSerialize(::System::Object* obj, ::System::Type* targetType);

  // Ctor Parameters [CppParam { name: "", ty: "IDataContractSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataContractSurrogate(IDataContractSurrogate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IDataContractSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDataContractSurrogate*, "System.Runtime.Serialization", "IDataContractSurrogate");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractSurrogateCaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataContractSurrogateCaller)
namespace System::Runtime::Serialization {
class IDataContractSurrogate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractSurrogateCaller;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractSurrogateCaller);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContractSurrogateCaller
class CORDL_TYPE DataContractSurrogateCaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDataContractType, addr 0x5f3b364, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataContractType(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Type* type);

  /// @brief Method GetDeserializedObject, addr 0x5f3b544, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* GetDeserializedObject(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj, ::System::Type* objType,
                                                        ::System::Type* memberType);

  /// @brief Method GetObjectToSerialize, addr 0x5f3b450, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* GetObjectToSerialize(::System::Runtime::Serialization::IDataContractSurrogate* surrogate, ::System::Object* obj, ::System::Type* objType, ::System::Type* membertype);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractSurrogateCaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContractSurrogateCaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractSurrogateCaller(DataContractSurrogateCaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractSurrogateCaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractSurrogateCaller(DataContractSurrogateCaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractSurrogateCaller, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractSurrogateCaller);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractSurrogateCaller*, "System.Runtime.Serialization", "DataContractSurrogateCaller");

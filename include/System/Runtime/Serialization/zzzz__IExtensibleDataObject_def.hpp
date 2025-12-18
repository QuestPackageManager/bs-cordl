#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IExtensibleDataObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExtensibleDataObject)
namespace System::Runtime::Serialization {
class ExtensionDataObject;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IExtensibleDataObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IExtensibleDataObject);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IExtensibleDataObject
class CORDL_TYPE IExtensibleDataObject {
public:
  // Declarations
  __declspec(property(get = get_ExtensionData, put = set_ExtensionData)) ::System::Runtime::Serialization::ExtensionDataObject* ExtensionData;

  /// @brief Method get_ExtensionData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::ExtensionDataObject* get_ExtensionData();

  /// @brief Method set_ExtensionData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ExtensionData(::System::Runtime::Serialization::ExtensionDataObject* value);

  // Ctor Parameters [CppParam { name: "", ty: "IExtensibleDataObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtensibleDataObject(IExtensibleDataObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IExtensibleDataObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IExtensibleDataObject*, "System.Runtime.Serialization", "IExtensibleDataObject");

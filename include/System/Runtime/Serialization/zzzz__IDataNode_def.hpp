#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IDataNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDataNode)
namespace System::Runtime::Serialization {
class ElementData;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IDataNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IDataNode);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IDataNode
class CORDL_TYPE IDataNode {
public:
  // Declarations
  __declspec(property(get = get_ClrAssemblyName, put = set_ClrAssemblyName)) ::StringW ClrAssemblyName;

  __declspec(property(get = get_ClrTypeName, put = set_ClrTypeName)) ::StringW ClrTypeName;

  __declspec(property(get = get_DataContractName, put = set_DataContractName)) ::StringW DataContractName;

  __declspec(property(get = get_DataContractNamespace, put = set_DataContractNamespace)) ::StringW DataContractNamespace;

  __declspec(property(get = get_DataType)) ::System::Type* DataType;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_IsFinalValue, put = set_IsFinalValue)) bool IsFinalValue;

  __declspec(property(get = get_PreservesReferences)) bool PreservesReferences;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Object* Value;

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetData(::System::Runtime::Serialization::ElementData* element);

  /// @brief Method get_ClrAssemblyName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ClrAssemblyName();

  /// @brief Method get_ClrTypeName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ClrTypeName();

  /// @brief Method get_DataContractName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DataContractName();

  /// @brief Method get_DataContractNamespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DataContractNamespace();

  /// @brief Method get_DataType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_DataType();

  /// @brief Method get_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IsFinalValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsFinalValue();

  /// @brief Method get_PreservesReferences, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_PreservesReferences();

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method set_ClrAssemblyName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClrAssemblyName(::StringW value);

  /// @brief Method set_ClrTypeName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_ClrTypeName(::StringW value);

  /// @brief Method set_DataContractName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_DataContractName(::StringW value);

  /// @brief Method set_DataContractNamespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_DataContractNamespace(::StringW value);

  /// @brief Method set_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IsFinalValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IsFinalValue(bool value);

  /// @brief Method set_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Value(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataNode(IDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDataNode*, "System.Runtime.Serialization", "IDataNode");

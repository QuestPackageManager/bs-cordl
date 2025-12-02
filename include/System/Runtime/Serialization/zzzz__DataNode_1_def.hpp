#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataNode_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataNode_1)
namespace System::Runtime::Serialization {
class ElementData;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
template <typename T> class DataNode_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::Serialization::DataNode_1);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Runtime.Serialization.DataNode`1<T>
class CORDL_TYPE DataNode_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ClrAssemblyName, put = set_ClrAssemblyName)) ::StringW ClrAssemblyName;

  __declspec(property(get = get_ClrTypeName, put = set_ClrTypeName)) ::StringW ClrTypeName;

  __declspec(property(get = get_DataContractName, put = set_DataContractName)) ::StringW DataContractName;

  __declspec(property(get = get_DataContractNamespace, put = set_DataContractNamespace)) ::StringW DataContractNamespace;

  __declspec(property(get = get_DataType)) ::System::Type* DataType;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_PreservesReferences)) bool PreservesReferences;

  __declspec(property(get = System_Runtime_Serialization_IDataNode_get_IsFinalValue,
                      put = System_Runtime_Serialization_IDataNode_set_IsFinalValue)) bool System_Runtime_Serialization_IDataNode_IsFinalValue;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Object* Value;

  /// @brief Field clrAssemblyName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_clrAssemblyName, put = __cordl_internal_set_clrAssemblyName)) ::StringW clrAssemblyName;

  /// @brief Field clrTypeName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_clrTypeName, put = __cordl_internal_set_clrTypeName)) ::StringW clrTypeName;

  /// @brief Field dataContractName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractName, put = __cordl_internal_set_dataContractName)) ::StringW dataContractName;

  /// @brief Field dataContractNamespace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractNamespace, put = __cordl_internal_set_dataContractNamespace)) ::StringW dataContractNamespace;

  /// @brief Field dataType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::System::Type* dataType;

  /// @brief Field id, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field isFinalValue, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isFinalValue, put = __cordl_internal_set_isFinalValue)) bool isFinalValue;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) T value;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDataNode"
  constexpr operator ::System::Runtime::Serialization::IDataNode*() noexcept;

  /// @brief Method AddQualifiedNameAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddQualifiedNameAttribute(::System::Runtime::Serialization::ElementData* element, ::StringW elementPrefix, ::StringW elementName, ::StringW elementNs, ::StringW valueName,
                                        ::StringW valueNs);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetData(::System::Runtime::Serialization::ElementData* element);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue();

  static inline ::System::Runtime::Serialization::DataNode_1<T>* New_ctor();

  static inline ::System::Runtime::Serialization::DataNode_1<T>* New_ctor(T value);

  /// @brief Method System.Runtime.Serialization.IDataNode.get_IsFinalValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Runtime_Serialization_IDataNode_get_IsFinalValue();

  /// @brief Method System.Runtime.Serialization.IDataNode.set_IsFinalValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDataNode_set_IsFinalValue(bool value);

  constexpr ::StringW const& __cordl_internal_get_clrAssemblyName() const;

  constexpr ::StringW& __cordl_internal_get_clrAssemblyName();

  constexpr ::StringW const& __cordl_internal_get_clrTypeName() const;

  constexpr ::StringW& __cordl_internal_get_clrTypeName();

  constexpr ::StringW const& __cordl_internal_get_dataContractName() const;

  constexpr ::StringW& __cordl_internal_get_dataContractName();

  constexpr ::StringW const& __cordl_internal_get_dataContractNamespace() const;

  constexpr ::StringW& __cordl_internal_get_dataContractNamespace();

  constexpr ::System::Type* const& __cordl_internal_get_dataType() const;

  constexpr ::System::Type*& __cordl_internal_get_dataType();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr bool const& __cordl_internal_get_isFinalValue() const;

  constexpr bool& __cordl_internal_get_isFinalValue();

  constexpr T const& __cordl_internal_get_value() const;

  constexpr T& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_clrAssemblyName(::StringW value);

  constexpr void __cordl_internal_set_clrTypeName(::StringW value);

  constexpr void __cordl_internal_set_dataContractName(::StringW value);

  constexpr void __cordl_internal_set_dataContractNamespace(::StringW value);

  constexpr void __cordl_internal_set_dataType(::System::Type* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_isFinalValue(bool value);

  constexpr void __cordl_internal_set_value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  /// @brief Method get_ClrAssemblyName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_ClrAssemblyName();

  /// @brief Method get_ClrTypeName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_ClrTypeName();

  /// @brief Method get_DataContractName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_DataContractName();

  /// @brief Method get_DataContractNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_DataContractNamespace();

  /// @brief Method get_DataType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_DataType();

  /// @brief Method get_Id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_Id();

  /// @brief Method get_PreservesReferences, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_PreservesReferences();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::IDataNode"
  constexpr ::System::Runtime::Serialization::IDataNode* i___System__Runtime__Serialization__IDataNode() noexcept;

  /// @brief Method set_ClrAssemblyName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_ClrAssemblyName(::StringW value);

  /// @brief Method set_ClrTypeName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_ClrTypeName(::StringW value);

  /// @brief Method set_DataContractName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_DataContractName(::StringW value);

  /// @brief Method set_DataContractNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_DataContractNamespace(::StringW value);

  /// @brief Method set_Id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Id(::StringW value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Value(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataNode_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataNode_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataNode_1(DataNode_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataNode_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataNode_1(DataNode_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16990 };

  /// @brief Field dataType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___dataType;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  T ___value;

  /// @brief Field dataContractName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___dataContractName;

  /// @brief Field dataContractNamespace, offset: 0x28, size: 0x8, def value: None
  ::StringW ___dataContractNamespace;

  /// @brief Field clrTypeName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___clrTypeName;

  /// @brief Field clrAssemblyName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___clrAssemblyName;

  /// @brief Field id, offset: 0x40, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field isFinalValue, offset: 0x48, size: 0x1, def value: None
  bool ___isFinalValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::Serialization::DataNode_1, "System.Runtime.Serialization", "DataNode`1");

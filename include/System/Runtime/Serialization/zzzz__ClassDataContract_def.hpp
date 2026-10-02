#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClassDataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::Serialization {
class ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer;
}
namespace System::Runtime::Serialization {
struct ClassDataContractCriticalHelper_ClassDataContract_Member;
}
namespace System::Runtime::Serialization {
class ClassDataContract_ClassDataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class ClassDataContract_DataMemberComparer;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class DataMember;
}
namespace System::Runtime::Serialization {
class XmlFormatClassReaderDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatClassWriterDelegate;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionary;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer;
}
namespace System::Runtime::Serialization {
class ClassDataContract_ClassDataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class ClassDataContract_DataMemberComparer;
}
namespace System::Runtime::Serialization {
struct ClassDataContractCriticalHelper_ClassDataContract_Member;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::ClassDataContract*);
MARK_REF_T(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*);
MARK_REF_T(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*);
MARK_REF_T(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*);
MARK_VAL_T(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::ClassDataContract*, "System.Runtime.Serialization", "ClassDataContract");
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*, "System.Runtime.Serialization",
                    "ClassDataContract/ClassDataContractCriticalHelper/DataMemberConflictComparer");
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*, "System.Runtime.Serialization", "ClassDataContract/ClassDataContractCriticalHelper");
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*, "System.Runtime.Serialization", "ClassDataContract/DataMemberComparer");
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, "System.Runtime.Serialization",
                    "ClassDataContract/ClassDataContractCriticalHelper/Member");
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.ClassDataContract/ClassDataContractCriticalHelper/Member
struct CORDL_TYPE ClassDataContractCriticalHelper_ClassDataContract_Member {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x656104c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataMember* member, ::StringW ns, int32_t baseTypeIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataContractCriticalHelper_ClassDataContract_Member();

  // Ctor Parameters [CppParam { name: "member", ty: "::System::Runtime::Serialization::DataMember*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ns", ty: "::StringW",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "baseTypeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ClassDataContractCriticalHelper_ClassDataContract_Member(::System::Runtime::Serialization::DataMember* member, ::StringW ns, int32_t baseTypeIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16379 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field member, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataMember* member;

  /// @brief Field ns, offset: 0x8, size: 0x8, def value: None
  ::StringW ns;

  /// @brief Field baseTypeIndex, offset: 0x10, size: 0x4, def value: None
  int32_t baseTypeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, member) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, ns) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, baseTypeIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member) == 0x18, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ClassDataContract/ClassDataContractCriticalHelper/DataMemberConflictComparer
class CORDL_TYPE ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Singleton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Singleton,
                      put = setStaticF_Singleton)) ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* Singleton;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*() noexcept;

  /// @brief Method Compare, addr 0x6561ebc, size 0x74, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member x,
                         ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member y);

  static inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* New_ctor();

  /// @brief Method .ctor, addr 0x6561f30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* getStaticF_Singleton();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*
  i___System__Collections__Generic__IComparer_1___System__Runtime__Serialization__ClassDataContractCriticalHelper_ClassDataContract_Member_() noexcept;

  static inline void setStaticF_Singleton(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer(ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer(ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper, System.Type, System.Xml.XmlDictionaryString
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ClassDataContract/ClassDataContractCriticalHelper
class CORDL_TYPE ClassDataContract_ClassDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  using DataMemberConflictComparer = ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer;

  using Member = ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member;

  __declspec(property(get = get_BaseContract, put = set_BaseContract)) ::System::Runtime::Serialization::ClassDataContract* BaseContract;

  __declspec(property(get = get_ChildElementNamespaces, put = set_ChildElementNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> ChildElementNamespaces;

  /// @brief Field ContractNamespaces, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_ContractNamespaces, put = __cordl_internal_set_ContractNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> ContractNamespaces;

  __declspec(property(get = get_DeserializationExceptionMessage)) ::StringW DeserializationExceptionMessage;

  __declspec(property(get = get_ExtensionDataSetMethod)) ::System::Reflection::MethodInfo* ExtensionDataSetMethod;

  __declspec(property(get = get_HasDataContract)) bool HasDataContract;

  __declspec(property(get = get_HasExtensionData)) bool HasExtensionData;

  __declspec(property(get = get_IsISerializable)) bool IsISerializable;

  __declspec(property(get = get_IsNonAttributedType)) bool IsNonAttributedType;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  /// @brief Field MemberNames, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberNames, put = __cordl_internal_set_MemberNames)) ::ArrayW<::System::Xml::XmlDictionaryString*> MemberNames;

  /// @brief Field MemberNamespaces, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberNamespaces, put = __cordl_internal_set_MemberNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> MemberNamespaces;

  __declspec(property(get = get_Members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* Members;

  __declspec(property(get = get_OnDeserialized)) ::System::Reflection::MethodInfo* OnDeserialized;

  __declspec(property(get = get_OnDeserializing)) ::System::Reflection::MethodInfo* OnDeserializing;

  __declspec(property(get = get_OnSerialized)) ::System::Reflection::MethodInfo* OnSerialized;

  __declspec(property(get = get_OnSerializing)) ::System::Reflection::MethodInfo* OnSerializing;

  __declspec(property(get = get_SerializationExceptionMessage)) ::StringW SerializationExceptionMessage;

  __declspec(property(get = get_XmlFormatReaderDelegate, put = set_XmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* XmlFormatReaderDelegate;

  __declspec(property(get = get_XmlFormatWriterDelegate, put = set_XmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* XmlFormatWriterDelegate;

  /// @brief Field baseContract, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_baseContract, put = __cordl_internal_set_baseContract)) ::System::Runtime::Serialization::ClassDataContract* baseContract;

  /// @brief Field childElementNamespaces, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNamespaces, put = __cordl_internal_set_childElementNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> childElementNamespaces;

  /// @brief Field extensionDataSetMethod, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_extensionDataSetMethod, put = __cordl_internal_set_extensionDataSetMethod)) ::System::Reflection::MethodInfo* extensionDataSetMethod;

  /// @brief Field hasDataContract, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDataContract, put = __cordl_internal_set_hasDataContract)) bool hasDataContract;

  /// @brief Field hasExtensionData, offset 0x93, size 0x1
  __declspec(property(get = __cordl_internal_get_hasExtensionData, put = __cordl_internal_set_hasExtensionData)) bool hasExtensionData;

  /// @brief Field isISerializable, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isISerializable, put = __cordl_internal_set_isISerializable)) bool isISerializable;

  /// @brief Field isKnownTypeAttributeChecked, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_isKnownTypeAttributeChecked, put = __cordl_internal_set_isKnownTypeAttributeChecked)) bool isKnownTypeAttributeChecked;

  /// @brief Field isMethodChecked, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_isMethodChecked, put = __cordl_internal_set_isMethodChecked)) bool isMethodChecked;

  /// @brief Field isNonAttributedType, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_isNonAttributedType, put = __cordl_internal_set_isNonAttributedType)) bool isNonAttributedType;

  /// @brief Field knownDataContracts, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get_knownDataContracts,
      put =
          __cordl_internal_set_knownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts;

  /// @brief Field members, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_members, put = __cordl_internal_set_members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members;

  /// @brief Field onDeserialized, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_onDeserialized, put = __cordl_internal_set_onDeserialized)) ::System::Reflection::MethodInfo* onDeserialized;

  /// @brief Field onDeserializing, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_onDeserializing, put = __cordl_internal_set_onDeserializing)) ::System::Reflection::MethodInfo* onDeserializing;

  /// @brief Field onSerialized, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onSerialized, put = __cordl_internal_set_onSerialized)) ::System::Reflection::MethodInfo* onSerialized;

  /// @brief Field onSerializing, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onSerializing, put = __cordl_internal_set_onSerializing)) ::System::Reflection::MethodInfo* onSerializing;

  /// @brief Field serInfoCtorArgs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_serInfoCtorArgs, put = setStaticF_serInfoCtorArgs)) ::ArrayW<::System::Type*> serInfoCtorArgs;

  /// @brief Field serializationExceptionMessage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationExceptionMessage, put = __cordl_internal_set_serializationExceptionMessage)) ::StringW serializationExceptionMessage;

  /// @brief Field xmlFormatReaderDelegate, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatReaderDelegate,
                      put = __cordl_internal_set_xmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* xmlFormatReaderDelegate;

  /// @brief Field xmlFormatWriterDelegate, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatWriterDelegate,
                      put = __cordl_internal_set_xmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* xmlFormatWriterDelegate;

  /// @brief Method EnsureIsReferenceImported, addr 0x6560028, size 0x348, virtual false, abstract: false, final false
  inline void EnsureIsReferenceImported(::System::Type* type);

  /// @brief Method EnsureMethodsImported, addr 0x655e940, size 0x380, virtual false, abstract: false, final false
  inline void EnsureMethodsImported();

  /// @brief Method GetISerializableConstructor, addr 0x655ccd8, size 0x130, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetISerializableConstructor();

  /// @brief Method GetNonAttributedTypeConstructor, addr 0x655ce1c, size 0x180, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetNonAttributedTypeConstructor();

  /// @brief Method GetStableNameAndSetHasDataContract, addr 0x655e930, size 0x10, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetStableNameAndSetHasDataContract(::System::Type* type);

  /// @brief Method ImportDataMembers, addr 0x655efbc, size 0x106c, virtual false, abstract: false, final false
  inline void ImportDataMembers();

  /// @brief Method IsMethodOverriding, addr 0x65604fc, size 0x50, virtual false, abstract: false, final false
  static inline bool IsMethodOverriding(::System::Reflection::MethodInfo* method);

  /// @brief Method IsValidCallback, addr 0x6561550, size 0x5e4, virtual false, abstract: false, final false
  static inline bool IsValidCallback(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> parameters, ::System::Type* attributeType,
                                     ::System::Reflection::MethodInfo* currentCallback, ::by_ref<::System::Type*> prevAttributeType);

  /// @brief Method IsValidExtensionDataSetMethod, addr 0x656111c, size 0x434, virtual false, abstract: false, final false
  inline bool IsValidExtensionDataSetMethod(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> parameters);

  static inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                                              ::ArrayW<::StringW> memberNames);

  /// @brief Method SetIfGetOnlyCollection, addr 0x656054c, size 0x8c, virtual false, abstract: false, final false
  inline bool SetIfGetOnlyCollection(::System::Runtime::Serialization::DataMember* memberContract, bool skipIfReadOnlyContract);

  /// @brief Method SetIfMembersHaveConflict, addr 0x6560a5c, size 0x5d0, virtual false, abstract: false, final false
  inline void SetIfMembersHaveConflict(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members);

  /// @brief Method SetIsNonAttributedType, addr 0x655ecc0, size 0x60, virtual false, abstract: false, final false
  inline void SetIsNonAttributedType(::System::Type* type);

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_ContractNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_ContractNamespaces();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_MemberNames() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_MemberNames();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_MemberNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_MemberNamespaces();

  constexpr ::System::Runtime::Serialization::ClassDataContract* const& __cordl_internal_get_baseContract() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract*& __cordl_internal_get_baseContract();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_childElementNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_childElementNamespaces();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_extensionDataSetMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_extensionDataSetMethod();

  constexpr bool const& __cordl_internal_get_hasDataContract() const;

  constexpr bool& __cordl_internal_get_hasDataContract();

  constexpr bool const& __cordl_internal_get_hasExtensionData() const;

  constexpr bool& __cordl_internal_get_hasExtensionData();

  constexpr bool const& __cordl_internal_get_isISerializable() const;

  constexpr bool& __cordl_internal_get_isISerializable();

  constexpr bool const& __cordl_internal_get_isKnownTypeAttributeChecked() const;

  constexpr bool& __cordl_internal_get_isKnownTypeAttributeChecked();

  constexpr bool const& __cordl_internal_get_isMethodChecked() const;

  constexpr bool& __cordl_internal_get_isMethodChecked();

  constexpr bool const& __cordl_internal_get_isNonAttributedType() const;

  constexpr bool& __cordl_internal_get_isNonAttributedType();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const& __cordl_internal_get_knownDataContracts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*& __cordl_internal_get_knownDataContracts();

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* const& __cordl_internal_get_members() const;

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*& __cordl_internal_get_members();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_onDeserialized() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_onDeserialized();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_onDeserializing() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_onDeserializing();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_onSerialized() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_onSerialized();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_onSerializing() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_onSerializing();

  constexpr ::StringW const& __cordl_internal_get_serializationExceptionMessage() const;

  constexpr ::StringW& __cordl_internal_get_serializationExceptionMessage();

  constexpr ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* const& __cordl_internal_get_xmlFormatReaderDelegate() const;

  constexpr ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*& __cordl_internal_get_xmlFormatReaderDelegate();

  constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* const& __cordl_internal_get_xmlFormatWriterDelegate() const;

  constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*& __cordl_internal_get_xmlFormatWriterDelegate();

  constexpr void __cordl_internal_set_ContractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_MemberNames(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_MemberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_baseContract(::System::Runtime::Serialization::ClassDataContract* value);

  constexpr void __cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_extensionDataSetMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_hasDataContract(bool value);

  constexpr void __cordl_internal_set_hasExtensionData(bool value);

  constexpr void __cordl_internal_set_isISerializable(bool value);

  constexpr void __cordl_internal_set_isKnownTypeAttributeChecked(bool value);

  constexpr void __cordl_internal_set_isMethodChecked(bool value);

  constexpr void __cordl_internal_set_isNonAttributedType(bool value);

  constexpr void __cordl_internal_set_knownDataContracts(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  constexpr void __cordl_internal_set_members(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* value);

  constexpr void __cordl_internal_set_onDeserialized(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_onDeserializing(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_onSerialized(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_onSerializing(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_serializationExceptionMessage(::StringW value);

  constexpr void __cordl_internal_set_xmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatClassReaderDelegate* value);

  constexpr void __cordl_internal_set_xmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatClassWriterDelegate* value);

  /// @brief Method .ctor, addr 0x655b89c, size 0x9e0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x655c3c0, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames);

  static inline ::ArrayW<::System::Type*> getStaticF_serInfoCtorArgs();

  /// @brief Method get_BaseContract, addr 0x6561b34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ClassDataContract* get_BaseContract();

  /// @brief Method get_ChildElementNamespaces, addr 0x6561eac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlDictionaryString*> get_ChildElementNamespaces();

  /// @brief Method get_DeserializationExceptionMessage, addr 0x655cbd0, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW get_DeserializationExceptionMessage();

  /// @brief Method get_ExtensionDataSetMethod, addr 0x655cb24, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_ExtensionDataSetMethod();

  /// @brief Method get_HasDataContract, addr 0x6561d14, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasDataContract();

  /// @brief Method get_HasExtensionData, addr 0x6561d1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasExtensionData();

  /// @brief Method get_IsISerializable, addr 0x6561d0c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsNonAttributedType, addr 0x6561d24, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNonAttributedType();

  /// @brief Method get_KnownDataContracts, addr 0x6561b44, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Members, addr 0x6561b3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* get_Members();

  /// @brief Method get_OnDeserialized, addr 0x655cae8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnDeserialized();

  /// @brief Method get_OnDeserializing, addr 0x655caac, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnDeserializing();

  /// @brief Method get_OnSerialized, addr 0x655ca70, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnSerialized();

  /// @brief Method get_OnSerializing, addr 0x655ca34, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnSerializing();

  /// @brief Method get_SerInfoCtorArgs, addr 0x6561d2c, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*> get_SerInfoCtorArgs();

  /// @brief Method get_SerializationExceptionMessage, addr 0x6561d04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SerializationExceptionMessage();

  /// @brief Method get_XmlFormatReaderDelegate, addr 0x6561e9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* get_XmlFormatReaderDelegate();

  /// @brief Method get_XmlFormatWriterDelegate, addr 0x6561e8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* get_XmlFormatWriterDelegate();

  static inline void setStaticF_serInfoCtorArgs(::ArrayW<::System::Type*> value);

  /// @brief Method set_BaseContract, addr 0x655ed6c, size 0x1a8, virtual false, abstract: false, final false
  inline void set_BaseContract(::System::Runtime::Serialization::ClassDataContract* value);

  /// @brief Method set_ChildElementNamespaces, addr 0x6561eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_ChildElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  /// @brief Method set_XmlFormatReaderDelegate, addr 0x6561ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatClassReaderDelegate* value);

  /// @brief Method set_XmlFormatWriterDelegate, addr 0x6561e94, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatClassWriterDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataContract_ClassDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract_ClassDataContractCriticalHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassDataContract_ClassDataContractCriticalHelper(ClassDataContract_ClassDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract_ClassDataContractCriticalHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassDataContract_ClassDataContractCriticalHelper(ClassDataContract_ClassDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16381 };

  /// @brief Field baseContract, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract* ___baseContract;

  /// @brief Field members, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* ___members;

  /// @brief Field onSerializing, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___onSerializing;

  /// @brief Field onSerialized, offset: 0x60, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___onSerialized;

  /// @brief Field onDeserializing, offset: 0x68, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___onDeserializing;

  /// @brief Field onDeserialized, offset: 0x70, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___onDeserialized;

  /// @brief Field extensionDataSetMethod, offset: 0x78, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___extensionDataSetMethod;

  /// @brief Field knownDataContracts, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ___knownDataContracts;

  /// @brief Field serializationExceptionMessage, offset: 0x88, size: 0x8, def value: None
  ::StringW ___serializationExceptionMessage;

  /// @brief Field isISerializable, offset: 0x90, size: 0x1, def value: None
  bool ___isISerializable;

  /// @brief Field isKnownTypeAttributeChecked, offset: 0x91, size: 0x1, def value: None
  bool ___isKnownTypeAttributeChecked;

  /// @brief Field isMethodChecked, offset: 0x92, size: 0x1, def value: None
  bool ___isMethodChecked;

  /// @brief Field hasExtensionData, offset: 0x93, size: 0x1, def value: None
  bool ___hasExtensionData;

  /// @brief Field isNonAttributedType, offset: 0x94, size: 0x1, def value: None
  bool ___isNonAttributedType;

  /// @brief Field hasDataContract, offset: 0x95, size: 0x1, def value: None
  bool ___hasDataContract;

  /// @brief Field childElementNamespaces, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___childElementNamespaces;

  /// @brief Field xmlFormatReaderDelegate, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* ___xmlFormatReaderDelegate;

  /// @brief Field xmlFormatWriterDelegate, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* ___xmlFormatWriterDelegate;

  /// @brief Field ContractNamespaces, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___ContractNamespaces;

  /// @brief Field MemberNames, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___MemberNames;

  /// @brief Field MemberNamespaces, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___MemberNamespaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___baseContract) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___members) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___onSerializing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___onSerialized) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___onDeserializing) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___onDeserialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___extensionDataSetMethod) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___knownDataContracts) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___serializationExceptionMessage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___isISerializable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___isKnownTypeAttributeChecked) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___isMethodChecked) == 0x92, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___hasExtensionData) == 0x93, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___isNonAttributedType) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___hasDataContract) == 0x95, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___childElementNamespaces) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___xmlFormatReaderDelegate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___xmlFormatWriterDelegate) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___ContractNamespaces) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___MemberNames) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper, ___MemberNamespaces) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper) == 0xc8, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ClassDataContract/DataMemberComparer
class CORDL_TYPE ClassDataContract_DataMemberComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Singleton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Singleton, put = setStaticF_Singleton)) ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* Singleton;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*() noexcept;

  /// @brief Method Compare, addr 0x6561f88, size 0x4c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Runtime::Serialization::DataMember* x, ::System::Runtime::Serialization::DataMember* y);

  static inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* New_ctor();

  /// @brief Method .ctor, addr 0x6561fd4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* getStaticF_Singleton();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*
  i___System__Collections__Generic__IComparer_1___System__Runtime__Serialization__DataMember__() noexcept;

  static inline void setStaticF_Singleton(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataContract_DataMemberComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract_DataMemberComparer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassDataContract_DataMemberComparer(ClassDataContract_DataMemberComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract_DataMemberComparer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassDataContract_DataMemberComparer(ClassDataContract_DataMemberComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract, System.Xml.XmlDictionaryString
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ClassDataContract
class CORDL_TYPE ClassDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using ClassDataContractCriticalHelper = ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper;

  using DataMemberComparer = ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer;

  __declspec(property(get = get_BaseContract)) ::System::Runtime::Serialization::ClassDataContract* BaseContract;

  __declspec(property(get = get_ChildElementNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> ChildElementNamespaces;

  /// @brief Field ContractNamespaces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ContractNamespaces, put = __cordl_internal_set_ContractNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> ContractNamespaces;

  __declspec(property(get = get_DeserializationExceptionMessage)) ::StringW DeserializationExceptionMessage;

  __declspec(property(get = get_ExtensionDataSetMethod)) ::System::Reflection::MethodInfo* ExtensionDataSetMethod;

  __declspec(property(get = get_HasExtensionData)) bool HasExtensionData;

  __declspec(property(get = get_IsISerializable)) bool IsISerializable;

  __declspec(property(get = get_IsNonAttributedType)) bool IsNonAttributedType;

  __declspec(property(get = get_IsReadOnlyContract)) bool IsReadOnlyContract;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  /// @brief Field MemberNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberNames, put = __cordl_internal_set_MemberNames)) ::ArrayW<::System::Xml::XmlDictionaryString*> MemberNames;

  /// @brief Field MemberNamespaces, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberNamespaces, put = __cordl_internal_set_MemberNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> MemberNamespaces;

  __declspec(property(get = get_Members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* Members;

  __declspec(property(get = get_OnDeserialized)) ::System::Reflection::MethodInfo* OnDeserialized;

  __declspec(property(get = get_OnDeserializing)) ::System::Reflection::MethodInfo* OnDeserializing;

  __declspec(property(get = get_OnSerialized)) ::System::Reflection::MethodInfo* OnSerialized;

  __declspec(property(get = get_OnSerializing)) ::System::Reflection::MethodInfo* OnSerializing;

  __declspec(property(get = get_SerializationExceptionMessage)) ::StringW SerializationExceptionMessage;

  __declspec(property(get = get_XmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* XmlFormatReaderDelegate;

  __declspec(property(get = get_XmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* XmlFormatWriterDelegate;

  /// @brief Field childElementNamespaces, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNamespaces, put = __cordl_internal_set_childElementNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*> childElementNamespaces;

  /// @brief Field helper, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* helper;

  /// @brief Method CheckAndAddMember, addr 0x655d36c, size 0x31c, virtual false, abstract: false, final false
  static inline void CheckAndAddMember(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members, ::System::Runtime::Serialization::DataMember* memberContract,
                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>* memberNamesTable);

  /// @brief Method CreateChildElementNamespaces, addr 0x655c814, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlDictionaryString*> CreateChildElementNamespaces();

  /// @brief Method CreateClassDataContractForKeyValue, addr 0x655d2f8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::ClassDataContract* CreateClassDataContractForKeyValue(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames);

  /// @brief Method Equals, addr 0x655df38, size 0x4b4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method GetChildNamespaceToDeclare, addr 0x655d7c0, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* GetChildNamespaceToDeclare(::System::Runtime::Serialization::DataContract* dataContract, ::System::Type* childType,
                                                                               ::System::Xml::XmlDictionary* dictionary);

  /// @brief Method GetHashCode, addr 0x655e8c0, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetISerializableConstructor, addr 0x655ccc4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetISerializableConstructor();

  /// @brief Method GetNonAttributedTypeConstructor, addr 0x655ce08, size 0x14, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetNonAttributedTypeConstructor();

  /// @brief Method InitClassDataContract, addr 0x655c298, size 0x94, virtual false, abstract: false, final false
  inline void InitClassDataContract();

  /// @brief Method IsEveryDataMemberOptional, addr 0x655e5f4, size 0x2cc, virtual false, abstract: false, final false
  inline bool IsEveryDataMemberOptional(::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>* dataMembers);

  /// @brief Method IsNonAttributedTypeValidForSerialization, addr 0x655da94, size 0x2f4, virtual false, abstract: false, final false
  static inline bool IsNonAttributedTypeValidForSerialization(::System::Type* type);

  static inline ::System::Runtime::Serialization::ClassDataContract* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::ClassDataContract* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames);

  /// @brief Method ReadXmlValue, addr 0x655dec4, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteXmlValue, addr 0x655de6c, size 0x58, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_ContractNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_ContractNamespaces();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_MemberNames() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_MemberNames();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_MemberNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_MemberNamespaces();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& __cordl_internal_get_childElementNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& __cordl_internal_get_childElementNamespaces();

  constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_ContractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_MemberNames(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_MemberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value);

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x655b820, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x655c32c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames);

  /// @brief Method get_BaseContract, addr 0x655c6d8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ClassDataContract* get_BaseContract();

  /// @brief Method get_ChildElementNamespaces, addr 0x655c708, size 0x10c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlDictionaryString*> get_ChildElementNamespaces();

  /// @brief Method get_DeserializationExceptionMessage, addr 0x655cbbc, size 0x14, virtual false, abstract: false, final false
  inline ::StringW get_DeserializationExceptionMessage();

  /// @brief Method get_ExtensionDataSetMethod, addr 0x655cb00, size 0x24, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_ExtensionDataSetMethod();

  /// @brief Method get_HasExtensionData, addr 0x655cb8c, size 0x18, virtual false, abstract: false, final false
  inline bool get_HasExtensionData();

  /// @brief Method get_IsISerializable, addr 0x655cb58, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsNonAttributedType, addr 0x655cb74, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsNonAttributedType();

  /// @brief Method get_IsReadOnlyContract, addr 0x655cca0, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsReadOnlyContract();

  /// @brief Method get_KnownDataContracts, addr 0x655cb3c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Members, addr 0x655c6f0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* get_Members();

  /// @brief Method get_OnDeserialized, addr 0x655cac4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnDeserialized();

  /// @brief Method get_OnDeserializing, addr 0x655ca88, size 0x24, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnDeserializing();

  /// @brief Method get_OnSerialized, addr 0x655ca4c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnSerialized();

  /// @brief Method get_OnSerializing, addr 0x655ca10, size 0x24, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_OnSerializing();

  /// @brief Method get_SerializationExceptionMessage, addr 0x655cba4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_SerializationExceptionMessage();

  /// @brief Method get_XmlFormatReaderDelegate, addr 0x655d104, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* get_XmlFormatReaderDelegate();

  /// @brief Method get_XmlFormatWriterDelegate, addr 0x655cf9c, size 0x168, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* get_XmlFormatWriterDelegate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassDataContract(ClassDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassDataContract", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassDataContract(ClassDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16383 };

  /// @brief Field ContractNamespaces, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___ContractNamespaces;

  /// @brief Field MemberNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___MemberNames;

  /// @brief Field MemberNamespaces, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___MemberNamespaces;

  /// @brief Field childElementNamespaces, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*> ___childElementNamespaces;

  /// @brief Field helper, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract, ___ContractNamespaces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract, ___MemberNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract, ___MemberNamespaces) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract, ___childElementNamespaces) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ClassDataContract, ___helper) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Serialization::ClassDataContract) == 0x50, "Size mismatch!");

} // namespace System::Runtime::Serialization

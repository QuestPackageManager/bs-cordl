#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/EnumDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataMember;
}
namespace System::Runtime::Serialization {
class EnumDataContract_EnumDataContractCriticalHelper;
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
class EnumDataContract;
}
namespace System::Runtime::Serialization {
class EnumDataContract_EnumDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::EnumDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.EnumDataContract/EnumDataContractCriticalHelper
class CORDL_TYPE EnumDataContract_EnumDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  __declspec(property(get = get_ChildElementNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ChildElementNames;

  __declspec(property(get = get_IsFlags, put = set_IsFlags)) bool IsFlags;

  __declspec(property(get = get_IsULong)) bool IsULong;

  __declspec(property(get = get_Members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* Members;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::List_1<int64_t>* Values;

  /// @brief Field baseContractName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_baseContractName, put = __cordl_internal_set_baseContractName)) ::System::Xml::XmlQualifiedName* baseContractName;

  /// @brief Field childElementNames, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNames,
                      put = __cordl_internal_set_childElementNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      childElementNames;

  /// @brief Field hasDataContract, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDataContract, put = __cordl_internal_set_hasDataContract)) bool hasDataContract;

  /// @brief Field isFlags, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_isFlags, put = __cordl_internal_set_isFlags)) bool isFlags;

  /// @brief Field isULong, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isULong, put = __cordl_internal_set_isULong)) bool isULong;

  /// @brief Field members, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_members, put = __cordl_internal_set_members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members;

  /// @brief Field nameToType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nameToType, put = setStaticF_nameToType)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>* nameToType;

  /// @brief Field typeToName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeToName, put = setStaticF_typeToName)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>* typeToName;

  /// @brief Field values, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::System::Collections::Generic::List_1<int64_t>* values;

  /// @brief Method Add, addr 0x5f32fcc, size 0x11c, virtual false, abstract: false, final false
  static inline void Add(::System::Type* type, ::StringW localName);

  /// @brief Method GetBaseContractName, addr 0x5f330e8, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetBaseContractName(::System::Type* type);

  /// @brief Method ImportBaseType, addr 0x5f33188, size 0x8c, virtual false, abstract: false, final false
  inline void ImportBaseType(::System::Type* baseType);

  /// @brief Method ImportDataMembers, addr 0x5f33310, size 0x7a4, virtual false, abstract: false, final false
  inline void ImportDataMembers();

  static inline ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* New_ctor(::System::Type* type);

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_baseContractName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_baseContractName();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_childElementNames() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_childElementNames();

  constexpr bool const& __cordl_internal_get_hasDataContract() const;

  constexpr bool& __cordl_internal_get_hasDataContract();

  constexpr bool const& __cordl_internal_get_isFlags() const;

  constexpr bool& __cordl_internal_get_isFlags();

  constexpr bool const& __cordl_internal_get_isULong() const;

  constexpr bool& __cordl_internal_get_isULong();

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* const& __cordl_internal_get_members() const;

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*& __cordl_internal_get_members();

  constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_values() const;

  constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_baseContractName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_childElementNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_hasDataContract(bool value);

  constexpr void __cordl_internal_set_isFlags(bool value);

  constexpr void __cordl_internal_set_isULong(bool value);

  constexpr void __cordl_internal_set_members(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* value);

  constexpr void __cordl_internal_set_values(::System::Collections::Generic::List_1<int64_t>* value);

  /// @brief Method .ctor, addr 0x5f31c54, size 0x3fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>* getStaticF_nameToType();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>* getStaticF_typeToName();

  /// @brief Method get_ChildElementNames, addr 0x5f33adc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> get_ChildElementNames();

  /// @brief Method get_IsFlags, addr 0x5f33ac4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFlags();

  /// @brief Method get_IsULong, addr 0x5f33ad4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsULong();

  /// @brief Method get_Members, addr 0x5f33ab4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* get_Members();

  /// @brief Method get_Values, addr 0x5f33abc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int64_t>* get_Values();

  static inline void setStaticF_nameToType(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>* value);

  static inline void setStaticF_typeToName(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>* value);

  /// @brief Method set_IsFlags, addr 0x5f33acc, size 0x8, virtual false, abstract: false, final false
  inline void set_IsFlags(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumDataContract_EnumDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumDataContract_EnumDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumDataContract_EnumDataContractCriticalHelper(EnumDataContract_EnumDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumDataContract_EnumDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumDataContract_EnumDataContractCriticalHelper(EnumDataContract_EnumDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16984 };

  /// @brief Field baseContractName, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseContractName;

  /// @brief Field members, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* ___members;

  /// @brief Field values, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int64_t>* ___values;

  /// @brief Field isULong, offset: 0x60, size: 0x1, def value: None
  bool ___isULong;

  /// @brief Field isFlags, offset: 0x61, size: 0x1, def value: None
  bool ___isFlags;

  /// @brief Field hasDataContract, offset: 0x62, size: 0x1, def value: None
  bool ___hasDataContract;

  /// @brief Field childElementNames, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___childElementNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___baseContractName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___members) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___values) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___isULong) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___isFlags) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___hasDataContract) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, ___childElementNames) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.EnumDataContract
class CORDL_TYPE EnumDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using EnumDataContractCriticalHelper = ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper;

  __declspec(property(get = get_CanContainReferences)) bool CanContainReferences;

  __declspec(property(get = get_ChildElementNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ChildElementNames;

  __declspec(property(get = get_IsFlags)) bool IsFlags;

  __declspec(property(get = get_IsULong)) bool IsULong;

  __declspec(property(get = get_Members)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* Members;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::List_1<int64_t>* Values;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* helper;

  /// @brief Method Equals, addr 0x5f329d0, size 0x2e8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method GetHashCode, addr 0x5f32cb8, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::EnumDataContract* New_ctor(::System::Type* type);

  /// @brief Method ReadEnumValue, addr 0x5f32528, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Object* ReadEnumValue(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadEnumValue, addr 0x5f327f0, size 0x1e0, virtual false, abstract: false, final false
  inline int64_t ReadEnumValue(::StringW value, int32_t index, int32_t count);

  /// @brief Method ReadXmlValue, addr 0x5f32cd0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteEnumValue, addr 0x5f320d0, size 0x458, virtual false, abstract: false, final false
  inline void WriteEnumValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* value);

  /// @brief Method WriteXmlValue, addr 0x5f32ccc, size 0x4, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5f2c2b4, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_CanContainReferences, addr 0x5f320c8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanContainReferences();

  /// @brief Method get_ChildElementNames, addr 0x5f320b0, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> get_ChildElementNames();

  /// @brief Method get_IsFlags, addr 0x5f32080, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsFlags();

  /// @brief Method get_IsULong, addr 0x5f32098, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsULong();

  /// @brief Method get_Members, addr 0x5f32050, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* get_Members();

  /// @brief Method get_Values, addr 0x5f32068, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int64_t>* get_Values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumDataContract(EnumDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumDataContract(EnumDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16985 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::EnumDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::EnumDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::EnumDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumDataContract*, "System.Runtime.Serialization", "EnumDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*, "System.Runtime.Serialization", "EnumDataContract/EnumDataContractCriticalHelper");

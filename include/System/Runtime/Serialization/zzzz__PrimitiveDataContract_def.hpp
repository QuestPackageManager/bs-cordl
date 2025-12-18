#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/PrimitiveDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrimitiveDataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class PrimitiveDataContract_PrimitiveDataContractCriticalHelper;
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class PrimitiveDataContract;
}
namespace System::Runtime::Serialization {
class PrimitiveDataContract_PrimitiveDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::PrimitiveDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.PrimitiveDataContract/PrimitiveDataContractCriticalHelper
class CORDL_TYPE PrimitiveDataContract_PrimitiveDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  __declspec(property(get = get_XmlFormatContentWriterMethod, put = set_XmlFormatContentWriterMethod)) ::System::Reflection::MethodInfo* XmlFormatContentWriterMethod;

  __declspec(property(get = get_XmlFormatReaderMethod, put = set_XmlFormatReaderMethod)) ::System::Reflection::MethodInfo* XmlFormatReaderMethod;

  __declspec(property(get = get_XmlFormatWriterMethod, put = set_XmlFormatWriterMethod)) ::System::Reflection::MethodInfo* XmlFormatWriterMethod;

  /// @brief Field xmlFormatContentWriterMethod, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatContentWriterMethod, put = __cordl_internal_set_xmlFormatContentWriterMethod)) ::System::Reflection::MethodInfo* xmlFormatContentWriterMethod;

  /// @brief Field xmlFormatReaderMethod, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatReaderMethod, put = __cordl_internal_set_xmlFormatReaderMethod)) ::System::Reflection::MethodInfo* xmlFormatReaderMethod;

  /// @brief Field xmlFormatWriterMethod, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatWriterMethod, put = __cordl_internal_set_xmlFormatWriterMethod)) ::System::Reflection::MethodInfo* xmlFormatWriterMethod;

  static inline ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name,
                                                                                                                      ::System::Xml::XmlDictionaryString* ns);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_xmlFormatContentWriterMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_xmlFormatContentWriterMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_xmlFormatReaderMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_xmlFormatReaderMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_xmlFormatWriterMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_xmlFormatWriterMethod();

  constexpr void __cordl_internal_set_xmlFormatContentWriterMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_xmlFormatReaderMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_xmlFormatWriterMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x5fa5eb4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method get_XmlFormatContentWriterMethod, addr 0x5fa6a1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatContentWriterMethod();

  /// @brief Method get_XmlFormatReaderMethod, addr 0x5fa6a2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatReaderMethod();

  /// @brief Method get_XmlFormatWriterMethod, addr 0x5fa6a0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatWriterMethod();

  /// @brief Method set_XmlFormatContentWriterMethod, addr 0x5fa6a24, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatContentWriterMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method set_XmlFormatReaderMethod, addr 0x5fa6a34, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatReaderMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method set_XmlFormatWriterMethod, addr 0x5fa6a14, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatWriterMethod(::System::Reflection::MethodInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveDataContract_PrimitiveDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveDataContract_PrimitiveDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveDataContract_PrimitiveDataContractCriticalHelper(PrimitiveDataContract_PrimitiveDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveDataContract_PrimitiveDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveDataContract_PrimitiveDataContractCriticalHelper(PrimitiveDataContract_PrimitiveDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17028 };

  /// @brief Field xmlFormatWriterMethod, offset: 0x48, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___xmlFormatWriterMethod;

  /// @brief Field xmlFormatContentWriterMethod, offset: 0x50, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___xmlFormatContentWriterMethod;

  /// @brief Field xmlFormatReaderMethod, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___xmlFormatReaderMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper, ___xmlFormatWriterMethod) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper, ___xmlFormatContentWriterMethod) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper, ___xmlFormatReaderMethod) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper, 0x60>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.PrimitiveDataContract
class CORDL_TYPE PrimitiveDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using PrimitiveDataContractCriticalHelper = ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper;

  __declspec(property(get = get_CanContainReferences)) bool CanContainReferences;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  __declspec(property(get = get_IsPrimitive)) bool IsPrimitive;

  __declspec(property(get = get_ReadMethodName)) ::StringW ReadMethodName;

  __declspec(property(get = get_TopLevelElementNamespace)) ::System::Xml::XmlDictionaryString* TopLevelElementNamespace;

  __declspec(property(get = get_WriteMethodName)) ::StringW WriteMethodName;

  __declspec(property(get = get_XmlFormatContentWriterMethod)) ::System::Reflection::MethodInfo* XmlFormatContentWriterMethod;

  __declspec(property(get = get_XmlFormatReaderMethod)) ::System::Reflection::MethodInfo* XmlFormatReaderMethod;

  __declspec(property(get = get_XmlFormatWriterMethod)) ::System::Reflection::MethodInfo* XmlFormatWriterMethod;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper* helper;

  /// @brief Method Equals, addr 0x5fa68f8, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method GetPrimitiveDataContract, addr 0x5fa5fcc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::PrimitiveDataContract* GetPrimitiveDataContract(::StringW name, ::StringW ns);

  /// @brief Method GetPrimitiveDataContract, addr 0x5fa5f44, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::PrimitiveDataContract* GetPrimitiveDataContract(::System::Type* type);

  /// @brief Method HandleReadValue, addr 0x5fa6764, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* HandleReadValue(::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  static inline ::System::Runtime::Serialization::PrimitiveDataContract* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method TryReadNullAtTopLevel, addr 0x5fa67a4, size 0x154, virtual false, abstract: false, final false
  inline bool TryReadNullAtTopLevel(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method WriteXmlValue, addr 0x5fa6748, size 0x1c, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5fa5dec, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method get_CanContainReferences, addr 0x5fa60c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanContainReferences();

  /// @brief Method get_IsBuiltInDataContract, addr 0x5fa60d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_IsPrimitive, addr 0x5fa60c8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPrimitive();

  /// @brief Method get_ReadMethodName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_ReadMethodName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5fa6064, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method get_WriteMethodName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_WriteMethodName();

  /// @brief Method get_XmlFormatContentWriterMethod, addr 0x5fa6430, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatContentWriterMethod();

  /// @brief Method get_XmlFormatReaderMethod, addr 0x5fa668c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatReaderMethod();

  /// @brief Method get_XmlFormatWriterMethod, addr 0x5fa60d8, size 0x358, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_XmlFormatWriterMethod();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveDataContract(PrimitiveDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveDataContract(PrimitiveDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17029 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::PrimitiveDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::PrimitiveDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::PrimitiveDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::PrimitiveDataContract*, "System.Runtime.Serialization", "PrimitiveDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::PrimitiveDataContract_PrimitiveDataContractCriticalHelper*, "System.Runtime.Serialization",
                       "PrimitiveDataContract/PrimitiveDataContractCriticalHelper");

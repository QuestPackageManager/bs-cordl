#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Attributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Attributes)
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class Attributes;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Attributes);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.Attributes
class CORDL_TYPE Attributes : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArraySZSize, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_ArraySZSize, put = __cordl_internal_set_ArraySZSize)) int32_t ArraySZSize;

  /// @brief Field ClrAssembly, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ClrAssembly, put = __cordl_internal_set_ClrAssembly)) ::StringW ClrAssembly;

  /// @brief Field ClrType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ClrType, put = __cordl_internal_set_ClrType)) ::StringW ClrType;

  /// @brief Field FactoryTypeName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_FactoryTypeName, put = __cordl_internal_set_FactoryTypeName)) ::StringW FactoryTypeName;

  /// @brief Field FactoryTypeNamespace, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_FactoryTypeNamespace, put = __cordl_internal_set_FactoryTypeNamespace)) ::StringW FactoryTypeNamespace;

  /// @brief Field FactoryTypePrefix, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_FactoryTypePrefix, put = __cordl_internal_set_FactoryTypePrefix)) ::StringW FactoryTypePrefix;

  /// @brief Field Id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) ::StringW Id;

  /// @brief Field Ref, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Ref, put = __cordl_internal_set_Ref)) ::StringW Ref;

  /// @brief Field UnrecognizedAttributesFound, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_UnrecognizedAttributesFound, put = __cordl_internal_set_UnrecognizedAttributesFound)) bool UnrecognizedAttributesFound;

  /// @brief Field XsiNil, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_XsiNil, put = __cordl_internal_set_XsiNil)) bool XsiNil;

  /// @brief Field XsiTypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiTypeName, put = __cordl_internal_set_XsiTypeName)) ::StringW XsiTypeName;

  /// @brief Field XsiTypeNamespace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiTypeNamespace, put = __cordl_internal_set_XsiTypeNamespace)) ::StringW XsiTypeNamespace;

  /// @brief Field XsiTypePrefix, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiTypePrefix, put = __cordl_internal_set_XsiTypePrefix)) ::StringW XsiTypePrefix;

  /// @brief Field schemaInstanceLocalNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_schemaInstanceLocalNames,
                      put = setStaticF_schemaInstanceLocalNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      schemaInstanceLocalNames;

  /// @brief Field serializationLocalNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_serializationLocalNames, put = setStaticF_serializationLocalNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      serializationLocalNames;

  static inline ::System::Runtime::Serialization::Attributes* New_ctor();

  /// @brief Method Read, addr 0x5f7eda8, size 0x254, virtual false, abstract: false, final false
  inline void Read(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadArraySize, addr 0x5f7f138, size 0xc8, virtual false, abstract: false, final false
  inline void ReadArraySize(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadFactoryType, addr 0x5f7f2b4, size 0x68, virtual false, abstract: false, final false
  inline void ReadFactoryType(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadId, addr 0x5f7f084, size 0xb4, virtual false, abstract: false, final false
  inline void ReadId(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadRef, addr 0x5f7f200, size 0xb4, virtual false, abstract: false, final false
  inline void ReadRef(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadXsiNil, addr 0x5f7f31c, size 0x2c, virtual false, abstract: false, final false
  inline void ReadXsiNil(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadXsiType, addr 0x5f7f348, size 0x68, virtual false, abstract: false, final false
  inline void ReadXsiType(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method Reset, addr 0x5f7effc, size 0x88, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_ArraySZSize() const;

  constexpr int32_t& __cordl_internal_get_ArraySZSize();

  constexpr ::StringW const& __cordl_internal_get_ClrAssembly() const;

  constexpr ::StringW& __cordl_internal_get_ClrAssembly();

  constexpr ::StringW const& __cordl_internal_get_ClrType() const;

  constexpr ::StringW& __cordl_internal_get_ClrType();

  constexpr ::StringW const& __cordl_internal_get_FactoryTypeName() const;

  constexpr ::StringW& __cordl_internal_get_FactoryTypeName();

  constexpr ::StringW const& __cordl_internal_get_FactoryTypeNamespace() const;

  constexpr ::StringW& __cordl_internal_get_FactoryTypeNamespace();

  constexpr ::StringW const& __cordl_internal_get_FactoryTypePrefix() const;

  constexpr ::StringW& __cordl_internal_get_FactoryTypePrefix();

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr ::StringW const& __cordl_internal_get_Ref() const;

  constexpr ::StringW& __cordl_internal_get_Ref();

  constexpr bool const& __cordl_internal_get_UnrecognizedAttributesFound() const;

  constexpr bool& __cordl_internal_get_UnrecognizedAttributesFound();

  constexpr bool const& __cordl_internal_get_XsiNil() const;

  constexpr bool& __cordl_internal_get_XsiNil();

  constexpr ::StringW const& __cordl_internal_get_XsiTypeName() const;

  constexpr ::StringW& __cordl_internal_get_XsiTypeName();

  constexpr ::StringW const& __cordl_internal_get_XsiTypeNamespace() const;

  constexpr ::StringW& __cordl_internal_get_XsiTypeNamespace();

  constexpr ::StringW const& __cordl_internal_get_XsiTypePrefix() const;

  constexpr ::StringW& __cordl_internal_get_XsiTypePrefix();

  constexpr void __cordl_internal_set_ArraySZSize(int32_t value);

  constexpr void __cordl_internal_set_ClrAssembly(::StringW value);

  constexpr void __cordl_internal_set_ClrType(::StringW value);

  constexpr void __cordl_internal_set_FactoryTypeName(::StringW value);

  constexpr void __cordl_internal_set_FactoryTypeNamespace(::StringW value);

  constexpr void __cordl_internal_set_FactoryTypePrefix(::StringW value);

  constexpr void __cordl_internal_set_Id(::StringW value);

  constexpr void __cordl_internal_set_Ref(::StringW value);

  constexpr void __cordl_internal_set_UnrecognizedAttributesFound(bool value);

  constexpr void __cordl_internal_set_XsiNil(bool value);

  constexpr void __cordl_internal_set_XsiTypeName(::StringW value);

  constexpr void __cordl_internal_set_XsiTypeNamespace(::StringW value);

  constexpr void __cordl_internal_set_XsiTypePrefix(::StringW value);

  /// @brief Method .ctor, addr 0x5f7f3b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> getStaticF_schemaInstanceLocalNames();

  static inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> getStaticF_serializationLocalNames();

  static inline void setStaticF_schemaInstanceLocalNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  static inline void setStaticF_serializationLocalNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Attributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Attributes(Attributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Attributes(Attributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16968 };

  /// @brief Field Id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief Field Ref, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Ref;

  /// @brief Field XsiTypeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___XsiTypeName;

  /// @brief Field XsiTypeNamespace, offset: 0x28, size: 0x8, def value: None
  ::StringW ___XsiTypeNamespace;

  /// @brief Field XsiTypePrefix, offset: 0x30, size: 0x8, def value: None
  ::StringW ___XsiTypePrefix;

  /// @brief Field XsiNil, offset: 0x38, size: 0x1, def value: None
  bool ___XsiNil;

  /// @brief Field ClrAssembly, offset: 0x40, size: 0x8, def value: None
  ::StringW ___ClrAssembly;

  /// @brief Field ClrType, offset: 0x48, size: 0x8, def value: None
  ::StringW ___ClrType;

  /// @brief Field ArraySZSize, offset: 0x50, size: 0x4, def value: None
  int32_t ___ArraySZSize;

  /// @brief Field FactoryTypeName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___FactoryTypeName;

  /// @brief Field FactoryTypeNamespace, offset: 0x60, size: 0x8, def value: None
  ::StringW ___FactoryTypeNamespace;

  /// @brief Field FactoryTypePrefix, offset: 0x68, size: 0x8, def value: None
  ::StringW ___FactoryTypePrefix;

  /// @brief Field UnrecognizedAttributesFound, offset: 0x70, size: 0x1, def value: None
  bool ___UnrecognizedAttributesFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___Ref) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___XsiTypeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___XsiTypeNamespace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___XsiTypePrefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___XsiNil) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___ClrAssembly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___ClrType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___ArraySZSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___FactoryTypeName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___FactoryTypeNamespace) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___FactoryTypePrefix) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Attributes, ___UnrecognizedAttributesFound) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Attributes, 0x78>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::Attributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Attributes*, "System.Runtime.Serialization", "Attributes");

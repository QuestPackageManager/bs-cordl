#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlXml.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SqlXml)
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
// Forward declare root types
namespace System::Data::SqlTypes {
class SqlXml;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlXml);
// Dependencies System.Data.SqlTypes.INullable, System.Object, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlXml
class CORDL_TYPE SqlXml : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field _createSqlReaderMethodInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__createSqlReaderMethodInfo, put = __cordl_internal_set__createSqlReaderMethodInfo)) ::System::Reflection::MethodInfo* _createSqlReaderMethodInfo;

  /// @brief Field _fNotNull, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__fNotNull, put = __cordl_internal_set__fNotNull)) bool _fNotNull;

  /// @brief Field _firstCreateReader, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__firstCreateReader, put = __cordl_internal_set__firstCreateReader)) bool _firstCreateReader;

  /// @brief Field _stream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::IO::Stream* _stream;

  /// @brief Field s_createSqlReaderMethodInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_createSqlReaderMethodInfo, put = setStaticF_s_createSqlReaderMethodInfo)) ::System::Reflection::MethodInfo* s_createSqlReaderMethodInfo;

  /// @brief Field s_defaultXmlReaderSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultXmlReaderSettings, put = setStaticF_s_defaultXmlReaderSettings)) ::System::Xml::XmlReaderSettings* s_defaultXmlReaderSettings;

  /// @brief Field s_defaultXmlReaderSettingsCloseInput, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultXmlReaderSettingsCloseInput,
                      put = setStaticF_s_defaultXmlReaderSettingsCloseInput)) ::System::Xml::XmlReaderSettings* s_defaultXmlReaderSettingsCloseInput;

  /// @brief Field s_sqlReaderDelegate, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_sqlReaderDelegate,
      put =
          setStaticF_s_sqlReaderDelegate)) ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* s_sqlReaderDelegate;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method CreateReader, addr 0x41d9f38, size 0x154, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* CreateReader();

  /// @brief Method CreateSqlReaderDelegate, addr 0x41da3e8, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* CreateSqlReaderDelegate();

  /// @brief Method CreateSqlXmlReader, addr 0x41da230, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlReader* CreateSqlXmlReader(::System::IO::Stream* stream, bool closeInput, bool throwTargetInvocationExceptions);

  /// @brief Method GetXsdType, addr 0x41da808, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  static inline ::System::Data::SqlTypes::SqlXml* New_ctor();

  /// @brief Method SetNull, addr 0x41d9f24, size 0x14, virtual false, abstract: false, final false
  inline void SetNull();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41da4e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41da4e8, size 0x1d0, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41da6b8, size 0x150, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__createSqlReaderMethodInfo() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__createSqlReaderMethodInfo();

  constexpr bool const& __cordl_internal_get__fNotNull() const;

  constexpr bool& __cordl_internal_get__fNotNull();

  constexpr bool const& __cordl_internal_get__firstCreateReader() const;

  constexpr bool& __cordl_internal_get__firstCreateReader();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr void __cordl_internal_set__createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__fNotNull(bool value);

  constexpr void __cordl_internal_set__firstCreateReader(bool value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x41d9efc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_createSqlReaderMethodInfo();

  static inline ::System::Xml::XmlReaderSettings* getStaticF_s_defaultXmlReaderSettings();

  static inline ::System::Xml::XmlReaderSettings* getStaticF_s_defaultXmlReaderSettingsCloseInput();

  static inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* getStaticF_s_sqlReaderDelegate();

  /// @brief Method get_CreateSqlReaderMethodInfo, addr 0x41da10c, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CreateSqlReaderMethodInfo();

  /// @brief Method get_IsNull, addr 0x41da08c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

  static inline void setStaticF_s_createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_defaultXmlReaderSettings(::System::Xml::XmlReaderSettings* value);

  static inline void setStaticF_s_defaultXmlReaderSettingsCloseInput(::System::Xml::XmlReaderSettings* value);

  static inline void setStaticF_s_sqlReaderDelegate(::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlXml();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlXml", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlXml(SqlXml&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlXml", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlXml(SqlXml const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11518 };

  /// @brief Field _createSqlReaderMethodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____createSqlReaderMethodInfo;

  /// @brief Field _fNotNull, offset: 0x18, size: 0x1, def value: None
  bool ____fNotNull;

  /// @brief Field _stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _firstCreateReader, offset: 0x28, size: 0x1, def value: None
  bool ____firstCreateReader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlXml, ____createSqlReaderMethodInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlXml, ____fNotNull) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlXml, ____stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlXml, ____firstCreateReader) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlXml, 0x30>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlXml);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlXml*, "System.Data.SqlTypes", "SqlXml");

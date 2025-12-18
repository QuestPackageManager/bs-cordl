#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DictionaryGlobals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryGlobals)
namespace System::Xml {
class XmlDictionaryString;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DictionaryGlobals;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DictionaryGlobals);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DictionaryGlobals
class CORDL_TYPE DictionaryGlobals : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArraySizeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ArraySizeLocalName, put = setStaticF_ArraySizeLocalName)) ::System::Xml::XmlDictionaryString* ArraySizeLocalName;

  /// @brief Field AsmxTypesNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AsmxTypesNamespace, put = setStaticF_AsmxTypesNamespace)) ::System::Xml::XmlDictionaryString* AsmxTypesNamespace;

  /// @brief Field BooleanLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BooleanLocalName, put = setStaticF_BooleanLocalName)) ::System::Xml::XmlDictionaryString* BooleanLocalName;

  /// @brief Field ByteArrayLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ByteArrayLocalName, put = setStaticF_ByteArrayLocalName)) ::System::Xml::XmlDictionaryString* ByteArrayLocalName;

  /// @brief Field CharLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CharLocalName, put = setStaticF_CharLocalName)) ::System::Xml::XmlDictionaryString* CharLocalName;

  /// @brief Field ClrAssemblyLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ClrAssemblyLocalName, put = setStaticF_ClrAssemblyLocalName)) ::System::Xml::XmlDictionaryString* ClrAssemblyLocalName;

  /// @brief Field ClrTypeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ClrTypeLocalName, put = setStaticF_ClrTypeLocalName)) ::System::Xml::XmlDictionaryString* ClrTypeLocalName;

  /// @brief Field DateTimeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DateTimeLocalName, put = setStaticF_DateTimeLocalName)) ::System::Xml::XmlDictionaryString* DateTimeLocalName;

  /// @brief Field DecimalLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DecimalLocalName, put = setStaticF_DecimalLocalName)) ::System::Xml::XmlDictionaryString* DecimalLocalName;

  /// @brief Field DoubleLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoubleLocalName, put = setStaticF_DoubleLocalName)) ::System::Xml::XmlDictionaryString* DoubleLocalName;

  /// @brief Field ENTITIESLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENTITIESLocalName, put = setStaticF_ENTITIESLocalName)) ::System::Xml::XmlDictionaryString* ENTITIESLocalName;

  /// @brief Field ENTITYLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENTITYLocalName, put = setStaticF_ENTITYLocalName)) ::System::Xml::XmlDictionaryString* ENTITYLocalName;

  /// @brief Field EmptyString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyString, put = setStaticF_EmptyString)) ::System::Xml::XmlDictionaryString* EmptyString;

  /// @brief Field FloatLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FloatLocalName, put = setStaticF_FloatLocalName)) ::System::Xml::XmlDictionaryString* FloatLocalName;

  /// @brief Field GuidLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GuidLocalName, put = setStaticF_GuidLocalName)) ::System::Xml::XmlDictionaryString* GuidLocalName;

  /// @brief Field IDREFLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IDREFLocalName, put = setStaticF_IDREFLocalName)) ::System::Xml::XmlDictionaryString* IDREFLocalName;

  /// @brief Field IDREFSLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IDREFSLocalName, put = setStaticF_IDREFSLocalName)) ::System::Xml::XmlDictionaryString* IDREFSLocalName;

  /// @brief Field ISerializableFactoryTypeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ISerializableFactoryTypeLocalName, put = setStaticF_ISerializableFactoryTypeLocalName)) ::System::Xml::XmlDictionaryString* ISerializableFactoryTypeLocalName;

  /// @brief Field IdLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdLocalName, put = setStaticF_IdLocalName)) ::System::Xml::XmlDictionaryString* IdLocalName;

  /// @brief Field IntLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IntLocalName, put = setStaticF_IntLocalName)) ::System::Xml::XmlDictionaryString* IntLocalName;

  /// @brief Field LongLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LongLocalName, put = setStaticF_LongLocalName)) ::System::Xml::XmlDictionaryString* LongLocalName;

  /// @brief Field NCNameLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NCNameLocalName, put = setStaticF_NCNameLocalName)) ::System::Xml::XmlDictionaryString* NCNameLocalName;

  /// @brief Field NMTOKENLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NMTOKENLocalName, put = setStaticF_NMTOKENLocalName)) ::System::Xml::XmlDictionaryString* NMTOKENLocalName;

  /// @brief Field NMTOKENSLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NMTOKENSLocalName, put = setStaticF_NMTOKENSLocalName)) ::System::Xml::XmlDictionaryString* NMTOKENSLocalName;

  /// @brief Field NameLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NameLocalName, put = setStaticF_NameLocalName)) ::System::Xml::XmlDictionaryString* NameLocalName;

  /// @brief Field ObjectLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ObjectLocalName, put = setStaticF_ObjectLocalName)) ::System::Xml::XmlDictionaryString* ObjectLocalName;

  /// @brief Field QNameLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_QNameLocalName, put = setStaticF_QNameLocalName)) ::System::Xml::XmlDictionaryString* QNameLocalName;

  /// @brief Field RefLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RefLocalName, put = setStaticF_RefLocalName)) ::System::Xml::XmlDictionaryString* RefLocalName;

  /// @brief Field SchemaInstanceNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaInstanceNamespace, put = setStaticF_SchemaInstanceNamespace)) ::System::Xml::XmlDictionaryString* SchemaInstanceNamespace;

  /// @brief Field SchemaNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaNamespace, put = setStaticF_SchemaNamespace)) ::System::Xml::XmlDictionaryString* SchemaNamespace;

  /// @brief Field SerializationNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SerializationNamespace, put = setStaticF_SerializationNamespace)) ::System::Xml::XmlDictionaryString* SerializationNamespace;

  /// @brief Field ShortLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ShortLocalName, put = setStaticF_ShortLocalName)) ::System::Xml::XmlDictionaryString* ShortLocalName;

  /// @brief Field SignedByteLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SignedByteLocalName, put = setStaticF_SignedByteLocalName)) ::System::Xml::XmlDictionaryString* SignedByteLocalName;

  /// @brief Field Space, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Space, put = setStaticF_Space)) ::System::Xml::XmlDictionaryString* Space;

  /// @brief Field StringLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StringLocalName, put = setStaticF_StringLocalName)) ::System::Xml::XmlDictionaryString* StringLocalName;

  /// @brief Field TimeSpanLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TimeSpanLocalName, put = setStaticF_TimeSpanLocalName)) ::System::Xml::XmlDictionaryString* TimeSpanLocalName;

  /// @brief Field UnsignedByteLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnsignedByteLocalName, put = setStaticF_UnsignedByteLocalName)) ::System::Xml::XmlDictionaryString* UnsignedByteLocalName;

  /// @brief Field UnsignedIntLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnsignedIntLocalName, put = setStaticF_UnsignedIntLocalName)) ::System::Xml::XmlDictionaryString* UnsignedIntLocalName;

  /// @brief Field UnsignedLongLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnsignedLongLocalName, put = setStaticF_UnsignedLongLocalName)) ::System::Xml::XmlDictionaryString* UnsignedLongLocalName;

  /// @brief Field UnsignedShortLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnsignedShortLocalName, put = setStaticF_UnsignedShortLocalName)) ::System::Xml::XmlDictionaryString* UnsignedShortLocalName;

  /// @brief Field UriLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriLocalName, put = setStaticF_UriLocalName)) ::System::Xml::XmlDictionaryString* UriLocalName;

  /// @brief Field XSDIDLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XSDIDLocalName, put = setStaticF_XSDIDLocalName)) ::System::Xml::XmlDictionaryString* XSDIDLocalName;

  /// @brief Field XmlnsNamespace, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XmlnsNamespace, put = setStaticF_XmlnsNamespace)) ::System::Xml::XmlDictionaryString* XmlnsNamespace;

  /// @brief Field XsiNilLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XsiNilLocalName, put = setStaticF_XsiNilLocalName)) ::System::Xml::XmlDictionaryString* XsiNilLocalName;

  /// @brief Field XsiTypeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XsiTypeLocalName, put = setStaticF_XsiTypeLocalName)) ::System::Xml::XmlDictionaryString* XsiTypeLocalName;

  /// @brief Field dateLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dateLocalName, put = setStaticF_dateLocalName)) ::System::Xml::XmlDictionaryString* dateLocalName;

  /// @brief Field gDayLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gDayLocalName, put = setStaticF_gDayLocalName)) ::System::Xml::XmlDictionaryString* gDayLocalName;

  /// @brief Field gMonthDayLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gMonthDayLocalName, put = setStaticF_gMonthDayLocalName)) ::System::Xml::XmlDictionaryString* gMonthDayLocalName;

  /// @brief Field gMonthLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gMonthLocalName, put = setStaticF_gMonthLocalName)) ::System::Xml::XmlDictionaryString* gMonthLocalName;

  /// @brief Field gYearLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gYearLocalName, put = setStaticF_gYearLocalName)) ::System::Xml::XmlDictionaryString* gYearLocalName;

  /// @brief Field gYearMonthLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gYearMonthLocalName, put = setStaticF_gYearMonthLocalName)) ::System::Xml::XmlDictionaryString* gYearMonthLocalName;

  /// @brief Field hexBinaryLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hexBinaryLocalName, put = setStaticF_hexBinaryLocalName)) ::System::Xml::XmlDictionaryString* hexBinaryLocalName;

  /// @brief Field integerLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_integerLocalName, put = setStaticF_integerLocalName)) ::System::Xml::XmlDictionaryString* integerLocalName;

  /// @brief Field languageLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_languageLocalName, put = setStaticF_languageLocalName)) ::System::Xml::XmlDictionaryString* languageLocalName;

  /// @brief Field negativeIntegerLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_negativeIntegerLocalName, put = setStaticF_negativeIntegerLocalName)) ::System::Xml::XmlDictionaryString* negativeIntegerLocalName;

  /// @brief Field nonNegativeIntegerLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nonNegativeIntegerLocalName, put = setStaticF_nonNegativeIntegerLocalName)) ::System::Xml::XmlDictionaryString* nonNegativeIntegerLocalName;

  /// @brief Field nonPositiveIntegerLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nonPositiveIntegerLocalName, put = setStaticF_nonPositiveIntegerLocalName)) ::System::Xml::XmlDictionaryString* nonPositiveIntegerLocalName;

  /// @brief Field normalizedStringLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_normalizedStringLocalName, put = setStaticF_normalizedStringLocalName)) ::System::Xml::XmlDictionaryString* normalizedStringLocalName;

  /// @brief Field positiveIntegerLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_positiveIntegerLocalName, put = setStaticF_positiveIntegerLocalName)) ::System::Xml::XmlDictionaryString* positiveIntegerLocalName;

  /// @brief Field timeLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_timeLocalName, put = setStaticF_timeLocalName)) ::System::Xml::XmlDictionaryString* timeLocalName;

  /// @brief Field tokenLocalName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tokenLocalName, put = setStaticF_tokenLocalName)) ::System::Xml::XmlDictionaryString* tokenLocalName;

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ArraySizeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_AsmxTypesNamespace();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_BooleanLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ByteArrayLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_CharLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ClrAssemblyLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ClrTypeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_DateTimeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_DecimalLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_DoubleLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ENTITIESLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ENTITYLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_EmptyString();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_FloatLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_GuidLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_IDREFLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_IDREFSLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ISerializableFactoryTypeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_IdLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_IntLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_LongLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_NCNameLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_NMTOKENLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_NMTOKENSLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_NameLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ObjectLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_QNameLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_RefLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_SchemaInstanceNamespace();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_SchemaNamespace();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_SerializationNamespace();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_ShortLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_SignedByteLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_Space();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_StringLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_TimeSpanLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_UnsignedByteLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_UnsignedIntLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_UnsignedLongLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_UnsignedShortLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_UriLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_XSDIDLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_XmlnsNamespace();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_XsiNilLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_XsiTypeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_dateLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_gDayLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_gMonthDayLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_gMonthLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_gYearLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_gYearMonthLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_hexBinaryLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_integerLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_languageLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_negativeIntegerLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_nonNegativeIntegerLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_nonPositiveIntegerLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_normalizedStringLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_positiveIntegerLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_timeLocalName();

  static inline ::System::Xml::XmlDictionaryString* getStaticF_tokenLocalName();

  static inline void setStaticF_ArraySizeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_AsmxTypesNamespace(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_BooleanLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ByteArrayLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_CharLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ClrAssemblyLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ClrTypeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_DateTimeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_DecimalLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_DoubleLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ENTITIESLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ENTITYLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_EmptyString(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_FloatLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_GuidLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_IDREFLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_IDREFSLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ISerializableFactoryTypeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_IdLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_IntLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_LongLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_NCNameLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_NMTOKENLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_NMTOKENSLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_NameLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ObjectLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_QNameLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_RefLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_SchemaInstanceNamespace(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_SchemaNamespace(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_SerializationNamespace(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_ShortLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_SignedByteLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_Space(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_StringLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_TimeSpanLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_UnsignedByteLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_UnsignedIntLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_UnsignedLongLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_UnsignedShortLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_UriLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_XSDIDLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_XmlnsNamespace(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_XsiNilLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_XsiTypeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_dateLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_gDayLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_gMonthDayLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_gMonthLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_gYearLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_gYearMonthLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_hexBinaryLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_integerLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_languageLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_negativeIntegerLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_nonNegativeIntegerLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_nonPositiveIntegerLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_normalizedStringLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_positiveIntegerLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_timeLocalName(::System::Xml::XmlDictionaryString* value);

  static inline void setStaticF_tokenLocalName(::System::Xml::XmlDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryGlobals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryGlobals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryGlobals(DictionaryGlobals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryGlobals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryGlobals(DictionaryGlobals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DictionaryGlobals, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DictionaryGlobals);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DictionaryGlobals*, "System.Runtime.Serialization", "DictionaryGlobals");

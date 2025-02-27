#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlChars.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytesCharsState_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlChars)
namespace System::Data::SqlTypes {
class SqlStreamChars;
}
namespace System::Data::SqlTypes {
struct SqlString;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Data::SqlTypes {
class SqlChars;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlChars);
// Dependencies System.Data.SqlTypes.INullable, System.Data.SqlTypes.SqlBytesCharsState, System.Object, System.Runtime.Serialization.ISerializable, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlChars
class CORDL_TYPE SqlChars : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Buffer)) ::ArrayW<char16_t, ::Array<char16_t>*> Buffer;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Value)) ::ArrayW<char16_t, ::Array<char16_t>*> Value;

  /// @brief Field _lCurLen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lCurLen, put = __cordl_internal_set__lCurLen)) int64_t _lCurLen;

  /// @brief Field _rgchBuf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rgchBuf, put = __cordl_internal_set__rgchBuf)) ::ArrayW<char16_t, ::Array<char16_t>*> _rgchBuf;

  /// @brief Field _rgchWorkBuf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rgchWorkBuf, put = __cordl_internal_set__rgchWorkBuf)) ::ArrayW<char16_t, ::Array<char16_t>*> _rgchWorkBuf;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::System::Data::SqlTypes::SqlBytesCharsState _state;

  /// @brief Field _stream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::Data::SqlTypes::SqlStreamChars* _stream;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method CopyStreamToBuffer, addr 0x41cf3ac, size 0x13c, virtual false, abstract: false, final false
  inline void CopyStreamToBuffer();

  /// @brief Method FStream, addr 0x41cf39c, size 0x10, virtual false, abstract: false, final false
  inline bool FStream();

  /// @brief Method GetXsdType, addr 0x41cf974, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  static inline ::System::Data::SqlTypes::SqlChars* New_ctor();

  static inline ::System::Data::SqlTypes::SqlChars* New_ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  static inline ::System::Data::SqlTypes::SqlChars* New_ctor(::System::Data::SqlTypes::SqlString value);

  /// @brief Method SetBuffer, addr 0x41cf728, size 0x28, virtual false, abstract: false, final false
  inline void SetBuffer(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method SetNull, addr 0x41cf1cc, size 0x10, virtual false, abstract: false, final false
  inline void SetNull();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x41cfa00, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41cf750, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41cf758, size 0x11c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41cf874, size 0x100, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  constexpr int64_t const& __cordl_internal_get__lCurLen() const;

  constexpr int64_t& __cordl_internal_get__lCurLen();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__rgchBuf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__rgchBuf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__rgchWorkBuf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__rgchWorkBuf();

  constexpr ::System::Data::SqlTypes::SqlBytesCharsState const& __cordl_internal_get__state() const;

  constexpr ::System::Data::SqlTypes::SqlBytesCharsState& __cordl_internal_get__state();

  constexpr ::System::Data::SqlTypes::SqlStreamChars* const& __cordl_internal_get__stream() const;

  constexpr ::System::Data::SqlTypes::SqlStreamChars*& __cordl_internal_get__stream();

  constexpr void __cordl_internal_set__lCurLen(int64_t value);

  constexpr void __cordl_internal_set__rgchBuf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__rgchWorkBuf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__state(::System::Data::SqlTypes::SqlBytesCharsState value);

  constexpr void __cordl_internal_set__stream(::System::Data::SqlTypes::SqlStreamChars* value);

  /// @brief Method .ctor, addr 0x41cf1a8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41cf1dc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method .ctor, addr 0x41cf22c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::SqlTypes::SqlString value);

  /// @brief Method get_Buffer, addr 0x41cf374, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_Buffer();

  /// @brief Method get_IsNull, addr 0x41cf364, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Length, addr 0x41cf4e8, size 0x6c, virtual false, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Null, addr 0x41cfa38, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlChars* get_Null();

  /// @brief Method get_Value, addr 0x41cf554, size 0x1d4, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlChars();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlChars", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlChars(SqlChars&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlChars", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlChars(SqlChars const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11502 };

  /// @brief Field _rgchBuf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____rgchBuf;

  /// @brief Field _lCurLen, offset: 0x18, size: 0x8, def value: None
  int64_t ____lCurLen;

  /// @brief Field _stream, offset: 0x20, size: 0x8, def value: None
  ::System::Data::SqlTypes::SqlStreamChars* ____stream;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::System::Data::SqlTypes::SqlBytesCharsState ____state;

  /// @brief Field _rgchWorkBuf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____rgchWorkBuf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlChars, ____rgchBuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlChars, ____lCurLen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlChars, ____stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlChars, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlChars, ____rgchWorkBuf) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlChars, 0x38>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlChars);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlChars*, "System.Data.SqlTypes", "SqlChars");

#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBytes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytesCharsState_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBytes)
namespace System::Data::SqlTypes {
struct SqlBinary;
}
namespace System::IO {
class Stream;
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
class SqlBytes;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlBytes);
// Dependencies System.Data.SqlTypes.INullable, System.Data.SqlTypes.SqlBytesCharsState, System.Object, System.Runtime.Serialization.ISerializable, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlBytes
class CORDL_TYPE SqlBytes : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Value)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  /// @brief Field _lCurLen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lCurLen, put = __cordl_internal_set__lCurLen)) int64_t _lCurLen;

  /// @brief Field _rgbBuf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rgbBuf, put = __cordl_internal_set__rgbBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _rgbBuf;

  /// @brief Field _rgbWorkBuf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rgbWorkBuf, put = __cordl_internal_set__rgbWorkBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _rgbWorkBuf;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::System::Data::SqlTypes::SqlBytesCharsState _state;

  /// @brief Field _stream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::IO::Stream* _stream;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method CopyStreamToBuffer, addr 0x41c10b4, size 0x148, virtual false, abstract: false, final false
  inline void CopyStreamToBuffer();

  /// @brief Method FStream, addr 0x41c10a4, size 0x10, virtual false, abstract: false, final false
  inline bool FStream();

  /// @brief Method GetXsdType, addr 0x41c17d0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  static inline ::System::Data::SqlTypes::SqlBytes* New_ctor();

  static inline ::System::Data::SqlTypes::SqlBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::System::Data::SqlTypes::SqlBytes* New_ctor(::System::Data::SqlTypes::SqlBinary value);

  /// @brief Method SetBuffer, addr 0x41c14a8, size 0x28, virtual false, abstract: false, final false
  inline void SetBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method SetNull, addr 0x41c0f74, size 0x10, virtual false, abstract: false, final false
  inline void SetNull();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x41c185c, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41c14d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41c14d8, size 0x1c4, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41c169c, size 0x134, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  constexpr int64_t const& __cordl_internal_get__lCurLen() const;

  constexpr int64_t& __cordl_internal_get__lCurLen();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__rgbBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__rgbBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__rgbWorkBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__rgbWorkBuf();

  constexpr ::System::Data::SqlTypes::SqlBytesCharsState const& __cordl_internal_get__state() const;

  constexpr ::System::Data::SqlTypes::SqlBytesCharsState& __cordl_internal_get__state();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr void __cordl_internal_set__lCurLen(int64_t value);

  constexpr void __cordl_internal_set__rgbBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__rgbWorkBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__state(::System::Data::SqlTypes::SqlBytesCharsState value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x41c0f50, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41c0f84, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x41c0fd4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::SqlTypes::SqlBinary value);

  /// @brief Method get_Buffer, addr 0x41c107c, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Buffer();

  /// @brief Method get_IsNull, addr 0x41c106c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Length, addr 0x41c11fc, size 0x6c, virtual false, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Null, addr 0x41c1894, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBytes* get_Null();

  /// @brief Method get_Value, addr 0x41c12a0, size 0x1e0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBytes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlBytes(SqlBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlBytes(SqlBytes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11501 };

  /// @brief Field _rgbBuf, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____rgbBuf;

  /// @brief Field _lCurLen, offset: 0x18, size: 0x8, def value: None
  int64_t ____lCurLen;

  /// @brief Field _stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::System::Data::SqlTypes::SqlBytesCharsState ____state;

  /// @brief Field _rgbWorkBuf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____rgbWorkBuf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlBytes, ____rgbBuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlBytes, ____lCurLen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlBytes, ____stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlBytes, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlBytes, ____rgbWorkBuf) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlBytes, 0x38>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlBytes);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBytes*, "System.Data.SqlTypes", "SqlBytes");

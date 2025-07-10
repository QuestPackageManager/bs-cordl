#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonReader)
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
namespace Newtonsoft::Json::Bson {
struct BsonReader_BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class BsonReader_ContainerContext;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTimeKind;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonReader_BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class BsonReader;
}
namespace Newtonsoft::Json::Bson {
class BsonReader_ContainerContext;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState);
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonReader);
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonReader_ContainerContext);
// Dependencies
namespace Newtonsoft::Json::Bson {
// Is value type: true
// CS Name: Newtonsoft.Json.Bson.BsonReader/BsonReaderState
struct CORDL_TYPE BsonReader_BsonReaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BsonReader_BsonReaderState_Unwrapped
  enum struct __BsonReader_BsonReaderState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_ReferenceStart = static_cast<int32_t>(0x1),
    __E_ReferenceRef = static_cast<int32_t>(0x2),
    __E_ReferenceId = static_cast<int32_t>(0x3),
    __E_CodeWScopeStart = static_cast<int32_t>(0x4),
    __E_CodeWScopeCode = static_cast<int32_t>(0x5),
    __E_CodeWScopeScope = static_cast<int32_t>(0x6),
    __E_CodeWScopeScopeObject = static_cast<int32_t>(0x7),
    __E_CodeWScopeScopeEnd = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BsonReader_BsonReaderState_Unwrapped() const noexcept {
    return static_cast<__BsonReader_BsonReaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonReader_BsonReaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BsonReader_BsonReaderState(int32_t value__) noexcept;

  /// @brief Field CodeWScopeCode value: I32(5)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const CodeWScopeCode;

  /// @brief Field CodeWScopeScope value: I32(6)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const CodeWScopeScope;

  /// @brief Field CodeWScopeScopeEnd value: I32(8)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const CodeWScopeScopeEnd;

  /// @brief Field CodeWScopeScopeObject value: I32(7)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const CodeWScopeScopeObject;

  /// @brief Field CodeWScopeStart value: I32(4)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const CodeWScopeStart;

  /// @brief Field Normal value: I32(0)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const Normal;

  /// @brief Field ReferenceId value: I32(3)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const ReferenceId;

  /// @brief Field ReferenceRef value: I32(2)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const ReferenceRef;

  /// @brief Field ReferenceStart value: I32(1)
  static ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const ReferenceStart;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10508 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonReader_BsonReaderState, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
// Dependencies Newtonsoft.Json.Bson.BsonType, System.Object
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonReader/ContainerContext
class CORDL_TYPE BsonReader_ContainerContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field Length, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Length, put = __cordl_internal_set_Length)) int32_t Length;

  /// @brief Field Position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) int32_t Position;

  /// @brief Field Type, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::Newtonsoft::Json::Bson::BsonType Type;

  static inline ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* New_ctor(::Newtonsoft::Json::Bson::BsonType type);

  constexpr int32_t const& __cordl_internal_get_Length() const;

  constexpr int32_t& __cordl_internal_get_Length();

  constexpr int32_t const& __cordl_internal_get_Position() const;

  constexpr int32_t& __cordl_internal_get_Position();

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get_Type() const;

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_Length(int32_t value);

  constexpr void __cordl_internal_set_Position(int32_t value);

  constexpr void __cordl_internal_set_Type(::Newtonsoft::Json::Bson::BsonType value);

  /// @brief Method .ctor, addr 0x3f51c74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Bson::BsonType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonReader_ContainerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonReader_ContainerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonReader_ContainerContext(BsonReader_ContainerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonReader_ContainerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonReader_ContainerContext(BsonReader_ContainerContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10509 };

  /// @brief Field Type, offset: 0x10, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ___Type;

  /// @brief Field Length, offset: 0x14, size: 0x4, def value: None
  int32_t ___Length;

  /// @brief Field Position, offset: 0x18, size: 0x4, def value: None
  int32_t ___Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader_ContainerContext, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader_ContainerContext, ___Length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader_ContainerContext, ___Position) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonReader_ContainerContext, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
// Dependencies Newtonsoft.Json.Bson.BsonReader::BsonReaderState, Newtonsoft.Json.Bson.BsonType, Newtonsoft.Json.JsonReader, System.DateTimeKind
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonReader
class CORDL_TYPE BsonReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  using BsonReaderState = ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState;

  using ContainerContext = ::Newtonsoft::Json::Bson::BsonReader_ContainerContext;

  __declspec(property(get = get_DateTimeKindHandling, put = set_DateTimeKindHandling)) ::System::DateTimeKind DateTimeKindHandling;

  __declspec(property(get = get_JsonNet35BinaryCompatibility, put = set_JsonNet35BinaryCompatibility)) bool JsonNet35BinaryCompatibility;

  __declspec(property(get = get_ReadRootValueAsArray, put = set_ReadRootValueAsArray)) bool ReadRootValueAsArray;

  /// @brief Field SeqRange1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SeqRange1, put = setStaticF_SeqRange1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange1;

  /// @brief Field SeqRange2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SeqRange2, put = setStaticF_SeqRange2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange2;

  /// @brief Field SeqRange3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SeqRange3, put = setStaticF_SeqRange3)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange3;

  /// @brief Field SeqRange4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SeqRange4, put = setStaticF_SeqRange4)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange4;

  /// @brief Field _bsonReaderState, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__bsonReaderState, put = __cordl_internal_set__bsonReaderState)) ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState _bsonReaderState;

  /// @brief Field _byteBuffer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__byteBuffer, put = __cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _charBuffer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__charBuffer, put = __cordl_internal_set__charBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _currentContext, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentContext, put = __cordl_internal_set__currentContext)) ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* _currentContext;

  /// @brief Field _currentElementType, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__currentElementType, put = __cordl_internal_set__currentElementType)) ::Newtonsoft::Json::Bson::BsonType _currentElementType;

  /// @brief Field _dateTimeKindHandling, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeKindHandling, put = __cordl_internal_set__dateTimeKindHandling)) ::System::DateTimeKind _dateTimeKindHandling;

  /// @brief Field _jsonNet35BinaryCompatibility, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__jsonNet35BinaryCompatibility, put = __cordl_internal_set__jsonNet35BinaryCompatibility)) bool _jsonNet35BinaryCompatibility;

  /// @brief Field _readRootValueAsArray, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__readRootValueAsArray, put = __cordl_internal_set__readRootValueAsArray)) bool _readRootValueAsArray;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::System::IO::BinaryReader* _reader;

  /// @brief Field _stack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* _stack;

  /// @brief Method BytesInSequence, addr 0x3f5284c, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t BytesInSequence(uint8_t b);

  /// @brief Method Close, addr 0x3f51bac, size 0x38, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EnsureBuffers, addr 0x3f524a8, size 0xac, virtual false, abstract: false, final false
  inline void EnsureBuffers();

  /// @brief Method GetLastFullCharStop, addr 0x3f52554, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetLastFullCharStop(int32_t start);

  /// @brief Method GetString, addr 0x3f525e0, size 0x26c, virtual false, abstract: false, final false
  inline ::StringW GetString(int32_t length);

  /// @brief Method MovePosition, addr 0x3f523bc, size 0x24, virtual false, abstract: false, final false
  inline void MovePosition(int32_t count);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::BinaryReader* reader);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::Stream* stream);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  /// @brief Method PopContext, addr 0x3f52318, size 0xa4, virtual false, abstract: false, final false
  inline void PopContext();

  /// @brief Method PushContext, addr 0x3f51c9c, size 0xa4, virtual false, abstract: false, final false
  inline void PushContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* newContext);

  /// @brief Method Read, addr 0x3f5147c, size 0x1a8, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadBinary, addr 0x3f52418, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBinary(::ByRef<::Newtonsoft::Json::Bson::BsonBinaryType> binaryType);

  /// @brief Method ReadByte, addr 0x3f522e4, size 0x34, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x3f51d40, size 0x38, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t count);

  /// @brief Method ReadCodeWScope, addr 0x3f519d0, size 0x1dc, virtual false, abstract: false, final false
  inline bool ReadCodeWScope();

  /// @brief Method ReadDouble, addr 0x3f523e0, size 0x38, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadElement, addr 0x3f511a8, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW ReadElement();

  /// @brief Method ReadInt32, addr 0x3f51be4, size 0x38, virtual false, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadInt64, addr 0x3f52470, size 0x38, virtual false, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadLengthString, addr 0x3f51c1c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW ReadLengthString();

  /// @brief Method ReadNormal, addr 0x3f51624, size 0x1f4, virtual false, abstract: false, final false
  inline bool ReadNormal();

  /// @brief Method ReadReference, addr 0x3f51818, size 0x1b8, virtual false, abstract: false, final false
  inline bool ReadReference();

  /// @brief Method ReadString, addr 0x3f511f8, size 0x284, virtual false, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadType, addr 0x3f511c4, size 0x34, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType ReadType();

  /// @brief Method ReadType, addr 0x3f51d78, size 0x56c, virtual false, abstract: false, final false
  inline void ReadType(::Newtonsoft::Json::Bson::BsonType type);

  constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const& __cordl_internal_get__bsonReaderState() const;

  constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState& __cordl_internal_get__bsonReaderState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__byteBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__charBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__charBuffer();

  constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* const& __cordl_internal_get__currentContext() const;

  constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext*& __cordl_internal_get__currentContext();

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get__currentElementType() const;

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get__currentElementType();

  constexpr ::System::DateTimeKind const& __cordl_internal_get__dateTimeKindHandling() const;

  constexpr ::System::DateTimeKind& __cordl_internal_get__dateTimeKindHandling();

  constexpr bool const& __cordl_internal_get__jsonNet35BinaryCompatibility() const;

  constexpr bool& __cordl_internal_get__jsonNet35BinaryCompatibility();

  constexpr bool const& __cordl_internal_get__readRootValueAsArray() const;

  constexpr bool& __cordl_internal_get__readRootValueAsArray();

  constexpr ::System::IO::BinaryReader* const& __cordl_internal_get__reader() const;

  constexpr ::System::IO::BinaryReader*& __cordl_internal_get__reader();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* const& __cordl_internal_get__stack() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>*& __cordl_internal_get__stack();

  constexpr void __cordl_internal_set__bsonReaderState(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState value);

  constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__currentContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* value);

  constexpr void __cordl_internal_set__currentElementType(::Newtonsoft::Json::Bson::BsonType value);

  constexpr void __cordl_internal_set__dateTimeKindHandling(::System::DateTimeKind value);

  constexpr void __cordl_internal_set__jsonNet35BinaryCompatibility(bool value);

  constexpr void __cordl_internal_set__readRootValueAsArray(bool value);

  constexpr void __cordl_internal_set__reader(::System::IO::BinaryReader* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* value);

  /// @brief Method .ctor, addr 0x3f510cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryReader* reader);

  /// @brief Method .ctor, addr 0x3f510d8, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  /// @brief Method .ctor, addr 0x3f50fc4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x3f50fd0, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange2();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange3();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange4();

  /// @brief Method get_DateTimeKindHandling, addr 0x3f50fb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_DateTimeKindHandling();

  /// @brief Method get_JsonNet35BinaryCompatibility, addr 0x3f50f8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_JsonNet35BinaryCompatibility();

  /// @brief Method get_ReadRootValueAsArray, addr 0x3f50fa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadRootValueAsArray();

  static inline void setStaticF_SeqRange1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SeqRange2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SeqRange3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SeqRange4(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_DateTimeKindHandling, addr 0x3f50fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_DateTimeKindHandling(::System::DateTimeKind value);

  /// @brief Method set_JsonNet35BinaryCompatibility, addr 0x3f50f94, size 0xc, virtual false, abstract: false, final false
  inline void set_JsonNet35BinaryCompatibility(bool value);

  /// @brief Method set_ReadRootValueAsArray, addr 0x3f50fa8, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadRootValueAsArray(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonReader(BsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonReader(BsonReader const&) = delete;

  /// @brief Field MaxCharBytesSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxCharBytesSize{ static_cast<int32_t>(0x80) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10510 };

  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::System::IO::BinaryReader* ____reader;

  /// @brief Field _stack, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* ____stack;

  /// @brief Field _byteBuffer, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteBuffer;

  /// @brief Field _charBuffer, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charBuffer;

  /// @brief Field _currentElementType, offset: 0x98, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ____currentElementType;

  /// @brief Field _bsonReaderState, offset: 0x9c, size: 0x4, def value: None
  ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState ____bsonReaderState;

  /// @brief Field _currentContext, offset: 0xa0, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* ____currentContext;

  /// @brief Field _readRootValueAsArray, offset: 0xa8, size: 0x1, def value: None
  bool ____readRootValueAsArray;

  /// @brief Field _jsonNet35BinaryCompatibility, offset: 0xa9, size: 0x1, def value: None
  bool ____jsonNet35BinaryCompatibility;

  /// @brief Field _dateTimeKindHandling, offset: 0xac, size: 0x4, def value: None
  ::System::DateTimeKind ____dateTimeKindHandling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____stack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____byteBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____charBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____currentElementType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____bsonReaderState) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____currentContext) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____readRootValueAsArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____jsonNet35BinaryCompatibility) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonReader, ____dateTimeKindHandling) == 0xac, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonReader, 0xb0>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState, "Newtonsoft.Json.Bson", "BsonReader/BsonReaderState");
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader*, "Newtonsoft.Json.Bson", "BsonReader");
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonReader_ContainerContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader_ContainerContext*, "Newtonsoft.Json.Bson", "BsonReader/ContainerContext");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonReader)
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace Newtonsoft::Json::Bson {
struct __BsonReader__BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class __BsonReader__ContainerContext;
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
struct __BsonReader__BsonReaderState;
}
namespace Newtonsoft::Json::Bson {
class BsonReader;
}
namespace Newtonsoft::Json::Bson {
class __BsonReader__ContainerContext;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState);
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonReader);
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext);
// Type: ::BsonReaderState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11969))
// CS Name: ::BsonReader::BsonReaderState
struct CORDL_TYPE __BsonReader__BsonReaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BsonReader__BsonReaderState_Unwrapped
  enum struct ____BsonReader__BsonReaderState_Unwrapped : int32_t {
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
  constexpr operator ____BsonReader__BsonReaderState_Unwrapped() const noexcept {
    return static_cast<____BsonReader__BsonReaderState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BsonReader__BsonReaderState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BsonReader__BsonReaderState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const Normal;

  /// @brief Field ReferenceStart value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const ReferenceStart;

  /// @brief Field ReferenceRef value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const ReferenceRef;

  /// @brief Field ReferenceId value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const ReferenceId;

  /// @brief Field CodeWScopeStart value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const CodeWScopeStart;

  /// @brief Field CodeWScopeCode value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const CodeWScopeCode;

  /// @brief Field CodeWScopeScope value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const CodeWScopeScope;

  /// @brief Field CodeWScopeScopeObject value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const CodeWScopeScopeObject;

  /// @brief Field CodeWScopeScopeEnd value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const CodeWScopeScopeEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
// Type: ::ContainerContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11980))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11970))
// CS Name: ::BsonReader::ContainerContext*
class CORDL_TYPE __BsonReader__ContainerContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field Type, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Field Length, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Length, put = __cordl_internal_set_Length)) int32_t Length;

  /// @brief Field Position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) int32_t Position;

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get_Type();

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get_Type() const;

  constexpr void __cordl_internal_set_Type(::Newtonsoft::Json::Bson::BsonType value);

  constexpr int32_t& __cordl_internal_get_Length();

  constexpr int32_t const& __cordl_internal_get_Length() const;

  constexpr void __cordl_internal_set_Length(int32_t value);

  constexpr int32_t& __cordl_internal_get_Position();

  constexpr int32_t const& __cordl_internal_get_Position() const;

  constexpr void __cordl_internal_set_Position(int32_t value);

  static inline ::Newtonsoft::Json::Bson::__BsonReader__ContainerContext* New_ctor(::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method .ctor, addr 0x26e9374, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Bson::BsonType type);

  // Ctor Parameters [CppParam { name: "", ty: "__BsonReader__ContainerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BsonReader__ContainerContext(__BsonReader__ContainerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BsonReader__ContainerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BsonReader__ContainerContext(__BsonReader__ContainerContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BsonReader__ContainerContext();

public:
  /// @brief Field Type, offset: 0x10, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ___Type;

  /// @brief Field Length, offset: 0x14, size: 0x4, def value: None
  int32_t ___Length;

  /// @brief Field Position, offset: 0x18, size: 0x4, def value: None
  int32_t ___Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext, ___Length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext, ___Position) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
// Type: Newtonsoft.Json.Bson::BsonReader
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2369)), TypeDefinitionIndex(TypeDefinitionIndex(11731)), TypeDefinitionIndex(TypeDefinitionIndex(11969)),
// TypeDefinitionIndex(TypeDefinitionIndex(11980))] Self: TypeDefinitionIndex(TypeDefinitionIndex(11971)) CS Name: ::Newtonsoft.Json.Bson::BsonReader*
class CORDL_TYPE BsonReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  using ContainerContext = ::Newtonsoft::Json::Bson::__BsonReader__ContainerContext;

  using BsonReaderState = ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::IO::BinaryReader* _reader;

  /// @brief Field _stack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*>* _stack;

  /// @brief Field _byteBuffer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__byteBuffer, put = __cordl_internal_set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _charBuffer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__charBuffer, put = __cordl_internal_set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _currentElementType, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__currentElementType, put = __cordl_internal_set__currentElementType))::Newtonsoft::Json::Bson::BsonType _currentElementType;

  /// @brief Field _bsonReaderState, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__bsonReaderState, put = __cordl_internal_set__bsonReaderState))::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState _bsonReaderState;

  /// @brief Field _currentContext, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentContext, put = __cordl_internal_set__currentContext))::Newtonsoft::Json::Bson::__BsonReader__ContainerContext* _currentContext;

  /// @brief Field _readRootValueAsArray, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__readRootValueAsArray, put = __cordl_internal_set__readRootValueAsArray)) bool _readRootValueAsArray;

  /// @brief Field _jsonNet35BinaryCompatibility, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__jsonNet35BinaryCompatibility, put = __cordl_internal_set__jsonNet35BinaryCompatibility)) bool _jsonNet35BinaryCompatibility;

  /// @brief Field _dateTimeKindHandling, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeKindHandling, put = __cordl_internal_set__dateTimeKindHandling))::System::DateTimeKind _dateTimeKindHandling;

  /// @brief Field SeqRange1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeqRange1, put = setStaticF_SeqRange1))::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange1;

  /// @brief Field SeqRange2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeqRange2, put = setStaticF_SeqRange2))::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange2;

  /// @brief Field SeqRange3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeqRange3, put = setStaticF_SeqRange3))::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange3;

  /// @brief Field SeqRange4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SeqRange4, put = setStaticF_SeqRange4))::ArrayW<uint8_t, ::Array<uint8_t>*> SeqRange4;

  __declspec(property(get = get_JsonNet35BinaryCompatibility, put = set_JsonNet35BinaryCompatibility)) bool JsonNet35BinaryCompatibility;

  __declspec(property(get = get_ReadRootValueAsArray, put = set_ReadRootValueAsArray)) bool ReadRootValueAsArray;

  __declspec(property(get = get_DateTimeKindHandling, put = set_DateTimeKindHandling))::System::DateTimeKind DateTimeKindHandling;

  constexpr ::System::IO::BinaryReader*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> const& __cordl_internal_get__reader() const;

  constexpr void __cordl_internal_set__reader(::System::IO::BinaryReader* value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*>*> const& __cordl_internal_get__stack() const;

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*>* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

  constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__charBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__charBuffer() const;

  constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get__currentElementType();

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get__currentElementType() const;

  constexpr void __cordl_internal_set__currentElementType(::Newtonsoft::Json::Bson::BsonType value);

  constexpr ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState& __cordl_internal_get__bsonReaderState();

  constexpr ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState const& __cordl_internal_get__bsonReaderState() const;

  constexpr void __cordl_internal_set__bsonReaderState(::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState value);

  constexpr ::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*& __cordl_internal_get__currentContext();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*> const& __cordl_internal_get__currentContext() const;

  constexpr void __cordl_internal_set__currentContext(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext* value);

  constexpr bool& __cordl_internal_get__readRootValueAsArray();

  constexpr bool const& __cordl_internal_get__readRootValueAsArray() const;

  constexpr void __cordl_internal_set__readRootValueAsArray(bool value);

  constexpr bool& __cordl_internal_get__jsonNet35BinaryCompatibility();

  constexpr bool const& __cordl_internal_get__jsonNet35BinaryCompatibility() const;

  constexpr void __cordl_internal_set__jsonNet35BinaryCompatibility(bool value);

  constexpr ::System::DateTimeKind& __cordl_internal_get__dateTimeKindHandling();

  constexpr ::System::DateTimeKind const& __cordl_internal_get__dateTimeKindHandling() const;

  constexpr void __cordl_internal_set__dateTimeKindHandling(::System::DateTimeKind value);

  static inline void setStaticF_SeqRange1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange1();

  static inline void setStaticF_SeqRange2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange2();

  static inline void setStaticF_SeqRange3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange3();

  static inline void setStaticF_SeqRange4(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SeqRange4();

  /// @brief Method get_JsonNet35BinaryCompatibility, addr 0x26e8694, size 0x8, virtual false, abstract: false, final false
  inline bool get_JsonNet35BinaryCompatibility();

  /// @brief Method set_JsonNet35BinaryCompatibility, addr 0x26e869c, size 0xc, virtual false, abstract: false, final false
  inline void set_JsonNet35BinaryCompatibility(bool value);

  /// @brief Method get_ReadRootValueAsArray, addr 0x26e86a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadRootValueAsArray();

  /// @brief Method set_ReadRootValueAsArray, addr 0x26e86b0, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadRootValueAsArray(bool value);

  /// @brief Method get_DateTimeKindHandling, addr 0x26e86bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_DateTimeKindHandling();

  /// @brief Method set_DateTimeKindHandling, addr 0x26e86c4, size 0x8, virtual false, abstract: false, final false
  inline void set_DateTimeKindHandling(::System::DateTimeKind value);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x26e86cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::BinaryReader* reader);

  /// @brief Method .ctor, addr 0x26e87d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryReader* reader);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  /// @brief Method .ctor, addr 0x26e86d8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  static inline ::Newtonsoft::Json::Bson::BsonReader* New_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  /// @brief Method .ctor, addr 0x26e87e4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling);

  /// @brief Method ReadElement, addr 0x26e88b4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW ReadElement();

  /// @brief Method Read, addr 0x26e8b74, size 0x1a8, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method Close, addr 0x26e92ac, size 0x38, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method ReadCodeWScope, addr 0x26e90cc, size 0x1e0, virtual false, abstract: false, final false
  inline bool ReadCodeWScope();

  /// @brief Method ReadReference, addr 0x26e8f10, size 0x1bc, virtual false, abstract: false, final false
  inline bool ReadReference();

  /// @brief Method ReadNormal, addr 0x26e8d1c, size 0x1f4, virtual false, abstract: false, final false
  inline bool ReadNormal();

  /// @brief Method PopContext, addr 0x26e99e4, size 0xa4, virtual false, abstract: false, final false
  inline void PopContext();

  /// @brief Method PushContext, addr 0x26e939c, size 0xa8, virtual false, abstract: false, final false
  inline void PushContext(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext* newContext);

  /// @brief Method ReadByte, addr 0x26e99b0, size 0x34, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadType, addr 0x26e947c, size 0x534, virtual false, abstract: false, final false
  inline void ReadType(::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method ReadBinary, addr 0x26e9ae4, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBinary(ByRef<::Newtonsoft::Json::Bson::BsonBinaryType> binaryType);

  /// @brief Method ReadString, addr 0x26e8904, size 0x270, virtual false, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadLengthString, addr 0x26e931c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW ReadLengthString();

  /// @brief Method GetString, addr 0x26e9ca4, size 0x274, virtual false, abstract: false, final false
  inline ::StringW GetString(int32_t length);

  /// @brief Method GetLastFullCharStop, addr 0x26e9c20, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetLastFullCharStop(int32_t start);

  /// @brief Method BytesInSequence, addr 0x26e9f18, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t BytesInSequence(uint8_t b);

  /// @brief Method EnsureBuffers, addr 0x26e9b74, size 0xac, virtual false, abstract: false, final false
  inline void EnsureBuffers();

  /// @brief Method ReadDouble, addr 0x26e9aac, size 0x38, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadInt32, addr 0x26e92e4, size 0x38, virtual false, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadInt64, addr 0x26e9b3c, size 0x38, virtual false, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadType, addr 0x26e88d0, size 0x34, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType ReadType();

  /// @brief Method MovePosition, addr 0x26e9a88, size 0x24, virtual false, abstract: false, final false
  inline void MovePosition(int32_t count);

  /// @brief Method ReadBytes, addr 0x26e9444, size 0x38, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonReader(BsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonReader(BsonReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonReader();

public:
  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::System::IO::BinaryReader* ____reader;

  /// @brief Field _stack, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*>* ____stack;

  /// @brief Field _byteBuffer, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteBuffer;

  /// @brief Field _charBuffer, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charBuffer;

  /// @brief Field _currentElementType, offset: 0x98, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ____currentElementType;

  /// @brief Field _bsonReaderState, offset: 0x9c, size: 0x4, def value: None
  ::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState ____bsonReaderState;

  /// @brief Field _currentContext, offset: 0xa0, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::__BsonReader__ContainerContext* ____currentContext;

  /// @brief Field _readRootValueAsArray, offset: 0xa8, size: 0x1, def value: None
  bool ____readRootValueAsArray;

  /// @brief Field _jsonNet35BinaryCompatibility, offset: 0xa9, size: 0x1, def value: None
  bool ____jsonNet35BinaryCompatibility;

  /// @brief Field _dateTimeKindHandling, offset: 0xac, size: 0x4, def value: None
  ::System::DateTimeKind ____dateTimeKindHandling;

  /// @brief Field MaxCharBytesSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxCharBytesSize{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonReader, 0xb0>, "Size mismatch!");

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

} // namespace Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::__BsonReader__BsonReaderState, "Newtonsoft.Json.Bson", "BsonReader/BsonReaderState");
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonReader*, "Newtonsoft.Json.Bson", "BsonReader");
NEED_NO_BOX(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::__BsonReader__ContainerContext*, "Newtonsoft.Json.Bson", "BsonReader/ContainerContext");

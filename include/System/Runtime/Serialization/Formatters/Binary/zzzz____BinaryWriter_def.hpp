#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(__BinaryWriter)
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
namespace System {
struct Decimal;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodReturn;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssembly;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter);
// Type: System.Runtime.Serialization.Formatters.Binary::__BinaryWriter
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3278))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::__BinaryWriter*
class CORDL_TYPE __BinaryWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field sout, offset 0x10, size 0x8
  __declspec(property(get = __get_sout, put = __set_sout))::System::IO::Stream* sout;

  /// @brief Field formatterTypeStyle, offset 0x18, size 0x4
  __declspec(property(get = __get_formatterTypeStyle, put = __set_formatterTypeStyle))::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;

  /// @brief Field objectMapTable, offset 0x20, size 0x8
  __declspec(property(get = __get_objectMapTable, put = __set_objectMapTable))::System::Collections::Hashtable* objectMapTable;

  /// @brief Field objectWriter, offset 0x28, size 0x8
  __declspec(property(get = __get_objectWriter, put = __set_objectWriter))::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;

  /// @brief Field dataWriter, offset 0x30, size 0x8
  __declspec(property(get = __get_dataWriter, put = __set_dataWriter))::System::IO::BinaryWriter* dataWriter;

  /// @brief Field m_nestedObjectCount, offset 0x38, size 0x4
  __declspec(property(get = __get_m_nestedObjectCount, put = __set_m_nestedObjectCount)) int32_t m_nestedObjectCount;

  /// @brief Field nullCount, offset 0x3c, size 0x4
  __declspec(property(get = __get_nullCount, put = __set_nullCount)) int32_t nullCount;

  /// @brief Field binaryMethodCall, offset 0x40, size 0x8
  __declspec(property(get = __get_binaryMethodCall, put = __set_binaryMethodCall))::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;

  /// @brief Field binaryMethodReturn, offset 0x48, size 0x8
  __declspec(property(get = __get_binaryMethodReturn, put = __set_binaryMethodReturn))::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;

  /// @brief Field binaryObject, offset 0x50, size 0x8
  __declspec(property(get = __get_binaryObject, put = __set_binaryObject))::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;

  /// @brief Field binaryObjectWithMap, offset 0x58, size 0x8
  __declspec(property(get = __get_binaryObjectWithMap, put = __set_binaryObjectWithMap))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;

  /// @brief Field binaryObjectWithMapTyped, offset 0x60, size 0x8
  __declspec(property(get = __get_binaryObjectWithMapTyped,
                      put = __set_binaryObjectWithMapTyped))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;

  /// @brief Field binaryObjectString, offset 0x68, size 0x8
  __declspec(property(get = __get_binaryObjectString, put = __set_binaryObjectString))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;

  /// @brief Field binaryArray, offset 0x70, size 0x8
  __declspec(property(get = __get_binaryArray, put = __set_binaryArray))::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;

  /// @brief Field byteBuffer, offset 0x78, size 0x8
  __declspec(property(get = __get_byteBuffer, put = __set_byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field chunkSize, offset 0x80, size 0x4
  __declspec(property(get = __get_chunkSize, put = __set_chunkSize)) int32_t chunkSize;

  /// @brief Field memberPrimitiveUnTyped, offset 0x88, size 0x8
  __declspec(property(get = __get_memberPrimitiveUnTyped, put = __set_memberPrimitiveUnTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;

  /// @brief Field memberPrimitiveTyped, offset 0x90, size 0x8
  __declspec(property(get = __get_memberPrimitiveTyped, put = __set_memberPrimitiveTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;

  /// @brief Field objectNull, offset 0x98, size 0x8
  __declspec(property(get = __get_objectNull, put = __set_objectNull))::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;

  /// @brief Field memberReference, offset 0xa0, size 0x8
  __declspec(property(get = __get_memberReference, put = __set_memberReference))::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;

  /// @brief Field binaryAssembly, offset 0xa8, size 0x8
  __declspec(property(get = __get_binaryAssembly, put = __set_binaryAssembly))::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;

  constexpr ::System::IO::Stream*& __get_sout();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_sout() const;

  constexpr void __set_sout(::System::IO::Stream* value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __get_formatterTypeStyle();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __get_formatterTypeStyle() const;

  constexpr void __set_formatterTypeStyle(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  constexpr ::System::Collections::Hashtable*& __get_objectMapTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_objectMapTable() const;

  constexpr void __set_objectMapTable(::System::Collections::Hashtable* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*& __get_objectWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*> const& __get_objectWriter() const;

  constexpr void __set_objectWriter(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* value);

  constexpr ::System::IO::BinaryWriter*& __get_dataWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryWriter*> const& __get_dataWriter() const;

  constexpr void __set_dataWriter(::System::IO::BinaryWriter* value);

  constexpr int32_t& __get_m_nestedObjectCount();

  constexpr int32_t const& __get_m_nestedObjectCount() const;

  constexpr void __set_m_nestedObjectCount(int32_t value);

  constexpr int32_t& __get_nullCount();

  constexpr int32_t const& __get_nullCount() const;

  constexpr void __set_nullCount(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*& __get_binaryMethodCall();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*> const& __get_binaryMethodCall() const;

  constexpr void __set_binaryMethodCall(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*& __get_binaryMethodReturn();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*> const& __get_binaryMethodReturn() const;

  constexpr void __set_binaryMethodReturn(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& __get_binaryObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObject*> const& __get_binaryObject() const;

  constexpr void __set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& __get_binaryObjectWithMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*> const& __get_binaryObjectWithMap() const;

  constexpr void __set_binaryObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& __get_binaryObjectWithMapTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*> const& __get_binaryObjectWithMapTyped() const;

  constexpr void __set_binaryObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& __get_binaryObjectString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*> const& __get_binaryObjectString() const;

  constexpr void __set_binaryObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray*& __get_binaryArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*> const& __get_binaryArray() const;

  constexpr void __set_binaryArray(::System::Runtime::Serialization::Formatters::Binary::BinaryArray* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_byteBuffer() const;

  constexpr void __set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_chunkSize();

  constexpr int32_t const& __get_chunkSize() const;

  constexpr void __set_chunkSize(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*& __get_memberPrimitiveUnTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*> const& __get_memberPrimitiveUnTyped() const;

  constexpr void __set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& __get_memberPrimitiveTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*> const& __get_memberPrimitiveTyped() const;

  constexpr void __set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& __get_objectNull();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectNull*> const& __get_objectNull() const;

  constexpr void __set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& __get_memberReference();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberReference*> const& __get_memberReference() const;

  constexpr void __set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*& __get_binaryAssembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*> const& __get_binaryAssembly() const;

  constexpr void __set_binaryAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* New_ctor(::System::IO::Stream* sout,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                               ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

  /// @brief Method .ctor addr 0x236d7e0 size 0xb8 virtual false final false
  inline void _ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

  /// @brief Method WriteBegin addr 0x236db80 size 0x4 virtual false final false
  inline void WriteBegin();

  /// @brief Method WriteEnd addr 0x236db84 size 0x20 virtual false final false
  inline void WriteEnd();

  /// @brief Method WriteBoolean addr 0x236dba4 size 0x24 virtual false final false
  inline void WriteBoolean(bool value);

  /// @brief Method WriteByte addr 0x2367f0c size 0x20 virtual false final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteBytes addr 0x236dbc8 size 0x20 virtual false final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteBytes addr 0x236dbe8 size 0x20 virtual false final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size);

  /// @brief Method WriteChar addr 0x236dc08 size 0x24 virtual false final false
  inline void WriteChar(char16_t value);

  /// @brief Method WriteChars addr 0x236dc2c size 0x24 virtual false final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method WriteDecimal addr 0x236dc50 size 0xc0 virtual false final false
  inline void WriteDecimal(::System::Decimal value);

  /// @brief Method WriteSingle addr 0x236dd10 size 0x24 virtual false final false
  inline void WriteSingle(float_t value);

  /// @brief Method WriteDouble addr 0x236dd34 size 0x24 virtual false final false
  inline void WriteDouble(double_t value);

  /// @brief Method WriteInt16 addr 0x236dd58 size 0x24 virtual false final false
  inline void WriteInt16(int16_t value);

  /// @brief Method WriteInt32 addr 0x2367f50 size 0x24 virtual false final false
  inline void WriteInt32(int32_t value);

  /// @brief Method WriteInt64 addr 0x236dd7c size 0x24 virtual false final false
  inline void WriteInt64(int64_t value);

  /// @brief Method WriteSByte addr 0x236dda0 size 0x20 virtual false final false
  inline void WriteSByte(int8_t value);

  /// @brief Method WriteString addr 0x2367f2c size 0x24 virtual false final false
  inline void WriteString(::StringW value);

  /// @brief Method WriteTimeSpan addr 0x236ddc0 size 0x24 virtual false final false
  inline void WriteTimeSpan(::System::TimeSpan value);

  /// @brief Method WriteDateTime addr 0x236dde4 size 0x24 virtual false final false
  inline void WriteDateTime(::System::DateTime value);

  /// @brief Method WriteUInt16 addr 0x236de08 size 0x24 virtual false final false
  inline void WriteUInt16(uint16_t value);

  /// @brief Method WriteUInt32 addr 0x236de2c size 0x24 virtual false final false
  inline void WriteUInt32(uint32_t value);

  /// @brief Method WriteUInt64 addr 0x236de50 size 0x24 virtual false final false
  inline void WriteUInt64(uint64_t value);

  /// @brief Method WriteObjectEnd addr 0x236de74 size 0x4 virtual false final false
  inline void WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteSerializationHeaderEnd addr 0x236de78 size 0x5c virtual false final false
  inline void WriteSerializationHeaderEnd();

  /// @brief Method WriteSerializationHeader addr 0x236ded4 size 0x98 virtual false final false
  inline void WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion);

  /// @brief Method WriteMethodCall addr 0x236df6c size 0x80 virtual false final false
  inline void WriteMethodCall();

  /// @brief Method WriteMethodReturn addr 0x236dfec size 0x80 virtual false final false
  inline void WriteMethodReturn();

  /// @brief Method WriteObject addr 0x236e06c size 0x4a8 virtual false final false
  inline void
  WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers,
              ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
              ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos);

  /// @brief Method WriteObjectString addr 0x236e720 size 0x90 virtual false final false
  inline void WriteObjectString(int32_t objectId, ::StringW value);

  /// @brief Method WriteSingleArray addr 0x236e7b0 size 0x2fc virtual false final false
  inline void WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound, ::System::Array* array);

  /// @brief Method WriteArrayAsBytes addr 0x236eaac size 0x22c virtual false final false
  inline void WriteArrayAsBytes(::System::Array* array, int32_t typeLength);

  /// @brief Method WriteJaggedArray addr 0x236ecd8 size 0x190 virtual false final false
  inline void WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound);

  /// @brief Method WriteRectangleArray addr 0x236ee68 size 0x158 virtual false final false
  inline void WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> lengthA,
                                  ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA);

  /// @brief Method WriteObjectByteArray addr 0x236efc0 size 0x60 virtual false final false
  inline void WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound,
                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> byteA);

  /// @brief Method WriteMember addr 0x236f020 size 0x108 virtual false final false
  inline void WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                          ::System::Object* value);

  /// @brief Method WriteNullMember addr 0x236f128 size 0xa0 virtual false final false
  inline void WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteMemberObjectRef addr 0x236f1c8 size 0x94 virtual false final false
  inline void WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef);

  /// @brief Method WriteMemberNested addr 0x236f25c size 0x1c virtual false final false
  inline void WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);

  /// @brief Method WriteMemberString addr 0x236f278 size 0x48 virtual false final false
  inline void WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                ::StringW value);

  /// @brief Method WriteItem addr 0x236f2c0 size 0x40 virtual false final false
  inline void WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                        ::System::Object* value);

  /// @brief Method WriteNullItem addr 0x236f300 size 0x10 virtual false final false
  inline void WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteDelayedNullItem addr 0x236f310 size 0x10 virtual false final false
  inline void WriteDelayedNullItem();

  /// @brief Method WriteItemEnd addr 0x236f320 size 0x4 virtual false final false
  inline void WriteItemEnd();

  /// @brief Method InternalWriteItemNull addr 0x236e514 size 0x90 virtual false final false
  inline void InternalWriteItemNull();

  /// @brief Method WriteItemObjectRef addr 0x236f324 size 0x30 virtual false final false
  inline void WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef);

  /// @brief Method WriteAssembly addr 0x236f354 size 0xd4 virtual false final false
  inline void WriteAssembly(::System::Type* type, ::StringW assemblyString, int32_t assemId, bool isNew);

  /// @brief Method WriteValue addr 0x236880c size 0x664 virtual false final false
  inline void WriteValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryWriter(__BinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryWriter(__BinaryWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryWriter();

public:
  /// @brief Field sout, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___sout;

  /// @brief Field formatterTypeStyle, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle ___formatterTypeStyle;

  /// @brief Field objectMapTable, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___objectMapTable;

  /// @brief Field objectWriter, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* ___objectWriter;

  /// @brief Field dataWriter, offset: 0x30, size: 0x8, def value: None
  ::System::IO::BinaryWriter* ___dataWriter;

  /// @brief Field m_nestedObjectCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_nestedObjectCount;

  /// @brief Field nullCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___nullCount;

  /// @brief Field binaryMethodCall, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* ___binaryMethodCall;

  /// @brief Field binaryMethodReturn, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* ___binaryMethodReturn;

  /// @brief Field binaryObject, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* ___binaryObject;

  /// @brief Field binaryObjectWithMap, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* ___binaryObjectWithMap;

  /// @brief Field binaryObjectWithMapTyped, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* ___binaryObjectWithMapTyped;

  /// @brief Field binaryObjectString, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* ___binaryObjectString;

  /// @brief Field binaryArray, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* ___binaryArray;

  /// @brief Field byteBuffer, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuffer;

  /// @brief Field chunkSize, offset: 0x80, size: 0x4, def value: None
  int32_t ___chunkSize;

  /// @brief Field memberPrimitiveUnTyped, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* ___memberPrimitiveUnTyped;

  /// @brief Field memberPrimitiveTyped, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* ___memberPrimitiveTyped;

  /// @brief Field objectNull, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* ___objectNull;

  /// @brief Field memberReference, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberReference* ___memberReference;

  /// @brief Field binaryAssembly, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* ___binaryAssembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, 0xb0>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___sout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___formatterTypeStyle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___objectMapTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___objectWriter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___dataWriter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___m_nestedObjectCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___nullCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryMethodCall) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryMethodReturn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryObjectWithMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryObjectWithMapTyped) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryObjectString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryArray) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___byteBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___chunkSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___memberPrimitiveUnTyped) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___memberPrimitiveTyped) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___objectNull) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___memberReference) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, ___binaryAssembly) == 0xa8, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");

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
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodReturn;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3240))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3279))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::__BinaryWriter*
class CORDL_TYPE __BinaryWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field sout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sout, put = __cordl_internal_set_sout))::System::IO::Stream* sout;

  /// @brief Field formatterTypeStyle, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_formatterTypeStyle, put = __cordl_internal_set_formatterTypeStyle))::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;

  /// @brief Field objectMapTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectMapTable, put = __cordl_internal_set_objectMapTable))::System::Collections::Hashtable* objectMapTable;

  /// @brief Field objectWriter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectWriter, put = __cordl_internal_set_objectWriter))::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;

  /// @brief Field dataWriter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dataWriter, put = __cordl_internal_set_dataWriter))::System::IO::BinaryWriter* dataWriter;

  /// @brief Field m_nestedObjectCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nestedObjectCount, put = __cordl_internal_set_m_nestedObjectCount)) int32_t m_nestedObjectCount;

  /// @brief Field nullCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_nullCount, put = __cordl_internal_set_nullCount)) int32_t nullCount;

  /// @brief Field binaryMethodCall, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryMethodCall,
                      put = __cordl_internal_set_binaryMethodCall))::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;

  /// @brief Field binaryMethodReturn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryMethodReturn,
                      put = __cordl_internal_set_binaryMethodReturn))::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;

  /// @brief Field binaryObject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObject, put = __cordl_internal_set_binaryObject))::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;

  /// @brief Field binaryObjectWithMap, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectWithMap,
                      put = __cordl_internal_set_binaryObjectWithMap))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;

  /// @brief Field binaryObjectWithMapTyped, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectWithMapTyped,
                      put = __cordl_internal_set_binaryObjectWithMapTyped))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;

  /// @brief Field binaryObjectString, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectString,
                      put = __cordl_internal_set_binaryObjectString))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;

  /// @brief Field binaryArray, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryArray, put = __cordl_internal_set_binaryArray))::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;

  /// @brief Field byteBuffer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuffer, put = __cordl_internal_set_byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field chunkSize, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field memberPrimitiveUnTyped, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveUnTyped,
                      put = __cordl_internal_set_memberPrimitiveUnTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;

  /// @brief Field memberPrimitiveTyped, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveTyped,
                      put = __cordl_internal_set_memberPrimitiveTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;

  /// @brief Field objectNull, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_objectNull, put = __cordl_internal_set_objectNull))::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;

  /// @brief Field memberReference, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_memberReference, put = __cordl_internal_set_memberReference))::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;

  /// @brief Field binaryAssembly, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryAssembly, put = __cordl_internal_set_binaryAssembly))::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;

  constexpr ::System::IO::Stream*& __cordl_internal_get_sout();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_sout() const;

  constexpr void __cordl_internal_set_sout(::System::IO::Stream* value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __cordl_internal_get_formatterTypeStyle();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __cordl_internal_get_formatterTypeStyle() const;

  constexpr void __cordl_internal_set_formatterTypeStyle(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_objectMapTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_objectMapTable() const;

  constexpr void __cordl_internal_set_objectMapTable(::System::Collections::Hashtable* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*& __cordl_internal_get_objectWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*> const& __cordl_internal_get_objectWriter() const;

  constexpr void __cordl_internal_set_objectWriter(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* value);

  constexpr ::System::IO::BinaryWriter*& __cordl_internal_get_dataWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryWriter*> const& __cordl_internal_get_dataWriter() const;

  constexpr void __cordl_internal_set_dataWriter(::System::IO::BinaryWriter* value);

  constexpr int32_t& __cordl_internal_get_m_nestedObjectCount();

  constexpr int32_t const& __cordl_internal_get_m_nestedObjectCount() const;

  constexpr void __cordl_internal_set_m_nestedObjectCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_nullCount();

  constexpr int32_t const& __cordl_internal_get_nullCount() const;

  constexpr void __cordl_internal_set_nullCount(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*& __cordl_internal_get_binaryMethodCall();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*> const& __cordl_internal_get_binaryMethodCall() const;

  constexpr void __cordl_internal_set_binaryMethodCall(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*& __cordl_internal_get_binaryMethodReturn();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*> const& __cordl_internal_get_binaryMethodReturn() const;

  constexpr void __cordl_internal_set_binaryMethodReturn(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& __cordl_internal_get_binaryObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObject*> const& __cordl_internal_get_binaryObject() const;

  constexpr void __cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& __cordl_internal_get_binaryObjectWithMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*> const& __cordl_internal_get_binaryObjectWithMap() const;

  constexpr void __cordl_internal_set_binaryObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& __cordl_internal_get_binaryObjectWithMapTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*> const& __cordl_internal_get_binaryObjectWithMapTyped() const;

  constexpr void __cordl_internal_set_binaryObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& __cordl_internal_get_binaryObjectString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*> const& __cordl_internal_get_binaryObjectString() const;

  constexpr void __cordl_internal_set_binaryObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray*& __cordl_internal_get_binaryArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryArray*> const& __cordl_internal_get_binaryArray() const;

  constexpr void __cordl_internal_set_binaryArray(::System::Runtime::Serialization::Formatters::Binary::BinaryArray* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuffer() const;

  constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*& __cordl_internal_get_memberPrimitiveUnTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*> const& __cordl_internal_get_memberPrimitiveUnTyped() const;

  constexpr void __cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& __cordl_internal_get_memberPrimitiveTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*> const& __cordl_internal_get_memberPrimitiveTyped() const;

  constexpr void __cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& __cordl_internal_get_objectNull();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectNull*> const& __cordl_internal_get_objectNull() const;

  constexpr void __cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& __cordl_internal_get_memberReference();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberReference*> const& __cordl_internal_get_memberReference() const;

  constexpr void __cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*& __cordl_internal_get_binaryAssembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*> const& __cordl_internal_get_binaryAssembly() const;

  constexpr void __cordl_internal_set_binaryAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* New_ctor(::System::IO::Stream* sout,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                               ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

  /// @brief Method .ctor, addr 0x24e7348, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

  /// @brief Method WriteBegin, addr 0x24e76e8, size 0x4, virtual false, abstract: false, final false
  inline void WriteBegin();

  /// @brief Method WriteEnd, addr 0x24e76ec, size 0x20, virtual false, abstract: false, final false
  inline void WriteEnd();

  /// @brief Method WriteBoolean, addr 0x24e770c, size 0x24, virtual false, abstract: false, final false
  inline void WriteBoolean(bool value);

  /// @brief Method WriteByte, addr 0x24e1a74, size 0x20, virtual false, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteBytes, addr 0x24e7730, size 0x24, virtual false, abstract: false, final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteBytes, addr 0x24e7754, size 0x24, virtual false, abstract: false, final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size);

  /// @brief Method WriteChar, addr 0x24e7778, size 0x24, virtual false, abstract: false, final false
  inline void WriteChar(char16_t value);

  /// @brief Method WriteChars, addr 0x24e779c, size 0x24, virtual false, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method WriteDecimal, addr 0x24e77c0, size 0xc0, virtual false, abstract: false, final false
  inline void WriteDecimal(::System::Decimal value);

  /// @brief Method WriteSingle, addr 0x24e7880, size 0x24, virtual false, abstract: false, final false
  inline void WriteSingle(float_t value);

  /// @brief Method WriteDouble, addr 0x24e78a4, size 0x24, virtual false, abstract: false, final false
  inline void WriteDouble(double_t value);

  /// @brief Method WriteInt16, addr 0x24e78c8, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt16(int16_t value);

  /// @brief Method WriteInt32, addr 0x24e1ab8, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt32(int32_t value);

  /// @brief Method WriteInt64, addr 0x24e78ec, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt64(int64_t value);

  /// @brief Method WriteSByte, addr 0x24e7910, size 0x20, virtual false, abstract: false, final false
  inline void WriteSByte(int8_t value);

  /// @brief Method WriteString, addr 0x24e1a94, size 0x24, virtual false, abstract: false, final false
  inline void WriteString(::StringW value);

  /// @brief Method WriteTimeSpan, addr 0x24e7930, size 0x24, virtual false, abstract: false, final false
  inline void WriteTimeSpan(::System::TimeSpan value);

  /// @brief Method WriteDateTime, addr 0x24e7954, size 0x24, virtual false, abstract: false, final false
  inline void WriteDateTime(::System::DateTime value);

  /// @brief Method WriteUInt16, addr 0x24e7978, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt16(uint16_t value);

  /// @brief Method WriteUInt32, addr 0x24e799c, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt32(uint32_t value);

  /// @brief Method WriteUInt64, addr 0x24e79c0, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt64(uint64_t value);

  /// @brief Method WriteObjectEnd, addr 0x24e79e4, size 0x4, virtual false, abstract: false, final false
  inline void WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteSerializationHeaderEnd, addr 0x24e79e8, size 0x5c, virtual false, abstract: false, final false
  inline void WriteSerializationHeaderEnd();

  /// @brief Method WriteSerializationHeader, addr 0x24e7a44, size 0x98, virtual false, abstract: false, final false
  inline void WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion);

  /// @brief Method WriteMethodCall, addr 0x24e7adc, size 0x80, virtual false, abstract: false, final false
  inline void WriteMethodCall();

  /// @brief Method WriteMethodReturn, addr 0x24e7b5c, size 0x80, virtual false, abstract: false, final false
  inline void WriteMethodReturn();

  /// @brief Method WriteObject, addr 0x24e7bdc, size 0x4a8, virtual false, abstract: false, final false
  inline void
  WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers,
              ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
              ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos);

  /// @brief Method WriteObjectString, addr 0x24e8290, size 0x90, virtual false, abstract: false, final false
  inline void WriteObjectString(int32_t objectId, ::StringW value);

  /// @brief Method WriteSingleArray, addr 0x24e8320, size 0x300, virtual false, abstract: false, final false
  inline void WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound, ::System::Array* array);

  /// @brief Method WriteArrayAsBytes, addr 0x24e8620, size 0x230, virtual false, abstract: false, final false
  inline void WriteArrayAsBytes(::System::Array* array, int32_t typeLength);

  /// @brief Method WriteJaggedArray, addr 0x24e8850, size 0x190, virtual false, abstract: false, final false
  inline void WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound);

  /// @brief Method WriteRectangleArray, addr 0x24e89e0, size 0x158, virtual false, abstract: false, final false
  inline void WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> lengthA,
                                  ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA);

  /// @brief Method WriteObjectByteArray, addr 0x24e8b38, size 0x60, virtual false, abstract: false, final false
  inline void WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound,
                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> byteA);

  /// @brief Method WriteMember, addr 0x24e8b98, size 0x108, virtual false, abstract: false, final false
  inline void WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                          ::System::Object* value);

  /// @brief Method WriteNullMember, addr 0x24e8ca0, size 0xa0, virtual false, abstract: false, final false
  inline void WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteMemberObjectRef, addr 0x24e8d40, size 0x94, virtual false, abstract: false, final false
  inline void WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef);

  /// @brief Method WriteMemberNested, addr 0x24e8dd4, size 0x1c, virtual false, abstract: false, final false
  inline void WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);

  /// @brief Method WriteMemberString, addr 0x24e8df0, size 0x48, virtual false, abstract: false, final false
  inline void WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                ::StringW value);

  /// @brief Method WriteItem, addr 0x24e8e38, size 0x40, virtual false, abstract: false, final false
  inline void WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                        ::System::Object* value);

  /// @brief Method WriteNullItem, addr 0x24e8e78, size 0x10, virtual false, abstract: false, final false
  inline void WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteDelayedNullItem, addr 0x24e8e88, size 0x10, virtual false, abstract: false, final false
  inline void WriteDelayedNullItem();

  /// @brief Method WriteItemEnd, addr 0x24e8e98, size 0x4, virtual false, abstract: false, final false
  inline void WriteItemEnd();

  /// @brief Method InternalWriteItemNull, addr 0x24e8084, size 0x90, virtual false, abstract: false, final false
  inline void InternalWriteItemNull();

  /// @brief Method WriteItemObjectRef, addr 0x24e8e9c, size 0x30, virtual false, abstract: false, final false
  inline void WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef);

  /// @brief Method WriteAssembly, addr 0x24e8ecc, size 0xd4, virtual false, abstract: false, final false
  inline void WriteAssembly(::System::Type* type, ::StringW assemblyString, int32_t assemId, bool isNew);

  /// @brief Method WriteValue, addr 0x24e2374, size 0x664, virtual false, abstract: false, final false
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

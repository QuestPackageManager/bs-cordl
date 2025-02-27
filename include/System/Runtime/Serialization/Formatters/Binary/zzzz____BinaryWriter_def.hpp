#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/__BinaryWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object, System.Runtime.Serialization.Formatters.FormatterTypeStyle
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
class CORDL_TYPE __BinaryWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field binaryArray, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryArray, put = __cordl_internal_set_binaryArray)) ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;

  /// @brief Field binaryAssembly, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryAssembly, put = __cordl_internal_set_binaryAssembly)) ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;

  /// @brief Field binaryMethodCall, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryMethodCall,
                      put = __cordl_internal_set_binaryMethodCall)) ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;

  /// @brief Field binaryMethodReturn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryMethodReturn,
                      put = __cordl_internal_set_binaryMethodReturn)) ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;

  /// @brief Field binaryObject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObject, put = __cordl_internal_set_binaryObject)) ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;

  /// @brief Field binaryObjectString, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectString,
                      put = __cordl_internal_set_binaryObjectString)) ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;

  /// @brief Field binaryObjectWithMap, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectWithMap,
                      put = __cordl_internal_set_binaryObjectWithMap)) ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;

  /// @brief Field binaryObjectWithMapTyped, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObjectWithMapTyped,
                      put = __cordl_internal_set_binaryObjectWithMapTyped)) ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;

  /// @brief Field byteBuffer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuffer, put = __cordl_internal_set_byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field chunkSize, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSize, put = __cordl_internal_set_chunkSize)) int32_t chunkSize;

  /// @brief Field dataWriter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dataWriter, put = __cordl_internal_set_dataWriter)) ::System::IO::BinaryWriter* dataWriter;

  /// @brief Field formatterTypeStyle, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_formatterTypeStyle,
                      put = __cordl_internal_set_formatterTypeStyle)) ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;

  /// @brief Field m_nestedObjectCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nestedObjectCount, put = __cordl_internal_set_m_nestedObjectCount)) int32_t m_nestedObjectCount;

  /// @brief Field memberPrimitiveTyped, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveTyped,
                      put = __cordl_internal_set_memberPrimitiveTyped)) ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;

  /// @brief Field memberPrimitiveUnTyped, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveUnTyped,
                      put = __cordl_internal_set_memberPrimitiveUnTyped)) ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;

  /// @brief Field memberReference, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_memberReference, put = __cordl_internal_set_memberReference)) ::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;

  /// @brief Field nullCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_nullCount, put = __cordl_internal_set_nullCount)) int32_t nullCount;

  /// @brief Field objectMapTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectMapTable, put = __cordl_internal_set_objectMapTable)) ::System::Collections::Hashtable* objectMapTable;

  /// @brief Field objectNull, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_objectNull, put = __cordl_internal_set_objectNull)) ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;

  /// @brief Field objectWriter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectWriter, put = __cordl_internal_set_objectWriter)) ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;

  /// @brief Field sout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sout, put = __cordl_internal_set_sout)) ::System::IO::Stream* sout;

  /// @brief Method InternalWriteItemNull, addr 0x3d12ee8, size 0x90, virtual false, abstract: false, final false
  inline void InternalWriteItemNull();

  static inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* New_ctor(::System::IO::Stream* sout,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                               ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

  /// @brief Method WriteArrayAsBytes, addr 0x3d132ec, size 0x144, virtual false, abstract: false, final false
  inline void WriteArrayAsBytes(::System::Array* array, int32_t typeLength);

  /// @brief Method WriteAssembly, addr 0x3d13a98, size 0xd4, virtual false, abstract: false, final false
  inline void WriteAssembly(::System::Type* type, ::StringW assemblyString, int32_t assemId, bool isNew);

  /// @brief Method WriteBegin, addr 0x3d12474, size 0x4, virtual false, abstract: false, final false
  inline void WriteBegin();

  /// @brief Method WriteBoolean, addr 0x3d12498, size 0x24, virtual false, abstract: false, final false
  inline void WriteBoolean(bool value);

  /// @brief Method WriteByte, addr 0x3d0cea0, size 0x20, virtual false, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteBytes, addr 0x3d124e0, size 0x24, virtual false, abstract: false, final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size);

  /// @brief Method WriteBytes, addr 0x3d124bc, size 0x24, virtual false, abstract: false, final false
  inline void WriteBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteChar, addr 0x3d12504, size 0x24, virtual false, abstract: false, final false
  inline void WriteChar(char16_t value);

  /// @brief Method WriteChars, addr 0x3d12528, size 0x24, virtual false, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method WriteDateTime, addr 0x3d12760, size 0x78, virtual false, abstract: false, final false
  inline void WriteDateTime(::System::DateTime value);

  /// @brief Method WriteDecimal, addr 0x3d1254c, size 0xec, virtual false, abstract: false, final false
  inline void WriteDecimal(::System::Decimal value);

  /// @brief Method WriteDelayedNullItem, addr 0x3d13a54, size 0x10, virtual false, abstract: false, final false
  inline void WriteDelayedNullItem();

  /// @brief Method WriteDouble, addr 0x3d1265c, size 0x24, virtual false, abstract: false, final false
  inline void WriteDouble(double_t value);

  /// @brief Method WriteEnd, addr 0x3d12478, size 0x20, virtual false, abstract: false, final false
  inline void WriteEnd();

  /// @brief Method WriteInt16, addr 0x3d12680, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt16(int16_t value);

  /// @brief Method WriteInt32, addr 0x3d0cee4, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt32(int32_t value);

  /// @brief Method WriteInt64, addr 0x3d126a4, size 0x24, virtual false, abstract: false, final false
  inline void WriteInt64(int64_t value);

  /// @brief Method WriteItem, addr 0x3d13a04, size 0x40, virtual false, abstract: false, final false
  inline void WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                        ::System::Object* value);

  /// @brief Method WriteItemEnd, addr 0x3d13a64, size 0x4, virtual false, abstract: false, final false
  inline void WriteItemEnd();

  /// @brief Method WriteItemObjectRef, addr 0x3d13a68, size 0x30, virtual false, abstract: false, final false
  inline void WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef);

  /// @brief Method WriteJaggedArray, addr 0x3d13430, size 0x180, virtual false, abstract: false, final false
  inline void WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound);

  /// @brief Method WriteMember, addr 0x3d13768, size 0x108, virtual false, abstract: false, final false
  inline void WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                          ::System::Object* value);

  /// @brief Method WriteMemberNested, addr 0x3d139a0, size 0x1c, virtual false, abstract: false, final false
  inline void WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);

  /// @brief Method WriteMemberObjectRef, addr 0x3d1390c, size 0x94, virtual false, abstract: false, final false
  inline void WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef);

  /// @brief Method WriteMemberString, addr 0x3d139bc, size 0x48, virtual false, abstract: false, final false
  inline void WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                ::StringW value);

  /// @brief Method WriteMethodCall, addr 0x3d12938, size 0x70, virtual false, abstract: false, final false
  inline void WriteMethodCall();

  /// @brief Method WriteMethodReturn, addr 0x3d129a8, size 0x70, virtual false, abstract: false, final false
  inline void WriteMethodReturn();

  /// @brief Method WriteNullItem, addr 0x3d13a44, size 0x10, virtual false, abstract: false, final false
  inline void WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteNullMember, addr 0x3d13870, size 0x9c, virtual false, abstract: false, final false
  inline void WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteObject, addr 0x3d12a18, size 0x4d0, virtual false, abstract: false, final false
  inline void
  WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers,
              ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
              ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos);

  /// @brief Method WriteObjectByteArray, addr 0x3d13708, size 0x60, virtual false, abstract: false, final false
  inline void WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                   ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound,
                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> byteA);

  /// @brief Method WriteObjectEnd, addr 0x3d12844, size 0x4, virtual false, abstract: false, final false
  inline void WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method WriteObjectString, addr 0x3d12f78, size 0x90, virtual false, abstract: false, final false
  inline void WriteObjectString(int32_t objectId, ::StringW value);

  /// @brief Method WriteRectangleArray, addr 0x3d135b0, size 0x158, virtual false, abstract: false, final false
  inline void WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                  ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> lengthA,
                                  ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA);

  /// @brief Method WriteSByte, addr 0x3d126c8, size 0x20, virtual false, abstract: false, final false
  inline void WriteSByte(int8_t value);

  /// @brief Method WriteSerializationHeader, addr 0x3d128a8, size 0x90, virtual false, abstract: false, final false
  inline void WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion);

  /// @brief Method WriteSerializationHeaderEnd, addr 0x3d12848, size 0x60, virtual false, abstract: false, final false
  inline void WriteSerializationHeaderEnd();

  /// @brief Method WriteSingle, addr 0x3d12638, size 0x24, virtual false, abstract: false, final false
  inline void WriteSingle(float_t value);

  /// @brief Method WriteSingleArray, addr 0x3d13008, size 0x2e4, virtual false, abstract: false, final false
  inline void WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               int32_t length, int32_t lowerBound, ::System::Array* array);

  /// @brief Method WriteString, addr 0x3d0cec0, size 0x24, virtual false, abstract: false, final false
  inline void WriteString(::StringW value);

  /// @brief Method WriteTimeSpan, addr 0x3d126e8, size 0x78, virtual false, abstract: false, final false
  inline void WriteTimeSpan(::System::TimeSpan value);

  /// @brief Method WriteUInt16, addr 0x3d127d8, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt16(uint16_t value);

  /// @brief Method WriteUInt32, addr 0x3d127fc, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt32(uint32_t value);

  /// @brief Method WriteUInt64, addr 0x3d12820, size 0x24, virtual false, abstract: false, final false
  inline void WriteUInt64(uint64_t value);

  /// @brief Method WriteValue, addr 0x3d0d7c8, size 0x758, virtual false, abstract: false, final false
  inline void WriteValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Object* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* const& __cordl_internal_get_binaryArray() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray*& __cordl_internal_get_binaryArray();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* const& __cordl_internal_get_binaryAssembly() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*& __cordl_internal_get_binaryAssembly();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* const& __cordl_internal_get_binaryMethodCall() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*& __cordl_internal_get_binaryMethodCall();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* const& __cordl_internal_get_binaryMethodReturn() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*& __cordl_internal_get_binaryMethodReturn();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* const& __cordl_internal_get_binaryObject() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& __cordl_internal_get_binaryObject();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* const& __cordl_internal_get_binaryObjectString() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& __cordl_internal_get_binaryObjectString();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* const& __cordl_internal_get_binaryObjectWithMap() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& __cordl_internal_get_binaryObjectWithMap();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* const& __cordl_internal_get_binaryObjectWithMapTyped() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& __cordl_internal_get_binaryObjectWithMapTyped();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuffer();

  constexpr int32_t const& __cordl_internal_get_chunkSize() const;

  constexpr int32_t& __cordl_internal_get_chunkSize();

  constexpr ::System::IO::BinaryWriter* const& __cordl_internal_get_dataWriter() const;

  constexpr ::System::IO::BinaryWriter*& __cordl_internal_get_dataWriter();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __cordl_internal_get_formatterTypeStyle() const;

  constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __cordl_internal_get_formatterTypeStyle();

  constexpr int32_t const& __cordl_internal_get_m_nestedObjectCount() const;

  constexpr int32_t& __cordl_internal_get_m_nestedObjectCount();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* const& __cordl_internal_get_memberPrimitiveTyped() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& __cordl_internal_get_memberPrimitiveTyped();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* const& __cordl_internal_get_memberPrimitiveUnTyped() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*& __cordl_internal_get_memberPrimitiveUnTyped();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference* const& __cordl_internal_get_memberReference() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& __cordl_internal_get_memberReference();

  constexpr int32_t const& __cordl_internal_get_nullCount() const;

  constexpr int32_t& __cordl_internal_get_nullCount();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_objectMapTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_objectMapTable();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* const& __cordl_internal_get_objectNull() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& __cordl_internal_get_objectNull();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* const& __cordl_internal_get_objectWriter() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*& __cordl_internal_get_objectWriter();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_sout() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_sout();

  constexpr void __cordl_internal_set_binaryArray(::System::Runtime::Serialization::Formatters::Binary::BinaryArray* value);

  constexpr void __cordl_internal_set_binaryAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* value);

  constexpr void __cordl_internal_set_binaryMethodCall(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* value);

  constexpr void __cordl_internal_set_binaryMethodReturn(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* value);

  constexpr void __cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value);

  constexpr void __cordl_internal_set_binaryObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value);

  constexpr void __cordl_internal_set_binaryObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value);

  constexpr void __cordl_internal_set_binaryObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value);

  constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_chunkSize(int32_t value);

  constexpr void __cordl_internal_set_dataWriter(::System::IO::BinaryWriter* value);

  constexpr void __cordl_internal_set_formatterTypeStyle(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value);

  constexpr void __cordl_internal_set_m_nestedObjectCount(int32_t value);

  constexpr void __cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value);

  constexpr void __cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value);

  constexpr void __cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value);

  constexpr void __cordl_internal_set_nullCount(int32_t value);

  constexpr void __cordl_internal_set_objectMapTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value);

  constexpr void __cordl_internal_set_objectWriter(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* value);

  constexpr void __cordl_internal_set_sout(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x3d120ec, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryWriter(__BinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryWriter(__BinaryWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3279 };

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

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, 0xb0>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");

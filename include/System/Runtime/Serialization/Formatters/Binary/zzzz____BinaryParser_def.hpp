#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(__BinaryParser)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
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
class MessageEnd;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
namespace System::Text {
class Encoding;
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
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser);
// Type: System.Runtime.Serialization.Formatters.Binary::__BinaryParser
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::__BinaryParser*
class CORDL_TYPE __BinaryParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AssemIdToAssemblyTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* AssemIdToAssemblyTable;

  __declspec(property(get = get_ObjectMapIdTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* ObjectMapIdTable;

  /// @brief Field PRS, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PRS, put = __cordl_internal_set_PRS))::System::Runtime::Serialization::Formatters::Binary::ParseRecord* PRS;

  __declspec(property(get = get_SystemAssemblyInfo))::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* SystemAssemblyInfo;

  /// @brief Field assemIdToAssemblyTable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_assemIdToAssemblyTable,
                      put = __cordl_internal_set_assemIdToAssemblyTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable;

  /// @brief Field binaryObject, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryObject, put = __cordl_internal_set_binaryObject))::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;

  /// @brief Field bowm, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_bowm, put = __cordl_internal_set_bowm))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* bowm;

  /// @brief Field bowmt, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_bowmt, put = __cordl_internal_set_bowmt))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* bowmt;

  /// @brief Field byteBuffer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuffer, put = __cordl_internal_set_byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field crossAppDomainString, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_crossAppDomainString,
                      put = __cordl_internal_set_crossAppDomainString))::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* crossAppDomainString;

  /// @brief Field dataReader, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_dataReader, put = __cordl_internal_set_dataReader))::System::IO::BinaryReader* dataReader;

  /// @brief Field encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encoding, put = setStaticF_encoding))::System::Text::Encoding* encoding;

  /// @brief Field expectedType, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_expectedType, put = __cordl_internal_set_expectedType))::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;

  /// @brief Field expectedTypeInformation, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_expectedTypeInformation, put = __cordl_internal_set_expectedTypeInformation))::System::Object* expectedTypeInformation;

  /// @brief Field headerId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_headerId, put = __cordl_internal_set_headerId)) int64_t headerId;

  /// @brief Field input, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input))::System::IO::Stream* input;

  /// @brief Field memberPrimitiveTyped, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveTyped,
                      put = __cordl_internal_set_memberPrimitiveTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;

  /// @brief Field memberPrimitiveUnTyped, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_memberPrimitiveUnTyped,
                      put = __cordl_internal_set_memberPrimitiveUnTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;

  /// @brief Field memberReference, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_memberReference, put = __cordl_internal_set_memberReference))::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;

  /// @brief Field messageEnd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_messageEnd, put = setStaticF_messageEnd))::System::Runtime::Serialization::Formatters::Binary::MessageEnd* messageEnd;

  /// @brief Field objectMapIdTable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_objectMapIdTable, put = __cordl_internal_set_objectMapIdTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* objectMapIdTable;

  /// @brief Field objectNull, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_objectNull, put = __cordl_internal_set_objectNull))::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;

  /// @brief Field objectReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectReader, put = __cordl_internal_set_objectReader))::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;

  /// @brief Field objectString, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_objectString, put = __cordl_internal_set_objectString))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* objectString;

  /// @brief Field opPool, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_opPool, put = __cordl_internal_set_opPool))::System::Runtime::Serialization::Formatters::Binary::SerStack* opPool;

  __declspec(property(get = get_prs))::System::Runtime::Serialization::Formatters::Binary::ParseRecord* prs;

  /// @brief Field stack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack))::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;

  /// @brief Field systemAssemblyInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_systemAssemblyInfo,
                      put = __cordl_internal_set_systemAssemblyInfo))::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* systemAssemblyInfo;

  /// @brief Field topId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_topId, put = __cordl_internal_set_topId)) int64_t topId;

  /// @brief Method GetOp, addr 0x2882490, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* GetOp();

  static inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* New_ctor(::System::IO::Stream* stream,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);

  /// @brief Method PutOp, addr 0x2881eb8, size 0x88, virtual false, abstract: false, final false
  inline void PutOp(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op);

  /// @brief Method ReadArray, addr 0x2880d40, size 0x59c, virtual false, abstract: false, final false
  inline void ReadArray(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadArrayAsBytes, addr 0x2882db4, size 0x338, virtual false, abstract: false, final false
  inline void ReadArrayAsBytes(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ReadAssembly, addr 0x287fef4, size 0x274, virtual false, abstract: false, final false
  inline void ReadAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadBegin, addr 0x287fe30, size 0x4, virtual false, abstract: false, final false
  inline void ReadBegin();

  /// @brief Method ReadBoolean, addr 0x2881f40, size 0x20, virtual false, abstract: false, final false
  inline bool ReadBoolean();

  /// @brief Method ReadByte, addr 0x2881f60, size 0x20, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x2881f80, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t length);

  /// @brief Method ReadBytes, addr 0x2881fa4, size 0x7c, virtual false, abstract: false, final false
  inline void ReadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size);

  /// @brief Method ReadChar, addr 0x2882020, size 0x20, virtual false, abstract: false, final false
  inline char16_t ReadChar();

  /// @brief Method ReadChars, addr 0x2882040, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ReadChars(int32_t length);

  /// @brief Method ReadCrossAppDomainMap, addr 0x28804c0, size 0x1cc, virtual false, abstract: false, final false
  inline void ReadCrossAppDomainMap();

  /// @brief Method ReadDateTime, addr 0x2882234, size 0x7c, virtual false, abstract: false, final false
  inline ::System::DateTime ReadDateTime();

  /// @brief Method ReadDecimal, addr 0x2882064, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Decimal ReadDecimal();

  /// @brief Method ReadDouble, addr 0x288213c, size 0x24, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadEnd, addr 0x2881bb4, size 0x4, virtual false, abstract: false, final false
  inline void ReadEnd();

  /// @brief Method ReadInt16, addr 0x2882160, size 0x24, virtual false, abstract: false, final false
  inline int16_t ReadInt16();

  /// @brief Method ReadInt32, addr 0x2882184, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadInt64, addr 0x28821a8, size 0x24, virtual false, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadMemberPrimitiveTyped, addr 0x28812dc, size 0x384, virtual false, abstract: false, final false
  inline void ReadMemberPrimitiveTyped();

  /// @brief Method ReadMemberPrimitiveUnTyped, addr 0x2881bb8, size 0x2a8, virtual false, abstract: false, final false
  inline void ReadMemberPrimitiveUnTyped();

  /// @brief Method ReadMemberReference, addr 0x2881660, size 0x1e8, virtual false, abstract: false, final false
  inline void ReadMemberReference();

  /// @brief Method ReadMessageEnd, addr 0x2881a3c, size 0x178, virtual false, abstract: false, final false
  inline void ReadMessageEnd();

  /// @brief Method ReadObject, addr 0x2880168, size 0x358, virtual false, abstract: false, final false
  inline void ReadObject();

  /// @brief Method ReadObjectNull, addr 0x2881848, size 0x1f4, virtual false, abstract: false, final false
  inline void ReadObjectNull(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectString, addr 0x28807bc, size 0x584, virtual false, abstract: false, final false
  inline void ReadObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectWithMap, addr 0x288068c, size 0xa0, virtual false, abstract: false, final false
  inline void ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectWithMap, addr 0x288257c, size 0x40c, virtual false, abstract: false, final false
  inline void ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record);

  /// @brief Method ReadObjectWithMapTyped, addr 0x288072c, size 0x90, virtual false, abstract: false, final false
  inline void ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectWithMapTyped, addr 0x2882988, size 0x42c, virtual false, abstract: false, final false
  inline void ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record);

  /// @brief Method ReadSByte, addr 0x28821cc, size 0x20, virtual false, abstract: false, final false
  inline int8_t ReadSByte();

  /// @brief Method ReadSerializationHeaderRecord, addr 0x287fe34, size 0xc0, virtual false, abstract: false, final false
  inline void ReadSerializationHeaderRecord();

  /// @brief Method ReadSingle, addr 0x2882118, size 0x24, virtual false, abstract: false, final false
  inline float_t ReadSingle();

  /// @brief Method ReadString, addr 0x28821ec, size 0x24, virtual false, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadTimeSpan, addr 0x2882210, size 0x24, virtual false, abstract: false, final false
  inline ::System::TimeSpan ReadTimeSpan();

  /// @brief Method ReadUInt16, addr 0x28822b0, size 0x24, virtual false, abstract: false, final false
  inline uint16_t ReadUInt16();

  /// @brief Method ReadUInt32, addr 0x28822d4, size 0x24, virtual false, abstract: false, final false
  inline uint32_t ReadUInt32();

  /// @brief Method ReadUInt64, addr 0x28822f8, size 0x24, virtual false, abstract: false, final false
  inline uint64_t ReadUInt64();

  /// @brief Method ReadValue, addr 0x28830ec, size 0x420, virtual false, abstract: false, final false
  inline ::System::Object* ReadValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method Run, addr 0x2879628, size 0x5d4, virtual false, abstract: false, final false
  inline void Run();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& __cordl_internal_get_PRS();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> const& __cordl_internal_get_PRS() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& __cordl_internal_get_assemIdToAssemblyTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const& __cordl_internal_get_assemIdToAssemblyTable() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& __cordl_internal_get_binaryObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObject*> const& __cordl_internal_get_binaryObject() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& __cordl_internal_get_bowm();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*> const& __cordl_internal_get_bowm() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& __cordl_internal_get_bowmt();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*> const& __cordl_internal_get_bowmt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuffer();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*& __cordl_internal_get_crossAppDomainString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*> const& __cordl_internal_get_crossAppDomainString() const;

  constexpr ::System::IO::BinaryReader*& __cordl_internal_get_dataReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> const& __cordl_internal_get_dataReader() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __cordl_internal_get_expectedType() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __cordl_internal_get_expectedType();

  constexpr ::System::Object*& __cordl_internal_get_expectedTypeInformation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_expectedTypeInformation() const;

  constexpr int64_t const& __cordl_internal_get_headerId() const;

  constexpr int64_t& __cordl_internal_get_headerId();

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_input() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& __cordl_internal_get_memberPrimitiveTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*> const& __cordl_internal_get_memberPrimitiveTyped() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*& __cordl_internal_get_memberPrimitiveUnTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*> const& __cordl_internal_get_memberPrimitiveUnTyped() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& __cordl_internal_get_memberReference();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberReference*> const& __cordl_internal_get_memberReference() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& __cordl_internal_get_objectMapIdTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const& __cordl_internal_get_objectMapIdTable() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& __cordl_internal_get_objectNull();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectNull*> const& __cordl_internal_get_objectNull() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& __cordl_internal_get_objectReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*> const& __cordl_internal_get_objectReader() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& __cordl_internal_get_objectString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*> const& __cordl_internal_get_objectString() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_opPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __cordl_internal_get_opPool() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __cordl_internal_get_stack() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& __cordl_internal_get_systemAssemblyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*> const& __cordl_internal_get_systemAssemblyInfo() const;

  constexpr int64_t const& __cordl_internal_get_topId() const;

  constexpr int64_t& __cordl_internal_get_topId();

  constexpr void __cordl_internal_set_PRS(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value);

  constexpr void __cordl_internal_set_assemIdToAssemblyTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value);

  constexpr void __cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value);

  constexpr void __cordl_internal_set_bowm(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value);

  constexpr void __cordl_internal_set_bowmt(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value);

  constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_crossAppDomainString(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* value);

  constexpr void __cordl_internal_set_dataReader(::System::IO::BinaryReader* value);

  constexpr void __cordl_internal_set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr void __cordl_internal_set_expectedTypeInformation(::System::Object* value);

  constexpr void __cordl_internal_set_headerId(int64_t value);

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value);

  constexpr void __cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value);

  constexpr void __cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value);

  constexpr void __cordl_internal_set_objectMapIdTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value);

  constexpr void __cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value);

  constexpr void __cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value);

  constexpr void __cordl_internal_set_objectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value);

  constexpr void __cordl_internal_set_opPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr void __cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr void __cordl_internal_set_systemAssemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value);

  constexpr void __cordl_internal_set_topId(int64_t value);

  /// @brief Method .ctor, addr 0x287fa4c, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);

  static inline ::System::Text::Encoding* getStaticF_encoding();

  static inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* getStaticF_messageEnd();

  /// @brief Method get_AssemIdToAssemblyTable, addr 0x287fcd8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_AssemIdToAssemblyTable();

  /// @brief Method get_ObjectMapIdTable, addr 0x287fc04, size 0x68, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_ObjectMapIdTable();

  /// @brief Method get_SystemAssemblyInfo, addr 0x287fb58, size 0xac, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* get_SystemAssemblyInfo();

  /// @brief Method get_prs, addr 0x287fdbc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* get_prs();

  static inline void setStaticF_encoding(::System::Text::Encoding* value);

  static inline void setStaticF_messageEnd(::System::Runtime::Serialization::Formatters::Binary::MessageEnd* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryParser(__BinaryParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryParser(__BinaryParser const&) = delete;

  /// @brief Field objectReader, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* ___objectReader;

  /// @brief Field input, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field topId, offset: 0x20, size: 0x8, def value: None
  int64_t ___topId;

  /// @brief Field headerId, offset: 0x28, size: 0x8, def value: None
  int64_t ___headerId;

  /// @brief Field objectMapIdTable, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SizedArray* ___objectMapIdTable;

  /// @brief Field assemIdToAssemblyTable, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SizedArray* ___assemIdToAssemblyTable;

  /// @brief Field stack, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___stack;

  /// @brief Field expectedType, offset: 0x48, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ___expectedType;

  /// @brief Field expectedTypeInformation, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ___expectedTypeInformation;

  /// @brief Field PRS, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* ___PRS;

  /// @brief Field systemAssemblyInfo, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* ___systemAssemblyInfo;

  /// @brief Field dataReader, offset: 0x68, size: 0x8, def value: None
  ::System::IO::BinaryReader* ___dataReader;

  /// @brief Field opPool, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___opPool;

  /// @brief Field binaryObject, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* ___binaryObject;

  /// @brief Field bowm, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* ___bowm;

  /// @brief Field bowmt, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* ___bowmt;

  /// @brief Field objectString, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* ___objectString;

  /// @brief Field crossAppDomainString, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* ___crossAppDomainString;

  /// @brief Field memberPrimitiveTyped, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* ___memberPrimitiveTyped;

  /// @brief Field byteBuffer, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuffer;

  /// @brief Field memberPrimitiveUnTyped, offset: 0xb0, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* ___memberPrimitiveUnTyped;

  /// @brief Field memberReference, offset: 0xb8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::MemberReference* ___memberReference;

  /// @brief Field objectNull, offset: 0xc0, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* ___objectNull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, 0xc8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___objectReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___topId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___headerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___objectMapIdTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___assemIdToAssemblyTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___stack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___expectedType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___expectedTypeInformation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___PRS) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___systemAssemblyInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___dataReader) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___opPool) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___binaryObject) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___bowm) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___bowmt) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___objectString) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___crossAppDomainString) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___memberPrimitiveTyped) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___byteBuffer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___memberPrimitiveUnTyped) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___memberReference) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ___objectNull) == 0xc0, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryParser");

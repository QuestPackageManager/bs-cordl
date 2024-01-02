#pragma once
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
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::IO {
class Stream;
}
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
class BinaryReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MessageEnd;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
namespace System {
struct Decimal;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3290))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::__BinaryParser*
class CORDL_TYPE __BinaryParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectReader, offset 0x10, size 0x8
  __declspec(property(get = __get_objectReader, put = __set_objectReader))::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;

  /// @brief Field input, offset 0x18, size 0x8
  __declspec(property(get = __get_input, put = __set_input))::System::IO::Stream* input;

  /// @brief Field topId, offset 0x20, size 0x8
  __declspec(property(get = __get_topId, put = __set_topId)) int64_t topId;

  /// @brief Field headerId, offset 0x28, size 0x8
  __declspec(property(get = __get_headerId, put = __set_headerId)) int64_t headerId;

  /// @brief Field objectMapIdTable, offset 0x30, size 0x8
  __declspec(property(get = __get_objectMapIdTable, put = __set_objectMapIdTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* objectMapIdTable;

  /// @brief Field assemIdToAssemblyTable, offset 0x38, size 0x8
  __declspec(property(get = __get_assemIdToAssemblyTable, put = __set_assemIdToAssemblyTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable;

  /// @brief Field stack, offset 0x40, size 0x8
  __declspec(property(get = __get_stack, put = __set_stack))::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;

  /// @brief Field expectedType, offset 0x48, size 0x4
  __declspec(property(get = __get_expectedType, put = __set_expectedType))::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;

  /// @brief Field expectedTypeInformation, offset 0x50, size 0x8
  __declspec(property(get = __get_expectedTypeInformation, put = __set_expectedTypeInformation))::System::Object* expectedTypeInformation;

  /// @brief Field PRS, offset 0x58, size 0x8
  __declspec(property(get = __get_PRS, put = __set_PRS))::System::Runtime::Serialization::Formatters::Binary::ParseRecord* PRS;

  /// @brief Field systemAssemblyInfo, offset 0x60, size 0x8
  __declspec(property(get = __get_systemAssemblyInfo, put = __set_systemAssemblyInfo))::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* systemAssemblyInfo;

  /// @brief Field dataReader, offset 0x68, size 0x8
  __declspec(property(get = __get_dataReader, put = __set_dataReader))::System::IO::BinaryReader* dataReader;

  /// @brief Field opPool, offset 0x70, size 0x8
  __declspec(property(get = __get_opPool, put = __set_opPool))::System::Runtime::Serialization::Formatters::Binary::SerStack* opPool;

  /// @brief Field binaryObject, offset 0x78, size 0x8
  __declspec(property(get = __get_binaryObject, put = __set_binaryObject))::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;

  /// @brief Field bowm, offset 0x80, size 0x8
  __declspec(property(get = __get_bowm, put = __set_bowm))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* bowm;

  /// @brief Field bowmt, offset 0x88, size 0x8
  __declspec(property(get = __get_bowmt, put = __set_bowmt))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* bowmt;

  /// @brief Field objectString, offset 0x90, size 0x8
  __declspec(property(get = __get_objectString, put = __set_objectString))::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* objectString;

  /// @brief Field crossAppDomainString, offset 0x98, size 0x8
  __declspec(property(get = __get_crossAppDomainString, put = __set_crossAppDomainString))::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* crossAppDomainString;

  /// @brief Field memberPrimitiveTyped, offset 0xa0, size 0x8
  __declspec(property(get = __get_memberPrimitiveTyped, put = __set_memberPrimitiveTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;

  /// @brief Field byteBuffer, offset 0xa8, size 0x8
  __declspec(property(get = __get_byteBuffer, put = __set_byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field memberPrimitiveUnTyped, offset 0xb0, size 0x8
  __declspec(property(get = __get_memberPrimitiveUnTyped, put = __set_memberPrimitiveUnTyped))::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;

  /// @brief Field memberReference, offset 0xb8, size 0x8
  __declspec(property(get = __get_memberReference, put = __set_memberReference))::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;

  /// @brief Field objectNull, offset 0xc0, size 0x8
  __declspec(property(get = __get_objectNull, put = __set_objectNull))::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;

  /// @brief Field encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encoding, put = setStaticF_encoding))::System::Text::Encoding* encoding;

  /// @brief Field messageEnd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_messageEnd, put = setStaticF_messageEnd))::System::Runtime::Serialization::Formatters::Binary::MessageEnd* messageEnd;

  __declspec(property(get = get_SystemAssemblyInfo))::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* SystemAssemblyInfo;

  __declspec(property(get = get_ObjectMapIdTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* ObjectMapIdTable;

  __declspec(property(get = get_AssemIdToAssemblyTable))::System::Runtime::Serialization::Formatters::Binary::SizedArray* AssemIdToAssemblyTable;

  __declspec(property(get = get_prs))::System::Runtime::Serialization::Formatters::Binary::ParseRecord* prs;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& __get_objectReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*> const& __get_objectReader() const;

  constexpr void __set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value);

  constexpr ::System::IO::Stream*& __get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_input() const;

  constexpr void __set_input(::System::IO::Stream* value);

  constexpr int64_t& __get_topId();

  constexpr int64_t const& __get_topId() const;

  constexpr void __set_topId(int64_t value);

  constexpr int64_t& __get_headerId();

  constexpr int64_t const& __get_headerId() const;

  constexpr void __set_headerId(int64_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& __get_objectMapIdTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const& __get_objectMapIdTable() const;

  constexpr void __set_objectMapIdTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& __get_assemIdToAssemblyTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const& __get_assemIdToAssemblyTable() const;

  constexpr void __set_assemIdToAssemblyTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __get_stack() const;

  constexpr void __set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_expectedType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_expectedType() const;

  constexpr void __set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr ::System::Object*& __get_expectedTypeInformation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_expectedTypeInformation() const;

  constexpr void __set_expectedTypeInformation(::System::Object* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& __get_PRS();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> const& __get_PRS() const;

  constexpr void __set_PRS(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& __get_systemAssemblyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*> const& __get_systemAssemblyInfo() const;

  constexpr void __set_systemAssemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value);

  constexpr ::System::IO::BinaryReader*& __get_dataReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> const& __get_dataReader() const;

  constexpr void __set_dataReader(::System::IO::BinaryReader* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __get_opPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __get_opPool() const;

  constexpr void __set_opPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& __get_binaryObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObject*> const& __get_binaryObject() const;

  constexpr void __set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& __get_bowm();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*> const& __get_bowm() const;

  constexpr void __set_bowm(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& __get_bowmt();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*> const& __get_bowmt() const;

  constexpr void __set_bowmt(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& __get_objectString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*> const& __get_objectString() const;

  constexpr void __set_objectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*& __get_crossAppDomainString();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*> const& __get_crossAppDomainString() const;

  constexpr void __set_crossAppDomainString(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& __get_memberPrimitiveTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*> const& __get_memberPrimitiveTyped() const;

  constexpr void __set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_byteBuffer() const;

  constexpr void __set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*& __get_memberPrimitiveUnTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*> const& __get_memberPrimitiveUnTyped() const;

  constexpr void __set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& __get_memberReference();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberReference*> const& __get_memberReference() const;

  constexpr void __set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& __get_objectNull();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectNull*> const& __get_objectNull() const;

  constexpr void __set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value);

  static inline void setStaticF_encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_encoding();

  static inline void setStaticF_messageEnd(::System::Runtime::Serialization::Formatters::Binary::MessageEnd* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* getStaticF_messageEnd();

  static inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* New_ctor(::System::IO::Stream* stream,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);

  /// @brief Method .ctor, addr 0x24d1e50, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);

  /// @brief Method get_SystemAssemblyInfo, addr 0x24d1f5c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* get_SystemAssemblyInfo();

  /// @brief Method get_ObjectMapIdTable, addr 0x24d2008, size 0x68, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_ObjectMapIdTable();

  /// @brief Method get_AssemIdToAssemblyTable, addr 0x24d20dc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_AssemIdToAssemblyTable();

  /// @brief Method get_prs, addr 0x24d21c0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* get_prs();

  /// @brief Method Run, addr 0x24cb8ec, size 0x5d4, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method ReadBegin, addr 0x24d2234, size 0x4, virtual false, abstract: false, final false
  inline void ReadBegin();

  /// @brief Method ReadEnd, addr 0x24d3fb8, size 0x4, virtual false, abstract: false, final false
  inline void ReadEnd();

  /// @brief Method ReadBoolean, addr 0x24d4344, size 0x20, virtual false, abstract: false, final false
  inline bool ReadBoolean();

  /// @brief Method ReadByte, addr 0x24d4364, size 0x20, virtual false, abstract: false, final false
  inline uint8_t ReadByte();

  /// @brief Method ReadBytes, addr 0x24d4384, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(int32_t length);

  /// @brief Method ReadBytes, addr 0x24d43a8, size 0x7c, virtual false, abstract: false, final false
  inline void ReadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size);

  /// @brief Method ReadChar, addr 0x24d4424, size 0x20, virtual false, abstract: false, final false
  inline char16_t ReadChar();

  /// @brief Method ReadChars, addr 0x24d4444, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> ReadChars(int32_t length);

  /// @brief Method ReadDecimal, addr 0x24d4468, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Decimal ReadDecimal();

  /// @brief Method ReadSingle, addr 0x24d451c, size 0x24, virtual false, abstract: false, final false
  inline float_t ReadSingle();

  /// @brief Method ReadDouble, addr 0x24d4540, size 0x24, virtual false, abstract: false, final false
  inline double_t ReadDouble();

  /// @brief Method ReadInt16, addr 0x24d4564, size 0x24, virtual false, abstract: false, final false
  inline int16_t ReadInt16();

  /// @brief Method ReadInt32, addr 0x24d4588, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadInt64, addr 0x24d45ac, size 0x24, virtual false, abstract: false, final false
  inline int64_t ReadInt64();

  /// @brief Method ReadSByte, addr 0x24d45d0, size 0x20, virtual false, abstract: false, final false
  inline int8_t ReadSByte();

  /// @brief Method ReadString, addr 0x24d45f0, size 0x24, virtual false, abstract: false, final false
  inline ::StringW ReadString();

  /// @brief Method ReadTimeSpan, addr 0x24d4614, size 0x24, virtual false, abstract: false, final false
  inline ::System::TimeSpan ReadTimeSpan();

  /// @brief Method ReadDateTime, addr 0x24d4638, size 0x7c, virtual false, abstract: false, final false
  inline ::System::DateTime ReadDateTime();

  /// @brief Method ReadUInt16, addr 0x24d46b4, size 0x24, virtual false, abstract: false, final false
  inline uint16_t ReadUInt16();

  /// @brief Method ReadUInt32, addr 0x24d46d8, size 0x24, virtual false, abstract: false, final false
  inline uint32_t ReadUInt32();

  /// @brief Method ReadUInt64, addr 0x24d46fc, size 0x24, virtual false, abstract: false, final false
  inline uint64_t ReadUInt64();

  /// @brief Method ReadSerializationHeaderRecord, addr 0x24d2238, size 0xc0, virtual false, abstract: false, final false
  inline void ReadSerializationHeaderRecord();

  /// @brief Method ReadAssembly, addr 0x24d22f8, size 0x274, virtual false, abstract: false, final false
  inline void ReadAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObject, addr 0x24d256c, size 0x358, virtual false, abstract: false, final false
  inline void ReadObject();

  /// @brief Method ReadCrossAppDomainMap, addr 0x24d28c4, size 0x1cc, virtual false, abstract: false, final false
  inline void ReadCrossAppDomainMap();

  /// @brief Method ReadObjectWithMap, addr 0x24d2a90, size 0xa0, virtual false, abstract: false, final false
  inline void ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectWithMap, addr 0x24d4980, size 0x40c, virtual false, abstract: false, final false
  inline void ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record);

  /// @brief Method ReadObjectWithMapTyped, addr 0x24d2b30, size 0x90, virtual false, abstract: false, final false
  inline void ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadObjectWithMapTyped, addr 0x24d4d8c, size 0x42c, virtual false, abstract: false, final false
  inline void ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record);

  /// @brief Method ReadObjectString, addr 0x24d2bc0, size 0x584, virtual false, abstract: false, final false
  inline void ReadObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadMemberPrimitiveTyped, addr 0x24d36e0, size 0x384, virtual false, abstract: false, final false
  inline void ReadMemberPrimitiveTyped();

  /// @brief Method ReadArray, addr 0x24d3144, size 0x59c, virtual false, abstract: false, final false
  inline void ReadArray(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadArrayAsBytes, addr 0x24d51b8, size 0x338, virtual false, abstract: false, final false
  inline void ReadArrayAsBytes(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ReadMemberPrimitiveUnTyped, addr 0x24d3fbc, size 0x2a8, virtual false, abstract: false, final false
  inline void ReadMemberPrimitiveUnTyped();

  /// @brief Method ReadMemberReference, addr 0x24d3a64, size 0x1e8, virtual false, abstract: false, final false
  inline void ReadMemberReference();

  /// @brief Method ReadObjectNull, addr 0x24d3c4c, size 0x1f4, virtual false, abstract: false, final false
  inline void ReadObjectNull(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method ReadMessageEnd, addr 0x24d3e40, size 0x178, virtual false, abstract: false, final false
  inline void ReadMessageEnd();

  /// @brief Method ReadValue, addr 0x24d54f0, size 0x420, virtual false, abstract: false, final false
  inline ::System::Object* ReadValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method GetOp, addr 0x24d4894, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* GetOp();

  /// @brief Method PutOp, addr 0x24d42bc, size 0x88, virtual false, abstract: false, final false
  inline void PutOp(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op);

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BinaryParser(__BinaryParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BinaryParser(__BinaryParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryParser();

public:
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

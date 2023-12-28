#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectPositionE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalParseTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParseRecord)
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class PrimitiveArray;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ParseRecord);
// Type: System.Runtime.Serialization.Formatters.Binary::ParseRecord
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3248)), TypeDefinitionIndex(TypeDefinitionIndex(3250)), TypeDefinitionIndex(TypeDefinitionIndex(3247)),
// TypeDefinitionIndex(TypeDefinitionIndex(3253)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3252)), TypeDefinitionIndex(TypeDefinitionIndex(3249)),
// TypeDefinitionIndex(TypeDefinitionIndex(3251))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3291)) CS Name: ::System.Runtime.Serialization.Formatters.Binary::ParseRecord*
class CORDL_TYPE ParseRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field PRparseTypeEnum, offset 0x10, size 0x4
  __declspec(property(get = __get_PRparseTypeEnum, put = __set_PRparseTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum;

  /// @brief Field PRobjectTypeEnum, offset 0x14, size 0x4
  __declspec(property(get = __get_PRobjectTypeEnum, put = __set_PRobjectTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum;

  /// @brief Field PRarrayTypeEnum, offset 0x18, size 0x4
  __declspec(property(get = __get_PRarrayTypeEnum, put = __set_PRarrayTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum;

  /// @brief Field PRmemberTypeEnum, offset 0x1c, size 0x4
  __declspec(property(get = __get_PRmemberTypeEnum, put = __set_PRmemberTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum;

  /// @brief Field PRmemberValueEnum, offset 0x20, size 0x4
  __declspec(property(get = __get_PRmemberValueEnum, put = __set_PRmemberValueEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum;

  /// @brief Field PRobjectPositionEnum, offset 0x24, size 0x4
  __declspec(property(get = __get_PRobjectPositionEnum, put = __set_PRobjectPositionEnum))::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum;

  /// @brief Field PRname, offset 0x28, size 0x8
  __declspec(property(get = __get_PRname, put = __set_PRname))::StringW PRname;

  /// @brief Field PRvalue, offset 0x30, size 0x8
  __declspec(property(get = __get_PRvalue, put = __set_PRvalue))::StringW PRvalue;

  /// @brief Field PRvarValue, offset 0x38, size 0x8
  __declspec(property(get = __get_PRvarValue, put = __set_PRvarValue))::System::Object* PRvarValue;

  /// @brief Field PRkeyDt, offset 0x40, size 0x8
  __declspec(property(get = __get_PRkeyDt, put = __set_PRkeyDt))::StringW PRkeyDt;

  /// @brief Field PRdtType, offset 0x48, size 0x8
  __declspec(property(get = __get_PRdtType, put = __set_PRdtType))::System::Type* PRdtType;

  /// @brief Field PRdtTypeCode, offset 0x50, size 0x4
  __declspec(property(get = __get_PRdtTypeCode, put = __set_PRdtTypeCode))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode;

  /// @brief Field PRisEnum, offset 0x54, size 0x1
  __declspec(property(get = __get_PRisEnum, put = __set_PRisEnum)) bool PRisEnum;

  /// @brief Field PRobjectId, offset 0x58, size 0x8
  __declspec(property(get = __get_PRobjectId, put = __set_PRobjectId)) int64_t PRobjectId;

  /// @brief Field PRidRef, offset 0x60, size 0x8
  __declspec(property(get = __get_PRidRef, put = __set_PRidRef)) int64_t PRidRef;

  /// @brief Field PRarrayElementTypeString, offset 0x68, size 0x8
  __declspec(property(get = __get_PRarrayElementTypeString, put = __set_PRarrayElementTypeString))::StringW PRarrayElementTypeString;

  /// @brief Field PRarrayElementType, offset 0x70, size 0x8
  __declspec(property(get = __get_PRarrayElementType, put = __set_PRarrayElementType))::System::Type* PRarrayElementType;

  /// @brief Field PRisArrayVariant, offset 0x78, size 0x1
  __declspec(property(get = __get_PRisArrayVariant, put = __set_PRisArrayVariant)) bool PRisArrayVariant;

  /// @brief Field PRarrayElementTypeCode, offset 0x7c, size 0x4
  __declspec(property(get = __get_PRarrayElementTypeCode, put = __set_PRarrayElementTypeCode))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode;

  /// @brief Field PRrank, offset 0x80, size 0x4
  __declspec(property(get = __get_PRrank, put = __set_PRrank)) int32_t PRrank;

  /// @brief Field PRlengthA, offset 0x88, size 0x8
  __declspec(property(get = __get_PRlengthA, put = __set_PRlengthA))::ArrayW<int32_t, ::Array<int32_t>*> PRlengthA;

  /// @brief Field PRpositionA, offset 0x90, size 0x8
  __declspec(property(get = __get_PRpositionA, put = __set_PRpositionA))::ArrayW<int32_t, ::Array<int32_t>*> PRpositionA;

  /// @brief Field PRlowerBoundA, offset 0x98, size 0x8
  __declspec(property(get = __get_PRlowerBoundA, put = __set_PRlowerBoundA))::ArrayW<int32_t, ::Array<int32_t>*> PRlowerBoundA;

  /// @brief Field PRupperBoundA, offset 0xa0, size 0x8
  __declspec(property(get = __get_PRupperBoundA, put = __set_PRupperBoundA))::ArrayW<int32_t, ::Array<int32_t>*> PRupperBoundA;

  /// @brief Field PRindexMap, offset 0xa8, size 0x8
  __declspec(property(get = __get_PRindexMap, put = __set_PRindexMap))::ArrayW<int32_t, ::Array<int32_t>*> PRindexMap;

  /// @brief Field PRmemberIndex, offset 0xb0, size 0x4
  __declspec(property(get = __get_PRmemberIndex, put = __set_PRmemberIndex)) int32_t PRmemberIndex;

  /// @brief Field PRlinearlength, offset 0xb4, size 0x4
  __declspec(property(get = __get_PRlinearlength, put = __set_PRlinearlength)) int32_t PRlinearlength;

  /// @brief Field PRrectangularMap, offset 0xb8, size 0x8
  __declspec(property(get = __get_PRrectangularMap, put = __set_PRrectangularMap))::ArrayW<int32_t, ::Array<int32_t>*> PRrectangularMap;

  /// @brief Field PRisLowerBound, offset 0xc0, size 0x1
  __declspec(property(get = __get_PRisLowerBound, put = __set_PRisLowerBound)) bool PRisLowerBound;

  /// @brief Field PRtopId, offset 0xc8, size 0x8
  __declspec(property(get = __get_PRtopId, put = __set_PRtopId)) int64_t PRtopId;

  /// @brief Field PRheaderId, offset 0xd0, size 0x8
  __declspec(property(get = __get_PRheaderId, put = __set_PRheaderId)) int64_t PRheaderId;

  /// @brief Field PRobjectInfo, offset 0xd8, size 0x8
  __declspec(property(get = __get_PRobjectInfo, put = __set_PRobjectInfo))::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo;

  /// @brief Field PRisValueTypeFixup, offset 0xe0, size 0x1
  __declspec(property(get = __get_PRisValueTypeFixup, put = __set_PRisValueTypeFixup)) bool PRisValueTypeFixup;

  /// @brief Field PRnewObj, offset 0xe8, size 0x8
  __declspec(property(get = __get_PRnewObj, put = __set_PRnewObj))::System::Object* PRnewObj;

  /// @brief Field PRobjectA, offset 0xf0, size 0x8
  __declspec(property(get = __get_PRobjectA, put = __set_PRobjectA))::ArrayW<::System::Object*, ::Array<::System::Object*>*> PRobjectA;

  /// @brief Field PRprimitiveArray, offset 0xf8, size 0x8
  __declspec(property(get = __get_PRprimitiveArray, put = __set_PRprimitiveArray))::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray;

  /// @brief Field PRisRegistered, offset 0x100, size 0x1
  __declspec(property(get = __get_PRisRegistered, put = __set_PRisRegistered)) bool PRisRegistered;

  /// @brief Field PRmemberData, offset 0x108, size 0x8
  __declspec(property(get = __get_PRmemberData, put = __set_PRmemberData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> PRmemberData;

  /// @brief Field PRsi, offset 0x110, size 0x8
  __declspec(property(get = __get_PRsi, put = __set_PRsi))::System::Runtime::Serialization::SerializationInfo* PRsi;

  /// @brief Field PRnullCount, offset 0x118, size 0x4
  __declspec(property(get = __get_PRnullCount, put = __set_PRnullCount)) int32_t PRnullCount;

  /// @brief Field parseRecordIdCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_parseRecordIdCount, put = setStaticF_parseRecordIdCount)) int32_t parseRecordIdCount;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE& __get_PRparseTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const& __get_PRparseTypeEnum() const;

  constexpr void __set_PRparseTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& __get_PRobjectTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& __get_PRobjectTypeEnum() const;

  constexpr void __set_PRobjectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& __get_PRarrayTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& __get_PRarrayTypeEnum() const;

  constexpr void __set_PRarrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& __get_PRmemberTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& __get_PRmemberTypeEnum() const;

  constexpr void __set_PRmemberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& __get_PRmemberValueEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& __get_PRmemberValueEnum() const;

  constexpr void __set_PRmemberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE& __get_PRobjectPositionEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const& __get_PRobjectPositionEnum() const;

  constexpr void __set_PRobjectPositionEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);

  constexpr ::StringW& __get_PRname();

  constexpr ::StringW const& __get_PRname() const;

  constexpr void __set_PRname(::StringW value);

  constexpr ::StringW& __get_PRvalue();

  constexpr ::StringW const& __get_PRvalue() const;

  constexpr void __set_PRvalue(::StringW value);

  constexpr ::System::Object*& __get_PRvarValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_PRvarValue() const;

  constexpr void __set_PRvarValue(::System::Object* value);

  constexpr ::StringW& __get_PRkeyDt();

  constexpr ::StringW const& __get_PRkeyDt() const;

  constexpr void __set_PRkeyDt(::StringW value);

  constexpr ::System::Type*& __get_PRdtType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_PRdtType() const;

  constexpr void __set_PRdtType(::System::Type* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_PRdtTypeCode();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_PRdtTypeCode() const;

  constexpr void __set_PRdtTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr bool& __get_PRisEnum();

  constexpr bool const& __get_PRisEnum() const;

  constexpr void __set_PRisEnum(bool value);

  constexpr int64_t& __get_PRobjectId();

  constexpr int64_t const& __get_PRobjectId() const;

  constexpr void __set_PRobjectId(int64_t value);

  constexpr int64_t& __get_PRidRef();

  constexpr int64_t const& __get_PRidRef() const;

  constexpr void __set_PRidRef(int64_t value);

  constexpr ::StringW& __get_PRarrayElementTypeString();

  constexpr ::StringW const& __get_PRarrayElementTypeString() const;

  constexpr void __set_PRarrayElementTypeString(::StringW value);

  constexpr ::System::Type*& __get_PRarrayElementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_PRarrayElementType() const;

  constexpr void __set_PRarrayElementType(::System::Type* value);

  constexpr bool& __get_PRisArrayVariant();

  constexpr bool const& __get_PRisArrayVariant() const;

  constexpr void __set_PRisArrayVariant(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_PRarrayElementTypeCode();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_PRarrayElementTypeCode() const;

  constexpr void __set_PRarrayElementTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr int32_t& __get_PRrank();

  constexpr int32_t const& __get_PRrank() const;

  constexpr void __set_PRrank(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRlengthA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRlengthA() const;

  constexpr void __set_PRlengthA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRpositionA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRpositionA() const;

  constexpr void __set_PRpositionA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRlowerBoundA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRlowerBoundA() const;

  constexpr void __set_PRlowerBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRupperBoundA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRupperBoundA() const;

  constexpr void __set_PRupperBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRindexMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRindexMap() const;

  constexpr void __set_PRindexMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_PRmemberIndex();

  constexpr int32_t const& __get_PRmemberIndex() const;

  constexpr void __set_PRmemberIndex(int32_t value);

  constexpr int32_t& __get_PRlinearlength();

  constexpr int32_t const& __get_PRlinearlength() const;

  constexpr void __set_PRlinearlength(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_PRrectangularMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_PRrectangularMap() const;

  constexpr void __set_PRrectangularMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_PRisLowerBound();

  constexpr bool const& __get_PRisLowerBound() const;

  constexpr void __set_PRisLowerBound(bool value);

  constexpr int64_t& __get_PRtopId();

  constexpr int64_t const& __get_PRtopId() const;

  constexpr void __set_PRtopId(int64_t value);

  constexpr int64_t& __get_PRheaderId();

  constexpr int64_t const& __get_PRheaderId() const;

  constexpr void __set_PRheaderId(int64_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __get_PRobjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const& __get_PRobjectInfo() const;

  constexpr void __set_PRobjectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr bool& __get_PRisValueTypeFixup();

  constexpr bool const& __get_PRisValueTypeFixup() const;

  constexpr void __set_PRisValueTypeFixup(bool value);

  constexpr ::System::Object*& __get_PRnewObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_PRnewObj() const;

  constexpr void __set_PRnewObj(::System::Object* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_PRobjectA();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_PRobjectA() const;

  constexpr void __set_PRobjectA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*& __get_PRprimitiveArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*> const& __get_PRprimitiveArray() const;

  constexpr void __set_PRprimitiveArray(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* value);

  constexpr bool& __get_PRisRegistered();

  constexpr bool const& __get_PRisRegistered() const;

  constexpr void __set_PRisRegistered(bool value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_PRmemberData();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_PRmemberData() const;

  constexpr void __set_PRmemberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get_PRsi();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get_PRsi() const;

  constexpr void __set_PRsi(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr int32_t& __get_PRnullCount();

  constexpr int32_t const& __get_PRnullCount() const;

  constexpr void __set_PRnullCount(int32_t value);

  static inline void setStaticF_parseRecordIdCount(int32_t value);

  static inline int32_t getStaticF_parseRecordIdCount();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* New_ctor();

  /// @brief Method .ctor addr 0x24d222c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x24d4264 size 0x58 virtual false final false
  inline void Init();

  // Ctor Parameters [CppParam { name: "", ty: "ParseRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParseRecord(ParseRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParseRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParseRecord(ParseRecord const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseRecord();

public:
  /// @brief Field PRparseTypeEnum, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE ___PRparseTypeEnum;

  /// @brief Field PRobjectTypeEnum, offset: 0x14, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE ___PRobjectTypeEnum;

  /// @brief Field PRarrayTypeEnum, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE ___PRarrayTypeEnum;

  /// @brief Field PRmemberTypeEnum, offset: 0x1c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE ___PRmemberTypeEnum;

  /// @brief Field PRmemberValueEnum, offset: 0x20, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE ___PRmemberValueEnum;

  /// @brief Field PRobjectPositionEnum, offset: 0x24, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE ___PRobjectPositionEnum;

  /// @brief Field PRname, offset: 0x28, size: 0x8, def value: None
  ::StringW ___PRname;

  /// @brief Field PRvalue, offset: 0x30, size: 0x8, def value: None
  ::StringW ___PRvalue;

  /// @brief Field PRvarValue, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___PRvarValue;

  /// @brief Field PRkeyDt, offset: 0x40, size: 0x8, def value: None
  ::StringW ___PRkeyDt;

  /// @brief Field PRdtType, offset: 0x48, size: 0x8, def value: None
  ::System::Type* ___PRdtType;

  /// @brief Field PRdtTypeCode, offset: 0x50, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___PRdtTypeCode;

  /// @brief Field PRisEnum, offset: 0x54, size: 0x1, def value: None
  bool ___PRisEnum;

  /// @brief Field PRobjectId, offset: 0x58, size: 0x8, def value: None
  int64_t ___PRobjectId;

  /// @brief Field PRidRef, offset: 0x60, size: 0x8, def value: None
  int64_t ___PRidRef;

  /// @brief Field PRarrayElementTypeString, offset: 0x68, size: 0x8, def value: None
  ::StringW ___PRarrayElementTypeString;

  /// @brief Field PRarrayElementType, offset: 0x70, size: 0x8, def value: None
  ::System::Type* ___PRarrayElementType;

  /// @brief Field PRisArrayVariant, offset: 0x78, size: 0x1, def value: None
  bool ___PRisArrayVariant;

  /// @brief Field PRarrayElementTypeCode, offset: 0x7c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___PRarrayElementTypeCode;

  /// @brief Field PRrank, offset: 0x80, size: 0x4, def value: None
  int32_t ___PRrank;

  /// @brief Field PRlengthA, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRlengthA;

  /// @brief Field PRpositionA, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRpositionA;

  /// @brief Field PRlowerBoundA, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRlowerBoundA;

  /// @brief Field PRupperBoundA, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRupperBoundA;

  /// @brief Field PRindexMap, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRindexMap;

  /// @brief Field PRmemberIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___PRmemberIndex;

  /// @brief Field PRlinearlength, offset: 0xb4, size: 0x4, def value: None
  int32_t ___PRlinearlength;

  /// @brief Field PRrectangularMap, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___PRrectangularMap;

  /// @brief Field PRisLowerBound, offset: 0xc0, size: 0x1, def value: None
  bool ___PRisLowerBound;

  /// @brief Field PRtopId, offset: 0xc8, size: 0x8, def value: None
  int64_t ___PRtopId;

  /// @brief Field PRheaderId, offset: 0xd0, size: 0x8, def value: None
  int64_t ___PRheaderId;

  /// @brief Field PRobjectInfo, offset: 0xd8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* ___PRobjectInfo;

  /// @brief Field PRisValueTypeFixup, offset: 0xe0, size: 0x1, def value: None
  bool ___PRisValueTypeFixup;

  /// @brief Field PRnewObj, offset: 0xe8, size: 0x8, def value: None
  ::System::Object* ___PRnewObj;

  /// @brief Field PRobjectA, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___PRobjectA;

  /// @brief Field PRprimitiveArray, offset: 0xf8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* ___PRprimitiveArray;

  /// @brief Field PRisRegistered, offset: 0x100, size: 0x1, def value: None
  bool ___PRisRegistered;

  /// @brief Field PRmemberData, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___PRmemberData;

  /// @brief Field PRsi, offset: 0x110, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___PRsi;

  /// @brief Field PRnullCount, offset: 0x118, size: 0x4, def value: None
  int32_t ___PRnullCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ParseRecord, 0x120>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ParseRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");

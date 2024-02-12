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
class PrimitiveArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3247)), TypeDefinitionIndex(TypeDefinitionIndex(3248)),
// TypeDefinitionIndex(TypeDefinitionIndex(3249)), TypeDefinitionIndex(TypeDefinitionIndex(3250)), TypeDefinitionIndex(TypeDefinitionIndex(3251)), TypeDefinitionIndex(TypeDefinitionIndex(3252)),
// TypeDefinitionIndex(TypeDefinitionIndex(3253))] Self: TypeDefinitionIndex(TypeDefinitionIndex(3291)) CS Name: ::System.Runtime.Serialization.Formatters.Binary::ParseRecord*
class CORDL_TYPE ParseRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field PRparseTypeEnum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_PRparseTypeEnum, put = __cordl_internal_set_PRparseTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum;

  /// @brief Field PRobjectTypeEnum, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PRobjectTypeEnum,
                      put = __cordl_internal_set_PRobjectTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum;

  /// @brief Field PRarrayTypeEnum, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PRarrayTypeEnum, put = __cordl_internal_set_PRarrayTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum;

  /// @brief Field PRmemberTypeEnum, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_PRmemberTypeEnum,
                      put = __cordl_internal_set_PRmemberTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum;

  /// @brief Field PRmemberValueEnum, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_PRmemberValueEnum,
                      put = __cordl_internal_set_PRmemberValueEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum;

  /// @brief Field PRobjectPositionEnum, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_PRobjectPositionEnum,
                      put = __cordl_internal_set_PRobjectPositionEnum))::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum;

  /// @brief Field PRname, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PRname, put = __cordl_internal_set_PRname))::StringW PRname;

  /// @brief Field PRvalue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PRvalue, put = __cordl_internal_set_PRvalue))::StringW PRvalue;

  /// @brief Field PRvarValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_PRvarValue, put = __cordl_internal_set_PRvarValue))::System::Object* PRvarValue;

  /// @brief Field PRkeyDt, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_PRkeyDt, put = __cordl_internal_set_PRkeyDt))::StringW PRkeyDt;

  /// @brief Field PRdtType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_PRdtType, put = __cordl_internal_set_PRdtType))::System::Type* PRdtType;

  /// @brief Field PRdtTypeCode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_PRdtTypeCode, put = __cordl_internal_set_PRdtTypeCode))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode;

  /// @brief Field PRisEnum, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_PRisEnum, put = __cordl_internal_set_PRisEnum)) bool PRisEnum;

  /// @brief Field PRobjectId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PRobjectId, put = __cordl_internal_set_PRobjectId)) int64_t PRobjectId;

  /// @brief Field PRidRef, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PRidRef, put = __cordl_internal_set_PRidRef)) int64_t PRidRef;

  /// @brief Field PRarrayElementTypeString, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PRarrayElementTypeString, put = __cordl_internal_set_PRarrayElementTypeString))::StringW PRarrayElementTypeString;

  /// @brief Field PRarrayElementType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PRarrayElementType, put = __cordl_internal_set_PRarrayElementType))::System::Type* PRarrayElementType;

  /// @brief Field PRisArrayVariant, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_PRisArrayVariant, put = __cordl_internal_set_PRisArrayVariant)) bool PRisArrayVariant;

  /// @brief Field PRarrayElementTypeCode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_PRarrayElementTypeCode,
                      put = __cordl_internal_set_PRarrayElementTypeCode))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode;

  /// @brief Field PRrank, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_PRrank, put = __cordl_internal_set_PRrank)) int32_t PRrank;

  /// @brief Field PRlengthA, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_PRlengthA, put = __cordl_internal_set_PRlengthA))::ArrayW<int32_t, ::Array<int32_t>*> PRlengthA;

  /// @brief Field PRpositionA, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_PRpositionA, put = __cordl_internal_set_PRpositionA))::ArrayW<int32_t, ::Array<int32_t>*> PRpositionA;

  /// @brief Field PRlowerBoundA, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_PRlowerBoundA, put = __cordl_internal_set_PRlowerBoundA))::ArrayW<int32_t, ::Array<int32_t>*> PRlowerBoundA;

  /// @brief Field PRupperBoundA, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_PRupperBoundA, put = __cordl_internal_set_PRupperBoundA))::ArrayW<int32_t, ::Array<int32_t>*> PRupperBoundA;

  /// @brief Field PRindexMap, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRindexMap, put = __cordl_internal_set_PRindexMap))::ArrayW<int32_t, ::Array<int32_t>*> PRindexMap;

  /// @brief Field PRmemberIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_PRmemberIndex, put = __cordl_internal_set_PRmemberIndex)) int32_t PRmemberIndex;

  /// @brief Field PRlinearlength, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_PRlinearlength, put = __cordl_internal_set_PRlinearlength)) int32_t PRlinearlength;

  /// @brief Field PRrectangularMap, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRrectangularMap, put = __cordl_internal_set_PRrectangularMap))::ArrayW<int32_t, ::Array<int32_t>*> PRrectangularMap;

  /// @brief Field PRisLowerBound, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_PRisLowerBound, put = __cordl_internal_set_PRisLowerBound)) bool PRisLowerBound;

  /// @brief Field PRtopId, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRtopId, put = __cordl_internal_set_PRtopId)) int64_t PRtopId;

  /// @brief Field PRheaderId, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_PRheaderId, put = __cordl_internal_set_PRheaderId)) int64_t PRheaderId;

  /// @brief Field PRobjectInfo, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRobjectInfo, put = __cordl_internal_set_PRobjectInfo))::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo;

  /// @brief Field PRisValueTypeFixup, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_PRisValueTypeFixup, put = __cordl_internal_set_PRisValueTypeFixup)) bool PRisValueTypeFixup;

  /// @brief Field PRnewObj, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRnewObj, put = __cordl_internal_set_PRnewObj))::System::Object* PRnewObj;

  /// @brief Field PRobjectA, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_PRobjectA, put = __cordl_internal_set_PRobjectA))::ArrayW<::System::Object*, ::Array<::System::Object*>*> PRobjectA;

  /// @brief Field PRprimitiveArray, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_PRprimitiveArray, put = __cordl_internal_set_PRprimitiveArray))::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray;

  /// @brief Field PRisRegistered, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_PRisRegistered, put = __cordl_internal_set_PRisRegistered)) bool PRisRegistered;

  /// @brief Field PRmemberData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_PRmemberData, put = __cordl_internal_set_PRmemberData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> PRmemberData;

  /// @brief Field PRsi, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_PRsi, put = __cordl_internal_set_PRsi))::System::Runtime::Serialization::SerializationInfo* PRsi;

  /// @brief Field PRnullCount, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_PRnullCount, put = __cordl_internal_set_PRnullCount)) int32_t PRnullCount;

  /// @brief Field parseRecordIdCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_parseRecordIdCount, put = setStaticF_parseRecordIdCount)) int32_t parseRecordIdCount;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE& __cordl_internal_get_PRparseTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const& __cordl_internal_get_PRparseTypeEnum() const;

  constexpr void __cordl_internal_set_PRparseTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& __cordl_internal_get_PRobjectTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& __cordl_internal_get_PRobjectTypeEnum() const;

  constexpr void __cordl_internal_set_PRobjectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& __cordl_internal_get_PRarrayTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& __cordl_internal_get_PRarrayTypeEnum() const;

  constexpr void __cordl_internal_set_PRarrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& __cordl_internal_get_PRmemberTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& __cordl_internal_get_PRmemberTypeEnum() const;

  constexpr void __cordl_internal_set_PRmemberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& __cordl_internal_get_PRmemberValueEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& __cordl_internal_get_PRmemberValueEnum() const;

  constexpr void __cordl_internal_set_PRmemberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE& __cordl_internal_get_PRobjectPositionEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const& __cordl_internal_get_PRobjectPositionEnum() const;

  constexpr void __cordl_internal_set_PRobjectPositionEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);

  constexpr ::StringW& __cordl_internal_get_PRname();

  constexpr ::StringW const& __cordl_internal_get_PRname() const;

  constexpr void __cordl_internal_set_PRname(::StringW value);

  constexpr ::StringW& __cordl_internal_get_PRvalue();

  constexpr ::StringW const& __cordl_internal_get_PRvalue() const;

  constexpr void __cordl_internal_set_PRvalue(::StringW value);

  constexpr ::System::Object*& __cordl_internal_get_PRvarValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_PRvarValue() const;

  constexpr void __cordl_internal_set_PRvarValue(::System::Object* value);

  constexpr ::StringW& __cordl_internal_get_PRkeyDt();

  constexpr ::StringW const& __cordl_internal_get_PRkeyDt() const;

  constexpr void __cordl_internal_set_PRkeyDt(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_PRdtType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_PRdtType() const;

  constexpr void __cordl_internal_set_PRdtType(::System::Type* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_PRdtTypeCode();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_PRdtTypeCode() const;

  constexpr void __cordl_internal_set_PRdtTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr bool& __cordl_internal_get_PRisEnum();

  constexpr bool const& __cordl_internal_get_PRisEnum() const;

  constexpr void __cordl_internal_set_PRisEnum(bool value);

  constexpr int64_t& __cordl_internal_get_PRobjectId();

  constexpr int64_t const& __cordl_internal_get_PRobjectId() const;

  constexpr void __cordl_internal_set_PRobjectId(int64_t value);

  constexpr int64_t& __cordl_internal_get_PRidRef();

  constexpr int64_t const& __cordl_internal_get_PRidRef() const;

  constexpr void __cordl_internal_set_PRidRef(int64_t value);

  constexpr ::StringW& __cordl_internal_get_PRarrayElementTypeString();

  constexpr ::StringW const& __cordl_internal_get_PRarrayElementTypeString() const;

  constexpr void __cordl_internal_set_PRarrayElementTypeString(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_PRarrayElementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_PRarrayElementType() const;

  constexpr void __cordl_internal_set_PRarrayElementType(::System::Type* value);

  constexpr bool& __cordl_internal_get_PRisArrayVariant();

  constexpr bool const& __cordl_internal_get_PRisArrayVariant() const;

  constexpr void __cordl_internal_set_PRisArrayVariant(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_PRarrayElementTypeCode();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_PRarrayElementTypeCode() const;

  constexpr void __cordl_internal_set_PRarrayElementTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr int32_t& __cordl_internal_get_PRrank();

  constexpr int32_t const& __cordl_internal_get_PRrank() const;

  constexpr void __cordl_internal_set_PRrank(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRlengthA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRlengthA() const;

  constexpr void __cordl_internal_set_PRlengthA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRpositionA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRpositionA() const;

  constexpr void __cordl_internal_set_PRpositionA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRlowerBoundA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRlowerBoundA() const;

  constexpr void __cordl_internal_set_PRlowerBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRupperBoundA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRupperBoundA() const;

  constexpr void __cordl_internal_set_PRupperBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRindexMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRindexMap() const;

  constexpr void __cordl_internal_set_PRindexMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __cordl_internal_get_PRmemberIndex();

  constexpr int32_t const& __cordl_internal_get_PRmemberIndex() const;

  constexpr void __cordl_internal_set_PRmemberIndex(int32_t value);

  constexpr int32_t& __cordl_internal_get_PRlinearlength();

  constexpr int32_t const& __cordl_internal_get_PRlinearlength() const;

  constexpr void __cordl_internal_set_PRlinearlength(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_PRrectangularMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_PRrectangularMap() const;

  constexpr void __cordl_internal_set_PRrectangularMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __cordl_internal_get_PRisLowerBound();

  constexpr bool const& __cordl_internal_get_PRisLowerBound() const;

  constexpr void __cordl_internal_set_PRisLowerBound(bool value);

  constexpr int64_t& __cordl_internal_get_PRtopId();

  constexpr int64_t const& __cordl_internal_get_PRtopId() const;

  constexpr void __cordl_internal_set_PRtopId(int64_t value);

  constexpr int64_t& __cordl_internal_get_PRheaderId();

  constexpr int64_t const& __cordl_internal_get_PRheaderId() const;

  constexpr void __cordl_internal_set_PRheaderId(int64_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __cordl_internal_get_PRobjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const& __cordl_internal_get_PRobjectInfo() const;

  constexpr void __cordl_internal_set_PRobjectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr bool& __cordl_internal_get_PRisValueTypeFixup();

  constexpr bool const& __cordl_internal_get_PRisValueTypeFixup() const;

  constexpr void __cordl_internal_set_PRisValueTypeFixup(bool value);

  constexpr ::System::Object*& __cordl_internal_get_PRnewObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_PRnewObj() const;

  constexpr void __cordl_internal_set_PRnewObj(::System::Object* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_PRobjectA();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_PRobjectA() const;

  constexpr void __cordl_internal_set_PRobjectA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*& __cordl_internal_get_PRprimitiveArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*> const& __cordl_internal_get_PRprimitiveArray() const;

  constexpr void __cordl_internal_set_PRprimitiveArray(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* value);

  constexpr bool& __cordl_internal_get_PRisRegistered();

  constexpr bool const& __cordl_internal_get_PRisRegistered() const;

  constexpr void __cordl_internal_set_PRisRegistered(bool value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_PRmemberData();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_PRmemberData() const;

  constexpr void __cordl_internal_set_PRmemberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get_PRsi();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __cordl_internal_get_PRsi() const;

  constexpr void __cordl_internal_set_PRsi(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr int32_t& __cordl_internal_get_PRnullCount();

  constexpr int32_t const& __cordl_internal_get_PRnullCount() const;

  constexpr void __cordl_internal_set_PRnullCount(int32_t value);

  static inline void setStaticF_parseRecordIdCount(int32_t value);

  static inline int32_t getStaticF_parseRecordIdCount();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* New_ctor();

  /// @brief Method .ctor, addr 0x24f32a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x24f52d8, size 0x58, virtual false, abstract: false, final false
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

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRparseTypeEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRobjectTypeEnum) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRarrayTypeEnum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRmemberTypeEnum) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRmemberValueEnum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRobjectPositionEnum) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRname) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRvalue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRvarValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRkeyDt) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRdtType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRdtTypeCode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRisEnum) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRobjectId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRidRef) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRarrayElementTypeString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRarrayElementType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRisArrayVariant) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRarrayElementTypeCode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRrank) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRlengthA) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRpositionA) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRlowerBoundA) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRupperBoundA) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRindexMap) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRmemberIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRlinearlength) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRrectangularMap) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRisLowerBound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRtopId) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRheaderId) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRobjectInfo) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRisValueTypeFixup) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRnewObj) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRobjectA) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRprimitiveArray) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRisRegistered) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRmemberData) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRsi) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ___PRnullCount) == 0x118, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ParseRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");

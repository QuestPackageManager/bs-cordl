#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Converter)
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::Converter);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.Converter
class CORDL_TYPE Converter : public ::System::Object {
public:
  // Declarations
  /// @brief Field arrayTypeA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arrayTypeA, put = setStaticF_arrayTypeA)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> arrayTypeA;

  /// @brief Field codeA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_codeA, put = setStaticF_codeA)) ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE,
                                                                                ::Array<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>*>
      codeA;

  /// @brief Field primitiveTypeEnumLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_primitiveTypeEnumLength, put = setStaticF_primitiveTypeEnumLength)) int32_t primitiveTypeEnumLength;

  /// @brief Field typeA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeA, put = setStaticF_typeA)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeA;

  /// @brief Field typeCodeA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeCodeA, put = setStaticF_typeCodeA)) ::ArrayW<::System::TypeCode, ::Array<::System::TypeCode>*> typeCodeA;

  /// @brief Field typeofBoolean, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofBoolean, put = setStaticF_typeofBoolean)) ::System::Type* typeofBoolean;

  /// @brief Field typeofBooleanArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofBooleanArray, put = setStaticF_typeofBooleanArray)) ::System::Type* typeofBooleanArray;

  /// @brief Field typeofByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofByte, put = setStaticF_typeofByte)) ::System::Type* typeofByte;

  /// @brief Field typeofByteArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofByteArray, put = setStaticF_typeofByteArray)) ::System::Type* typeofByteArray;

  /// @brief Field typeofChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofChar, put = setStaticF_typeofChar)) ::System::Type* typeofChar;

  /// @brief Field typeofCharArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofCharArray, put = setStaticF_typeofCharArray)) ::System::Type* typeofCharArray;

  /// @brief Field typeofConverter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofConverter, put = setStaticF_typeofConverter)) ::System::Type* typeofConverter;

  /// @brief Field typeofDateTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDateTime, put = setStaticF_typeofDateTime)) ::System::Type* typeofDateTime;

  /// @brief Field typeofDateTimeArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDateTimeArray, put = setStaticF_typeofDateTimeArray)) ::System::Type* typeofDateTimeArray;

  /// @brief Field typeofDecimal, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDecimal, put = setStaticF_typeofDecimal)) ::System::Type* typeofDecimal;

  /// @brief Field typeofDecimalArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDecimalArray, put = setStaticF_typeofDecimalArray)) ::System::Type* typeofDecimalArray;

  /// @brief Field typeofDouble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDouble, put = setStaticF_typeofDouble)) ::System::Type* typeofDouble;

  /// @brief Field typeofDoubleArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofDoubleArray, put = setStaticF_typeofDoubleArray)) ::System::Type* typeofDoubleArray;

  /// @brief Field typeofISerializable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofISerializable, put = setStaticF_typeofISerializable)) ::System::Type* typeofISerializable;

  /// @brief Field typeofInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt16, put = setStaticF_typeofInt16)) ::System::Type* typeofInt16;

  /// @brief Field typeofInt16Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt16Array, put = setStaticF_typeofInt16Array)) ::System::Type* typeofInt16Array;

  /// @brief Field typeofInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt32, put = setStaticF_typeofInt32)) ::System::Type* typeofInt32;

  /// @brief Field typeofInt32Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt32Array, put = setStaticF_typeofInt32Array)) ::System::Type* typeofInt32Array;

  /// @brief Field typeofInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt64, put = setStaticF_typeofInt64)) ::System::Type* typeofInt64;

  /// @brief Field typeofInt64Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofInt64Array, put = setStaticF_typeofInt64Array)) ::System::Type* typeofInt64Array;

  /// @brief Field typeofMarshalByRefObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofMarshalByRefObject, put = setStaticF_typeofMarshalByRefObject)) ::System::Type* typeofMarshalByRefObject;

  /// @brief Field typeofObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofObject, put = setStaticF_typeofObject)) ::System::Type* typeofObject;

  /// @brief Field typeofObjectArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofObjectArray, put = setStaticF_typeofObjectArray)) ::System::Type* typeofObjectArray;

  /// @brief Field typeofSByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofSByte, put = setStaticF_typeofSByte)) ::System::Type* typeofSByte;

  /// @brief Field typeofSByteArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofSByteArray, put = setStaticF_typeofSByteArray)) ::System::Type* typeofSByteArray;

  /// @brief Field typeofSingle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofSingle, put = setStaticF_typeofSingle)) ::System::Type* typeofSingle;

  /// @brief Field typeofSingleArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofSingleArray, put = setStaticF_typeofSingleArray)) ::System::Type* typeofSingleArray;

  /// @brief Field typeofString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofString, put = setStaticF_typeofString)) ::System::Type* typeofString;

  /// @brief Field typeofStringArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofStringArray, put = setStaticF_typeofStringArray)) ::System::Type* typeofStringArray;

  /// @brief Field typeofSystemVoid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofSystemVoid, put = setStaticF_typeofSystemVoid)) ::System::Type* typeofSystemVoid;

  /// @brief Field typeofTimeSpan, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofTimeSpan, put = setStaticF_typeofTimeSpan)) ::System::Type* typeofTimeSpan;

  /// @brief Field typeofTimeSpanArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofTimeSpanArray, put = setStaticF_typeofTimeSpanArray)) ::System::Type* typeofTimeSpanArray;

  /// @brief Field typeofTypeArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofTypeArray, put = setStaticF_typeofTypeArray)) ::System::Type* typeofTypeArray;

  /// @brief Field typeofUInt16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt16, put = setStaticF_typeofUInt16)) ::System::Type* typeofUInt16;

  /// @brief Field typeofUInt16Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt16Array, put = setStaticF_typeofUInt16Array)) ::System::Type* typeofUInt16Array;

  /// @brief Field typeofUInt32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt32, put = setStaticF_typeofUInt32)) ::System::Type* typeofUInt32;

  /// @brief Field typeofUInt32Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt32Array, put = setStaticF_typeofUInt32Array)) ::System::Type* typeofUInt32Array;

  /// @brief Field typeofUInt64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt64, put = setStaticF_typeofUInt64)) ::System::Type* typeofUInt64;

  /// @brief Field typeofUInt64Array, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeofUInt64Array, put = setStaticF_typeofUInt64Array)) ::System::Type* typeofUInt64Array;

  /// @brief Field urtAssembly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_urtAssembly, put = setStaticF_urtAssembly)) ::System::Reflection::Assembly* urtAssembly;

  /// @brief Field urtAssemblyString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_urtAssemblyString, put = setStaticF_urtAssemblyString)) ::StringW urtAssemblyString;

  /// @brief Field valueA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_valueA, put = setStaticF_valueA)) ::ArrayW<::StringW, ::Array<::StringW>*> valueA;

  /// @brief Method CreatePrimitiveArray, addr 0x3d03248, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, int32_t length);

  /// @brief Method FromString, addr 0x3d03a18, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Object* FromString(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method InitArrayTypeA, addr 0x3d02ad8, size 0x3b8, virtual false, abstract: false, final false
  static inline void InitArrayTypeA();

  /// @brief Method InitCodeA, addr 0x3d03870, size 0x1a8, virtual false, abstract: false, final false
  static inline void InitCodeA();

  /// @brief Method InitTypeA, addr 0x3d02e90, size 0x3b8, virtual false, abstract: false, final false
  static inline void InitTypeA();

  /// @brief Method InitTypeCodeA, addr 0x3d03624, size 0x194, virtual false, abstract: false, final false
  static inline void InitTypeCodeA();

  /// @brief Method InitValueA, addr 0x3d03368, size 0x2bc, virtual false, abstract: false, final false
  static inline void InitValueA();

  /// @brief Method IsPrimitiveArray, addr 0x3cfed24, size 0x2f8, virtual false, abstract: false, final false
  static inline bool IsPrimitiveArray(::System::Type* type, ::ByRef<::System::Object*> typeInformation);

  /// @brief Method IsWriteAsByteArray, addr 0x3d02a90, size 0x24, virtual false, abstract: false, final false
  static inline bool IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method ToArrayType, addr 0x3cffbf4, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method ToCode, addr 0x3cff1ec, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type);

  /// @brief Method ToComType, addr 0x3cffa84, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method ToPrimitiveTypeEnum, addr 0x3d029d8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode typeCode);

  /// @brief Method ToType, addr 0x3cffb3c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method ToTypeCode, addr 0x3d037b8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  /// @brief Method TypeLength, addr 0x3d02ab4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_arrayTypeA();

  static inline ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::Array<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>*>
  getStaticF_codeA();

  static inline int32_t getStaticF_primitiveTypeEnumLength();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_typeA();

  static inline ::ArrayW<::System::TypeCode, ::Array<::System::TypeCode>*> getStaticF_typeCodeA();

  static inline ::System::Type* getStaticF_typeofBoolean();

  static inline ::System::Type* getStaticF_typeofBooleanArray();

  static inline ::System::Type* getStaticF_typeofByte();

  static inline ::System::Type* getStaticF_typeofByteArray();

  static inline ::System::Type* getStaticF_typeofChar();

  static inline ::System::Type* getStaticF_typeofCharArray();

  static inline ::System::Type* getStaticF_typeofConverter();

  static inline ::System::Type* getStaticF_typeofDateTime();

  static inline ::System::Type* getStaticF_typeofDateTimeArray();

  static inline ::System::Type* getStaticF_typeofDecimal();

  static inline ::System::Type* getStaticF_typeofDecimalArray();

  static inline ::System::Type* getStaticF_typeofDouble();

  static inline ::System::Type* getStaticF_typeofDoubleArray();

  static inline ::System::Type* getStaticF_typeofISerializable();

  static inline ::System::Type* getStaticF_typeofInt16();

  static inline ::System::Type* getStaticF_typeofInt16Array();

  static inline ::System::Type* getStaticF_typeofInt32();

  static inline ::System::Type* getStaticF_typeofInt32Array();

  static inline ::System::Type* getStaticF_typeofInt64();

  static inline ::System::Type* getStaticF_typeofInt64Array();

  static inline ::System::Type* getStaticF_typeofMarshalByRefObject();

  static inline ::System::Type* getStaticF_typeofObject();

  static inline ::System::Type* getStaticF_typeofObjectArray();

  static inline ::System::Type* getStaticF_typeofSByte();

  static inline ::System::Type* getStaticF_typeofSByteArray();

  static inline ::System::Type* getStaticF_typeofSingle();

  static inline ::System::Type* getStaticF_typeofSingleArray();

  static inline ::System::Type* getStaticF_typeofString();

  static inline ::System::Type* getStaticF_typeofStringArray();

  static inline ::System::Type* getStaticF_typeofSystemVoid();

  static inline ::System::Type* getStaticF_typeofTimeSpan();

  static inline ::System::Type* getStaticF_typeofTimeSpanArray();

  static inline ::System::Type* getStaticF_typeofTypeArray();

  static inline ::System::Type* getStaticF_typeofUInt16();

  static inline ::System::Type* getStaticF_typeofUInt16Array();

  static inline ::System::Type* getStaticF_typeofUInt32();

  static inline ::System::Type* getStaticF_typeofUInt32Array();

  static inline ::System::Type* getStaticF_typeofUInt64();

  static inline ::System::Type* getStaticF_typeofUInt64Array();

  static inline ::System::Reflection::Assembly* getStaticF_urtAssembly();

  static inline ::StringW getStaticF_urtAssemblyString();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_valueA();

  static inline void setStaticF_arrayTypeA(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_codeA(
      ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::Array<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>*> value);

  static inline void setStaticF_primitiveTypeEnumLength(int32_t value);

  static inline void setStaticF_typeA(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_typeCodeA(::ArrayW<::System::TypeCode, ::Array<::System::TypeCode>*> value);

  static inline void setStaticF_typeofBoolean(::System::Type* value);

  static inline void setStaticF_typeofBooleanArray(::System::Type* value);

  static inline void setStaticF_typeofByte(::System::Type* value);

  static inline void setStaticF_typeofByteArray(::System::Type* value);

  static inline void setStaticF_typeofChar(::System::Type* value);

  static inline void setStaticF_typeofCharArray(::System::Type* value);

  static inline void setStaticF_typeofConverter(::System::Type* value);

  static inline void setStaticF_typeofDateTime(::System::Type* value);

  static inline void setStaticF_typeofDateTimeArray(::System::Type* value);

  static inline void setStaticF_typeofDecimal(::System::Type* value);

  static inline void setStaticF_typeofDecimalArray(::System::Type* value);

  static inline void setStaticF_typeofDouble(::System::Type* value);

  static inline void setStaticF_typeofDoubleArray(::System::Type* value);

  static inline void setStaticF_typeofISerializable(::System::Type* value);

  static inline void setStaticF_typeofInt16(::System::Type* value);

  static inline void setStaticF_typeofInt16Array(::System::Type* value);

  static inline void setStaticF_typeofInt32(::System::Type* value);

  static inline void setStaticF_typeofInt32Array(::System::Type* value);

  static inline void setStaticF_typeofInt64(::System::Type* value);

  static inline void setStaticF_typeofInt64Array(::System::Type* value);

  static inline void setStaticF_typeofMarshalByRefObject(::System::Type* value);

  static inline void setStaticF_typeofObject(::System::Type* value);

  static inline void setStaticF_typeofObjectArray(::System::Type* value);

  static inline void setStaticF_typeofSByte(::System::Type* value);

  static inline void setStaticF_typeofSByteArray(::System::Type* value);

  static inline void setStaticF_typeofSingle(::System::Type* value);

  static inline void setStaticF_typeofSingleArray(::System::Type* value);

  static inline void setStaticF_typeofString(::System::Type* value);

  static inline void setStaticF_typeofStringArray(::System::Type* value);

  static inline void setStaticF_typeofSystemVoid(::System::Type* value);

  static inline void setStaticF_typeofTimeSpan(::System::Type* value);

  static inline void setStaticF_typeofTimeSpanArray(::System::Type* value);

  static inline void setStaticF_typeofTypeArray(::System::Type* value);

  static inline void setStaticF_typeofUInt16(::System::Type* value);

  static inline void setStaticF_typeofUInt16Array(::System::Type* value);

  static inline void setStaticF_typeofUInt32(::System::Type* value);

  static inline void setStaticF_typeofUInt32Array(::System::Type* value);

  static inline void setStaticF_typeofUInt64(::System::Type* value);

  static inline void setStaticF_typeofUInt64Array(::System::Type* value);

  static inline void setStaticF_urtAssembly(::System::Reflection::Assembly* value);

  static inline void setStaticF_urtAssemblyString(::StringW value);

  static inline void setStaticF_valueA(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Converter(Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Converter(Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::Converter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::Converter*, "System.Runtime.Serialization.Formatters.Binary", "Converter");

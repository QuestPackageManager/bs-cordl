#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveArray)
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class PrimitiveArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray);
// Type: System.Runtime.Serialization.Formatters.Binary::PrimitiveArray
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3253)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3299))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::PrimitiveArray*
class CORDL_TYPE PrimitiveArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field code, offset 0x10, size 0x4
  __declspec(property(get = __get_code, put = __set_code))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code;

  /// @brief Field booleanA, offset 0x18, size 0x8
  __declspec(property(get = __get_booleanA, put = __set_booleanA))::ArrayW<bool, ::Array<bool>*> booleanA;

  /// @brief Field charA, offset 0x20, size 0x8
  __declspec(property(get = __get_charA, put = __set_charA))::ArrayW<char16_t, ::Array<char16_t>*> charA;

  /// @brief Field doubleA, offset 0x28, size 0x8
  __declspec(property(get = __get_doubleA, put = __set_doubleA))::ArrayW<double_t, ::Array<double_t>*> doubleA;

  /// @brief Field int16A, offset 0x30, size 0x8
  __declspec(property(get = __get_int16A, put = __set_int16A))::ArrayW<int16_t, ::Array<int16_t>*> int16A;

  /// @brief Field int32A, offset 0x38, size 0x8
  __declspec(property(get = __get_int32A, put = __set_int32A))::ArrayW<int32_t, ::Array<int32_t>*> int32A;

  /// @brief Field int64A, offset 0x40, size 0x8
  __declspec(property(get = __get_int64A, put = __set_int64A))::ArrayW<int64_t, ::Array<int64_t>*> int64A;

  /// @brief Field sbyteA, offset 0x48, size 0x8
  __declspec(property(get = __get_sbyteA, put = __set_sbyteA))::ArrayW<int8_t, ::Array<int8_t>*> sbyteA;

  /// @brief Field singleA, offset 0x50, size 0x8
  __declspec(property(get = __get_singleA, put = __set_singleA))::ArrayW<float_t, ::Array<float_t>*> singleA;

  /// @brief Field uint16A, offset 0x58, size 0x8
  __declspec(property(get = __get_uint16A, put = __set_uint16A))::ArrayW<uint16_t, ::Array<uint16_t>*> uint16A;

  /// @brief Field uint32A, offset 0x60, size 0x8
  __declspec(property(get = __get_uint32A, put = __set_uint32A))::ArrayW<uint32_t, ::Array<uint32_t>*> uint32A;

  /// @brief Field uint64A, offset 0x68, size 0x8
  __declspec(property(get = __get_uint64A, put = __set_uint64A))::ArrayW<uint64_t, ::Array<uint64_t>*> uint64A;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_code();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_code() const;

  constexpr void __set_code(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_booleanA();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_booleanA() const;

  constexpr void __set_booleanA(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_charA();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_charA() const;

  constexpr void __set_charA(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __get_doubleA();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __get_doubleA() const;

  constexpr void __set_doubleA(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_int16A();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_int16A() const;

  constexpr void __set_int16A(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_int32A();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_int32A() const;

  constexpr void __set_int32A(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get_int64A();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get_int64A() const;

  constexpr void __set_int64A(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<int8_t, ::Array<int8_t>*>& __get_sbyteA();

  constexpr ::ArrayW<int8_t, ::Array<int8_t>*> const& __get_sbyteA() const;

  constexpr void __set_sbyteA(::ArrayW<int8_t, ::Array<int8_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_singleA();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_singleA() const;

  constexpr void __set_singleA(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __get_uint16A();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __get_uint16A() const;

  constexpr void __set_uint16A(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_uint32A();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_uint32A() const;

  constexpr void __set_uint32A(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_uint64A();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_uint64A() const;

  constexpr void __set_uint64A(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code,
                                                                                               ::System::Array* array);

  /// @brief Method .ctor addr 0x24cdc8c size 0x34 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array);

  /// @brief Method Init addr 0x24d61c8 size 0x320 virtual false final false
  inline void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array);

  /// @brief Method SetValue addr 0x24ce594 size 0x3bc virtual false final false
  inline void SetValue(::StringW value, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveArray(PrimitiveArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveArray(PrimitiveArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveArray();

public:
  /// @brief Field code, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___code;

  /// @brief Field booleanA, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___booleanA;

  /// @brief Field charA, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___charA;

  /// @brief Field doubleA, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<double_t, ::Array<double_t>*> ___doubleA;

  /// @brief Field int16A, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___int16A;

  /// @brief Field int32A, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___int32A;

  /// @brief Field int64A, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___int64A;

  /// @brief Field sbyteA, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int8_t, ::Array<int8_t>*> ___sbyteA;

  /// @brief Field singleA, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___singleA;

  /// @brief Field uint16A, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___uint16A;

  /// @brief Field uint32A, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___uint32A;

  /// @brief Field uint64A, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___uint64A;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");

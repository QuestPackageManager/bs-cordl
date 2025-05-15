#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/PrimitiveArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveArray)
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class PrimitiveArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray
class CORDL_TYPE PrimitiveArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field booleanA, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_booleanA, put = __cordl_internal_set_booleanA)) ::ArrayW<bool, ::Array<bool>*> booleanA;

  /// @brief Field charA, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_charA, put = __cordl_internal_set_charA)) ::ArrayW<char16_t, ::Array<char16_t>*> charA;

  /// @brief Field code, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code)) ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code;

  /// @brief Field doubleA, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_doubleA, put = __cordl_internal_set_doubleA)) ::ArrayW<double_t, ::Array<double_t>*> doubleA;

  /// @brief Field int16A, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_int16A, put = __cordl_internal_set_int16A)) ::ArrayW<int16_t, ::Array<int16_t>*> int16A;

  /// @brief Field int32A, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_int32A, put = __cordl_internal_set_int32A)) ::ArrayW<int32_t, ::Array<int32_t>*> int32A;

  /// @brief Field int64A, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_int64A, put = __cordl_internal_set_int64A)) ::ArrayW<int64_t, ::Array<int64_t>*> int64A;

  /// @brief Field sbyteA, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_sbyteA, put = __cordl_internal_set_sbyteA)) ::ArrayW<int8_t, ::Array<int8_t>*> sbyteA;

  /// @brief Field singleA, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_singleA, put = __cordl_internal_set_singleA)) ::ArrayW<float_t, ::Array<float_t>*> singleA;

  /// @brief Field uint16A, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_uint16A, put = __cordl_internal_set_uint16A)) ::ArrayW<uint16_t, ::Array<uint16_t>*> uint16A;

  /// @brief Field uint32A, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_uint32A, put = __cordl_internal_set_uint32A)) ::ArrayW<uint32_t, ::Array<uint32_t>*> uint32A;

  /// @brief Field uint64A, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_uint64A, put = __cordl_internal_set_uint64A)) ::ArrayW<uint64_t, ::Array<uint64_t>*> uint64A;

  /// @brief Method Init, addr 0x3d13c14, size 0x320, virtual false, abstract: false, final false
  inline void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array);

  static inline ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code,
                                                                                               ::System::Array* array);

  /// @brief Method SetValue, addr 0x3d0c1a8, size 0x400, virtual false, abstract: false, final false
  inline void SetValue(::StringW value, int32_t index);

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_booleanA() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_booleanA();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_charA() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_charA();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_code() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_code();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __cordl_internal_get_doubleA() const;

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __cordl_internal_get_doubleA();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_int16A() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_int16A();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_int32A() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_int32A();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_int64A() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_int64A();

  constexpr ::ArrayW<int8_t, ::Array<int8_t>*> const& __cordl_internal_get_sbyteA() const;

  constexpr ::ArrayW<int8_t, ::Array<int8_t>*>& __cordl_internal_get_sbyteA();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_singleA() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_singleA();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_uint16A() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_uint16A();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_uint32A() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_uint32A();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_uint64A() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_uint64A();

  constexpr void __cordl_internal_set_booleanA(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_charA(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_code(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr void __cordl_internal_set_doubleA(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr void __cordl_internal_set_int16A(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_int32A(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_int64A(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set_sbyteA(::ArrayW<int8_t, ::Array<int8_t>*> value);

  constexpr void __cordl_internal_set_singleA(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_uint16A(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void __cordl_internal_set_uint32A(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_uint64A(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x3d0b89c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveArray(PrimitiveArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveArray(PrimitiveArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3299 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___booleanA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___charA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___doubleA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___int16A) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___int32A) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___int64A) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___sbyteA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___singleA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___uint16A) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___uint32A) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, ___uint64A) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");

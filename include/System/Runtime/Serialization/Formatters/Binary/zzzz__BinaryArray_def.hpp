#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryArray)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryArray);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryArray
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3244)), TypeDefinitionIndex(TypeDefinitionIndex(3245)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(3243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3270)) CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryArray*
class CORDL_TYPE BinaryArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __get_objectId, put = __set_objectId)) int32_t objectId;

  /// @brief Field rank, offset 0x14, size 0x4
  __declspec(property(get = __get_rank, put = __set_rank)) int32_t rank;

  /// @brief Field lengthA, offset 0x18, size 0x8
  __declspec(property(get = __get_lengthA, put = __set_lengthA))::ArrayW<int32_t, ::Array<int32_t>*> lengthA;

  /// @brief Field lowerBoundA, offset 0x20, size 0x8
  __declspec(property(get = __get_lowerBoundA, put = __set_lowerBoundA))::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA;

  /// @brief Field binaryTypeEnum, offset 0x28, size 0x4
  __declspec(property(get = __get_binaryTypeEnum, put = __set_binaryTypeEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;

  /// @brief Field typeInformation, offset 0x30, size 0x8
  __declspec(property(get = __get_typeInformation, put = __set_typeInformation))::System::Object* typeInformation;

  /// @brief Field assemId, offset 0x38, size 0x4
  __declspec(property(get = __get_assemId, put = __set_assemId)) int32_t assemId;

  /// @brief Field binaryHeaderEnum, offset 0x3c, size 0x4
  __declspec(property(get = __get_binaryHeaderEnum, put = __set_binaryHeaderEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field binaryArrayTypeEnum, offset 0x40, size 0x4
  __declspec(property(get = __get_binaryArrayTypeEnum, put = __set_binaryArrayTypeEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum;

  constexpr int32_t& __get_objectId();

  constexpr int32_t const& __get_objectId() const;

  constexpr void __set_objectId(int32_t value);

  constexpr int32_t& __get_rank();

  constexpr int32_t const& __get_rank() const;

  constexpr void __set_rank(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_lengthA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_lengthA() const;

  constexpr void __set_lengthA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_lowerBoundA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_lowerBoundA() const;

  constexpr void __set_lowerBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_binaryTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_binaryTypeEnum() const;

  constexpr void __set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr ::System::Object*& __get_typeInformation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_typeInformation() const;

  constexpr void __set_typeInformation(::System::Object* value);

  constexpr int32_t& __get_assemId();

  constexpr int32_t const& __get_assemId() const;

  constexpr void __set_assemId(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __get_binaryHeaderEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __get_binaryHeaderEnum() const;

  constexpr void __set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum& __get_binaryArrayTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const& __get_binaryArrayTypeEnum() const;

  constexpr void __set_binaryArrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* New_ctor();

  /// @brief Method .ctor, addr 0x24c2c9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method .ctor, addr 0x24c2ca4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Set, addr 0x24c2ccc, size 0x54, virtual false, abstract: false, final false
  inline void Set(int32_t objectId, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> lengthA, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA,
                  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation,
                  ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int32_t assemId);

  /// @brief Method Write, addr 0x24c2d20, size 0x2d8, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read, addr 0x24c2ff8, size 0x300, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  // Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryArray(BinaryArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryArray(BinaryArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryArray();

public:
  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field rank, offset: 0x14, size: 0x4, def value: None
  int32_t ___rank;

  /// @brief Field lengthA, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___lengthA;

  /// @brief Field lowerBoundA, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___lowerBoundA;

  /// @brief Field binaryTypeEnum, offset: 0x28, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ___binaryTypeEnum;

  /// @brief Field typeInformation, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___typeInformation;

  /// @brief Field assemId, offset: 0x38, size: 0x4, def value: None
  int32_t ___assemId;

  /// @brief Field binaryHeaderEnum, offset: 0x3c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum ___binaryHeaderEnum;

  /// @brief Field binaryArrayTypeEnum, offset: 0x40, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum ___binaryArrayTypeEnum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryArray, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___rank) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___lengthA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___lowerBoundA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryTypeEnum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___typeInformation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___assemId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryHeaderEnum) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryArrayTypeEnum) == 0x40, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArray*, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");

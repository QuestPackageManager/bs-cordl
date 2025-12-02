#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum,
// System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryArray
class CORDL_TYPE BinaryArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int32_t assemId;

  /// @brief Field binaryArrayTypeEnum, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryArrayTypeEnum,
                      put = __cordl_internal_set_binaryArrayTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum;

  /// @brief Field binaryHeaderEnum, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryHeaderEnum,
                      put = __cordl_internal_set_binaryHeaderEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field binaryTypeEnum, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryTypeEnum, put = __cordl_internal_set_binaryTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;

  /// @brief Field lengthA, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lengthA, put = __cordl_internal_set_lengthA)) ::ArrayW<int32_t, ::Array<int32_t>*> lengthA;

  /// @brief Field lowerBoundA, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lowerBoundA, put = __cordl_internal_set_lowerBoundA)) ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA;

  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Field rank, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rank, put = __cordl_internal_set_rank)) int32_t rank;

  /// @brief Field typeInformation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInformation, put = __cordl_internal_set_typeInformation)) ::System::Object* typeInformation;

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Read, addr 0x5942da4, size 0x3cc, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x5942a80, size 0x40, virtual false, abstract: false, final false
  inline void Set(int32_t objectId, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> lengthA, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA,
                  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation,
                  ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int32_t assemId);

  /// @brief Method Write, addr 0x5942ac0, size 0x2e4, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_assemId() const;

  constexpr int32_t& __cordl_internal_get_assemId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const& __cordl_internal_get_binaryArrayTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum& __cordl_internal_get_binaryArrayTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __cordl_internal_get_binaryHeaderEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __cordl_internal_get_binaryHeaderEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __cordl_internal_get_binaryTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __cordl_internal_get_binaryTypeEnum();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_lengthA() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_lengthA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_lowerBoundA() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_lowerBoundA();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr int32_t const& __cordl_internal_get_rank() const;

  constexpr int32_t& __cordl_internal_get_rank();

  constexpr ::System::Object* const& __cordl_internal_get_typeInformation() const;

  constexpr ::System::Object*& __cordl_internal_get_typeInformation();

  constexpr void __cordl_internal_set_assemId(int32_t value);

  constexpr void __cordl_internal_set_binaryArrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);

  constexpr void __cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr void __cordl_internal_set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr void __cordl_internal_set_lengthA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_lowerBoundA(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  constexpr void __cordl_internal_set_rank(int32_t value);

  constexpr void __cordl_internal_set_typeInformation(::System::Object* value);

  /// @brief Method .ctor, addr 0x5942a74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5942a78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryArray(BinaryArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryArray(BinaryArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3283 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___rank) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___lengthA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___lowerBoundA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryTypeEnum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___typeInformation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___assemId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryHeaderEnum) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryArray, ___binaryArrayTypeEnum) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryArray, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArray*, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");

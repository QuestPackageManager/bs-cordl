#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator)
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigIntegerCalculator);
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.BigIntegerCalculator
class CORDL_TYPE BigIntegerCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllocationThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AllocationThreshold, put = setStaticF_AllocationThreshold)) int32_t AllocationThreshold;

  /// @brief Field MultiplyThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MultiplyThreshold, put = setStaticF_MultiplyThreshold)) int32_t MultiplyThreshold;

  /// @brief Field ReducerThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ReducerThreshold, put = setStaticF_ReducerThreshold)) int32_t ReducerThreshold;

  /// @brief Field SquareThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SquareThreshold, put = setStaticF_SquareThreshold)) int32_t SquareThreshold;

  /// @brief Method Add, addr 0x422bd0c, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Add, addr 0x422bc34, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Add, addr 0x422e158, size 0x84, virtual false, abstract: false, final false
  static inline void Add(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                         int32_t bitsLength);

  /// @brief Method AddDivisor, addr 0x422e748, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t AddDivisor(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  /// @brief Method AddSelf, addr 0x422e1dc, size 0x74, virtual false, abstract: false, final false
  static inline void AddSelf(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  /// @brief Method Compare, addr 0x422c0ec, size 0x80, virtual false, abstract: false, final false
  static inline int32_t Compare(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method CreateCopy, addr 0x422e2c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> CreateCopy(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Divide, addr 0x422d938, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Divide(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Divide, addr 0x422d88c, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Divide(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Divide, addr 0x422e344, size 0x2f8, virtual false, abstract: false, final false
  static inline void Divide(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                            int32_t bitsLength);

  /// @brief Method DivideGuessTooBig, addr 0x422e6b4, size 0x4c, virtual false, abstract: false, final false
  static inline bool DivideGuessTooBig(uint64_t q, uint64_t valHi, uint32_t valLo, uint32_t divHi, uint32_t divLo);

  /// @brief Method LeadingZeros, addr 0x422e63c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t LeadingZeros(uint32_t value);

  /// @brief Method Multiply, addr 0x422d650, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Multiply, addr 0x422d4ac, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Multiply, addr 0x422ebf0, size 0x494, virtual false, abstract: false, final false
  static inline void Multiply(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                              int32_t bitsLength);

  /// @brief Method Remainder, addr 0x422dbd0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Remainder(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Remainder, addr 0x422db78, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t Remainder(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Square, addr 0x422d590, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Square(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Square, addr 0x422e788, size 0x3a8, virtual false, abstract: false, final false
  static inline void Square(::cordl_internals::Ptr<uint32_t> value, int32_t valueLength, ::cordl_internals::Ptr<uint32_t> bits, int32_t bitsLength);

  /// @brief Method Subtract, addr 0x422c16c, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Subtract, addr 0x422c034, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Subtract, addr 0x422e250, size 0x78, virtual false, abstract: false, final false
  static inline void Subtract(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                              int32_t bitsLength);

  /// @brief Method SubtractCore, addr 0x422eb30, size 0xc0, virtual false, abstract: false, final false
  static inline void SubtractCore(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> core,
                                  int32_t coreLength);

  /// @brief Method SubtractDivisor, addr 0x422e700, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t SubtractDivisor(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, uint64_t q);

  static inline int32_t getStaticF_AllocationThreshold();

  static inline int32_t getStaticF_MultiplyThreshold();

  static inline int32_t getStaticF_ReducerThreshold();

  static inline int32_t getStaticF_SquareThreshold();

  static inline void setStaticF_AllocationThreshold(int32_t value);

  static inline void setStaticF_MultiplyThreshold(int32_t value);

  static inline void setStaticF_ReducerThreshold(int32_t value);

  static inline void setStaticF_SquareThreshold(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigIntegerCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigIntegerCalculator(BigIntegerCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigIntegerCalculator(BigIntegerCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigIntegerCalculator, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::BigIntegerCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator*, "System.Numerics", "BigIntegerCalculator");

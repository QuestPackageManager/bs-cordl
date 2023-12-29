#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator)
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigIntegerCalculator);
// Type: System.Numerics::BigIntegerCalculator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15634))
// CS Name: ::System.Numerics::BigIntegerCalculator*
class CORDL_TYPE BigIntegerCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field ReducerThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ReducerThreshold, put = setStaticF_ReducerThreshold)) int32_t ReducerThreshold;

  /// @brief Field SquareThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SquareThreshold, put = setStaticF_SquareThreshold)) int32_t SquareThreshold;

  /// @brief Field AllocationThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AllocationThreshold, put = setStaticF_AllocationThreshold)) int32_t AllocationThreshold;

  /// @brief Field MultiplyThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MultiplyThreshold, put = setStaticF_MultiplyThreshold)) int32_t MultiplyThreshold;

  static inline void setStaticF_ReducerThreshold(int32_t value);

  static inline int32_t getStaticF_ReducerThreshold();

  static inline void setStaticF_SquareThreshold(int32_t value);

  static inline int32_t getStaticF_SquareThreshold();

  static inline void setStaticF_AllocationThreshold(int32_t value);

  static inline int32_t getStaticF_AllocationThreshold();

  static inline void setStaticF_MultiplyThreshold(int32_t value);

  static inline int32_t getStaticF_MultiplyThreshold();

  /// @brief Method Add addr 0x26c9b28 size 0xd8 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Add addr 0x26c9c00 size 0xf8 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Add addr 0x26ca9d8 size 0x88 virtual false final false
  static inline void Add(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                         int32_t bitsLength);

  /// @brief Method Subtract addr 0x26c9e78 size 0xb8 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Subtract addr 0x26c9fb0 size 0x100 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Subtract addr 0x26caa60 size 0x78 virtual false final false
  static inline void Subtract(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                              int32_t bitsLength);

  /// @brief Method Compare addr 0x26c9f30 size 0x80 virtual false final false
  static inline int32_t Compare(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigIntegerCalculator(BigIntegerCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigIntegerCalculator(BigIntegerCalculator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigIntegerCalculator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigIntegerCalculator, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::BigIntegerCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator*, "System.Numerics", "BigIntegerCalculator");

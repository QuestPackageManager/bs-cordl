#pragma once
// IWYU pragma private; include "System/Numerics/NumericsHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericsHelpers)
// Forward declare root types
namespace System::Numerics {
class NumericsHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::NumericsHelpers);
// Type: System.Numerics::NumericsHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::NumericsHelpers*
class CORDL_TYPE NumericsHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method Abs, addr 0x2daf8f8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Abs(int32_t a);

  /// @brief Method CbitHighZero, addr 0x2db06c8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t CbitHighZero(uint32_t u);

  /// @brief Method CbitHighZero, addr 0x2db4c14, size 0x24, virtual false, abstract: false, final false
  static inline int32_t CbitHighZero(uint64_t uu);

  /// @brief Method CombineHash, addr 0x2daebd4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t n1, int32_t n2);

  /// @brief Method CombineHash, addr 0x2db4c38, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t CombineHash(uint32_t u1, uint32_t u2);

  /// @brief Method DangerousMakeTwosComplement, addr 0x2dae6f0, size 0xbc, virtual false, abstract: false, final false
  static inline void DangerousMakeTwosComplement(::ArrayW<uint32_t, ::Array<uint32_t>*> d);

  /// @brief Method GetDoubleFromParts, addr 0x2db0744, size 0xa0, virtual false, abstract: false, final false
  static inline double_t GetDoubleFromParts(int32_t sign, int32_t exp, uint64_t man);

  /// @brief Method GetDoubleParts, addr 0x2dadeac, size 0x7c, virtual false, abstract: false, final false
  static inline void GetDoubleParts(double_t dbl, ByRef<int32_t> sign, ByRef<int32_t> exp, ByRef<uint64_t> man, ByRef<bool> fFinite);

  /// @brief Method MakeUlong, addr 0x2daed7c, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t MakeUlong(uint32_t uHi, uint32_t uLo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericsHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericsHelpers(NumericsHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericsHelpers(NumericsHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::NumericsHelpers, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::NumericsHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::NumericsHelpers*, "System.Numerics", "NumericsHelpers");

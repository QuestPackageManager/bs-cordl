#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimalityTests)
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTests;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::PrimalityTests);
// Type: Mono.Math.Prime::PrimalityTests
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Math::Prime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2293))
// CS Name: ::Mono.Math.Prime::PrimalityTests*
class CORDL_TYPE PrimalityTests : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSPPRounds, addr 0x242b42c, size 0x194, virtual false, abstract: false, final false
  static inline int32_t GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);

  /// @brief Method Test, addr 0x242a578, size 0x4c, virtual false, abstract: false, final false
  static inline bool Test(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence);

  /// @brief Method RabinMillerTest, addr 0x242b78c, size 0x290, virtual false, abstract: false, final false
  static inline bool RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence);

  /// @brief Method SmallPrimeSppTest, addr 0x242b5c0, size 0x1cc, virtual false, abstract: false, final false
  static inline bool SmallPrimeSppTest(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimalityTests(PrimalityTests&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimalityTests(PrimalityTests const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimalityTests();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::PrimalityTests, 0x10>, "Size mismatch!");

} // namespace Mono::Math::Prime
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTests);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");

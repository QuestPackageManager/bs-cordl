#pragma once
// IWYU pragma private; include "Mono/Math/Prime/PrimalityTests.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimalityTests)
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTests;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::PrimalityTests);
// Dependencies System.Object
namespace Mono::Math::Prime {
// Is value type: false
// CS Name: Mono.Math.Prime.PrimalityTests
class CORDL_TYPE PrimalityTests : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSPPRounds, addr 0x3c54eb0, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);

  /// @brief Method RabinMillerTest, addr 0x3c5503c, size 0x298, virtual false, abstract: false, final false
  static inline bool RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimalityTests();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimalityTests(PrimalityTests&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimalityTests(PrimalityTests const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::PrimalityTests, 0x10>, "Size mismatch!");

} // namespace Mono::Math::Prime
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTests);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");

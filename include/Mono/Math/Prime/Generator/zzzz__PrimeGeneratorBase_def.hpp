#pragma once
// IWYU pragma private; include "Mono/Math/Prime/Generator/PrimeGeneratorBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimeGeneratorBase)
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math::Prime {
class PrimalityTest;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime::Generator {
class PrimeGeneratorBase;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::Generator::PrimeGeneratorBase);
// Dependencies System.Object
namespace Mono::Math::Prime::Generator {
// Is value type: false
// CS Name: Mono.Math.Prime.Generator.PrimeGeneratorBase
class CORDL_TYPE PrimeGeneratorBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Confidence)) ::Mono::Math::Prime::ConfidenceFactor Confidence;

  __declspec(property(get = get_PrimalityTest)) ::Mono::Math::Prime::PrimalityTest* PrimalityTest;

  __declspec(property(get = get_TrialDivisionBounds)) int32_t TrialDivisionBounds;

  /// @brief Method GenerateNewPrime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);

  static inline ::Mono::Math::Prime::Generator::PrimeGeneratorBase* New_ctor();

  /// @brief Method .ctor, addr 0x3c5391c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Confidence, addr 0x3c538a0, size 0x8, virtual true, abstract: false, final false
  inline ::Mono::Math::Prime::ConfidenceFactor get_Confidence();

  /// @brief Method get_PrimalityTest, addr 0x3c538a8, size 0x6c, virtual true, abstract: false, final false
  inline ::Mono::Math::Prime::PrimalityTest* get_PrimalityTest();

  /// @brief Method get_TrialDivisionBounds, addr 0x3c53914, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_TrialDivisionBounds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimeGeneratorBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimeGeneratorBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimeGeneratorBase(PrimeGeneratorBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimeGeneratorBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimeGeneratorBase(PrimeGeneratorBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15991 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::Generator::PrimeGeneratorBase, 0x10>, "Size mismatch!");

} // namespace Mono::Math::Prime::Generator
NEED_NO_BOX(::Mono::Math::Prime::Generator::PrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::PrimeGeneratorBase*, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");

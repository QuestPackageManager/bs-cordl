#pragma once
// IWYU pragma private; include "Mono/Math/Prime/Generator/SequentialSearchPrimeGeneratorBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequentialSearchPrimeGeneratorBase)
namespace Mono::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Math::Prime::Generator {
class SequentialSearchPrimeGeneratorBase;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase);
// Type: Mono.Math.Prime.Generator::SequentialSearchPrimeGeneratorBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math::Prime::Generator {
// Is value type: false
// CS Name: ::Mono.Math.Prime.Generator::SequentialSearchPrimeGeneratorBase*
class CORDL_TYPE SequentialSearchPrimeGeneratorBase : public ::Mono::Math::Prime::Generator::PrimeGeneratorBase {
public:
  // Declarations
  /// @brief Method GenerateNewPrime, addr 0x3c0d0e0, size 0x10, virtual true, abstract: false, final false
  inline ::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);

  /// @brief Method GenerateNewPrime, addr 0x3c0d0f0, size 0x2e4, virtual true, abstract: false, final false
  inline ::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits, ::System::Object* context);

  /// @brief Method GenerateSearchBase, addr 0x3c0d06c, size 0x74, virtual true, abstract: false, final false
  inline ::Mono::Math::BigInteger* GenerateSearchBase(int32_t bits, ::System::Object* context);

  /// @brief Method IsPrimeAcceptable, addr 0x3c0d3d4, size 0x8, virtual true, abstract: false, final false
  inline bool IsPrimeAcceptable(::Mono::Math::BigInteger* bi, ::System::Object* context);

  static inline ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase* New_ctor();

  /// @brief Method .ctor, addr 0x3c0bb74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SequentialSearchPrimeGeneratorBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase, 0x10>, "Size mismatch!");

} // namespace Mono::Math::Prime::Generator
NEED_NO_BOX(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");

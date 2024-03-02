#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GlvEndomorphism)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvEndomorphism
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvEndomorphism*
class CORDL_TYPE GlvEndomorphism {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
  constexpr operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept;

  /// @brief Method DecomposeScalar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "GlvEndomorphism", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvEndomorphism(GlvEndomorphism&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvEndomorphism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvEndomorphism(GlvEndomorphism const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvEndomorphism");

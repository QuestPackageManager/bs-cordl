#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/GlvTypeAParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlvTypeAParameters)
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Endo.GlvTypeAParameters
class CORDL_TYPE GlvTypeAParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_I)) ::Org::BouncyCastle::Math::BigInteger* I;

  __declspec(property(get = get_Lambda)) ::Org::BouncyCastle::Math::BigInteger* Lambda;

  __declspec(property(get = get_SplitParams)) ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* SplitParams;

  /// @brief Field m_i, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_i, put = __cordl_internal_set_m_i)) ::Org::BouncyCastle::Math::BigInteger* m_i;

  /// @brief Field m_lambda, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lambda, put = __cordl_internal_set_m_lambda)) ::Org::BouncyCastle::Math::BigInteger* m_lambda;

  /// @brief Field m_splitParams, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_splitParams, put = __cordl_internal_set_m_splitParams)) ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* m_splitParams;

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                                  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_m_i() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_i();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_m_lambda() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_lambda();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* const& __cordl_internal_get_m_splitParams() const;

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& __cordl_internal_get_m_splitParams();

  constexpr void __cordl_internal_set_m_i(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value);

  /// @brief Method .ctor, addr 0x33e6900, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  /// @brief Method get_I, addr 0x33e690c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_I();

  /// @brief Method get_Lambda, addr 0x33e6914, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Lambda();

  /// @brief Method get_SplitParams, addr 0x33e691c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* get_SplitParams();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvTypeAParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvTypeAParameters(GlvTypeAParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvTypeAParameters(GlvTypeAParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1522 };

  /// @brief Field m_i, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_i;

  /// @brief Field m_lambda, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_lambda;

  /// @brief Field m_splitParams, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* ___m_splitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, ___m_i) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, ___m_lambda) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, ___m_splitParams) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAParameters");

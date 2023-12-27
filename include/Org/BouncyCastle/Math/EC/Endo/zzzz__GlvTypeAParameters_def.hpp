#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlvTypeAParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeAParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1522))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvTypeAParameters*
class CORDL_TYPE GlvTypeAParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_i, offset 0x10, size 0x8
  __declspec(property(get = __get_m_i, put = __set_m_i))::Org::BouncyCastle::Math::BigInteger* m_i;

  /// @brief Field m_lambda, offset 0x18, size 0x8
  __declspec(property(get = __get_m_lambda, put = __set_m_lambda))::Org::BouncyCastle::Math::BigInteger* m_lambda;

  /// @brief Field m_splitParams, offset 0x20, size 0x8
  __declspec(property(get = __get_m_splitParams, put = __set_m_splitParams))::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* m_splitParams;

  __declspec(property(get = get_I))::Org::BouncyCastle::Math::BigInteger* I;

  __declspec(property(get = get_Lambda))::Org::BouncyCastle::Math::BigInteger* Lambda;

  __declspec(property(get = get_SplitParams))::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* SplitParams;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_i();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_i() const;

  constexpr void __set_m_i(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_lambda();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_lambda() const;

  constexpr void __set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& __get_m_splitParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*> const& __get_m_splitParams() const;

  constexpr void __set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value);

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                                  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  /// @brief Method .ctor addr 0x103550c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  /// @brief Method get_I addr 0x1035548 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_I();

  /// @brief Method get_Lambda addr 0x1035550 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Lambda();

  /// @brief Method get_SplitParams addr 0x1035558 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* get_SplitParams();

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvTypeAParameters(GlvTypeAParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvTypeAParameters(GlvTypeAParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvTypeAParameters();

public:
  /// @brief Field m_i, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_i;

  /// @brief Field m_lambda, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_lambda;

  /// @brief Field m_splitParams, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* ___m_splitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAParameters");

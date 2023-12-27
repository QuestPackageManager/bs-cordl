#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1048))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalParameters*
class CORDL_TYPE ElGamalParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field l, offset 0x20, size 0x4
  __declspec(property(get = __get_l, put = __set_l)) int32_t l;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_L)) int32_t L;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_l();

  constexpr int32_t const& __get_l() const;

  constexpr void __set_l(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor addr 0xf357c8 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, int32_t l);

  /// @brief Method .ctor addr 0xf357d0 size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, int32_t l);

  /// @brief Method get_P addr 0xf35884 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_G addr 0xf3588c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_L addr 0xf35894 size 0x8 virtual false final false
  inline int32_t get_L();

  /// @brief Method Equals addr 0xf3589c size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf35938 size 0x74 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* other);

  /// @brief Method GetHashCode addr 0xf359ac size 0x58 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalParameters(ElGamalParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalParameters(ElGamalParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalParameters();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field l, offset: 0x20, size: 0x4, def value: None
  int32_t ___l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalParameters");

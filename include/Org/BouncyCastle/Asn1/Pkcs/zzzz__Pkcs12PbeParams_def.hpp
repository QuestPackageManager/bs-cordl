#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs12PbeParams)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pkcs12PbeParams;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams);
// Type: Org.BouncyCastle.Asn1.Pkcs::Pkcs12PbeParams
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(244))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::Pkcs12PbeParams*
class CORDL_TYPE Pkcs12PbeParams : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field iterations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_iterations, put = __cordl_internal_set_iterations))::Org::BouncyCastle::Asn1::DerInteger* iterations;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  __declspec(property(get = get_Iterations))::Org::BouncyCastle::Math::BigInteger* Iterations;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_iterations();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_iterations() const;

  constexpr void __cordl_internal_set_iterations(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_iv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_iv() const;

  constexpr void __cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  /// @brief Method .ctor, addr 0xf8ab80, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf8ac34, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xf8ad1c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* GetInstance(::System::Object* obj);

  /// @brief Method get_Iterations, addr 0xf8aea4, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Iterations();

  /// @brief Method GetIV, addr 0xf8aec0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method ToAsn1Object, addr 0xf8aee0, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12PbeParams(Pkcs12PbeParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12PbeParams(Pkcs12PbeParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12PbeParams();

public:
  /// @brief Field iterations, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterations;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams, ___iterations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams, ___iv) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*, "Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams");

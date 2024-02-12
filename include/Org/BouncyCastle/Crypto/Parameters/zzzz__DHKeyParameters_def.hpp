#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHKeyParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DHKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1020))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1021))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DHKeyParameters*
class CORDL_TYPE DHKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;

  /// @brief Field algorithmOid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithmOid, put = __cordl_internal_set_algorithmOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* Parameters;

  __declspec(property(get = get_AlgorithmOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AlgorithmOid;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_algorithmOid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_algorithmOid() const;

  constexpr void __cordl_internal_set_algorithmOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method .ctor, addr 0xf5b334, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters,
                                                                                   ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  /// @brief Method .ctor, addr 0xf5b3b8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  /// @brief Method get_Parameters, addr 0xf5b3f4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();

  /// @brief Method get_AlgorithmOid, addr 0xf5b3fc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AlgorithmOid();

  /// @brief Method Equals, addr 0xf5b404, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xf5b4a0, size 0x50, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* other);

  /// @brief Method GetHashCode, addr 0xf5b4f0, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DHKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKeyParameters(DHKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKeyParameters(DHKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKeyParameters();

public:
  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___parameters;

  /// @brief Field algorithmOid, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithmOid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters, ___parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters, ___algorithmOid) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyParameters");

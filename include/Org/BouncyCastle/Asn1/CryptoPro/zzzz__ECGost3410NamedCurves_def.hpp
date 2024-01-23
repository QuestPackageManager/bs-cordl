#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ECGost3410NamedCurves)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class ECGost3410NamedCurves;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves);
// Type: Org.BouncyCastle.Asn1.CryptoPro::ECGost3410NamedCurves
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(126))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::ECGost3410NamedCurves*
class CORDL_TYPE ECGost3410NamedCurves : public ::System::Object {
public:
  // Declarations
  /// @brief Field objIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds))::System::Collections::IDictionary* objIds;

  /// @brief Field parameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_parameters, put = setStaticF_parameters))::System::Collections::IDictionary* parameters;

  /// @brief Field names, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_names, put = setStaticF_names))::System::Collections::IDictionary* names;

  static inline void setStaticF_objIds(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  static inline void setStaticF_parameters(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_parameters();

  static inline void setStaticF_names(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_names();

  /// @brief Method ConfigureBasepoint, addr 0xe89a84, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::BigInteger* x,
                                                                           ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method ConfigureCurve, addr 0xe89b1c, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves* New_ctor();

  /// @brief Method .ctor, addr 0xe89b20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetByOid, addr 0xe8ba30, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetByOidX9, addr 0xe8bb4c, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOidX9(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method get_Names, addr 0xe8bd18, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_Names();

  /// @brief Method GetByName, addr 0xe8be24, size 0x1ec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetByName(::StringW name);

  /// @brief Method GetByNameX9, addr 0xe8c010, size 0x144, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByNameX9(::StringW name);

  /// @brief Method GetName, addr 0xe8c154, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid, addr 0xe8c254, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410NamedCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECGost3410NamedCurves(ECGost3410NamedCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410NamedCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECGost3410NamedCurves(ECGost3410NamedCurves const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECGost3410NamedCurves();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*, "Org.BouncyCastle.Asn1.CryptoPro", "ECGost3410NamedCurves");

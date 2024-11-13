#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OcspUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspUtilities);
// Type: Org.BouncyCastle.Ocsp::OcspUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Ocsp::OcspUtilities*
class CORDL_TYPE OcspUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field noParams, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noParams, put = setStaticF_noParams)) ::Org::BouncyCastle::Utilities::Collections::ISet* noParams;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_oids, put = setStaticF_oids)) ::System::Collections::IDictionary* oids;

  /// @brief Method GetAlgorithmName, addr 0x24e6ac0, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetAlgorithmOid, addr 0x24ec258, size 0x208, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetAlgorithmOid(::StringW algorithmName);

  /// @brief Method GetSigAlgID, addr 0x24e8f84, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid);

  static inline ::Org::BouncyCastle::Ocsp::OcspUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x24ef220, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams();

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  /// @brief Method get_AlgNames, addr 0x24e9274, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_AlgNames();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspUtilities(OcspUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspUtilities(OcspUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspUtilities*, "Org.BouncyCastle.Ocsp", "OcspUtilities");

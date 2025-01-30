#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/X509Utilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Utilities)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
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
namespace Org::BouncyCastle::Crypto::Operators {
class X509Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::X509Utilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.X509Utilities
class CORDL_TYPE X509Utilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field derNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_derNull, put = setStaticF_derNull)) ::Org::BouncyCastle::Asn1::Asn1Null* derNull;

  /// @brief Field exParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_exParams, put = setStaticF_exParams)) ::System::Collections::IDictionary* exParams;

  /// @brief Field noParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noParams, put = setStaticF_noParams)) ::Org::BouncyCastle::Utilities::Collections::ISet* noParams;

  /// @brief Method CreatePssParams, addr 0x23b3894, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int32_t saltSize);

  /// @brief Method GetAlgNames, addr 0x23b44fc, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* GetAlgNames();

  /// @brief Method GetAlgorithmOid, addr 0x23b3fc4, size 0x208, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetAlgorithmOid(::StringW algorithmName);

  /// @brief Method GetDigestAlgName, addr 0x23b39b4, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID);

  /// @brief Method GetSigAlgID, addr 0x23b41cc, size 0x330, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid, ::StringW algorithmName);

  /// @brief Method GetSignatureName, addr 0x23b3d24, size 0x2a0, virtual false, abstract: false, final false
  static inline ::StringW GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);

  static inline ::Org::BouncyCastle::Crypto::Operators::X509Utilities* New_ctor();

  /// @brief Method .ctor, addr 0x23b4604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::Org::BouncyCastle::Asn1::Asn1Null* getStaticF_derNull();

  static inline ::System::Collections::IDictionary* getStaticF_exParams();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_derNull(::Org::BouncyCastle::Asn1::Asn1Null* value);

  static inline void setStaticF_exParams(::System::Collections::IDictionary* value);

  static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Utilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Utilities(X509Utilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Utilities(X509Utilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 990 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::X509Utilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::X509Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::X509Utilities*, "Org.BouncyCastle.Crypto.Operators", "X509Utilities");

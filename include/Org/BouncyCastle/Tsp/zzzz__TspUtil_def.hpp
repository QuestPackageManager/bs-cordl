#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TspUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TspUtil)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspUtil;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspUtil);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TspUtil
class CORDL_TYPE TspUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList)) ::System::Collections::IList* EmptyList;

  /// @brief Field EmptySet, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptySet, put = setStaticF_EmptySet)) ::Org::BouncyCastle::Utilities::Collections::ISet* EmptySet;

  /// @brief Field digestLengths, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestLengths, put = setStaticF_digestLengths)) ::System::Collections::IDictionary* digestLengths;

  /// @brief Field digestNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestNames, put = setStaticF_digestNames)) ::System::Collections::IDictionary* digestNames;

  /// @brief Method CreateDigestInstance, addr 0x352ad84, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigestInstance(::StringW digestAlgOID);

  /// @brief Method GetCriticalExtensionOids, addr 0x352ae18, size 0xb4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetDigestAlgName, addr 0x352ac84, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetDigestAlgName(::StringW digestAlgOID);

  /// @brief Method GetDigestLength, addr 0x35242d4, size 0x1d4, virtual false, abstract: false, final false
  static inline int32_t GetDigestLength(::StringW digestAlgOID);

  /// @brief Method GetExtensionOids, addr 0x3524540, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x352b1c4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetSignatureTimestamps, addr 0x352a310, size 0x974, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation* signerInfo);

  static inline ::Org::BouncyCastle::Tsp::TspUtil* New_ctor();

  /// @brief Method ValidateCertificate, addr 0x3527a30, size 0x378, virtual false, abstract: false, final false
  static inline void ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x352b278, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IList* getStaticF_EmptyList();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_EmptySet();

  static inline ::System::Collections::IDictionary* getStaticF_digestLengths();

  static inline ::System::Collections::IDictionary* getStaticF_digestNames();

  static inline void setStaticF_EmptyList(::System::Collections::IList* value);

  static inline void setStaticF_EmptySet(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_digestLengths(::System::Collections::IDictionary* value);

  static inline void setStaticF_digestNames(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TspUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TspUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TspUtil(TspUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TspUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TspUtil(TspUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspUtil, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspUtil);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspUtil*, "Org.BouncyCastle.Tsp", "TspUtil");

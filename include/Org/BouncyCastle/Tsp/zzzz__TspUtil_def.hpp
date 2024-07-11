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
// Type: Org.BouncyCastle.Tsp::TspUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Tsp::TspUtil*
class CORDL_TYPE TspUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList))::System::Collections::IList* EmptyList;

  /// @brief Field EmptySet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptySet, put = setStaticF_EmptySet))::Org::BouncyCastle::Utilities::Collections::ISet* EmptySet;

  /// @brief Field digestLengths, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_digestLengths, put = setStaticF_digestLengths))::System::Collections::IDictionary* digestLengths;

  /// @brief Field digestNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_digestNames, put = setStaticF_digestNames))::System::Collections::IDictionary* digestNames;

  /// @brief Method CreateDigestInstance, addr 0x13c8ca4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigestInstance(::StringW digestAlgOID);

  /// @brief Method GetCriticalExtensionOids, addr 0x13c8d30, size 0xb4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetDigestAlgName, addr 0x13c8b9c, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetDigestAlgName(::StringW digestAlgOID);

  /// @brief Method GetDigestLength, addr 0x13c1f14, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t GetDigestLength(::StringW digestAlgOID);

  /// @brief Method GetExtensionOids, addr 0x13c2190, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetNonCriticalExtensionOids, addr 0x13c9108, size 0xb4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetSignatureTimestamps, addr 0x13c81d4, size 0x9c8, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation* signerInfo);

  static inline ::Org::BouncyCastle::Tsp::TspUtil* New_ctor();

  /// @brief Method ValidateCertificate, addr 0x13c5780, size 0x374, virtual false, abstract: false, final false
  static inline void ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x13c91bc, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspUtil, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspUtil);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspUtil*, "Org.BouncyCastle.Tsp", "TspUtil");

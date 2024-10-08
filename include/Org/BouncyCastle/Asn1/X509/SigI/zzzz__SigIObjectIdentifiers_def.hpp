#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SigI/SigIObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SigIObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class SigIObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509.SigI::SigIObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509.SigI::SigIObjectIdentifiers*
class CORDL_TYPE SigIObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdSigI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigI, put = setStaticF_IdSigI)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigI;

  /// @brief Field IdSigICP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigICP, put = setStaticF_IdSigICP)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigICP;

  /// @brief Field IdSigICPSigConform, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigICPSigConform, put = setStaticF_IdSigICPSigConform)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigICPSigConform;

  /// @brief Field IdSigIKP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigIKP, put = setStaticF_IdSigIKP)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigIKP;

  /// @brief Field IdSigIKPDirectoryService, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigIKPDirectoryService, put = setStaticF_IdSigIKPDirectoryService)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigIKPDirectoryService;

  /// @brief Field IdSigION, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigION, put = setStaticF_IdSigION)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigION;

  /// @brief Field IdSigIONPersonalData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdSigIONPersonalData, put = setStaticF_IdSigIONPersonalData)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSigIONPersonalData;

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x24c4370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigI();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigICP();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigICPSigConform();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigIKP();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigIKPDirectoryService();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigION();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSigIONPersonalData();

  static inline void setStaticF_IdSigI(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigICP(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigICPSigConform(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigIKP(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigIKPDirectoryService(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigION(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSigIONPersonalData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SigIObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SigIObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SigIObjectIdentifiers(SigIObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SigIObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SigIObjectIdentifiers(SigIObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SigI::SigIObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509.SigI", "SigIObjectIdentifiers");

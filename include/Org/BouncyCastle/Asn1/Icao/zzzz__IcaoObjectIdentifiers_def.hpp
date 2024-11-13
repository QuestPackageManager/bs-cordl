#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/IcaoObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IcaoObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class IcaoObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Icao::IcaoObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Icao::IcaoObjectIdentifiers*
class CORDL_TYPE IcaoObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdIcao, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcao, put = setStaticF_IdIcao)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcao;

  /// @brief Field IdIcaoAAProtocolObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoAAProtocolObject, put = setStaticF_IdIcaoAAProtocolObject)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoAAProtocolObject;

  /// @brief Field IdIcaoCscaMasterList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoCscaMasterList, put = setStaticF_IdIcaoCscaMasterList)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoCscaMasterList;

  /// @brief Field IdIcaoCscaMasterListSigningKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoCscaMasterListSigningKey,
                             put = setStaticF_IdIcaoCscaMasterListSigningKey)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoCscaMasterListSigningKey;

  /// @brief Field IdIcaoDocumentTypeList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoDocumentTypeList, put = setStaticF_IdIcaoDocumentTypeList)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoDocumentTypeList;

  /// @brief Field IdIcaoExtensions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoExtensions, put = setStaticF_IdIcaoExtensions)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoExtensions;

  /// @brief Field IdIcaoExtensionsNamechangekeyrollover, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoExtensionsNamechangekeyrollover,
                             put = setStaticF_IdIcaoExtensionsNamechangekeyrollover)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoExtensionsNamechangekeyrollover;

  /// @brief Field IdIcaoLdsSecurityObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoLdsSecurityObject, put = setStaticF_IdIcaoLdsSecurityObject)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoLdsSecurityObject;

  /// @brief Field IdIcaoMrtd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoMrtd, put = setStaticF_IdIcaoMrtd)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoMrtd;

  /// @brief Field IdIcaoMrtdSecurity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdIcaoMrtdSecurity, put = setStaticF_IdIcaoMrtdSecurity)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdIcaoMrtdSecurity;

  static inline ::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x23c5788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcao();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoAAProtocolObject();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoCscaMasterList();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoCscaMasterListSigningKey();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoDocumentTypeList();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoExtensions();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoExtensionsNamechangekeyrollover();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoLdsSecurityObject();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoMrtd();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoMrtdSecurity();

  static inline void setStaticF_IdIcao(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoAAProtocolObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoCscaMasterList(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoCscaMasterListSigningKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoDocumentTypeList(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoExtensions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoExtensionsNamechangekeyrollover(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoLdsSecurityObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoMrtd(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdIcaoMrtdSecurity(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IcaoObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IcaoObjectIdentifiers(IcaoObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IcaoObjectIdentifiers(IcaoObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers*, "Org.BouncyCastle.Asn1.Icao", "IcaoObjectIdentifiers");

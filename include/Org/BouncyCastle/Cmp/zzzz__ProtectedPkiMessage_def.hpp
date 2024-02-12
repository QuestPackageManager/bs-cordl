#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ProtectedPkiMessage)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Cmp {
class GeneralPkiMessage;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::ProtectedPkiMessage);
// Type: Org.BouncyCastle.Cmp::ProtectedPkiMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(606))
// CS Name: ::Org.BouncyCastle.Cmp::ProtectedPkiMessage*
class CORDL_TYPE ProtectedPkiMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field pkiMessage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiMessage, put = __cordl_internal_set_pkiMessage))::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage;

  __declspec(property(get = get_Header))::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  __declspec(property(get = get_Body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  __declspec(property(get = get_HasPasswordBasedMacProtected)) bool HasPasswordBasedMacProtected;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& __cordl_internal_get_pkiMessage();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*> const& __cordl_internal_get_pkiMessage() const;

  constexpr void __cordl_internal_set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* New_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage);

  /// @brief Method .ctor, addr 0x1203f9c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  /// @brief Method .ctor, addr 0x1204034, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  /// @brief Method get_Header, addr 0x12040d4, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

  /// @brief Method get_Body, addr 0x12040f4, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method ToAsn1Message, addr 0x1204114, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ToAsn1Message();

  /// @brief Method get_HasPasswordBasedMacProtected, addr 0x120411c, size 0xa8, virtual false, abstract: false, final false
  inline bool get_HasPasswordBasedMacProtected();

  /// @brief Method GetCertificates, addr 0x12041c4, size 0x168, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> GetCertificates();

  /// @brief Method Verify, addr 0x120432c, size 0x180, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifierFactory);

  /// @brief Method Process, addr 0x12044ac, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::Object* Process(::Org::BouncyCastle::Crypto::IStreamCalculator* streamCalculator);

  /// @brief Method Verify, addr 0x1204784, size 0x2e8, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crmf::PKMacBuilder* pkMacBuilder, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtectedPkiMessage(ProtectedPkiMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtectedPkiMessage(ProtectedPkiMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtectedPkiMessage();

public:
  /// @brief Field pkiMessage, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ___pkiMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::ProtectedPkiMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessage, ___pkiMessage) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::ProtectedPkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::ProtectedPkiMessage*, "Org.BouncyCastle.Cmp", "ProtectedPkiMessage");

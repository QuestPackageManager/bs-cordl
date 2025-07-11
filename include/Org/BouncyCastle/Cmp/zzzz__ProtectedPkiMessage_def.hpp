#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/ProtectedPkiMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.ProtectedPkiMessage
class CORDL_TYPE ProtectedPkiMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  __declspec(property(get = get_HasPasswordBasedMacProtected)) bool HasPasswordBasedMacProtected;

  __declspec(property(get = get_Header)) ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  /// @brief Field pkiMessage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiMessage, put = __cordl_internal_set_pkiMessage)) ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage;

  /// @brief Method GetCertificates, addr 0x264d080, size 0x168, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> GetCertificates();

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  static inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* New_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage);

  /// @brief Method Process, addr 0x264d368, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::Object* Process(::Org::BouncyCastle::Crypto::IStreamCalculator* streamCalculator);

  /// @brief Method ToAsn1Message, addr 0x264cfd0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ToAsn1Message();

  /// @brief Method Verify, addr 0x264d640, size 0x2e4, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crmf::PKMacBuilder* pkMacBuilder, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method Verify, addr 0x264d1e8, size 0x180, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifierFactory);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* const& __cordl_internal_get_pkiMessage() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& __cordl_internal_get_pkiMessage();

  constexpr void __cordl_internal_set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value);

  /// @brief Method .ctor, addr 0x264cef4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  /// @brief Method .ctor, addr 0x264ce60, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage* pkiMessage);

  /// @brief Method get_Body, addr 0x264cfb0, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method get_HasPasswordBasedMacProtected, addr 0x264cfd8, size 0xa8, virtual false, abstract: false, final false
  inline bool get_HasPasswordBasedMacProtected();

  /// @brief Method get_Header, addr 0x264cf90, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtectedPkiMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtectedPkiMessage(ProtectedPkiMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtectedPkiMessage(ProtectedPkiMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 606 };

  /// @brief Field pkiMessage, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ___pkiMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cmp::ProtectedPkiMessage, ___pkiMessage) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::ProtectedPkiMessage, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::ProtectedPkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::ProtectedPkiMessage*, "Org.BouncyCastle.Cmp", "ProtectedPkiMessage");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PopoSigningKeyInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PopoSigningKeyInput)
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoSigningKeyInput
class CORDL_TYPE PopoSigningKeyInput : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* PublicKey;

  __declspec(property(get = get_PublicKeyMac)) ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* PublicKeyMac;

  __declspec(property(get = get_Sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Sender;

  /// @brief Field publicKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey;

  /// @brief Field publicKeyMac, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyMac, put = __cordl_internal_set_publicKeyMac)) ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* publicKeyMac;

  /// @brief Field sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName* sender;

  /// @brief Method GetInstance, addr 0x2316384, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2316990, size 0xfc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __cordl_internal_get_publicKey();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* const& __cordl_internal_get_publicKeyMac() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& __cordl_internal_get_publicKeyMac();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_sender() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_sender();

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr void __cordl_internal_set_publicKeyMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value);

  constexpr void __cordl_internal_set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  /// @brief Method .ctor, addr 0x231694c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor, addr 0x231691c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor, addr 0x23167ac, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PublicKey, addr 0x2316988, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey();

  /// @brief Method get_PublicKeyMac, addr 0x2316980, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* get_PublicKeyMac();

  /// @brief Method get_Sender, addr 0x2316978, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoSigningKeyInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoSigningKeyInput(PopoSigningKeyInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoSigningKeyInput(PopoSigningKeyInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 120 };

  /// @brief Field sender, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___sender;

  /// @brief Field publicKeyMac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* ___publicKeyMac;

  /// @brief Field publicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___publicKeyMac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___publicKey) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKeyInput");

#pragma once
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
// Type: Org.BouncyCastle.Asn1.Crmf::PopoSigningKeyInput
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(120))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PopoSigningKeyInput*
class CORDL_TYPE PopoSigningKeyInput : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field sender, offset 0x10, size 0x8
  __declspec(property(get = __get_sender, put = __set_sender))::Org::BouncyCastle::Asn1::X509::GeneralName* sender;

  /// @brief Field publicKeyMac, offset 0x18, size 0x8
  __declspec(property(get = __get_publicKeyMac, put = __set_publicKeyMac))::Org::BouncyCastle::Asn1::Crmf::PKMacValue* publicKeyMac;

  /// @brief Field publicKey, offset 0x20, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey;

  __declspec(property(get = get_Sender))::Org::BouncyCastle::Asn1::X509::GeneralName* Sender;

  __declspec(property(get = get_PublicKeyMac))::Org::BouncyCastle::Asn1::Crmf::PKMacValue* PublicKeyMac;

  __declspec(property(get = get_PublicKey))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* PublicKey;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_sender();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_sender() const;

  constexpr void __set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& __get_publicKeyMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> const& __get_publicKeyMac() const;

  constexpr void __set_publicKeyMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe883c8, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe87f84, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor, addr 0xe8853c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method .ctor, addr 0xe8856c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki);

  /// @brief Method get_Sender, addr 0xe88598, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender();

  /// @brief Method get_PublicKeyMac, addr 0xe885a0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* get_PublicKeyMac();

  /// @brief Method get_PublicKey, addr 0xe885a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey();

  /// @brief Method ToAsn1Object, addr 0xe885b0, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoSigningKeyInput(PopoSigningKeyInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoSigningKeyInput(PopoSigningKeyInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoSigningKeyInput();

public:
  /// @brief Field sender, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___sender;

  /// @brief Field publicKeyMac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* ___publicKeyMac;

  /// @brief Field publicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___publicKeyMac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, ___publicKey) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKeyInput");

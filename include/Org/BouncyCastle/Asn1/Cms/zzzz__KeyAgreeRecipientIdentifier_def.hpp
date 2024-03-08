#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientIdentifier)
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier);
// Type: Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientIdentifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientIdentifier*
class CORDL_TYPE KeyAgreeRecipientIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IssuerAndSerialNumber))::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* IssuerAndSerialNumber;

  __declspec(property(get = get_RKeyID))::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* RKeyID;

  /// @brief Field issuerSerial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerSerial, put = __cordl_internal_set_issuerSerial))::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerSerial;

  /// @brief Field rKeyID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rKeyID, put = __cordl_internal_set_rKeyID))::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0xf0a9d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xf0a9ec, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID);

  /// @brief Method ToAsn1Object, addr 0xf0ac48, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*& __cordl_internal_get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*> const& __cordl_internal_get_issuerSerial() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*& __cordl_internal_get_rKeyID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*> const& __cordl_internal_get_rKeyID() const;

  constexpr void __cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* value);

  constexpr void __cordl_internal_set_rKeyID(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* value);

  /// @brief Method .ctor, addr 0xf0abd0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerSerial);

  /// @brief Method .ctor, addr 0xf0ac10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID);

  /// @brief Method get_IssuerAndSerialNumber, addr 0xf0ac38, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* get_IssuerAndSerialNumber();

  /// @brief Method get_RKeyID, addr 0xf0ac40, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* get_RKeyID();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientIdentifier(KeyAgreeRecipientIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientIdentifier(KeyAgreeRecipientIdentifier const&) = delete;

  /// @brief Field issuerSerial, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* ___issuerSerial;

  /// @brief Field rKeyID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* ___rKeyID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier, ___issuerSerial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier, ___rKeyID) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier*, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientIdentifier");

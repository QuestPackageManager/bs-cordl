#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/OriginatorIdentifierOrKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
CORDL_MODULE_EXPORT(OriginatorIdentifierOrKey)
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorIdentifierOrKey
class CORDL_TYPE OriginatorIdentifierOrKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IssuerAndSerialNumber)) ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* IssuerAndSerialNumber;

  __declspec(property(get = get_OriginatorKey)) ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* OriginatorKey;

  __declspec(property(get = get_OriginatorPublicKey)) ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* OriginatorPublicKey;

  __declspec(property(get = get_SubjectKeyIdentifier)) ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* SubjectKeyIdentifier;

  __declspec(property(get = get_ID)) ::Org::BouncyCastle::Asn1::Asn1Encodable* _cordl_ID;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::Org::BouncyCastle::Asn1::Asn1Encodable* id;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2306798, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o, bool explicitly);

  /// @brief Method GetInstance, addr 0x2307994, size 0x294, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* id);

  /// @brief Method ToAsn1Object, addr 0x2307df8, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_id() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_id(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x2307944, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  /// @brief Method .ctor, addr 0x23077e0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  /// @brief Method .ctor, addr 0x230796c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* id);

  /// @brief Method .ctor, addr 0x23077b8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  /// @brief Method .ctor, addr 0x23078c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* id);

  /// @brief Method .ctor, addr 0x230784c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* id);

  /// @brief Method get_ID, addr 0x2307c28, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_ID();

  /// @brief Method get_IssuerAndSerialNumber, addr 0x2307c30, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* get_IssuerAndSerialNumber();

  /// @brief Method get_OriginatorKey, addr 0x2307d40, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* get_OriginatorKey();

  /// @brief Method get_OriginatorPublicKey, addr 0x2307d44, size 0x9c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* get_OriginatorPublicKey();

  /// @brief Method get_SubjectKeyIdentifier, addr 0x2307cac, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* get_SubjectKeyIdentifier();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorIdentifierOrKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorIdentifierOrKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorIdentifierOrKey(OriginatorIdentifierOrKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorIdentifierOrKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorIdentifierOrKey(OriginatorIdentifierOrKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 81 };

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey, ___id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*, "Org.BouncyCastle.Asn1.Cms", "OriginatorIdentifierOrKey");

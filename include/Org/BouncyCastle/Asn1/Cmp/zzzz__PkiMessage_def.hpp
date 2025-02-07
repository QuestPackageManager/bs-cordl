#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PkiMessage)
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiMessage);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiMessage
class CORDL_TYPE PkiMessage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  __declspec(property(get = get_Header)) ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  __declspec(property(get = get_Protection)) ::Org::BouncyCastle::Asn1::DerBitString* Protection;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body)) ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body;

  /// @brief Field extraCerts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_extraCerts, put = __cordl_internal_set_extraCerts)) ::Org::BouncyCastle::Asn1::Asn1Sequence* extraCerts;

  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header)) ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header;

  /// @brief Field protection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_protection, put = __cordl_internal_set_protection)) ::Org::BouncyCastle::Asn1::DerBitString* protection;

  /// @brief Method GetExtraCerts, addr 0x22fc808, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetExtraCerts();

  /// @brief Method GetInstance, addr 0x22fc5fc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                     ::Org::BouncyCastle::Asn1::DerBitString* protection);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                     ::Org::BouncyCastle::Asn1::DerBitString* protection,
                                                                     ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> extraCerts);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22fc908, size 0x14c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody* const& __cordl_internal_get_body() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& __cordl_internal_get_body();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_extraCerts() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_extraCerts();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* const& __cordl_internal_get_header() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*& __cordl_internal_get_header();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_protection() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_protection();

  constexpr void __cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value);

  constexpr void __cordl_internal_set_extraCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_header(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* value);

  constexpr void __cordl_internal_set_protection(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x22fc794, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method .ctor, addr 0x22fc734, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body, ::Org::BouncyCastle::Asn1::DerBitString* protection);

  /// @brief Method .ctor, addr 0x22fc6a0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body, ::Org::BouncyCastle::Asn1::DerBitString* protection,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> extraCerts);

  /// @brief Method .ctor, addr 0x22fc438, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Body, addr 0x22fc7f8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method get_Header, addr 0x22fc7f0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

  /// @brief Method get_Protection, addr 0x22fc800, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Protection();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiMessage(PkiMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiMessage(PkiMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 39 };

  /// @brief Field header, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* ___header;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiBody* ___body;

  /// @brief Field protection, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___protection;

  /// @brief Field extraCerts, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___extraCerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___body) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___protection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___extraCerts) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiMessage, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiMessage*, "Org.BouncyCastle.Asn1.Cmp", "PkiMessage");

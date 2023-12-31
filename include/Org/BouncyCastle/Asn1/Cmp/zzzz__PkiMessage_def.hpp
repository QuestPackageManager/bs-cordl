#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Asn1.Cmp::PkiMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(39))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiMessage*
class CORDL_TYPE PkiMessage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __get_header, put = __set_header))::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __get_body, put = __set_body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* body;

  /// @brief Field protection, offset 0x20, size 0x8
  __declspec(property(get = __get_protection, put = __set_protection))::Org::BouncyCastle::Asn1::DerBitString* protection;

  /// @brief Field extraCerts, offset 0x28, size 0x8
  __declspec(property(get = __get_extraCerts, put = __set_extraCerts))::Org::BouncyCastle::Asn1::Asn1Sequence* extraCerts;

  __declspec(property(get = get_Header))::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  __declspec(property(get = get_Body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  __declspec(property(get = get_Protection))::Org::BouncyCastle::Asn1::DerBitString* Protection;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*& __get_header();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*> const& __get_header() const;

  constexpr void __set_header(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& __get_body();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiBody*> const& __get_body() const;

  constexpr void __set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_protection();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_protection() const;

  constexpr void __set_protection(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_extraCerts();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_extraCerts() const;

  constexpr void __set_extraCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe6ca4c, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe6cc10, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                     ::Org::BouncyCastle::Asn1::DerBitString* protection,
                                                                     ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> extraCerts);

  /// @brief Method .ctor, addr 0xe6ccb4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body, ::Org::BouncyCastle::Asn1::DerBitString* protection,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> extraCerts);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                     ::Org::BouncyCastle::Asn1::DerBitString* protection);

  /// @brief Method .ctor, addr 0xe6cd50, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body, ::Org::BouncyCastle::Asn1::DerBitString* protection);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method .ctor, addr 0xe6cdb0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method get_Header, addr 0xe6ce0c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

  /// @brief Method get_Body, addr 0xe6ce14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method get_Protection, addr 0xe6ce1c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Protection();

  /// @brief Method GetExtraCerts, addr 0xe6ce24, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetExtraCerts();

  /// @brief Method ToAsn1Object, addr 0xe6cf24, size 0x158, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiMessage(PkiMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiMessage(PkiMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiMessage();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiMessage, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___body) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___protection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessage, ___extraCerts) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiMessage*, "Org.BouncyCastle.Asn1.Cmp", "PkiMessage");

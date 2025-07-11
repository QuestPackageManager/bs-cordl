#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CrlValidatedID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlValidatedID)
namespace Org::BouncyCastle::Asn1::Esf {
class CrlIdentifier;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
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
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlValidatedID
class CORDL_TYPE CrlValidatedID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CrlHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* CrlHash;

  __declspec(property(get = get_CrlIdentifier)) ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* CrlIdentifier;

  /// @brief Field crlHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlHash, put = __cordl_internal_set_crlHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash;

  /// @brief Field crlIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crlIdentifier, put = __cordl_internal_set_crlIdentifier)) ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier;

  /// @brief Method GetInstance, addr 0x231fa6c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2320bd4, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& __cordl_internal_get_crlHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __cordl_internal_get_crlHash();

  constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* const& __cordl_internal_get_crlIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*& __cordl_internal_get_crlIdentifier();

  constexpr void __cordl_internal_set_crlHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  constexpr void __cordl_internal_set_crlIdentifier(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* value);

  /// @brief Method .ctor, addr 0x2320b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash);

  /// @brief Method .ctor, addr 0x2320b4c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier);

  /// @brief Method .ctor, addr 0x232086c, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CrlHash, addr 0x2320bc4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_CrlHash();

  /// @brief Method get_CrlIdentifier, addr 0x2320bcc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* get_CrlIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlValidatedID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlValidatedID(CrlValidatedID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlValidatedID(CrlValidatedID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 143 };

  /// @brief Field crlHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___crlHash;

  /// @brief Field crlIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* ___crlIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, ___crlHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, ___crlIdentifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, "Org.BouncyCastle.Asn1.Esf", "CrlValidatedID");

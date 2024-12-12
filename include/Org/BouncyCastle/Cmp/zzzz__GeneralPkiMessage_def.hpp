#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/GeneralPkiMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralPkiMessage)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class GeneralPkiMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::GeneralPkiMessage);
// Dependencies System.Object
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.GeneralPkiMessage
class CORDL_TYPE GeneralPkiMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  __declspec(property(get = get_HasProtection)) bool HasProtection;

  __declspec(property(get = get_Header)) ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  /// @brief Field pkiMessage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiMessage, put = __cordl_internal_set_pkiMessage)) ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage;

  static inline ::Org::BouncyCastle::Cmp::GeneralPkiMessage* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Cmp::GeneralPkiMessage* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  /// @brief Method ParseBytes, addr 0x264a98c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ParseBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ToAsn1Structure, addr 0x264aa78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ToAsn1Structure();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* const& __cordl_internal_get_pkiMessage() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& __cordl_internal_get_pkiMessage();

  constexpr void __cordl_internal_set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value);

  /// @brief Method .ctor, addr 0x264a9cc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x264a9a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage);

  /// @brief Method get_Body, addr 0x264aa2c, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method get_HasProtection, addr 0x264aa4c, size 0x2c, virtual false, abstract: false, final false
  inline bool get_HasProtection();

  /// @brief Method get_Header, addr 0x264aa0c, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralPkiMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralPkiMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralPkiMessage(GeneralPkiMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralPkiMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralPkiMessage(GeneralPkiMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 605 };

  /// @brief Field pkiMessage, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* ___pkiMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cmp::GeneralPkiMessage, ___pkiMessage) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::GeneralPkiMessage, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::GeneralPkiMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::GeneralPkiMessage*, "Org.BouncyCastle.Cmp", "GeneralPkiMessage");

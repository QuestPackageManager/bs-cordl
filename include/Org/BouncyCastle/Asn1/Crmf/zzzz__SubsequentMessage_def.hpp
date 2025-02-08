#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/SubsequentMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsequentMessage)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage);
// Dependencies Org.BouncyCastle.Asn1.DerInteger
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.SubsequentMessage
class CORDL_TYPE SubsequentMessage : public ::Org::BouncyCastle::Asn1::DerInteger {
public:
  // Declarations
  /// @brief Field challengeResp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_challengeResp, put = setStaticF_challengeResp)) ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* challengeResp;

  /// @brief Field encrCert, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encrCert, put = setStaticF_encrCert)) ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* encrCert;

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* New_ctor(int32_t value);

  /// @brief Method ValueOf, addr 0x2315f44, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* ValueOf(int32_t value);

  /// @brief Method .ctor, addr 0x2317820, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* getStaticF_challengeResp();

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* getStaticF_encrCert();

  static inline void setStaticF_challengeResp(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value);

  static inline void setStaticF_encrCert(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsequentMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsequentMessage(SubsequentMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsequentMessage(SubsequentMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "Org.BouncyCastle.Asn1.Crmf", "SubsequentMessage");

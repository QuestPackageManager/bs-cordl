#pragma once
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
// Type: Org.BouncyCastle.Asn1.Crmf::SubsequentMessage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(124))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::SubsequentMessage*
class CORDL_TYPE SubsequentMessage : public ::Org::BouncyCastle::Asn1::DerInteger {
public:
  // Declarations
  /// @brief Field encrCert, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encrCert, put = setStaticF_encrCert))::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* encrCert;

  /// @brief Field challengeResp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_challengeResp, put = setStaticF_challengeResp))::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* challengeResp;

  static inline void setStaticF_encrCert(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* getStaticF_encrCert();

  static inline void setStaticF_challengeResp(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* getStaticF_challengeResp();

  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* New_ctor(int32_t value);

  /// @brief Method .ctor addr 0xe89458 size 0x4 virtual false final false
  inline void _ctor(int32_t value);

  /// @brief Method ValueOf addr 0xe87b38 size 0x110 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* ValueOf(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsequentMessage(SubsequentMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsequentMessage(SubsequentMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsequentMessage();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "Org.BouncyCastle.Asn1.Crmf", "SubsequentMessage");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertRepMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertRepMessage)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
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
namespace Org::BouncyCastle::Asn1::Cmp {
class CertRepMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertRepMessage
class CORDL_TYPE CertRepMessage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field caPubs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_caPubs, put = __cordl_internal_set_caPubs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* caPubs;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::Org::BouncyCastle::Asn1::Asn1Sequence* response;

  /// @brief Method GetCAPubs, addr 0x22f2628, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetCAPubs();

  /// @brief Method GetInstance, addr 0x22f23c8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* GetInstance(::System::Object* obj);

  /// @brief Method GetResponse, addr 0x22f2724, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> GetResponse();

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> caPubs,
                                                                         ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> response);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f2994, size 0xb4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_caPubs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_caPubs();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_response() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_response();

  constexpr void __cordl_internal_set_caPubs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_response(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x22f2544, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> caPubs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> response);

  /// @brief Method .ctor, addr 0x22f22d0, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertRepMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertRepMessage(CertRepMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertRepMessage(CertRepMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15 };

  /// @brief Field caPubs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___caPubs;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage, ___caPubs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage, ___response) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*, "Org.BouncyCastle.Asn1.Cmp", "CertRepMessage");

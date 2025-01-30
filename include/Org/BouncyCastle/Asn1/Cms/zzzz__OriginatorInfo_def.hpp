#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/OriginatorInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorInfo
class CORDL_TYPE OriginatorInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certificates)) ::Org::BouncyCastle::Asn1::Asn1Set* Certificates;

  __declspec(property(get = get_Crls)) ::Org::BouncyCastle::Asn1::Asn1Set* Crls;

  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Org::BouncyCastle::Asn1::Asn1Set* certs;

  /// @brief Field crls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::Org::BouncyCastle::Asn1::Asn1Set* crls;

  /// @brief Method GetInstance, addr 0x2300728, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2301068, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230910c, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_certs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_certs();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_crls() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_crls();

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x2308e34, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls);

  /// @brief Method .ctor, addr 0x2308e60, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Certificates, addr 0x23090fc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();

  /// @brief Method get_Crls, addr 0x2309104, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Crls();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorInfo(OriginatorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorInfo(OriginatorInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 82 };

  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___certs;

  /// @brief Field crls, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo, ___certs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo, ___crls) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, "Org.BouncyCastle.Asn1.Cms", "OriginatorInfo");

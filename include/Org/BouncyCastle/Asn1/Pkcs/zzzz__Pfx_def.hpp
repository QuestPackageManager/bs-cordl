#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/Pfx.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Pfx)
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
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
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pfx;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::Pfx);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.Pfx
class CORDL_TYPE Pfx : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AuthSafe)) ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* AuthSafe;

  __declspec(property(get = get_MacData)) ::Org::BouncyCastle::Asn1::Pkcs::MacData* MacData;

  /// @brief Field contentInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo;

  /// @brief Field macData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_macData, put = __cordl_internal_set_macData)) ::Org::BouncyCastle::Asn1::Pkcs::MacData* macData;

  /// @brief Method GetInstance, addr 0x24108a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo, ::Org::BouncyCastle::Asn1::Pkcs::MacData* macData);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::Pfx* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2410a80, size 0x19c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData* const& __cordl_internal_get_macData() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::MacData*& __cordl_internal_get_macData();

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* value);

  constexpr void __cordl_internal_set_macData(::Org::BouncyCastle::Asn1::Pkcs::MacData* value);

  /// @brief Method .ctor, addr 0x2410a44, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo, ::Org::BouncyCastle::Asn1::Pkcs::MacData* macData);

  /// @brief Method .ctor, addr 0x241094c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AuthSafe, addr 0x2410a70, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* get_AuthSafe();

  /// @brief Method get_MacData, addr 0x2410a78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::MacData* get_MacData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pfx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pfx(Pfx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pfx(Pfx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 243 };

  /// @brief Field contentInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* ___contentInfo;

  /// @brief Field macData, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::MacData* ___macData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pfx, ___contentInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::Pfx, ___macData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::Pfx, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pfx);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pfx*, "Org.BouncyCastle.Asn1.Pkcs", "Pfx");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AuthenticatedSafe)
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
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
class AuthenticatedSafe;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe);
// Type: Org.BouncyCastle.Asn1.Pkcs::AuthenticatedSafe
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(227))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::AuthenticatedSafe*
class CORDL_TYPE AuthenticatedSafe : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_info,
                      put = __cordl_internal_set_info))::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> info;

  /// @brief Field isBer, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isBer, put = __cordl_internal_set_isBer)) bool isBer;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>& __cordl_internal_get_info();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> const& __cordl_internal_get_info() const;

  constexpr void __cordl_internal_set_info(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> value);

  constexpr bool& __cordl_internal_get_isBer();

  constexpr bool const& __cordl_internal_get_isBer() const;

  constexpr void __cordl_internal_set_isBer(bool value);

  /// @brief Method Copy, addr 0xfb0834, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*>
  Copy(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> info);

  /// @brief Method GetInstance, addr 0xfb08ac, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xfb0950, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> info);

  /// @brief Method .ctor, addr 0xfb0b4c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> info);

  /// @brief Method GetContentInfo, addr 0xfb0b84, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> GetContentInfo();

  /// @brief Method ToAsn1Object, addr 0xfb0b8c, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticatedSafe(AuthenticatedSafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticatedSafe(AuthenticatedSafe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticatedSafe();

public:
  /// @brief Field info, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*, ::Array<::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*>*> ___info;

  /// @brief Field isBer, offset: 0x18, size: 0x1, def value: None
  bool ___isBer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe, ___info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe, ___isBer) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe*, "Org.BouncyCastle.Asn1.Pkcs", "AuthenticatedSafe");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CAKeyUpdAnnContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CAKeyUpdAnnContent)
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
class CAKeyUpdAnnContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CAKeyUpdAnnContent
class CORDL_TYPE CAKeyUpdAnnContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_NewWithNew)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* NewWithNew;

  __declspec(property(get = get_NewWithOld)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* NewWithOld;

  __declspec(property(get = get_OldWithNew)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* OldWithNew;

  /// @brief Field newWithNew, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_newWithNew, put = __cordl_internal_set_newWithNew)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* newWithNew;

  /// @brief Field newWithOld, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_newWithOld, put = __cordl_internal_set_newWithOld)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* newWithOld;

  /// @brief Field oldWithNew, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_oldWithNew, put = __cordl_internal_set_oldWithNew)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* oldWithNew;

  /// @brief Method GetInstance, addr 0x22f37b8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f394c, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& __cordl_internal_get_newWithNew() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_newWithNew();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& __cordl_internal_get_newWithOld() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_newWithOld();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& __cordl_internal_get_oldWithNew() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_oldWithNew();

  constexpr void __cordl_internal_set_newWithNew(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr void __cordl_internal_set_newWithOld(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr void __cordl_internal_set_oldWithNew(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  /// @brief Method .ctor, addr 0x22f3568, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NewWithNew, addr 0x22f3944, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_NewWithNew();

  /// @brief Method get_NewWithOld, addr 0x22f393c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_NewWithOld();

  /// @brief Method get_OldWithNew, addr 0x22f3934, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_OldWithNew();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CAKeyUpdAnnContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CAKeyUpdAnnContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CAKeyUpdAnnContent(CAKeyUpdAnnContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CAKeyUpdAnnContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CAKeyUpdAnnContent(CAKeyUpdAnnContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10 };

  /// @brief Field oldWithNew, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___oldWithNew;

  /// @brief Field newWithOld, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___newWithOld;

  /// @brief Field newWithNew, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___newWithNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent, ___oldWithNew) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent, ___newWithOld) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent, ___newWithNew) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*, "Org.BouncyCastle.Asn1.Cmp", "CAKeyUpdAnnContent");

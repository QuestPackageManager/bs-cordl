#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\RevReqContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RevReqContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
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
class RevReqContent;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Cmp::RevReqContent*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Cmp::RevReqContent*, "Org.BouncyCastle.Asn1.Cmp", "RevReqContent");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevReqContent
class CORDL_TYPE RevReqContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1Sequence* content;

  /// @brief Method GetInstance, addr 0x334c280, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::RevReqContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevReqContent* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> revDetails);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevReqContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3351f6c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToRevDetailsArray, addr 0x3351e74, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> ToRevDetailsArray();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x3351e0c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> revDetails);

  /// @brief Method .ctor, addr 0x3351e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevReqContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevReqContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevReqContent(RevReqContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevReqContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevReqContent(RevReqContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 53 };

  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevReqContent, ___content) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Cmp::RevReqContent) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp

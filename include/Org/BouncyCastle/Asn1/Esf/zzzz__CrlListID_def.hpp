#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CrlListID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlListID)
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlListID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlListID);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlListID
class CORDL_TYPE CrlListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crls, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::Org::BouncyCastle::Asn1::Asn1Sequence* crls;

  /// @brief Method GetCrls, addr 0x23241a4, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> GetCrls();

  /// @brief Method GetInstance, addr 0x23237e8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> crls);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::System::Collections::IEnumerable* crls);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23242c4, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_crls() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_crls();

  constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x2323f58, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> crls);

  /// @brief Method .ctor, addr 0x2324010, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* crls);

  /// @brief Method .ctor, addr 0x2323964, size 0x478, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlListID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlListID(CrlListID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlListID(CrlListID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 141 };

  /// @brief Field crls, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlListID, ___crls) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlListID, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlListID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlListID*, "Org.BouncyCastle.Asn1.Esf", "CrlListID");

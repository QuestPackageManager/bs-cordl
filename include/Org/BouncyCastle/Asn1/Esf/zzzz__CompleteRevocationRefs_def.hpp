#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CompleteRevocationRefs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CompleteRevocationRefs)
namespace Org::BouncyCastle::Asn1::Esf {
class CrlOcspRef;
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
class CompleteRevocationRefs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CompleteRevocationRefs
class CORDL_TYPE CompleteRevocationRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crlOcspRefs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlOcspRefs, put = __cordl_internal_set_crlOcspRefs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* crlOcspRefs;

  /// @brief Method GetCrlOcspRefs, addr 0x2323068, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> GetCrlOcspRefs();

  /// @brief Method GetInstance, addr 0x23227dc, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> crlOcspRefs);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* New_ctor(::System::Collections::IEnumerable* crlOcspRefs);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2323188, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_crlOcspRefs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_crlOcspRefs();

  constexpr void __cordl_internal_set_crlOcspRefs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x2322e1c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> crlOcspRefs);

  /// @brief Method .ctor, addr 0x2322ed4, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* crlOcspRefs);

  /// @brief Method .ctor, addr 0x2322958, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompleteRevocationRefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompleteRevocationRefs(CompleteRevocationRefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompleteRevocationRefs(CompleteRevocationRefs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 139 };

  /// @brief Field crlOcspRefs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___crlOcspRefs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs, ___crlOcspRefs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*, "Org.BouncyCastle.Asn1.Esf", "CompleteRevocationRefs");

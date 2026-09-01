#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\OcspListID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(OcspListID)
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
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
class OcspListID;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Esf::OcspListID*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Esf::OcspListID*, "Org.BouncyCastle.Asn1.Esf", "OcspListID");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspListID
class CORDL_TYPE OcspListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ocspResponses, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspResponses, put = __cordl_internal_set_ocspResponses)) ::Org::BouncyCastle::Asn1::Asn1Sequence* ocspResponses;

  /// @brief Method GetInstance, addr 0x3373540, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* GetInstance(::System::Object* obj);

  /// @brief Method GetOcspResponses, addr 0x3374d58, size 0x124, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> GetOcspResponses();

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> ocspResponses);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::System::Collections::IEnumerable* ocspResponses);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3374e7c, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_ocspResponses() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_ocspResponses();

  constexpr void __cordl_internal_set_ocspResponses(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x3374b1c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> ocspResponses);

  /// @brief Method .ctor, addr 0x3374bd0, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* ocspResponses);

  /// @brief Method .ctor, addr 0x3374550, size 0x448, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspListID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspListID(OcspListID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspListID(OcspListID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 146 };

  /// @brief Field ocspResponses, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___ocspResponses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspListID, ___ocspResponses) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Esf::OcspListID) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf

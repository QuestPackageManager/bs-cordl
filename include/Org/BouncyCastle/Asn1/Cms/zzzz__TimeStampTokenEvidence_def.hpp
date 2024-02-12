#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TimeStampTokenEvidence)
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampAndCrl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampTokenEvidence;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence);
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampTokenEvidence
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(101))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampTokenEvidence*
class CORDL_TYPE TimeStampTokenEvidence : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field timeStampAndCrls, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_timeStampAndCrls,
               put = __cordl_internal_set_timeStampAndCrls))::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> timeStampAndCrls;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*>& __cordl_internal_get_timeStampAndCrls();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> const& __cordl_internal_get_timeStampAndCrls() const;

  constexpr void __cordl_internal_set_timeStampAndCrls(::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> value);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> timeStampAndCrls);

  /// @brief Method .ctor, addr 0xeace44, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> timeStampAndCrls);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* New_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* timeStampAndCrl);

  /// @brief Method .ctor, addr 0xeace6c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl* timeStampAndCrl);

  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xeacf14, size 0x38c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xead2a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged, bool isExplicit);

  /// @brief Method GetInstance, addr 0xead2b8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* GetInstance(::System::Object* obj);

  /// @brief Method ToTimeStampAndCrlArray, addr 0xead35c, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> ToTimeStampAndCrlArray();

  /// @brief Method ToAsn1Object, addr 0xead3d4, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenEvidence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampTokenEvidence(TimeStampTokenEvidence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenEvidence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampTokenEvidence(TimeStampTokenEvidence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampTokenEvidence();

public:
  /// @brief Field timeStampAndCrls, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*, ::Array<::Org::BouncyCastle::Asn1::Cms::TimeStampAndCrl*>*> ___timeStampAndCrls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence, ___timeStampAndCrls) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*, "Org.BouncyCastle.Asn1.Cms", "TimeStampTokenEvidence");

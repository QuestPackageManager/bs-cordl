#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Evidence)
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampTokenEvidence;
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
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Evidence);
// Type: Org.BouncyCastle.Asn1.Cms::Evidence
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::Evidence*
class CORDL_TYPE Evidence : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_TstEvidence))::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* TstEvidence;

  /// @brief Field otherEvidence, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherEvidence, put = __cordl_internal_set_otherEvidence))::Org::BouncyCastle::Asn1::Asn1Sequence* otherEvidence;

  /// @brief Field tstEvidence, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tstEvidence, put = __cordl_internal_set_tstEvidence))::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0xeea1d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xeea068, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence);

  /// @brief Method ToAsn1Object, addr 0xeea1f4, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_otherEvidence();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_otherEvidence() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*& __cordl_internal_get_tstEvidence();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*> const& __cordl_internal_get_tstEvidence() const;

  constexpr void __cordl_internal_set_otherEvidence(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_tstEvidence(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* value);

  /// @brief Method .ctor, addr 0xee9fa0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0xee9f78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence);

  /// @brief Method get_TstEvidence, addr 0xeea1ec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* get_TstEvidence();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Evidence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Evidence(Evidence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Evidence(Evidence const&) = delete;

  /// @brief Field tstEvidence, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* ___tstEvidence;

  /// @brief Field otherEvidence, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___otherEvidence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Evidence, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Evidence, ___tstEvidence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Evidence, ___otherEvidence) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Evidence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Evidence*, "Org.BouncyCastle.Asn1.Cms", "Evidence");

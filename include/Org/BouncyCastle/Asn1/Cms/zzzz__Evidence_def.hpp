#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/Evidence.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.Evidence
class CORDL_TYPE Evidence : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_TstEvidence)) ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* TstEvidence;

  /// @brief Field otherEvidence, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherEvidence, put = __cordl_internal_set_otherEvidence)) ::Org::BouncyCastle::Asn1::Asn1Sequence* otherEvidence;

  /// @brief Field tstEvidence, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tstEvidence, put = __cordl_internal_set_tstEvidence)) ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x325ef74, size 0x28, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x325ee14, size 0x160, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence);

  /// @brief Method ToAsn1Object, addr 0x325efa4, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_otherEvidence() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_otherEvidence();

  constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* const& __cordl_internal_get_tstEvidence() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*& __cordl_internal_get_tstEvidence();

  constexpr void __cordl_internal_set_otherEvidence(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_tstEvidence(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* value);

  /// @brief Method .ctor, addr 0x325ed58, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0x325ed50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence);

  /// @brief Method get_TstEvidence, addr 0x325ef9c, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 73 };

  /// @brief Field tstEvidence, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* ___tstEvidence;

  /// @brief Field otherEvidence, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___otherEvidence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Evidence, ___tstEvidence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Evidence, ___otherEvidence) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Evidence, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Evidence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Evidence*, "Org.BouncyCastle.Asn1.Cms", "Evidence");

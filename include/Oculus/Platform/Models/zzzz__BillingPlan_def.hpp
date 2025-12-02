#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/BillingPlan.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BillingPlan)
namespace Oculus::Platform::Models {
class PaidOffer;
}
namespace Oculus::Platform::Models {
class TrialOfferList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class BillingPlan;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::BillingPlan);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.BillingPlan
class CORDL_TYPE BillingPlan : public ::System::Object {
public:
  // Declarations
  /// @brief Field PaidOffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_PaidOffer, put = __cordl_internal_set_PaidOffer)) ::Oculus::Platform::Models::PaidOffer* PaidOffer;

  /// @brief Field TrialOffers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TrialOffers, put = __cordl_internal_set_TrialOffers)) ::Oculus::Platform::Models::TrialOfferList* TrialOffers;

  /// @brief Field TrialOffersOptional, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TrialOffersOptional, put = __cordl_internal_set_TrialOffersOptional)) ::Oculus::Platform::Models::TrialOfferList* TrialOffersOptional;

  static inline ::Oculus::Platform::Models::BillingPlan* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::Models::PaidOffer* const& __cordl_internal_get_PaidOffer() const;

  constexpr ::Oculus::Platform::Models::PaidOffer*& __cordl_internal_get_PaidOffer();

  constexpr ::Oculus::Platform::Models::TrialOfferList* const& __cordl_internal_get_TrialOffers() const;

  constexpr ::Oculus::Platform::Models::TrialOfferList*& __cordl_internal_get_TrialOffers();

  constexpr ::Oculus::Platform::Models::TrialOfferList* const& __cordl_internal_get_TrialOffersOptional() const;

  constexpr ::Oculus::Platform::Models::TrialOfferList*& __cordl_internal_get_TrialOffersOptional();

  constexpr void __cordl_internal_set_PaidOffer(::Oculus::Platform::Models::PaidOffer* value);

  constexpr void __cordl_internal_set_TrialOffers(::Oculus::Platform::Models::TrialOfferList* value);

  constexpr void __cordl_internal_set_TrialOffersOptional(::Oculus::Platform::Models::TrialOfferList* value);

  /// @brief Method .ctor, addr 0x5bd8db0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BillingPlan();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BillingPlan", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BillingPlan(BillingPlan&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BillingPlan", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BillingPlan(BillingPlan const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17980 };

  /// @brief Field PaidOffer, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::PaidOffer* ___PaidOffer;

  /// @brief Field TrialOffersOptional, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::TrialOfferList* ___TrialOffersOptional;

  /// @brief Field TrialOffers, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::TrialOfferList* ___TrialOffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::BillingPlan, ___PaidOffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::BillingPlan, ___TrialOffersOptional) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::BillingPlan, ___TrialOffers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::BillingPlan, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::BillingPlan);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::BillingPlan*, "Oculus.Platform.Models", "BillingPlan");

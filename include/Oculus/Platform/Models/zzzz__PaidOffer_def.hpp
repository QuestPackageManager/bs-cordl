#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PaidOffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__OfferTerm_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PaidOffer)
namespace Oculus::Platform::Models {
class Price;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PaidOffer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PaidOffer);
// Dependencies Oculus.Platform.OfferTerm, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.PaidOffer
class CORDL_TYPE PaidOffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Price, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Price, put = __cordl_internal_set_Price)) ::Oculus::Platform::Models::Price* Price;

  /// @brief Field SubscriptionTerm, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_SubscriptionTerm, put = __cordl_internal_set_SubscriptionTerm)) ::Oculus::Platform::OfferTerm SubscriptionTerm;

  static inline ::Oculus::Platform::Models::PaidOffer* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::Models::Price* const& __cordl_internal_get_Price() const;

  constexpr ::Oculus::Platform::Models::Price*& __cordl_internal_get_Price();

  constexpr ::Oculus::Platform::OfferTerm const& __cordl_internal_get_SubscriptionTerm() const;

  constexpr ::Oculus::Platform::OfferTerm& __cordl_internal_get_SubscriptionTerm();

  constexpr void __cordl_internal_set_Price(::Oculus::Platform::Models::Price* value);

  constexpr void __cordl_internal_set_SubscriptionTerm(::Oculus::Platform::OfferTerm value);

  /// @brief Method .ctor, addr 0x5c3f980, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaidOffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaidOffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaidOffer(PaidOffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaidOffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaidOffer(PaidOffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18044 };

  /// @brief Field Price, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::Price* ___Price;

  /// @brief Field SubscriptionTerm, offset: 0x18, size: 0x4, def value: None
  ::Oculus::Platform::OfferTerm ___SubscriptionTerm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::PaidOffer, ___Price) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PaidOffer, ___SubscriptionTerm) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PaidOffer, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PaidOffer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PaidOffer*, "Oculus.Platform.Models", "PaidOffer");

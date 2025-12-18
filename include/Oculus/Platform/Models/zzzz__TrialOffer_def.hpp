#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/TrialOffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__OfferTerm_def.hpp"
#include "Oculus/Platform/zzzz__OfferType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrialOffer)
namespace Oculus::Platform::Models {
class Price;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class TrialOffer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::TrialOffer);
// Dependencies Oculus.Platform.OfferTerm, Oculus.Platform.OfferType, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.TrialOffer
class CORDL_TYPE TrialOffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field MaxTermCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxTermCount, put = __cordl_internal_set_MaxTermCount)) int32_t MaxTermCount;

  /// @brief Field Price, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Price, put = __cordl_internal_set_Price)) ::Oculus::Platform::Models::Price* Price;

  /// @brief Field TrialTerm, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_TrialTerm, put = __cordl_internal_set_TrialTerm)) ::Oculus::Platform::OfferTerm TrialTerm;

  /// @brief Field TrialType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_TrialType, put = __cordl_internal_set_TrialType)) ::Oculus::Platform::OfferType TrialType;

  static inline ::Oculus::Platform::Models::TrialOffer* New_ctor(::System::IntPtr o);

  constexpr int32_t const& __cordl_internal_get_MaxTermCount() const;

  constexpr int32_t& __cordl_internal_get_MaxTermCount();

  constexpr ::Oculus::Platform::Models::Price* const& __cordl_internal_get_Price() const;

  constexpr ::Oculus::Platform::Models::Price*& __cordl_internal_get_Price();

  constexpr ::Oculus::Platform::OfferTerm const& __cordl_internal_get_TrialTerm() const;

  constexpr ::Oculus::Platform::OfferTerm& __cordl_internal_get_TrialTerm();

  constexpr ::Oculus::Platform::OfferType const& __cordl_internal_get_TrialType() const;

  constexpr ::Oculus::Platform::OfferType& __cordl_internal_get_TrialType();

  constexpr void __cordl_internal_set_MaxTermCount(int32_t value);

  constexpr void __cordl_internal_set_Price(::Oculus::Platform::Models::Price* value);

  constexpr void __cordl_internal_set_TrialTerm(::Oculus::Platform::OfferTerm value);

  constexpr void __cordl_internal_set_TrialType(::Oculus::Platform::OfferType value);

  /// @brief Method .ctor, addr 0x5c4434c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrialOffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrialOffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrialOffer(TrialOffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrialOffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrialOffer(TrialOffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18065 };

  /// @brief Field MaxTermCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___MaxTermCount;

  /// @brief Field Price, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::Price* ___Price;

  /// @brief Field TrialTerm, offset: 0x20, size: 0x4, def value: None
  ::Oculus::Platform::OfferTerm ___TrialTerm;

  /// @brief Field TrialType, offset: 0x24, size: 0x4, def value: None
  ::Oculus::Platform::OfferType ___TrialType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::TrialOffer, ___MaxTermCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::TrialOffer, ___Price) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::TrialOffer, ___TrialTerm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::TrialOffer, ___TrialType) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::TrialOffer, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::TrialOffer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::TrialOffer*, "Oculus.Platform.Models", "TrialOffer");

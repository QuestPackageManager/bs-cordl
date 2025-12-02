#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Price.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Price)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Price;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Price);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Price
class CORDL_TYPE Price : public ::System::Object {
public:
  // Declarations
  /// @brief Field AmountInHundredths, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AmountInHundredths, put = __cordl_internal_set_AmountInHundredths)) uint32_t AmountInHundredths;

  /// @brief Field Currency, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Currency, put = __cordl_internal_set_Currency)) ::StringW Currency;

  /// @brief Field Formatted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Formatted, put = __cordl_internal_set_Formatted)) ::StringW Formatted;

  static inline ::Oculus::Platform::Models::Price* New_ctor(::System::IntPtr o);

  constexpr uint32_t const& __cordl_internal_get_AmountInHundredths() const;

  constexpr uint32_t& __cordl_internal_get_AmountInHundredths();

  constexpr ::StringW const& __cordl_internal_get_Currency() const;

  constexpr ::StringW& __cordl_internal_get_Currency();

  constexpr ::StringW const& __cordl_internal_get_Formatted() const;

  constexpr ::StringW& __cordl_internal_get_Formatted();

  constexpr void __cordl_internal_set_AmountInHundredths(uint32_t value);

  constexpr void __cordl_internal_set_Currency(::StringW value);

  constexpr void __cordl_internal_set_Formatted(::StringW value);

  /// @brief Method .ctor, addr 0x5bdc620, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Price();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Price", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Price(Price&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Price", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Price(Price const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18038 };

  /// @brief Field AmountInHundredths, offset: 0x10, size: 0x4, def value: None
  uint32_t ___AmountInHundredths;

  /// @brief Field Currency, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Currency;

  /// @brief Field Formatted, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Formatted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Price, ___AmountInHundredths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Price, ___Currency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Price, ___Formatted) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Price, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Price);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Price*, "Oculus.Platform.Models", "Price");

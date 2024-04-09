#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Product)
// Forward declare root types
namespace Oculus::Platform::Models {
class Product;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Product);
// Type: Oculus.Platform.Models::Product
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::Product*
class CORDL_TYPE Product : public ::System::Object {
public:
  // Declarations
  /// @brief Field Description, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Description, put = __cordl_internal_set_Description))::StringW Description;

  /// @brief Field FormattedPrice, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FormattedPrice, put = __cordl_internal_set_FormattedPrice))::StringW FormattedPrice;

  /// @brief Field Name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field Sku, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Sku, put = __cordl_internal_set_Sku))::StringW Sku;

  static inline ::Oculus::Platform::Models::Product* New_ctor(void* o);

  constexpr ::StringW const& __cordl_internal_get_Description() const;

  constexpr ::StringW& __cordl_internal_get_Description();

  constexpr ::StringW const& __cordl_internal_get_FormattedPrice() const;

  constexpr ::StringW& __cordl_internal_get_FormattedPrice();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::StringW const& __cordl_internal_get_Sku() const;

  constexpr ::StringW& __cordl_internal_get_Sku();

  constexpr void __cordl_internal_set_Description(::StringW value);

  constexpr void __cordl_internal_set_FormattedPrice(::StringW value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Sku(::StringW value);

  /// @brief Method .ctor, addr 0x29dedb0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Product();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Product(Product&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Product(Product const&) = delete;

  /// @brief Field Description, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field FormattedPrice, offset: 0x18, size: 0x8, def value: None
  ::StringW ___FormattedPrice;

  /// @brief Field Name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Sku, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Sku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Product, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___FormattedPrice) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Sku) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Product);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Product*, "Oculus.Platform.Models", "Product");

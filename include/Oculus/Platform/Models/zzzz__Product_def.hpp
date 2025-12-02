#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Product.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ProductType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Product)
namespace Oculus::Platform::Models {
class BillingPlanList;
}
namespace Oculus::Platform::Models {
class ContentRating;
}
namespace Oculus::Platform::Models {
class Price;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Product;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Product);
// Dependencies Oculus.Platform.ProductType, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Product
class CORDL_TYPE Product : public ::System::Object {
public:
  // Declarations
  /// @brief Field BillingPlans, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BillingPlans, put = __cordl_internal_set_BillingPlans)) ::Oculus::Platform::Models::BillingPlanList* BillingPlans;

  /// @brief Field BillingPlansOptional, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BillingPlansOptional, put = __cordl_internal_set_BillingPlansOptional)) ::Oculus::Platform::Models::BillingPlanList* BillingPlansOptional;

  /// @brief Field ContentRating, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ContentRating, put = __cordl_internal_set_ContentRating)) ::Oculus::Platform::Models::ContentRating* ContentRating;

  /// @brief Field ContentRatingOptional, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ContentRatingOptional, put = __cordl_internal_set_ContentRatingOptional)) ::Oculus::Platform::Models::ContentRating* ContentRatingOptional;

  /// @brief Field CoverUrl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CoverUrl, put = __cordl_internal_set_CoverUrl)) ::StringW CoverUrl;

  /// @brief Field Description, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Description, put = __cordl_internal_set_Description)) ::StringW Description;

  /// @brief Field FormattedPrice, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_FormattedPrice, put = __cordl_internal_set_FormattedPrice)) ::StringW FormattedPrice;

  /// @brief Field IconUrl, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_IconUrl, put = __cordl_internal_set_IconUrl)) ::StringW IconUrl;

  /// @brief Field Name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Price, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Price, put = __cordl_internal_set_Price)) ::Oculus::Platform::Models::Price* Price;

  /// @brief Field ShortDescription, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ShortDescription, put = __cordl_internal_set_ShortDescription)) ::StringW ShortDescription;

  /// @brief Field Sku, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_Sku, put = __cordl_internal_set_Sku)) ::StringW Sku;

  /// @brief Field Type, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::Oculus::Platform::ProductType Type;

  static inline ::Oculus::Platform::Models::Product* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::Models::BillingPlanList* const& __cordl_internal_get_BillingPlans() const;

  constexpr ::Oculus::Platform::Models::BillingPlanList*& __cordl_internal_get_BillingPlans();

  constexpr ::Oculus::Platform::Models::BillingPlanList* const& __cordl_internal_get_BillingPlansOptional() const;

  constexpr ::Oculus::Platform::Models::BillingPlanList*& __cordl_internal_get_BillingPlansOptional();

  constexpr ::Oculus::Platform::Models::ContentRating* const& __cordl_internal_get_ContentRating() const;

  constexpr ::Oculus::Platform::Models::ContentRating*& __cordl_internal_get_ContentRating();

  constexpr ::Oculus::Platform::Models::ContentRating* const& __cordl_internal_get_ContentRatingOptional() const;

  constexpr ::Oculus::Platform::Models::ContentRating*& __cordl_internal_get_ContentRatingOptional();

  constexpr ::StringW const& __cordl_internal_get_CoverUrl() const;

  constexpr ::StringW& __cordl_internal_get_CoverUrl();

  constexpr ::StringW const& __cordl_internal_get_Description() const;

  constexpr ::StringW& __cordl_internal_get_Description();

  constexpr ::StringW const& __cordl_internal_get_FormattedPrice() const;

  constexpr ::StringW& __cordl_internal_get_FormattedPrice();

  constexpr ::StringW const& __cordl_internal_get_IconUrl() const;

  constexpr ::StringW& __cordl_internal_get_IconUrl();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::Oculus::Platform::Models::Price* const& __cordl_internal_get_Price() const;

  constexpr ::Oculus::Platform::Models::Price*& __cordl_internal_get_Price();

  constexpr ::StringW const& __cordl_internal_get_ShortDescription() const;

  constexpr ::StringW& __cordl_internal_get_ShortDescription();

  constexpr ::StringW const& __cordl_internal_get_Sku() const;

  constexpr ::StringW& __cordl_internal_get_Sku();

  constexpr ::Oculus::Platform::ProductType const& __cordl_internal_get_Type() const;

  constexpr ::Oculus::Platform::ProductType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_BillingPlans(::Oculus::Platform::Models::BillingPlanList* value);

  constexpr void __cordl_internal_set_BillingPlansOptional(::Oculus::Platform::Models::BillingPlanList* value);

  constexpr void __cordl_internal_set_ContentRating(::Oculus::Platform::Models::ContentRating* value);

  constexpr void __cordl_internal_set_ContentRatingOptional(::Oculus::Platform::Models::ContentRating* value);

  constexpr void __cordl_internal_set_CoverUrl(::StringW value);

  constexpr void __cordl_internal_set_Description(::StringW value);

  constexpr void __cordl_internal_set_FormattedPrice(::StringW value);

  constexpr void __cordl_internal_set_IconUrl(::StringW value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Price(::Oculus::Platform::Models::Price* value);

  constexpr void __cordl_internal_set_ShortDescription(::StringW value);

  constexpr void __cordl_internal_set_Sku(::StringW value);

  constexpr void __cordl_internal_set_Type(::Oculus::Platform::ProductType value);

  /// @brief Method .ctor, addr 0x5bdcce8, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18039 };

  /// @brief Field BillingPlansOptional, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::BillingPlanList* ___BillingPlansOptional;

  /// @brief Field BillingPlans, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::BillingPlanList* ___BillingPlans;

  /// @brief Field ContentRatingOptional, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::ContentRating* ___ContentRatingOptional;

  /// @brief Field ContentRating, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Models::ContentRating* ___ContentRating;

  /// @brief Field CoverUrl, offset: 0x30, size: 0x8, def value: None
  ::StringW ___CoverUrl;

  /// @brief Field Description, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field FormattedPrice, offset: 0x40, size: 0x8, def value: None
  ::StringW ___FormattedPrice;

  /// @brief Field IconUrl, offset: 0x48, size: 0x8, def value: None
  ::StringW ___IconUrl;

  /// @brief Field Name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Price, offset: 0x58, size: 0x8, def value: None
  ::Oculus::Platform::Models::Price* ___Price;

  /// @brief Field ShortDescription, offset: 0x60, size: 0x8, def value: None
  ::StringW ___ShortDescription;

  /// @brief Field Sku, offset: 0x68, size: 0x8, def value: None
  ::StringW ___Sku;

  /// @brief Field Type, offset: 0x70, size: 0x4, def value: None
  ::Oculus::Platform::ProductType ___Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Product, ___BillingPlansOptional) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___BillingPlans) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___ContentRatingOptional) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___ContentRating) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___CoverUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Description) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___FormattedPrice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___IconUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Price) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___ShortDescription) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Sku) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Product, ___Type) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Product, 0x78>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Product);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Product*, "Oculus.Platform.Models", "Product");

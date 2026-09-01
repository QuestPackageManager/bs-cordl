#pragma once
// IWYU pragma private; include "Oculus\Platform\IAP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IAP)
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class IAP;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::IAP*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::IAP*, "Oculus.Platform", "IAP");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.IAP
class CORDL_TYPE IAP : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConsumePurchase, addr 0x5de964c, size 0x154, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* ConsumePurchase(::StringW sku);

  /// @brief Method GetNextProductListPage, addr 0x5de9d5c, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* GetNextProductListPage(::Oculus::Platform::Models::ProductList* list);

  /// @brief Method GetNextPurchaseListPage, addr 0x5de9f4c, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetNextPurchaseListPage(::Oculus::Platform::Models::PurchaseList* list);

  /// @brief Method GetProductsBySKU, addr 0x5de97a0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* GetProductsBySKU(::ArrayW<::StringW> skus);

  /// @brief Method GetViewerPurchases, addr 0x5de991c, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetViewerPurchases();

  /// @brief Method GetViewerPurchasesDurableCache, addr 0x5de9a74, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* GetViewerPurchasesDurableCache();

  /// @brief Method LaunchCheckoutFlow, addr 0x5de9bcc, size 0x190, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Purchase*>* LaunchCheckoutFlow(::StringW sku);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IAP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAP(IAP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAP(IAP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::IAP) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform

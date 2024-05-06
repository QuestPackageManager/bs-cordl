#pragma once
// IWYU pragma private; include "Oculus/Platform/LogEventName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventName)
// Forward declare root types
namespace Oculus::Platform {
struct LogEventName;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LogEventName);
// Type: Oculus.Platform::LogEventName
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::LogEventName
struct CORDL_TYPE LogEventName {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LogEventName_Unwrapped
  enum struct __LogEventName_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_AdClick = static_cast<int32_t>(0x1),
    __E_AdImpression = static_cast<int32_t>(0x2),
    __E_VrCompleteRegistration = static_cast<int32_t>(0x3),
    __E_VrTutorialCompletion = static_cast<int32_t>(0x4),
    __E_Contact = static_cast<int32_t>(0x5),
    __E_CustomizeProduct = static_cast<int32_t>(0x6),
    __E_Donate = static_cast<int32_t>(0x7),
    __E_FindLocation = static_cast<int32_t>(0x8),
    __E_VrRate = static_cast<int32_t>(0x9),
    __E_Schedule = static_cast<int32_t>(0xa),
    __E_VrSearch = static_cast<int32_t>(0xb),
    __E_SmartTrial = static_cast<int32_t>(0xc),
    __E_SubmitApplication = static_cast<int32_t>(0xd),
    __E_Subscribe = static_cast<int32_t>(0xe),
    __E_VrContentView = static_cast<int32_t>(0xf),
    __E_VrSdkInitialize = static_cast<int32_t>(0x10),
    __E_VrSdkBackgroundStatusAvailable = static_cast<int32_t>(0x11),
    __E_VrSdkBackgroundStatusDenied = static_cast<int32_t>(0x12),
    __E_VrSdkBackgroundStatusRestricted = static_cast<int32_t>(0x13),
    __E_VrAddPaymentInfo = static_cast<int32_t>(0x14),
    __E_VrAddToCart = static_cast<int32_t>(0x15),
    __E_VrAddToWishlist = static_cast<int32_t>(0x16),
    __E_VrInitiatedCheckout = static_cast<int32_t>(0x17),
    __E_VrPurchase = static_cast<int32_t>(0x18),
    __E_VrCatalogUpdate = static_cast<int32_t>(0x19),
    __E_VrPurchaseFailed = static_cast<int32_t>(0x1a),
    __E_VrPurchaseRestored = static_cast<int32_t>(0x1b),
    __E_SubscriptionInitiatedCheckout = static_cast<int32_t>(0x1c),
    __E_SubscriptionFailed = static_cast<int32_t>(0x1d),
    __E_SubscriptionRestore = static_cast<int32_t>(0x1e),
    __E_VrLevelAchieved = static_cast<int32_t>(0x1f),
    __E_VrAchievementUnlocked = static_cast<int32_t>(0x20),
    __E_VrSpentCredits = static_cast<int32_t>(0x21),
    __E_VrObtainPushToken = static_cast<int32_t>(0x22),
    __E_VrPushOpened = static_cast<int32_t>(0x23),
    __E_VrActivateApp = static_cast<int32_t>(0x24),
    __E_VrDeactivateApp = static_cast<int32_t>(0x25),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LogEventName_Unwrapped() const noexcept {
    return static_cast<__LogEventName_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogEventName();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LogEventName(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AdClick value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::LogEventName const AdClick;

  /// @brief Field AdImpression value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::LogEventName const AdImpression;

  /// @brief Field Contact value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::LogEventName const Contact;

  /// @brief Field CustomizeProduct value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::LogEventName const CustomizeProduct;

  /// @brief Field Donate value: static_cast<int32_t>(0x7)
  static ::Oculus::Platform::LogEventName const Donate;

  /// @brief Field FindLocation value: static_cast<int32_t>(0x8)
  static ::Oculus::Platform::LogEventName const FindLocation;

  /// @brief Field Schedule value: static_cast<int32_t>(0xa)
  static ::Oculus::Platform::LogEventName const Schedule;

  /// @brief Field SmartTrial value: static_cast<int32_t>(0xc)
  static ::Oculus::Platform::LogEventName const SmartTrial;

  /// @brief Field SubmitApplication value: static_cast<int32_t>(0xd)
  static ::Oculus::Platform::LogEventName const SubmitApplication;

  /// @brief Field Subscribe value: static_cast<int32_t>(0xe)
  static ::Oculus::Platform::LogEventName const Subscribe;

  /// @brief Field SubscriptionFailed value: static_cast<int32_t>(0x1d)
  static ::Oculus::Platform::LogEventName const SubscriptionFailed;

  /// @brief Field SubscriptionInitiatedCheckout value: static_cast<int32_t>(0x1c)
  static ::Oculus::Platform::LogEventName const SubscriptionInitiatedCheckout;

  /// @brief Field SubscriptionRestore value: static_cast<int32_t>(0x1e)
  static ::Oculus::Platform::LogEventName const SubscriptionRestore;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::LogEventName const Unknown;

  /// @brief Field VrAchievementUnlocked value: static_cast<int32_t>(0x20)
  static ::Oculus::Platform::LogEventName const VrAchievementUnlocked;

  /// @brief Field VrActivateApp value: static_cast<int32_t>(0x24)
  static ::Oculus::Platform::LogEventName const VrActivateApp;

  /// @brief Field VrAddPaymentInfo value: static_cast<int32_t>(0x14)
  static ::Oculus::Platform::LogEventName const VrAddPaymentInfo;

  /// @brief Field VrAddToCart value: static_cast<int32_t>(0x15)
  static ::Oculus::Platform::LogEventName const VrAddToCart;

  /// @brief Field VrAddToWishlist value: static_cast<int32_t>(0x16)
  static ::Oculus::Platform::LogEventName const VrAddToWishlist;

  /// @brief Field VrCatalogUpdate value: static_cast<int32_t>(0x19)
  static ::Oculus::Platform::LogEventName const VrCatalogUpdate;

  /// @brief Field VrCompleteRegistration value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::LogEventName const VrCompleteRegistration;

  /// @brief Field VrContentView value: static_cast<int32_t>(0xf)
  static ::Oculus::Platform::LogEventName const VrContentView;

  /// @brief Field VrDeactivateApp value: static_cast<int32_t>(0x25)
  static ::Oculus::Platform::LogEventName const VrDeactivateApp;

  /// @brief Field VrInitiatedCheckout value: static_cast<int32_t>(0x17)
  static ::Oculus::Platform::LogEventName const VrInitiatedCheckout;

  /// @brief Field VrLevelAchieved value: static_cast<int32_t>(0x1f)
  static ::Oculus::Platform::LogEventName const VrLevelAchieved;

  /// @brief Field VrObtainPushToken value: static_cast<int32_t>(0x22)
  static ::Oculus::Platform::LogEventName const VrObtainPushToken;

  /// @brief Field VrPurchase value: static_cast<int32_t>(0x18)
  static ::Oculus::Platform::LogEventName const VrPurchase;

  /// @brief Field VrPurchaseFailed value: static_cast<int32_t>(0x1a)
  static ::Oculus::Platform::LogEventName const VrPurchaseFailed;

  /// @brief Field VrPurchaseRestored value: static_cast<int32_t>(0x1b)
  static ::Oculus::Platform::LogEventName const VrPurchaseRestored;

  /// @brief Field VrPushOpened value: static_cast<int32_t>(0x23)
  static ::Oculus::Platform::LogEventName const VrPushOpened;

  /// @brief Field VrRate value: static_cast<int32_t>(0x9)
  static ::Oculus::Platform::LogEventName const VrRate;

  /// @brief Field VrSdkBackgroundStatusAvailable value: static_cast<int32_t>(0x11)
  static ::Oculus::Platform::LogEventName const VrSdkBackgroundStatusAvailable;

  /// @brief Field VrSdkBackgroundStatusDenied value: static_cast<int32_t>(0x12)
  static ::Oculus::Platform::LogEventName const VrSdkBackgroundStatusDenied;

  /// @brief Field VrSdkBackgroundStatusRestricted value: static_cast<int32_t>(0x13)
  static ::Oculus::Platform::LogEventName const VrSdkBackgroundStatusRestricted;

  /// @brief Field VrSdkInitialize value: static_cast<int32_t>(0x10)
  static ::Oculus::Platform::LogEventName const VrSdkInitialize;

  /// @brief Field VrSearch value: static_cast<int32_t>(0xb)
  static ::Oculus::Platform::LogEventName const VrSearch;

  /// @brief Field VrSpentCredits value: static_cast<int32_t>(0x21)
  static ::Oculus::Platform::LogEventName const VrSpentCredits;

  /// @brief Field VrTutorialCompletion value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::LogEventName const VrTutorialCompletion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LogEventName, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::LogEventName, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LogEventName, "Oculus.Platform", "LogEventName");

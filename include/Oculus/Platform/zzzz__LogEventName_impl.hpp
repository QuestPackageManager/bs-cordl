#pragma once
// IWYU pragma private; include "Oculus/Platform/LogEventName.hpp"
#include "Oculus/Platform/zzzz__LogEventName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LogEventName::LogEventName(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LogEventName::LogEventName()   {
}
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::AdClick{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::AdImpression{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrCompleteRegistration{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrTutorialCompletion{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::Contact{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::CustomizeProduct{static_cast<int32_t>(0x6)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::Donate{static_cast<int32_t>(0x7)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::FindLocation{static_cast<int32_t>(0x8)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrRate{static_cast<int32_t>(0x9)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::Schedule{static_cast<int32_t>(0xa)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSearch{static_cast<int32_t>(0xb)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::SmartTrial{static_cast<int32_t>(0xc)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::SubmitApplication{static_cast<int32_t>(0xd)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::Subscribe{static_cast<int32_t>(0xe)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrContentView{static_cast<int32_t>(0xf)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSdkInitialize{static_cast<int32_t>(0x10)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSdkBackgroundStatusAvailable{static_cast<int32_t>(0x11)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSdkBackgroundStatusDenied{static_cast<int32_t>(0x12)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSdkBackgroundStatusRestricted{static_cast<int32_t>(0x13)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrAddPaymentInfo{static_cast<int32_t>(0x14)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrAddToCart{static_cast<int32_t>(0x15)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrAddToWishlist{static_cast<int32_t>(0x16)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrInitiatedCheckout{static_cast<int32_t>(0x17)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrPurchase{static_cast<int32_t>(0x18)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrCatalogUpdate{static_cast<int32_t>(0x19)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrPurchaseFailed{static_cast<int32_t>(0x1a)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrPurchaseRestored{static_cast<int32_t>(0x1b)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::SubscriptionInitiatedCheckout{static_cast<int32_t>(0x1c)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::SubscriptionFailed{static_cast<int32_t>(0x1d)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::SubscriptionRestore{static_cast<int32_t>(0x1e)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrLevelAchieved{static_cast<int32_t>(0x1f)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrAchievementUnlocked{static_cast<int32_t>(0x20)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrSpentCredits{static_cast<int32_t>(0x21)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrObtainPushToken{static_cast<int32_t>(0x22)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrPushOpened{static_cast<int32_t>(0x23)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrActivateApp{static_cast<int32_t>(0x24)};
constexpr ::Oculus::Platform::LogEventName  Oculus::Platform::LogEventName::VrDeactivateApp{static_cast<int32_t>(0x25)};

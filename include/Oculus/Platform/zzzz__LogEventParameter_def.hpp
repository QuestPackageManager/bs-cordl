#pragma once
// IWYU pragma private; include "Oculus/Platform/LogEventParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventParameter)
// Forward declare root types
namespace Oculus::Platform {
struct LogEventParameter;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LogEventParameter);
// Type: Oculus.Platform::LogEventParameter
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::LogEventParameter
struct CORDL_TYPE LogEventParameter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LogEventParameter_Unwrapped
  enum struct __LogEventParameter_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_VrCurrency = static_cast<int32_t>(0x1),
    __E_VrRegistrationMethod = static_cast<int32_t>(0x2),
    __E_VrContentType = static_cast<int32_t>(0x3),
    __E_VrContent = static_cast<int32_t>(0x4),
    __E_VrContentId = static_cast<int32_t>(0x5),
    __E_VrSearchString = static_cast<int32_t>(0x6),
    __E_VrSuccess = static_cast<int32_t>(0x7),
    __E_VrMaxRatingValue = static_cast<int32_t>(0x8),
    __E_VrPaymentInfoAvailable = static_cast<int32_t>(0x9),
    __E_VrNumItems = static_cast<int32_t>(0xa),
    __E_VrLevel = static_cast<int32_t>(0xb),
    __E_VrDescription = static_cast<int32_t>(0xc),
    __E_AdType = static_cast<int32_t>(0xd),
    __E_VrOrderId = static_cast<int32_t>(0xe),
    __E_EventName = static_cast<int32_t>(0xf),
    __E_LogTime = static_cast<int32_t>(0x10),
    __E_ImplicitlyLogged = static_cast<int32_t>(0x11),
    __E_InBackground = static_cast<int32_t>(0x12),
    __E_VrPushCampaign = static_cast<int32_t>(0x13),
    __E_VrPushAction = static_cast<int32_t>(0x14),
    __E_VrIapProductType = static_cast<int32_t>(0x15),
    __E_VrContentTitle = static_cast<int32_t>(0x16),
    __E_VrTransactionId = static_cast<int32_t>(0x17),
    __E_VrTransactionDate = static_cast<int32_t>(0x18),
    __E_VrIapSubsPeriod = static_cast<int32_t>(0x19),
    __E_VrIapIsStartTrial = static_cast<int32_t>(0x1a),
    __E_VrIapHasFreeTrial = static_cast<int32_t>(0x1b),
    __E_VrIapTrialPeriod = static_cast<int32_t>(0x1c),
    __E_VrIapTrialPrice = static_cast<int32_t>(0x1d),
    __E_SessionId = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LogEventParameter_Unwrapped() const noexcept {
    return static_cast<__LogEventParameter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogEventParameter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LogEventParameter(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AdType value: static_cast<int32_t>(0xd)
  static ::Oculus::Platform::LogEventParameter const AdType;

  /// @brief Field EventName value: static_cast<int32_t>(0xf)
  static ::Oculus::Platform::LogEventParameter const EventName;

  /// @brief Field ImplicitlyLogged value: static_cast<int32_t>(0x11)
  static ::Oculus::Platform::LogEventParameter const ImplicitlyLogged;

  /// @brief Field InBackground value: static_cast<int32_t>(0x12)
  static ::Oculus::Platform::LogEventParameter const InBackground;

  /// @brief Field LogTime value: static_cast<int32_t>(0x10)
  static ::Oculus::Platform::LogEventParameter const LogTime;

  /// @brief Field SessionId value: static_cast<int32_t>(0x1e)
  static ::Oculus::Platform::LogEventParameter const SessionId;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::LogEventParameter const Unknown;

  /// @brief Field VrContent value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::LogEventParameter const VrContent;

  /// @brief Field VrContentId value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::LogEventParameter const VrContentId;

  /// @brief Field VrContentTitle value: static_cast<int32_t>(0x16)
  static ::Oculus::Platform::LogEventParameter const VrContentTitle;

  /// @brief Field VrContentType value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::LogEventParameter const VrContentType;

  /// @brief Field VrCurrency value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::LogEventParameter const VrCurrency;

  /// @brief Field VrDescription value: static_cast<int32_t>(0xc)
  static ::Oculus::Platform::LogEventParameter const VrDescription;

  /// @brief Field VrIapHasFreeTrial value: static_cast<int32_t>(0x1b)
  static ::Oculus::Platform::LogEventParameter const VrIapHasFreeTrial;

  /// @brief Field VrIapIsStartTrial value: static_cast<int32_t>(0x1a)
  static ::Oculus::Platform::LogEventParameter const VrIapIsStartTrial;

  /// @brief Field VrIapProductType value: static_cast<int32_t>(0x15)
  static ::Oculus::Platform::LogEventParameter const VrIapProductType;

  /// @brief Field VrIapSubsPeriod value: static_cast<int32_t>(0x19)
  static ::Oculus::Platform::LogEventParameter const VrIapSubsPeriod;

  /// @brief Field VrIapTrialPeriod value: static_cast<int32_t>(0x1c)
  static ::Oculus::Platform::LogEventParameter const VrIapTrialPeriod;

  /// @brief Field VrIapTrialPrice value: static_cast<int32_t>(0x1d)
  static ::Oculus::Platform::LogEventParameter const VrIapTrialPrice;

  /// @brief Field VrLevel value: static_cast<int32_t>(0xb)
  static ::Oculus::Platform::LogEventParameter const VrLevel;

  /// @brief Field VrMaxRatingValue value: static_cast<int32_t>(0x8)
  static ::Oculus::Platform::LogEventParameter const VrMaxRatingValue;

  /// @brief Field VrNumItems value: static_cast<int32_t>(0xa)
  static ::Oculus::Platform::LogEventParameter const VrNumItems;

  /// @brief Field VrOrderId value: static_cast<int32_t>(0xe)
  static ::Oculus::Platform::LogEventParameter const VrOrderId;

  /// @brief Field VrPaymentInfoAvailable value: static_cast<int32_t>(0x9)
  static ::Oculus::Platform::LogEventParameter const VrPaymentInfoAvailable;

  /// @brief Field VrPushAction value: static_cast<int32_t>(0x14)
  static ::Oculus::Platform::LogEventParameter const VrPushAction;

  /// @brief Field VrPushCampaign value: static_cast<int32_t>(0x13)
  static ::Oculus::Platform::LogEventParameter const VrPushCampaign;

  /// @brief Field VrRegistrationMethod value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::LogEventParameter const VrRegistrationMethod;

  /// @brief Field VrSearchString value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::LogEventParameter const VrSearchString;

  /// @brief Field VrSuccess value: static_cast<int32_t>(0x7)
  static ::Oculus::Platform::LogEventParameter const VrSuccess;

  /// @brief Field VrTransactionDate value: static_cast<int32_t>(0x18)
  static ::Oculus::Platform::LogEventParameter const VrTransactionDate;

  /// @brief Field VrTransactionId value: static_cast<int32_t>(0x17)
  static ::Oculus::Platform::LogEventParameter const VrTransactionId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15306 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LogEventParameter, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::LogEventParameter, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LogEventParameter, "Oculus.Platform", "LogEventParameter");

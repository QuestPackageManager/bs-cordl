#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyOnlineServicesAvailabilityModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyOnlineServicesAvailabilityModel)
namespace GlobalNamespace {
struct ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability;
}
namespace GlobalNamespace {
class ISonyOnlineServicesAvailabilityModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability);
MARK_REF_PTR_T(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability
struct CORDL_TYPE ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability_Unwrapped
  enum struct __ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability_Unwrapped : int32_t {
    __E_Available = static_cast<int32_t>(0x0),
    __E_Unavailable = static_cast<int32_t>(0x1),
    __E_UnknownError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability_Unwrapped() const noexcept {
    return static_cast<__ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability(int32_t value__) noexcept;

  /// @brief Field Available value: I32(0)
  static ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability const Available;

  /// @brief Field Unavailable value: I32(1)
  static ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability const Unavailable;

  /// @brief Field UnknownError value: I32(2)
  static ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability const UnknownError;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13175 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISonyOnlineServicesAvailabilityModel
class CORDL_TYPE ISonyOnlineServicesAvailabilityModel {
public:
  // Declarations
  using OnlineServicesAvailability = ::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability;

  /// @brief Method GetOnlineServicesAvailabilityAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability>* GetOnlineServicesAvailabilityAsync();

  // Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel_OnlineServicesAvailability, "", "ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability");
NEED_NO_BOX(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*, "", "ISonyOnlineServicesAvailabilityModel");

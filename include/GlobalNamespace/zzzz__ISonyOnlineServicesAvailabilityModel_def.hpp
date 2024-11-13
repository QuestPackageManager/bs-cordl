#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyOnlineServicesAvailabilityModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyOnlineServicesAvailabilityModel)
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace GlobalNamespace {
class ISonyOnlineServicesAvailabilityModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability);
MARK_REF_PTR_T(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
// Type: ::OnlineServicesAvailability
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ISonyOnlineServicesAvailabilityModel::OnlineServicesAvailability
struct CORDL_TYPE __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped
  enum struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped : int32_t {
    __E_Available = static_cast<int32_t>(0x0),
    __E_Unavailable = static_cast<int32_t>(0x1),
    __E_UnknownError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped() const noexcept {
    return static_cast<____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Available value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Available;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unavailable;

  /// @brief Field UnknownError value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const UnknownError;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13137 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ISonyOnlineServicesAvailabilityModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ISonyOnlineServicesAvailabilityModel*
class CORDL_TYPE ISonyOnlineServicesAvailabilityModel {
public:
  // Declarations
  using OnlineServicesAvailability = ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;

  /// @brief Method GetOnlineServicesAvailabilityAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>* GetOnlineServicesAvailabilityAsync();

  // Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, "", "ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability");
NEED_NO_BOX(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*, "", "ISonyOnlineServicesAvailabilityModel");

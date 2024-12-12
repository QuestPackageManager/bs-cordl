#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyPSPremiumHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyPSPremiumHelper)
namespace GlobalNamespace {
struct ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct ISonyPSPremiumHelper_GetPremiumStatusResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct ISonyPSPremiumHelper_GetPremiumStatusResult;
}
namespace GlobalNamespace {
class ISonyPSPremiumHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult);
MARK_VAL_T(::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyPSPremiumHelper);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyPSPremiumHelper/DisplayJoinPremiumDialogResult
struct CORDL_TYPE ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult_Unwrapped
  enum struct __ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult_Unwrapped() const noexcept {
    return static_cast<__ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13175 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyPSPremiumHelper/GetPremiumStatusResult
struct CORDL_TYPE ISonyPSPremiumHelper_GetPremiumStatusResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyPSPremiumHelper_GetPremiumStatusResult_Unwrapped
  enum struct __ISonyPSPremiumHelper_GetPremiumStatusResult_Unwrapped : int32_t {
    __E_Authorized = static_cast<int32_t>(0x0),
    __E_Unauthorized = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyPSPremiumHelper_GetPremiumStatusResult_Unwrapped() const noexcept {
    return static_cast<__ISonyPSPremiumHelper_GetPremiumStatusResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyPSPremiumHelper_GetPremiumStatusResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyPSPremiumHelper_GetPremiumStatusResult(int32_t value__) noexcept;

  /// @brief Field Authorized value: I32(0)
  static ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult const Authorized;

  /// @brief Field Failed value: I32(2)
  static ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult const Failed;

  /// @brief Field Unauthorized value: I32(1)
  static ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult const Unauthorized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13176 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISonyPSPremiumHelper
class CORDL_TYPE ISonyPSPremiumHelper {
public:
  // Declarations
  using DisplayJoinPremiumDialogResult = ::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult;

  using GetPremiumStatusResult = ::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult;

  /// @brief Method DisplayJoinPremiumDialogAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult>* DisplayJoinPremiumDialogAsync(::System::Threading::CancellationToken token);

  /// @brief Method GetPremiumStatusAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult>* GetPremiumStatusAsync(::System::Threading::CancellationToken token);

  /// @brief Method NotifyPremiumFeature, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifyPremiumFeature(bool isSpectator);

  // Ctor Parameters [CppParam { name: "", ty: "ISonyPSPremiumHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyPSPremiumHelper(ISonyPSPremiumHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPSPremiumHelper_DisplayJoinPremiumDialogResult, "", "ISonyPSPremiumHelper/DisplayJoinPremiumDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPSPremiumHelper_GetPremiumStatusResult, "", "ISonyPSPremiumHelper/GetPremiumStatusResult");
NEED_NO_BOX(::GlobalNamespace::ISonyPSPremiumHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPSPremiumHelper*, "", "ISonyPSPremiumHelper");

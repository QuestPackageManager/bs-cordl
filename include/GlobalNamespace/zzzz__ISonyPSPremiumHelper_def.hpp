#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyPSPremiumHelper)
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__GetPremiumStatusResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__GetPremiumStatusResult;
}
namespace GlobalNamespace {
class ISonyPSPremiumHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyPSPremiumHelper);
// Type: ::DisplayJoinPremiumDialogResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ISonyPSPremiumHelper::DisplayJoinPremiumDialogResult
struct CORDL_TYPE __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped
  enum struct ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped() const noexcept {
    return static_cast<____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const Failed;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const OK;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetPremiumStatusResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ISonyPSPremiumHelper::GetPremiumStatusResult
struct CORDL_TYPE __ISonyPSPremiumHelper__GetPremiumStatusResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped
  enum struct ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped : int32_t {
    __E_Authorized = static_cast<int32_t>(0x0),
    __E_Unauthorized = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped() const noexcept {
    return static_cast<____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyPSPremiumHelper__GetPremiumStatusResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyPSPremiumHelper__GetPremiumStatusResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Authorized value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Authorized;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Failed;

  /// @brief Field Unauthorized value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Unauthorized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ISonyPSPremiumHelper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ISonyPSPremiumHelper*
class CORDL_TYPE ISonyPSPremiumHelper {
public:
  // Declarations
  using DisplayJoinPremiumDialogResult = ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;

  using GetPremiumStatusResult = ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult;

  /// @brief Method DisplayJoinPremiumDialogAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>* DisplayJoinPremiumDialogAsync(::System::Threading::CancellationToken token);

  /// @brief Method GetPremiumStatusAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult>* GetPremiumStatusAsync(::System::Threading::CancellationToken token);

  /// @brief Method NotifyPremiumFeature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyPremiumFeature(bool isSpectator);

  // Ctor Parameters [CppParam { name: "", ty: "ISonyPSPremiumHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISonyPSPremiumHelper(ISonyPSPremiumHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISonyPSPremiumHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyPSPremiumHelper(ISonyPSPremiumHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, "", "ISonyPSPremiumHelper/DisplayJoinPremiumDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult, "", "ISonyPSPremiumHelper/GetPremiumStatusResult");
NEED_NO_BOX(::GlobalNamespace::ISonyPSPremiumHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPSPremiumHelper*, "", "ISonyPSPremiumHelper");

#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyCommerceHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyCommerceHelper)
namespace GlobalNamespace {
struct ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_GetAdditionalContentEntitlementsResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct ISonyCommerceHelper_DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_GetAdditionalContentEntitlementsResult;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyCommerceHelper);
MARK_VAL_T(::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyCommerceHelper/DisplayProductBrowseDialogResult
struct CORDL_TYPE ISonyCommerceHelper_DisplayProductBrowseDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyCommerceHelper_DisplayProductBrowseDialogResult_Unwrapped
  enum struct __ISonyCommerceHelper_DisplayProductBrowseDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyCommerceHelper_DisplayProductBrowseDialogResult_Unwrapped() const noexcept {
    return static_cast<__ISonyCommerceHelper_DisplayProductBrowseDialogResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyCommerceHelper_DisplayProductBrowseDialogResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyCommerceHelper_DisplayProductBrowseDialogResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12801 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyCommerceHelper/DisplayCategoryBrowseDialogResult
struct CORDL_TYPE ISonyCommerceHelper_DisplayCategoryBrowseDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyCommerceHelper_DisplayCategoryBrowseDialogResult_Unwrapped
  enum struct __ISonyCommerceHelper_DisplayCategoryBrowseDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyCommerceHelper_DisplayCategoryBrowseDialogResult_Unwrapped() const noexcept {
    return static_cast<__ISonyCommerceHelper_DisplayCategoryBrowseDialogResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyCommerceHelper_DisplayCategoryBrowseDialogResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyCommerceHelper_DisplayCategoryBrowseDialogResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12802 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyCommerceHelper/GetAdditionalContentEntitlementsResult
struct CORDL_TYPE ISonyCommerceHelper_GetAdditionalContentEntitlementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ISonyCommerceHelper_GetAdditionalContentEntitlementsResult_Unwrapped
  enum struct __ISonyCommerceHelper_GetAdditionalContentEntitlementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ISonyCommerceHelper_GetAdditionalContentEntitlementsResult_Unwrapped() const noexcept {
    return static_cast<__ISonyCommerceHelper_GetAdditionalContentEntitlementsResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyCommerceHelper_GetAdditionalContentEntitlementsResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ISonyCommerceHelper_GetAdditionalContentEntitlementsResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12803 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ISonyCommerceHelper::GetAdditionalContentEntitlementsResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: ISonyCommerceHelper/AdditionalContentEntitlementsAsyncResult
struct CORDL_TYPE ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult();

  // Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult", modifiers: "", def_value: None }, CppParam { name:
  // "entitlementsLabels", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult(::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult result,
                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12804 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field result, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult result;

  /// @brief Field entitlementsLabels, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult, result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult, entitlementsLabels) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISonyCommerceHelper
class CORDL_TYPE ISonyCommerceHelper {
public:
  // Declarations
  using AdditionalContentEntitlementsAsyncResult = ::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult;

  using DisplayCategoryBrowseDialogResult = ::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult;

  using DisplayProductBrowseDialogResult = ::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult;

  using GetAdditionalContentEntitlementsResult = ::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult;

  /// @brief Method DisplayCategoryBrowseDialogAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult>* DisplayCategoryBrowseDialogAsync(::StringW categoryLabel,
                                                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method DisplayProductBrowseDialogAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult>* DisplayProductBrowseDialogAsync(::StringW productLabel,
                                                                                                                                                      ::System::Threading::CancellationToken token);

  /// @brief Method GetAdditionalContentEntitlementsAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult>*
  GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "ISonyCommerceHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyCommerceHelper(ISonyCommerceHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12805 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper_DisplayCategoryBrowseDialogResult, "", "ISonyCommerceHelper/DisplayCategoryBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper_DisplayProductBrowseDialogResult, "", "ISonyCommerceHelper/DisplayProductBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper_GetAdditionalContentEntitlementsResult, "", "ISonyCommerceHelper/GetAdditionalContentEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::ISonyCommerceHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper*, "", "ISonyCommerceHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper_AdditionalContentEntitlementsAsyncResult, "", "ISonyCommerceHelper/AdditionalContentEntitlementsAsyncResult");

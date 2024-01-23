#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyCommerceHelper)
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__DisplayProductBrowseDialogResult;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;
}
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
struct __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyCommerceHelper);
MARK_VAL_T(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult);
// Type: ::DisplayProductBrowseDialogResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4140))
// CS Name: ::ISonyCommerceHelper::DisplayProductBrowseDialogResult
struct CORDL_TYPE __ISonyCommerceHelper__DisplayProductBrowseDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped
  enum struct ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped() const noexcept {
    return static_cast<____ISonyCommerceHelper__DisplayProductBrowseDialogResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyCommerceHelper__DisplayProductBrowseDialogResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyCommerceHelper__DisplayProductBrowseDialogResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DisplayCategoryBrowseDialogResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4141))
// CS Name: ::ISonyCommerceHelper::DisplayCategoryBrowseDialogResult
struct CORDL_TYPE __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped
  enum struct ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped() const noexcept {
    return static_cast<____ISonyCommerceHelper__DisplayCategoryBrowseDialogResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyCommerceHelper__DisplayCategoryBrowseDialogResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetAdditionalContentEntitlementsResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4142))
// CS Name: ::ISonyCommerceHelper::GetAdditionalContentEntitlementsResult
struct CORDL_TYPE __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped
  enum struct ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped() const noexcept {
    return static_cast<____ISonyCommerceHelper__GetAdditionalContentEntitlementsResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyCommerceHelper__GetAdditionalContentEntitlementsResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AdditionalContentEntitlementsAsyncResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4142))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4143))
// CS Name: ::ISonyCommerceHelper::AdditionalContentEntitlementsAsyncResult
struct CORDL_TYPE __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult", modifiers: "", def_value: None }, CppParam { name:
  // "entitlementsLabels", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult result,
                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult();

  /// @brief Field result, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult result;

  /// @brief Field entitlementsLabels, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> entitlementsLabels;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, entitlementsLabels) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ISonyCommerceHelper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4144))
// CS Name: ::ISonyCommerceHelper*
class CORDL_TYPE ISonyCommerceHelper {
public:
  // Declarations
  using AdditionalContentEntitlementsAsyncResult = ::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;

  using GetAdditionalContentEntitlementsResult = ::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult;

  using DisplayCategoryBrowseDialogResult = ::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult;

  using DisplayProductBrowseDialogResult = ::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult;

  /// @brief Method GetAdditionalContentEntitlementsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*
  GetAdditionalContentEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DisplayProductBrowseDialogAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult>* DisplayProductBrowseDialogAsync(::StringW productLabel,
                                                                                                                                                         ::System::Threading::CancellationToken token);

  /// @brief Method DisplayCategoryBrowseDialogAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>*
  DisplayCategoryBrowseDialogAsync(::StringW categoryLabel, ::System::Threading::CancellationToken token);

  // Ctor Parameters [CppParam { name: "", ty: "ISonyCommerceHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISonyCommerceHelper(ISonyCommerceHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISonyCommerceHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyCommerceHelper(ISonyCommerceHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult, "", "ISonyCommerceHelper/DisplayCategoryBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__DisplayProductBrowseDialogResult, "", "ISonyCommerceHelper/DisplayProductBrowseDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, "", "ISonyCommerceHelper/GetAdditionalContentEntitlementsResult");
NEED_NO_BOX(::GlobalNamespace::ISonyCommerceHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyCommerceHelper*, "", "ISonyCommerceHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, "", "ISonyCommerceHelper/AdditionalContentEntitlementsAsyncResult");

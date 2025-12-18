#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerBaseAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PackageManagerBaseAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerBaseAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerBaseAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerBaseAnalytic
class CORDL_TYPE PackageManagerBaseAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field blocking, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_blocking, put = __cordl_internal_set_blocking)) bool blocking;

  /// @brief Field duration, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) int64_t duration;

  /// @brief Field error_message, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_error_message, put = __cordl_internal_set_error_message)) ::StringW error_message;

  /// @brief Field package_id, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_package_id, put = __cordl_internal_set_package_id)) ::StringW package_id;

  /// @brief Field start_ts, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_start_ts, put = __cordl_internal_set_start_ts)) int64_t start_ts;

  /// @brief Field status_code, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_status_code, put = __cordl_internal_set_status_code)) int32_t status_code;

  static inline ::UnityEditor::Analytics::PackageManagerBaseAnalytic* New_ctor(::StringW eventName);

  constexpr bool const& __cordl_internal_get_blocking() const;

  constexpr bool& __cordl_internal_get_blocking();

  constexpr int64_t const& __cordl_internal_get_duration() const;

  constexpr int64_t& __cordl_internal_get_duration();

  constexpr ::StringW const& __cordl_internal_get_error_message() const;

  constexpr ::StringW& __cordl_internal_get_error_message();

  constexpr ::StringW const& __cordl_internal_get_package_id() const;

  constexpr ::StringW& __cordl_internal_get_package_id();

  constexpr int64_t const& __cordl_internal_get_start_ts() const;

  constexpr int64_t& __cordl_internal_get_start_ts();

  constexpr int32_t const& __cordl_internal_get_status_code() const;

  constexpr int32_t& __cordl_internal_get_status_code();

  constexpr void __cordl_internal_set_blocking(bool value);

  constexpr void __cordl_internal_set_duration(int64_t value);

  constexpr void __cordl_internal_set_error_message(::StringW value);

  constexpr void __cordl_internal_set_package_id(::StringW value);

  constexpr void __cordl_internal_set_start_ts(int64_t value);

  constexpr void __cordl_internal_set_status_code(int32_t value);

  /// @brief Method .ctor, addr 0x6c59ab8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerBaseAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerBaseAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerBaseAnalytic(PackageManagerBaseAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerBaseAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerBaseAnalytic(PackageManagerBaseAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22589 };

  /// @brief Field start_ts, offset: 0x30, size: 0x8, def value: None
  int64_t ___start_ts;

  /// @brief Field duration, offset: 0x38, size: 0x8, def value: None
  int64_t ___duration;

  /// @brief Field blocking, offset: 0x40, size: 0x1, def value: None
  bool ___blocking;

  /// @brief Field package_id, offset: 0x48, size: 0x8, def value: None
  ::StringW ___package_id;

  /// @brief Field status_code, offset: 0x50, size: 0x4, def value: None
  int32_t ___status_code;

  /// @brief Field error_message, offset: 0x58, size: 0x8, def value: None
  ::StringW ___error_message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___start_ts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___duration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___blocking) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___package_id) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___status_code) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerBaseAnalytic, ___error_message) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerBaseAnalytic, 0x60>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerBaseAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerBaseAnalytic*, "UnityEditor.Analytics", "PackageManagerBaseAnalytic");

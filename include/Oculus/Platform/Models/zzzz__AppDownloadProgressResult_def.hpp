#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AppDownloadProgressResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__AppStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDownloadProgressResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AppDownloadProgressResult);
// Dependencies Oculus.Platform.AppStatus, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AppDownloadProgressResult
class CORDL_TYPE AppDownloadProgressResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DownloadBytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DownloadBytes, put = __cordl_internal_set_DownloadBytes)) int64_t DownloadBytes;

  /// @brief Field DownloadedBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DownloadedBytes, put = __cordl_internal_set_DownloadedBytes)) int64_t DownloadedBytes;

  /// @brief Field StatusCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_StatusCode, put = __cordl_internal_set_StatusCode)) ::Oculus::Platform::AppStatus StatusCode;

  static inline ::Oculus::Platform::Models::AppDownloadProgressResult* New_ctor(::System::IntPtr o);

  constexpr int64_t const& __cordl_internal_get_DownloadBytes() const;

  constexpr int64_t& __cordl_internal_get_DownloadBytes();

  constexpr int64_t const& __cordl_internal_get_DownloadedBytes() const;

  constexpr int64_t& __cordl_internal_get_DownloadedBytes();

  constexpr ::Oculus::Platform::AppStatus const& __cordl_internal_get_StatusCode() const;

  constexpr ::Oculus::Platform::AppStatus& __cordl_internal_get_StatusCode();

  constexpr void __cordl_internal_set_DownloadBytes(int64_t value);

  constexpr void __cordl_internal_set_DownloadedBytes(int64_t value);

  constexpr void __cordl_internal_set_StatusCode(::Oculus::Platform::AppStatus value);

  /// @brief Method .ctor, addr 0x3f8f550, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDownloadProgressResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDownloadProgressResult(AppDownloadProgressResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDownloadProgressResult(AppDownloadProgressResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15503 };

  /// @brief Field DownloadBytes, offset: 0x10, size: 0x8, def value: None
  int64_t ___DownloadBytes;

  /// @brief Field DownloadedBytes, offset: 0x18, size: 0x8, def value: None
  int64_t ___DownloadedBytes;

  /// @brief Field StatusCode, offset: 0x20, size: 0x4, def value: None
  ::Oculus::Platform::AppStatus ___StatusCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::AppDownloadProgressResult, ___DownloadBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AppDownloadProgressResult, ___DownloadedBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AppDownloadProgressResult, ___StatusCode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AppDownloadProgressResult, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AppDownloadProgressResult*, "Oculus.Platform.Models", "AppDownloadProgressResult");

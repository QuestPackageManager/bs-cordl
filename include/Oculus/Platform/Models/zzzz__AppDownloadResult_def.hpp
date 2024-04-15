#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDownloadResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AppDownloadResult);
// Type: Oculus.Platform.Models::AppDownloadResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AppDownloadResult*
class CORDL_TYPE AppDownloadResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Timestamp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Timestamp, put = __cordl_internal_set_Timestamp)) int64_t Timestamp;

  static inline ::Oculus::Platform::Models::AppDownloadResult* New_ctor(void* o);

  constexpr int64_t const& __cordl_internal_get_Timestamp() const;

  constexpr int64_t& __cordl_internal_get_Timestamp();

  constexpr void __cordl_internal_set_Timestamp(int64_t value);

  /// @brief Method .ctor, addr 0x29db784, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDownloadResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDownloadResult(AppDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDownloadResult(AppDownloadResult const&) = delete;

  /// @brief Field Timestamp, offset: 0x10, size: 0x8, def value: None
  int64_t ___Timestamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AppDownloadResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AppDownloadResult, ___Timestamp) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AppDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AppDownloadResult*, "Oculus.Platform.Models", "AppDownloadResult");

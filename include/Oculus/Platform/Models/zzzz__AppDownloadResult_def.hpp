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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13413))
// CS Name: ::Oculus.Platform.Models::AppDownloadResult*
class CORDL_TYPE AppDownloadResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Timestamp, offset 0x10, size 0x8
  __declspec(property(get = __get_Timestamp, put = __set_Timestamp)) int64_t Timestamp;

  constexpr int64_t& __get_Timestamp();

  constexpr int64_t const& __get_Timestamp() const;

  constexpr void __set_Timestamp(int64_t value);

  static inline ::Oculus::Platform::Models::AppDownloadResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2703e80 size 0x78 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDownloadResult(AppDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDownloadResult(AppDownloadResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDownloadResult();

public:
  /// @brief Field Timestamp, offset: 0x10, size: 0x8, def value: None
  int64_t ___Timestamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AppDownloadResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AppDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AppDownloadResult*, "Oculus.Platform.Models", "AppDownloadResult");

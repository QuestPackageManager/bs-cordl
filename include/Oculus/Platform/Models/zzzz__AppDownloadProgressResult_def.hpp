#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__AppStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDownloadProgressResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AppDownloadProgressResult);
// Type: Oculus.Platform.Models::AppDownloadProgressResult
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13230)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13412))
// CS Name: ::Oculus.Platform.Models::AppDownloadProgressResult*
class CORDL_TYPE AppDownloadProgressResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DownloadBytes, offset 0x10, size 0x8
  __declspec(property(get = __get_DownloadBytes, put = __set_DownloadBytes)) int64_t DownloadBytes;

  /// @brief Field DownloadedBytes, offset 0x18, size 0x8
  __declspec(property(get = __get_DownloadedBytes, put = __set_DownloadedBytes)) int64_t DownloadedBytes;

  /// @brief Field StatusCode, offset 0x20, size 0x4
  __declspec(property(get = __get_StatusCode, put = __set_StatusCode))::Oculus::Platform::AppStatus StatusCode;

  constexpr int64_t& __get_DownloadBytes();

  constexpr int64_t const& __get_DownloadBytes() const;

  constexpr void __set_DownloadBytes(int64_t value);

  constexpr int64_t& __get_DownloadedBytes();

  constexpr int64_t const& __get_DownloadedBytes() const;

  constexpr void __set_DownloadedBytes(int64_t value);

  constexpr ::Oculus::Platform::AppStatus& __get_StatusCode();

  constexpr ::Oculus::Platform::AppStatus const& __get_StatusCode() const;

  constexpr void __set_StatusCode(::Oculus::Platform::AppStatus value);

  static inline ::Oculus::Platform::Models::AppDownloadProgressResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2703de8 size 0x98 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDownloadProgressResult(AppDownloadProgressResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDownloadProgressResult(AppDownloadProgressResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDownloadProgressResult();

public:
  /// @brief Field DownloadBytes, offset: 0x10, size: 0x8, def value: None
  int64_t ___DownloadBytes;

  /// @brief Field DownloadedBytes, offset: 0x18, size: 0x8, def value: None
  int64_t ___DownloadedBytes;

  /// @brief Field StatusCode, offset: 0x20, size: 0x4, def value: None
  ::Oculus::Platform::AppStatus ___StatusCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AppDownloadProgressResult, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AppDownloadProgressResult*, "Oculus.Platform.Models", "AppDownloadProgressResult");

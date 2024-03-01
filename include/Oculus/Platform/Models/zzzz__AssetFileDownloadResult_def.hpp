#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDownloadResult);
// Type: Oculus.Platform.Models::AssetFileDownloadResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AssetFileDownloadResult*
class CORDL_TYPE AssetFileDownloadResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetId, put = __cordl_internal_set_AssetId)) uint64_t AssetId;

  /// @brief Field Filepath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Filepath, put = __cordl_internal_set_Filepath))::StringW Filepath;

  static inline ::Oculus::Platform::Models::AssetFileDownloadResult* New_ctor(void* o);

  constexpr uint64_t const& __cordl_internal_get_AssetId() const;

  constexpr uint64_t& __cordl_internal_get_AssetId();

  constexpr ::StringW const& __cordl_internal_get_Filepath() const;

  constexpr ::StringW& __cordl_internal_get_Filepath();

  constexpr void __cordl_internal_set_AssetId(uint64_t value);

  constexpr void __cordl_internal_set_Filepath(::StringW value);

  /// @brief Method .ctor, addr 0x27f6424, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileDownloadResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileDownloadResult(AssetFileDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileDownloadResult(AssetFileDownloadResult const&) = delete;

  /// @brief Field AssetId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field Filepath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Filepath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDownloadResult, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadResult, ___AssetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadResult, ___Filepath) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadResult*, "Oculus.Platform.Models", "AssetFileDownloadResult");

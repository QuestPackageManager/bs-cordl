#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDownloadResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDownloadResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AssetFileDownloadResult
class CORDL_TYPE AssetFileDownloadResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetId, put = __cordl_internal_set_AssetId)) uint64_t AssetId;

  /// @brief Field Filepath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Filepath, put = __cordl_internal_set_Filepath)) ::StringW Filepath;

  static inline ::Oculus::Platform::Models::AssetFileDownloadResult* New_ctor(::System::IntPtr o);

  constexpr uint64_t const& __cordl_internal_get_AssetId() const;

  constexpr uint64_t& __cordl_internal_get_AssetId();

  constexpr ::StringW const& __cordl_internal_get_Filepath() const;

  constexpr ::StringW& __cordl_internal_get_Filepath();

  constexpr void __cordl_internal_set_AssetId(uint64_t value);

  constexpr void __cordl_internal_set_Filepath(::StringW value);

  /// @brief Method .ctor, addr 0x3f946c8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15507 };

  /// @brief Field AssetId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field Filepath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Filepath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadResult, ___AssetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadResult, ___Filepath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDownloadResult, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadResult*, "Oculus.Platform.Models", "AssetFileDownloadResult");

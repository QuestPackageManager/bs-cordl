#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDownloadCancelResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadCancelResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AssetFileDownloadCancelResult
class CORDL_TYPE AssetFileDownloadCancelResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetFileId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetFileId, put = __cordl_internal_set_AssetFileId)) uint64_t AssetFileId;

  /// @brief Field AssetId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetId, put = __cordl_internal_set_AssetId)) uint64_t AssetId;

  /// @brief Field Filepath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Filepath, put = __cordl_internal_set_Filepath)) ::StringW Filepath;

  /// @brief Field Success, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_Success, put = __cordl_internal_set_Success)) bool Success;

  static inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* New_ctor(::System::IntPtr o);

  constexpr uint64_t const& __cordl_internal_get_AssetFileId() const;

  constexpr uint64_t& __cordl_internal_get_AssetFileId();

  constexpr uint64_t const& __cordl_internal_get_AssetId() const;

  constexpr uint64_t& __cordl_internal_get_AssetId();

  constexpr ::StringW const& __cordl_internal_get_Filepath() const;

  constexpr ::StringW& __cordl_internal_get_Filepath();

  constexpr bool const& __cordl_internal_get_Success() const;

  constexpr bool& __cordl_internal_get_Success();

  constexpr void __cordl_internal_set_AssetFileId(uint64_t value);

  constexpr void __cordl_internal_set_AssetId(uint64_t value);

  constexpr void __cordl_internal_set_Filepath(::StringW value);

  constexpr void __cordl_internal_set_Success(bool value);

  /// @brief Method .ctor, addr 0x3f8fd68, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileDownloadCancelResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileDownloadCancelResult(AssetFileDownloadCancelResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileDownloadCancelResult(AssetFileDownloadCancelResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15511 };

  /// @brief Field AssetFileId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetFileId;

  /// @brief Field AssetId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field Filepath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Filepath;

  /// @brief Field Success, offset: 0x28, size: 0x1, def value: None
  bool ___Success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadCancelResult, ___AssetFileId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadCancelResult, ___AssetId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadCancelResult, ___Filepath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadCancelResult, ___Success) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDownloadCancelResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadCancelResult*, "Oculus.Platform.Models", "AssetFileDownloadCancelResult");

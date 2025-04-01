#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetDetails.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetDetails)
namespace Oculus::Platform::Models {
class LanguagePackInfo;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetDetails);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AssetDetails
class CORDL_TYPE AssetDetails : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetId, put = __cordl_internal_set_AssetId)) uint64_t AssetId;

  /// @brief Field AssetType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetType, put = __cordl_internal_set_AssetType)) ::StringW AssetType;

  /// @brief Field DownloadStatus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_DownloadStatus, put = __cordl_internal_set_DownloadStatus)) ::StringW DownloadStatus;

  /// @brief Field Filepath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Filepath, put = __cordl_internal_set_Filepath)) ::StringW Filepath;

  /// @brief Field IapStatus, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_IapStatus, put = __cordl_internal_set_IapStatus)) ::StringW IapStatus;

  /// @brief Field Language, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Language, put = __cordl_internal_set_Language)) ::Oculus::Platform::Models::LanguagePackInfo* Language;

  /// @brief Field LanguageOptional, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_LanguageOptional, put = __cordl_internal_set_LanguageOptional)) ::Oculus::Platform::Models::LanguagePackInfo* LanguageOptional;

  /// @brief Field Metadata, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Metadata, put = __cordl_internal_set_Metadata)) ::StringW Metadata;

  static inline ::Oculus::Platform::Models::AssetDetails* New_ctor(::System::IntPtr o);

  constexpr uint64_t const& __cordl_internal_get_AssetId() const;

  constexpr uint64_t& __cordl_internal_get_AssetId();

  constexpr ::StringW const& __cordl_internal_get_AssetType() const;

  constexpr ::StringW& __cordl_internal_get_AssetType();

  constexpr ::StringW const& __cordl_internal_get_DownloadStatus() const;

  constexpr ::StringW& __cordl_internal_get_DownloadStatus();

  constexpr ::StringW const& __cordl_internal_get_Filepath() const;

  constexpr ::StringW& __cordl_internal_get_Filepath();

  constexpr ::StringW const& __cordl_internal_get_IapStatus() const;

  constexpr ::StringW& __cordl_internal_get_IapStatus();

  constexpr ::Oculus::Platform::Models::LanguagePackInfo* const& __cordl_internal_get_Language() const;

  constexpr ::Oculus::Platform::Models::LanguagePackInfo*& __cordl_internal_get_Language();

  constexpr ::Oculus::Platform::Models::LanguagePackInfo* const& __cordl_internal_get_LanguageOptional() const;

  constexpr ::Oculus::Platform::Models::LanguagePackInfo*& __cordl_internal_get_LanguageOptional();

  constexpr ::StringW const& __cordl_internal_get_Metadata() const;

  constexpr ::StringW& __cordl_internal_get_Metadata();

  constexpr void __cordl_internal_set_AssetId(uint64_t value);

  constexpr void __cordl_internal_set_AssetType(::StringW value);

  constexpr void __cordl_internal_set_DownloadStatus(::StringW value);

  constexpr void __cordl_internal_set_Filepath(::StringW value);

  constexpr void __cordl_internal_set_IapStatus(::StringW value);

  constexpr void __cordl_internal_set_Language(::Oculus::Platform::Models::LanguagePackInfo* value);

  constexpr void __cordl_internal_set_LanguageOptional(::Oculus::Platform::Models::LanguagePackInfo* value);

  constexpr void __cordl_internal_set_Metadata(::StringW value);

  /// @brief Method .ctor, addr 0x3f8ad68, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetDetails(AssetDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetDetails(AssetDetails const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15506 };

  /// @brief Field AssetId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field AssetType, offset: 0x18, size: 0x8, def value: None
  ::StringW ___AssetType;

  /// @brief Field DownloadStatus, offset: 0x20, size: 0x8, def value: None
  ::StringW ___DownloadStatus;

  /// @brief Field Filepath, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Filepath;

  /// @brief Field IapStatus, offset: 0x30, size: 0x8, def value: None
  ::StringW ___IapStatus;

  /// @brief Field LanguageOptional, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::LanguagePackInfo* ___LanguageOptional;

  /// @brief Field Language, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::LanguagePackInfo* ___Language;

  /// @brief Field Metadata, offset: 0x48, size: 0x8, def value: None
  ::StringW ___Metadata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___AssetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___AssetType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___DownloadStatus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Filepath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___IapStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___LanguageOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Language) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Metadata) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetDetails, 0x50>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetDetails*, "Oculus.Platform.Models", "AssetDetails");

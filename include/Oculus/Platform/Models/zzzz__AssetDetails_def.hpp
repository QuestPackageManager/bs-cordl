#pragma once
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
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetDetails);
// Type: Oculus.Platform.Models::AssetDetails
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13454))
// CS Name: ::Oculus.Platform.Models::AssetDetails*
class CORDL_TYPE AssetDetails : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetId, offset 0x10, size 0x8
  __declspec(property(get = __get_AssetId, put = __set_AssetId)) uint64_t AssetId;

  /// @brief Field AssetType, offset 0x18, size 0x8
  __declspec(property(get = __get_AssetType, put = __set_AssetType))::StringW AssetType;

  /// @brief Field DownloadStatus, offset 0x20, size 0x8
  __declspec(property(get = __get_DownloadStatus, put = __set_DownloadStatus))::StringW DownloadStatus;

  /// @brief Field Filepath, offset 0x28, size 0x8
  __declspec(property(get = __get_Filepath, put = __set_Filepath))::StringW Filepath;

  /// @brief Field IapStatus, offset 0x30, size 0x8
  __declspec(property(get = __get_IapStatus, put = __set_IapStatus))::StringW IapStatus;

  /// @brief Field LanguageOptional, offset 0x38, size 0x8
  __declspec(property(get = __get_LanguageOptional, put = __set_LanguageOptional))::Oculus::Platform::Models::LanguagePackInfo* LanguageOptional;

  /// @brief Field Language, offset 0x40, size 0x8
  __declspec(property(get = __get_Language, put = __set_Language))::Oculus::Platform::Models::LanguagePackInfo* Language;

  /// @brief Field Metadata, offset 0x48, size 0x8
  __declspec(property(get = __get_Metadata, put = __set_Metadata))::StringW Metadata;

  constexpr uint64_t& __get_AssetId();

  constexpr uint64_t const& __get_AssetId() const;

  constexpr void __set_AssetId(uint64_t value);

  constexpr ::StringW& __get_AssetType();

  constexpr ::StringW const& __get_AssetType() const;

  constexpr void __set_AssetType(::StringW value);

  constexpr ::StringW& __get_DownloadStatus();

  constexpr ::StringW const& __get_DownloadStatus() const;

  constexpr void __set_DownloadStatus(::StringW value);

  constexpr ::StringW& __get_Filepath();

  constexpr ::StringW const& __get_Filepath() const;

  constexpr void __set_Filepath(::StringW value);

  constexpr ::StringW& __get_IapStatus();

  constexpr ::StringW const& __get_IapStatus() const;

  constexpr void __set_IapStatus(::StringW value);

  constexpr ::Oculus::Platform::Models::LanguagePackInfo*& __get_LanguageOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::LanguagePackInfo*> const& __get_LanguageOptional() const;

  constexpr void __set_LanguageOptional(::Oculus::Platform::Models::LanguagePackInfo* value);

  constexpr ::Oculus::Platform::Models::LanguagePackInfo*& __get_Language();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::LanguagePackInfo*> const& __get_Language() const;

  constexpr void __set_Language(::Oculus::Platform::Models::LanguagePackInfo* value);

  constexpr ::StringW& __get_Metadata();

  constexpr ::StringW const& __get_Metadata() const;

  constexpr void __set_Metadata(::StringW value);

  static inline ::Oculus::Platform::Models::AssetDetails* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b1294 size 0x168 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetDetails(AssetDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetDetails(AssetDetails const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetDetails();

public:
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
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetDetails, 0x50>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___AssetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___AssetType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___DownloadStatus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Filepath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___IapStatus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___LanguageOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Language) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetDetails, ___Metadata) == 0x48, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetDetails*, "Oculus.Platform.Models", "AssetDetails");

#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleRequestOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetLoadMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleRequestOptions)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ILocationSizeData;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions);
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleRequestOptions
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 75, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetBundleRequestOptions*
class CORDL_TYPE AssetBundleRequestOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AssetLoadMode, put = set_AssetLoadMode))::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode AssetLoadMode;

  __declspec(property(get = get_BundleName, put = set_BundleName))::StringW BundleName;

  __declspec(property(get = get_BundleSize, put = set_BundleSize)) int64_t BundleSize;

  __declspec(property(get = get_ChunkedTransfer, put = set_ChunkedTransfer)) bool ChunkedTransfer;

  __declspec(property(get = get_ClearOtherCachedVersionsWhenLoaded, put = set_ClearOtherCachedVersionsWhenLoaded)) bool ClearOtherCachedVersionsWhenLoaded;

  __declspec(property(get = get_Crc, put = set_Crc)) uint32_t Crc;

  __declspec(property(get = get_Hash, put = set_Hash))::StringW Hash;

  __declspec(property(get = get_RedirectLimit, put = set_RedirectLimit)) int32_t RedirectLimit;

  __declspec(property(get = get_RetryCount, put = set_RetryCount)) int32_t RetryCount;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_UseCrcForCachedBundle, put = set_UseCrcForCachedBundle)) bool UseCrcForCachedBundle;

  __declspec(property(get = get_UseUnityWebRequestForLocalBundles, put = set_UseUnityWebRequestForLocalBundles)) bool UseUnityWebRequestForLocalBundles;

  /// @brief Field m_AssetLoadMode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AssetLoadMode, put = __cordl_internal_set_m_AssetLoadMode))::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode m_AssetLoadMode;

  /// @brief Field m_BundleName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundleName, put = __cordl_internal_set_m_BundleName))::StringW m_BundleName;

  /// @brief Field m_BundleSize, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundleSize, put = __cordl_internal_set_m_BundleSize)) int64_t m_BundleSize;

  /// @brief Field m_ChunkedTransfer, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ChunkedTransfer, put = __cordl_internal_set_m_ChunkedTransfer)) bool m_ChunkedTransfer;

  /// @brief Field m_ClearOtherCachedVersionsWhenLoaded, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearOtherCachedVersionsWhenLoaded, put = __cordl_internal_set_m_ClearOtherCachedVersionsWhenLoaded)) bool m_ClearOtherCachedVersionsWhenLoaded;

  /// @brief Field m_Crc, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Crc, put = __cordl_internal_set_m_Crc)) uint32_t m_Crc;

  /// @brief Field m_Hash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hash, put = __cordl_internal_set_m_Hash))::StringW m_Hash;

  /// @brief Field m_RedirectLimit, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RedirectLimit, put = __cordl_internal_set_m_RedirectLimit)) int32_t m_RedirectLimit;

  /// @brief Field m_RetryCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RetryCount, put = __cordl_internal_set_m_RetryCount)) int32_t m_RetryCount;

  /// @brief Field m_Timeout, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timeout, put = __cordl_internal_set_m_Timeout)) int32_t m_Timeout;

  /// @brief Field m_UseCrcForCachedBundles, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseCrcForCachedBundles, put = __cordl_internal_set_m_UseCrcForCachedBundles)) bool m_UseCrcForCachedBundles;

  /// @brief Field m_UseUWRForLocalBundles, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseUWRForLocalBundles, put = __cordl_internal_set_m_UseUWRForLocalBundles)) bool m_UseUWRForLocalBundles;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*() noexcept;

  /// @brief Method ComputeSize, addr 0x3309d04, size 0x148, virtual true, abstract: false, final false
  inline int64_t ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* New_ctor();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const& __cordl_internal_get_m_AssetLoadMode() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode& __cordl_internal_get_m_AssetLoadMode();

  constexpr ::StringW const& __cordl_internal_get_m_BundleName() const;

  constexpr ::StringW& __cordl_internal_get_m_BundleName();

  constexpr int64_t const& __cordl_internal_get_m_BundleSize() const;

  constexpr int64_t& __cordl_internal_get_m_BundleSize();

  constexpr bool const& __cordl_internal_get_m_ChunkedTransfer() const;

  constexpr bool& __cordl_internal_get_m_ChunkedTransfer();

  constexpr bool const& __cordl_internal_get_m_ClearOtherCachedVersionsWhenLoaded() const;

  constexpr bool& __cordl_internal_get_m_ClearOtherCachedVersionsWhenLoaded();

  constexpr uint32_t const& __cordl_internal_get_m_Crc() const;

  constexpr uint32_t& __cordl_internal_get_m_Crc();

  constexpr ::StringW const& __cordl_internal_get_m_Hash() const;

  constexpr ::StringW& __cordl_internal_get_m_Hash();

  constexpr int32_t const& __cordl_internal_get_m_RedirectLimit() const;

  constexpr int32_t& __cordl_internal_get_m_RedirectLimit();

  constexpr int32_t const& __cordl_internal_get_m_RetryCount() const;

  constexpr int32_t& __cordl_internal_get_m_RetryCount();

  constexpr int32_t const& __cordl_internal_get_m_Timeout() const;

  constexpr int32_t& __cordl_internal_get_m_Timeout();

  constexpr bool const& __cordl_internal_get_m_UseCrcForCachedBundles() const;

  constexpr bool& __cordl_internal_get_m_UseCrcForCachedBundles();

  constexpr bool const& __cordl_internal_get_m_UseUWRForLocalBundles() const;

  constexpr bool& __cordl_internal_get_m_UseUWRForLocalBundles();

  constexpr void __cordl_internal_set_m_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value);

  constexpr void __cordl_internal_set_m_BundleName(::StringW value);

  constexpr void __cordl_internal_set_m_BundleSize(int64_t value);

  constexpr void __cordl_internal_set_m_ChunkedTransfer(bool value);

  constexpr void __cordl_internal_set_m_ClearOtherCachedVersionsWhenLoaded(bool value);

  constexpr void __cordl_internal_set_m_Crc(uint32_t value);

  constexpr void __cordl_internal_set_m_Hash(::StringW value);

  constexpr void __cordl_internal_set_m_RedirectLimit(int32_t value);

  constexpr void __cordl_internal_set_m_RetryCount(int32_t value);

  constexpr void __cordl_internal_set_m_Timeout(int32_t value);

  constexpr void __cordl_internal_set_m_UseCrcForCachedBundles(bool value);

  constexpr void __cordl_internal_set_m_UseUWRForLocalBundles(bool value);

  /// @brief Method .ctor, addr 0x3309e4c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AssetLoadMode, addr 0x3309ca8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode get_AssetLoadMode();

  /// @brief Method get_BundleName, addr 0x3309c98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BundleName();

  /// @brief Method get_BundleSize, addr 0x3309cb8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_BundleSize();

  /// @brief Method get_ChunkedTransfer, addr 0x3309c64, size 0x8, virtual false, abstract: false, final false
  inline bool get_ChunkedTransfer();

  /// @brief Method get_ClearOtherCachedVersionsWhenLoaded, addr 0x3309cf0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ClearOtherCachedVersionsWhenLoaded();

  /// @brief Method get_Crc, addr 0x3309c44, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Crc();

  /// @brief Method get_Hash, addr 0x3309c34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Hash();

  /// @brief Method get_RedirectLimit, addr 0x3309c78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RedirectLimit();

  /// @brief Method get_RetryCount, addr 0x3309c88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RetryCount();

  /// @brief Method get_Timeout, addr 0x3309c54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_UseCrcForCachedBundle, addr 0x3309cc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseCrcForCachedBundle();

  /// @brief Method get_UseUnityWebRequestForLocalBundles, addr 0x3309cdc, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseUnityWebRequestForLocalBundles();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData"
  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData* i___UnityEngine__ResourceManagement__ResourceLocations__ILocationSizeData() noexcept;

  /// @brief Method set_AssetLoadMode, addr 0x3309cb0, size 0x8, virtual false, abstract: false, final false
  inline void set_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value);

  /// @brief Method set_BundleName, addr 0x3309ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_BundleName(::StringW value);

  /// @brief Method set_BundleSize, addr 0x3309cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_BundleSize(int64_t value);

  /// @brief Method set_ChunkedTransfer, addr 0x3309c6c, size 0xc, virtual false, abstract: false, final false
  inline void set_ChunkedTransfer(bool value);

  /// @brief Method set_ClearOtherCachedVersionsWhenLoaded, addr 0x3309cf8, size 0xc, virtual false, abstract: false, final false
  inline void set_ClearOtherCachedVersionsWhenLoaded(bool value);

  /// @brief Method set_Crc, addr 0x3309c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Crc(uint32_t value);

  /// @brief Method set_Hash, addr 0x3309c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Hash(::StringW value);

  /// @brief Method set_RedirectLimit, addr 0x3309c80, size 0x8, virtual false, abstract: false, final false
  inline void set_RedirectLimit(int32_t value);

  /// @brief Method set_RetryCount, addr 0x3309c90, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryCount(int32_t value);

  /// @brief Method set_Timeout, addr 0x3309c5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(int32_t value);

  /// @brief Method set_UseCrcForCachedBundle, addr 0x3309cd0, size 0xc, virtual false, abstract: false, final false
  inline void set_UseCrcForCachedBundle(bool value);

  /// @brief Method set_UseUnityWebRequestForLocalBundles, addr 0x3309ce4, size 0xc, virtual false, abstract: false, final false
  inline void set_UseUnityWebRequestForLocalBundles(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRequestOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRequestOptions(AssetBundleRequestOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRequestOptions(AssetBundleRequestOptions const&) = delete;

  /// @brief Field m_Hash, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Hash;

  /// @brief Field m_Crc, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_Crc;

  /// @brief Field m_Timeout, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Timeout;

  /// @brief Field m_ChunkedTransfer, offset: 0x20, size: 0x1, def value: None
  bool ___m_ChunkedTransfer;

  /// @brief Field m_RedirectLimit, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_RedirectLimit;

  /// @brief Field m_RetryCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_RetryCount;

  /// @brief Field m_BundleName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_BundleName;

  /// @brief Field m_AssetLoadMode, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode ___m_AssetLoadMode;

  /// @brief Field m_BundleSize, offset: 0x40, size: 0x8, def value: None
  int64_t ___m_BundleSize;

  /// @brief Field m_UseCrcForCachedBundles, offset: 0x48, size: 0x1, def value: None
  bool ___m_UseCrcForCachedBundles;

  /// @brief Field m_UseUWRForLocalBundles, offset: 0x49, size: 0x1, def value: None
  bool ___m_UseUWRForLocalBundles;

  /// @brief Field m_ClearOtherCachedVersionsWhenLoaded, offset: 0x4a, size: 0x1, def value: None
  bool ___m_ClearOtherCachedVersionsWhenLoaded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_Hash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_Crc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_Timeout) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_ChunkedTransfer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_RedirectLimit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_RetryCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_BundleName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_AssetLoadMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_BundleSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_UseCrcForCachedBundles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_UseUWRForLocalBundles) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, ___m_ClearOtherCachedVersionsWhenLoaded) == 0x4a, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleRequestOptions");

#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/CacheInitializationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CacheInitializationData)
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class CacheInitializationData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData);
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Initialization.CacheInitializationData
class CORDL_TYPE CacheInitializationData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CacheDirectoryOverride, put = set_CacheDirectoryOverride)) ::StringW CacheDirectoryOverride;

  __declspec(property(get = get_CompressionEnabled, put = set_CompressionEnabled)) bool CompressionEnabled;

  __declspec(property(get = get_ExpirationDelay, put = set_ExpirationDelay)) int32_t ExpirationDelay;

  __declspec(property(get = get_LimitCacheSize, put = set_LimitCacheSize)) bool LimitCacheSize;

  __declspec(property(get = get_MaximumCacheSize, put = set_MaximumCacheSize)) int64_t MaximumCacheSize;

  /// @brief Field m_CacheDirectoryOverride, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheDirectoryOverride, put = __cordl_internal_set_m_CacheDirectoryOverride)) ::StringW m_CacheDirectoryOverride;

  /// @brief Field m_CompressionEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CompressionEnabled, put = __cordl_internal_set_m_CompressionEnabled)) bool m_CompressionEnabled;

  /// @brief Field m_ExpirationDelay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExpirationDelay, put = __cordl_internal_set_m_ExpirationDelay)) int32_t m_ExpirationDelay;

  /// @brief Field m_LimitCacheSize, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LimitCacheSize, put = __cordl_internal_set_m_LimitCacheSize)) bool m_LimitCacheSize;

  /// @brief Field m_MaximumCacheSize, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaximumCacheSize, put = __cordl_internal_set_m_MaximumCacheSize)) int64_t m_MaximumCacheSize;

  static inline ::UnityEngine::AddressableAssets::Initialization::CacheInitializationData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_CacheDirectoryOverride() const;

  constexpr ::StringW& __cordl_internal_get_m_CacheDirectoryOverride();

  constexpr bool const& __cordl_internal_get_m_CompressionEnabled() const;

  constexpr bool& __cordl_internal_get_m_CompressionEnabled();

  constexpr int32_t const& __cordl_internal_get_m_ExpirationDelay() const;

  constexpr int32_t& __cordl_internal_get_m_ExpirationDelay();

  constexpr bool const& __cordl_internal_get_m_LimitCacheSize() const;

  constexpr bool& __cordl_internal_get_m_LimitCacheSize();

  constexpr int64_t const& __cordl_internal_get_m_MaximumCacheSize() const;

  constexpr int64_t& __cordl_internal_get_m_MaximumCacheSize();

  constexpr void __cordl_internal_set_m_CacheDirectoryOverride(::StringW value);

  constexpr void __cordl_internal_set_m_CompressionEnabled(bool value);

  constexpr void __cordl_internal_set_m_ExpirationDelay(int32_t value);

  constexpr void __cordl_internal_set_m_LimitCacheSize(bool value);

  constexpr void __cordl_internal_set_m_MaximumCacheSize(int64_t value);

  /// @brief Method .ctor, addr 0x44fb35c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CacheDirectoryOverride, addr 0x44fb318, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CacheDirectoryOverride();

  /// @brief Method get_CompressionEnabled, addr 0x44fb304, size 0x8, virtual false, abstract: false, final false
  inline bool get_CompressionEnabled();

  /// @brief Method get_ExpirationDelay, addr 0x44fb328, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ExpirationDelay();

  /// @brief Method get_LimitCacheSize, addr 0x44fb338, size 0x8, virtual false, abstract: false, final false
  inline bool get_LimitCacheSize();

  /// @brief Method get_MaximumCacheSize, addr 0x44fb34c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_MaximumCacheSize();

  /// @brief Method set_CacheDirectoryOverride, addr 0x44fb320, size 0x8, virtual false, abstract: false, final false
  inline void set_CacheDirectoryOverride(::StringW value);

  /// @brief Method set_CompressionEnabled, addr 0x44fb30c, size 0xc, virtual false, abstract: false, final false
  inline void set_CompressionEnabled(bool value);

  /// @brief Method set_ExpirationDelay, addr 0x44fb330, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpirationDelay(int32_t value);

  /// @brief Method set_LimitCacheSize, addr 0x44fb340, size 0xc, virtual false, abstract: false, final false
  inline void set_LimitCacheSize(bool value);

  /// @brief Method set_MaximumCacheSize, addr 0x44fb354, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumCacheSize(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheInitializationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CacheInitializationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheInitializationData(CacheInitializationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheInitializationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheInitializationData(CacheInitializationData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16221 };

  /// @brief Field m_CompressionEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___m_CompressionEnabled;

  /// @brief Field m_CacheDirectoryOverride, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_CacheDirectoryOverride;

  /// @brief Field m_ExpirationDelay, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ExpirationDelay;

  /// @brief Field m_LimitCacheSize, offset: 0x24, size: 0x1, def value: None
  bool ___m_LimitCacheSize;

  /// @brief Field m_MaximumCacheSize, offset: 0x28, size: 0x8, def value: None
  int64_t ___m_MaximumCacheSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, ___m_CompressionEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, ___m_CacheDirectoryOverride) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, ___m_ExpirationDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, ___m_LimitCacheSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, ___m_MaximumCacheSize) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::CacheInitializationData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::CacheInitializationData*, "UnityEngine.AddressableAssets.Initialization", "CacheInitializationData");

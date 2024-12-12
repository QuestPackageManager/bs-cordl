#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackInfo)
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackInfo);
// Dependencies System.Object, UnityEngine.Android.AndroidAssetPackError, UnityEngine.Android.AndroidAssetPackStatus
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPackInfo
class CORDL_TYPE AndroidAssetPackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bytesDownloaded>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bytesDownloaded_k__BackingField, put = __cordl_internal_set__bytesDownloaded_k__BackingField)) uint64_t _bytesDownloaded_k__BackingField;

  /// @brief Field <error>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__error_k__BackingField, put = __cordl_internal_set__error_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackError _error_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <size>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__size_k__BackingField, put = __cordl_internal_set__size_k__BackingField)) uint64_t _size_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__status_k__BackingField, put = __cordl_internal_set__status_k__BackingField)) ::UnityEngine::Android::AndroidAssetPackStatus _status_k__BackingField;

  /// @brief Field <transferProgress>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__transferProgress_k__BackingField, put = __cordl_internal_set__transferProgress_k__BackingField)) float_t _transferProgress_k__BackingField;

  static inline ::UnityEngine::Android::AndroidAssetPackInfo* New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded,
                                                                       float_t transferProgress, ::UnityEngine::Android::AndroidAssetPackError error);

  constexpr uint64_t const& __cordl_internal_get__bytesDownloaded_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__bytesDownloaded_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidAssetPackError const& __cordl_internal_get__error_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidAssetPackError& __cordl_internal_get__error_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr uint64_t const& __cordl_internal_get__size_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__size_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& __cordl_internal_get__status_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus& __cordl_internal_get__status_k__BackingField();

  constexpr float_t const& __cordl_internal_get__transferProgress_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__transferProgress_k__BackingField();

  constexpr void __cordl_internal_set__bytesDownloaded_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__size_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value);

  constexpr void __cordl_internal_set__transferProgress_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x48497a8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float_t transferProgress,
                    ::UnityEngine::Android::AndroidAssetPackError error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPackInfo(AndroidAssetPackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPackInfo(AndroidAssetPackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16767 };

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackStatus ____status_k__BackingField;

  /// @brief Field <size>k__BackingField, offset: 0x20, size: 0x8, def value: None
  uint64_t ____size_k__BackingField;

  /// @brief Field <bytesDownloaded>k__BackingField, offset: 0x28, size: 0x8, def value: None
  uint64_t ____bytesDownloaded_k__BackingField;

  /// @brief Field <transferProgress>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____transferProgress_k__BackingField;

  /// @brief Field <error>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackError ____error_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____size_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____bytesDownloaded_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____transferProgress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackInfo, ____error_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackInfo*, "UnityEngine.Android", "AndroidAssetPackInfo");

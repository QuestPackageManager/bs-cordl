#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenCaptureCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCaptureCache)
namespace GlobalNamespace {
struct ScreenCaptureCache_ScreenshotType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScreenCaptureCache_ScreenshotType;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenCaptureCache_ScreenshotType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureCache);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenCaptureCache/ScreenshotType
struct CORDL_TYPE ScreenCaptureCache_ScreenshotType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenCaptureCache_ScreenshotType_Unwrapped
  enum struct __ScreenCaptureCache_ScreenshotType_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x0),
    __E_Menu = static_cast<int32_t>(0x1),
    __E_Other = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenCaptureCache_ScreenshotType_Unwrapped() const noexcept {
    return static_cast<__ScreenCaptureCache_ScreenshotType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCaptureCache_ScreenshotType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenCaptureCache_ScreenshotType(int32_t value__) noexcept;

  /// @brief Field Game value: I32(0)
  static ::GlobalNamespace::ScreenCaptureCache_ScreenshotType const Game;

  /// @brief Field Menu value: I32(1)
  static ::GlobalNamespace::ScreenCaptureCache_ScreenshotType const Menu;

  /// @brief Field Other value: I32(2)
  static ::GlobalNamespace::ScreenCaptureCache_ScreenshotType const Other;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17913 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenCaptureCache_ScreenshotType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenCaptureCache
class CORDL_TYPE ScreenCaptureCache : public ::System::Object {
public:
  // Declarations
  using ScreenshotType = ::GlobalNamespace::ScreenCaptureCache_ScreenshotType;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cache,
                      put =
                          __cordl_internal_set__cache)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* _cache;

  /// @brief Method GetLastScreenshot, addr 0x4084cf0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetLastScreenshot(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType);

  static inline ::GlobalNamespace::ScreenCaptureCache* New_ctor();

  /// @brief Method StoreScreenshot, addr 0x40849c0, size 0xac, virtual false, abstract: false, final false
  inline void StoreScreenshot(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType, ::UnityEngine::Texture2D* texture);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__cache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__cache();

  constexpr void __cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* value);

  /// @brief Method .ctor, addr 0x4084d68, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCaptureCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCaptureCache(ScreenCaptureCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCaptureCache(ScreenCaptureCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17914 };

  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* ____cache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenCaptureCache, ____cache) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureCache, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureCache_ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureCache*, "", "ScreenCaptureCache");

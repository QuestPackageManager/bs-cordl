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
struct __ScreenCaptureCache__ScreenshotType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenCaptureCache__ScreenshotType;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureCache);
// Type: ::ScreenshotType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScreenCaptureCache::ScreenshotType
struct CORDL_TYPE __ScreenCaptureCache__ScreenshotType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenCaptureCache__ScreenshotType_Unwrapped
  enum struct ____ScreenCaptureCache__ScreenshotType_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x0),
    __E_Menu = static_cast<int32_t>(0x1),
    __E_Other = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenCaptureCache__ScreenshotType_Unwrapped() const noexcept {
    return static_cast<____ScreenCaptureCache__ScreenshotType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenCaptureCache__ScreenshotType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenCaptureCache__ScreenshotType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Game value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Game;

  /// @brief Field Menu value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Menu;

  /// @brief Field Other value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const Other;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScreenCaptureCache
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScreenCaptureCache*
class CORDL_TYPE ScreenCaptureCache : public ::System::Object {
public:
  // Declarations
  using ScreenshotType = ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__cache,
               put = __cordl_internal_set__cache))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* _cache;

  /// @brief Method GetLastScreenshot, addr 0x2c0d000, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetLastScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType);

  static inline ::GlobalNamespace::ScreenCaptureCache* New_ctor();

  /// @brief Method StoreScreenshot, addr 0x2c0ccbc, size 0xac, virtual false, abstract: false, final false
  inline void StoreScreenshot(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType, ::UnityEngine::Texture2D* texture);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>*> const&
  __cordl_internal_get__cache() const;

  constexpr void __cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* value);

  /// @brief Method .ctor, addr 0x2c0d078, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* ____cache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureCache, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureCache, ____cache) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureCache*, "", "ScreenCaptureCache");

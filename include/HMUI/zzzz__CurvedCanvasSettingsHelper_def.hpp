#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CurvedCanvasSettingsHelper)
namespace HMUI {
class CurvedCanvasSettings;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedCanvasSettingsHelper);
// Type: HMUI::CurvedCanvasSettingsHelper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::CurvedCanvasSettingsHelper*
class CORDL_TYPE CurvedCanvasSettingsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cachedCanvas, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedCanvas, put = __cordl_internal_set__cachedCanvas))::UnityW<::UnityEngine::Canvas> _cachedCanvas;

  /// @brief Field _cachedCanvasIsRootCanvas, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cachedCanvasIsRootCanvas, put = __cordl_internal_set__cachedCanvasIsRootCanvas)) bool _cachedCanvasIsRootCanvas;

  /// @brief Field _curvedCanvasCache, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF__curvedCanvasCache,
               put = setStaticF__curvedCanvasCache))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* _curvedCanvasCache;

  /// @brief Field _curvedCanvasSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvasSettings, put = __cordl_internal_set__curvedCanvasSettings))::UnityW<::HMUI::CurvedCanvasSettings> _curvedCanvasSettings;

  /// @brief Field _hasCachedData, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCachedData, put = __cordl_internal_set__hasCachedData)) bool _hasCachedData;

  /// @brief Method GetCurvedCanvasSettings, addr 0x24fe420, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::CurvedCanvasSettings> GetCurvedCanvasSettings(::UnityEngine::Canvas* canvas);

  /// @brief Method GetCurvedCanvasSettingsForCanvas, addr 0x24fe60c, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::HMUI::CurvedCanvasSettings> GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas* canvas);

  static inline ::HMUI::CurvedCanvasSettingsHelper* New_ctor();

  /// @brief Method Reset, addr 0x24fe40c, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__cachedCanvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__cachedCanvas();

  constexpr bool const& __cordl_internal_get__cachedCanvasIsRootCanvas() const;

  constexpr bool& __cordl_internal_get__cachedCanvasIsRootCanvas();

  constexpr ::UnityW<::HMUI::CurvedCanvasSettings> const& __cordl_internal_get__curvedCanvasSettings() const;

  constexpr ::UnityW<::HMUI::CurvedCanvasSettings>& __cordl_internal_get__curvedCanvasSettings();

  constexpr bool const& __cordl_internal_get__hasCachedData() const;

  constexpr bool& __cordl_internal_get__hasCachedData();

  constexpr void __cordl_internal_set__cachedCanvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set__cachedCanvasIsRootCanvas(bool value);

  constexpr void __cordl_internal_set__curvedCanvasSettings(::UnityW<::HMUI::CurvedCanvasSettings> value);

  constexpr void __cordl_internal_set__hasCachedData(bool value);

  /// @brief Method .ctor, addr 0x24fe71c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* getStaticF__curvedCanvasCache();

  static inline void setStaticF__curvedCanvasCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityW<::HMUI::CurvedCanvasSettings>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedCanvasSettingsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper const&) = delete;

  /// @brief Field _cachedCanvas, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____cachedCanvas;

  /// @brief Field _cachedCanvasIsRootCanvas, offset: 0x18, size: 0x1, def value: None
  bool ____cachedCanvasIsRootCanvas;

  /// @brief Field _curvedCanvasSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedCanvasSettings> ____curvedCanvasSettings;

  /// @brief Field _hasCachedData, offset: 0x28, size: 0x1, def value: None
  bool ____hasCachedData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedCanvasSettingsHelper, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettingsHelper, ____cachedCanvas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettingsHelper, ____cachedCanvasIsRootCanvas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettingsHelper, ____curvedCanvasSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedCanvasSettingsHelper, ____hasCachedData) == 0x28, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedCanvasSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedCanvasSettingsHelper*, "HMUI", "CurvedCanvasSettingsHelper");

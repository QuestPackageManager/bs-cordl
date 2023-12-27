#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CurvedCanvasSettingsHelper)
namespace UnityEngine {
class Canvas;
}
namespace HMUI {
class CurvedCanvasSettings;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13526))
// CS Name: ::HMUI::CurvedCanvasSettingsHelper*
class CORDL_TYPE CurvedCanvasSettingsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cachedCanvas, offset 0x10, size 0x8
  __declspec(property(get = __get__cachedCanvas, put = __set__cachedCanvas))::UnityEngine::Canvas* _cachedCanvas;

  /// @brief Field _cachedCanvasIsRootCanvas, offset 0x18, size 0x1
  __declspec(property(get = __get__cachedCanvasIsRootCanvas, put = __set__cachedCanvasIsRootCanvas)) bool _cachedCanvasIsRootCanvas;

  /// @brief Field _curvedCanvasSettings, offset 0x20, size 0x8
  __declspec(property(get = __get__curvedCanvasSettings, put = __set__curvedCanvasSettings))::HMUI::CurvedCanvasSettings* _curvedCanvasSettings;

  /// @brief Field _hasCachedData, offset 0x28, size 0x1
  __declspec(property(get = __get__hasCachedData, put = __set__hasCachedData)) bool _hasCachedData;

  /// @brief Field _curvedCanvasCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__curvedCanvasCache,
                             put = setStaticF__curvedCanvasCache))::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>* _curvedCanvasCache;

  constexpr ::UnityEngine::Canvas*& __get__cachedCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get__cachedCanvas() const;

  constexpr void __set__cachedCanvas(::UnityEngine::Canvas* value);

  constexpr bool& __get__cachedCanvasIsRootCanvas();

  constexpr bool const& __get__cachedCanvasIsRootCanvas() const;

  constexpr void __set__cachedCanvasIsRootCanvas(bool value);

  constexpr ::HMUI::CurvedCanvasSettings*& __get__curvedCanvasSettings();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettings*> const& __get__curvedCanvasSettings() const;

  constexpr void __set__curvedCanvasSettings(::HMUI::CurvedCanvasSettings* value);

  constexpr bool& __get__hasCachedData();

  constexpr bool const& __get__hasCachedData() const;

  constexpr void __set__hasCachedData(bool value);

  static inline void setStaticF__curvedCanvasCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::HMUI::CurvedCanvasSettings*>* getStaticF__curvedCanvasCache();

  /// @brief Method Reset addr 0x211b4c0 size 0x14 virtual false final false
  inline void Reset();

  /// @brief Method GetCurvedCanvasSettings addr 0x211b4d4 size 0x1ec virtual false final false
  inline ::HMUI::CurvedCanvasSettings* GetCurvedCanvasSettings(::UnityEngine::Canvas* canvas);

  /// @brief Method GetCurvedCanvasSettingsForCanvas addr 0x211b6c0 size 0x110 virtual false final false
  static inline ::HMUI::CurvedCanvasSettings* GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas* canvas);

  static inline ::HMUI::CurvedCanvasSettingsHelper* New_ctor();

  /// @brief Method .ctor addr 0x211b7d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedCanvasSettingsHelper();

public:
  /// @brief Field _cachedCanvas, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Canvas* ____cachedCanvas;

  /// @brief Field _cachedCanvasIsRootCanvas, offset: 0x18, size: 0x1, def value: None
  bool ____cachedCanvasIsRootCanvas;

  /// @brief Field _curvedCanvasSettings, offset: 0x20, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettings* ____curvedCanvasSettings;

  /// @brief Field _hasCachedData, offset: 0x28, size: 0x1, def value: None
  bool ____hasCachedData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedCanvasSettingsHelper, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedCanvasSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedCanvasSettingsHelper*, "HMUI", "CurvedCanvasSettingsHelper");

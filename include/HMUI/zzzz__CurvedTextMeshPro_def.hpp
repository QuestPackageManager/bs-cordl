#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
CORDL_MODULE_EXPORT(CurvedTextMeshPro)
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace GlobalNamespace {
class IComponentRefresher;
}
// Forward declare root types
namespace HMUI {
class CurvedTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedTextMeshPro);
// Type: HMUI::CurvedTextMeshPro
// SizeInfo { instance_size: 1960, native_size: -1, calculated_instance_size: 1960, calculated_native_size: 1960, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13647))
// CS Name: ::HMUI::CurvedTextMeshPro*
class CORDL_TYPE CurvedTextMeshPro : public ::TMPro::TextMeshProUGUI {
public:
  // Declarations
  /// @brief Field _useScriptableObjectColors, offset 0x795, size 0x1
  __declspec(property(get = __get__useScriptableObjectColors, put = __set__useScriptableObjectColors)) bool _useScriptableObjectColors;

  /// @brief Field _colorSo, offset 0x798, size 0x8
  __declspec(property(get = __get__colorSo, put = __set__colorSo))::GlobalNamespace::ColorSO* _colorSo;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x7a0, size 0x8
  __declspec(property(get = __get__curvedCanvasSettingsHelper, put = __set__curvedCanvasSettingsHelper))::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  __declspec(property(get = get_useScriptableObjectColors, put = set_useScriptableObjectColors)) bool useScriptableObjectColors;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  /// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
  constexpr operator ::GlobalNamespace::IComponentRefresher*() noexcept;

  constexpr bool& __get__useScriptableObjectColors();

  constexpr bool const& __get__useScriptableObjectColors() const;

  constexpr void __set__useScriptableObjectColors(bool value);

  constexpr ::GlobalNamespace::ColorSO*& __get__colorSo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__colorSo() const;

  constexpr void __set__colorSo(::GlobalNamespace::ColorSO* value);

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __get__curvedCanvasSettingsHelper();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& __get__curvedCanvasSettingsHelper() const;

  constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  /// @brief Method get_useScriptableObjectColors addr 0x1fc5bec size 0x8 virtual false final false
  inline bool get_useScriptableObjectColors();

  /// @brief Method set_useScriptableObjectColors addr 0x1fc5bf4 size 0xc virtual false final false
  inline void set_useScriptableObjectColors(bool value);

  /// @brief Method get_color addr 0x1fc5c00 size 0x90 virtual true final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x1fc5c90 size 0x8 virtual true final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method OnEnable addr 0x1fc5c98 size 0x34 virtual true final false
  inline void OnEnable();

  /// @brief Method GenerateTextMesh addr 0x1fc5ccc size 0x3cc virtual true final false
  inline void GenerateTextMesh();

  /// @brief Method __Refresh addr 0x1fc6098 size 0x10 virtual true final true
  inline void __Refresh();

  static inline ::HMUI::CurvedTextMeshPro* New_ctor();

  /// @brief Method .ctor addr 0x1fc60a8 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurvedTextMeshPro(CurvedTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurvedTextMeshPro(CurvedTextMeshPro const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedTextMeshPro();

public:
  /// @brief Field _useScriptableObjectColors, offset: 0x795, size: 0x1, def value: None
  bool ____useScriptableObjectColors;

  /// @brief Field _colorSo, offset: 0x798, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____colorSo;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x7a0, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedTextMeshPro, 0x7a8>, "Size mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____useScriptableObjectColors) == 0x795, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____colorSo) == 0x798, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____curvedCanvasSettingsHelper) == 0x7a0, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");

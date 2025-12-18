#pragma once
// IWYU pragma private; include "HMUI/CurvedTextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurvedTextMeshPro)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class IComponentRefresher;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace HMUI {
struct CurvedTextMeshPro_CurvedMeshInfo;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class CurvedTextMeshPro;
}
namespace HMUI {
struct CurvedTextMeshPro_CurvedMeshInfo;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedTextMeshPro);
MARK_VAL_T(::HMUI::CurvedTextMeshPro_CurvedMeshInfo);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.CurvedTextMeshPro/CurvedMeshInfo
struct CORDL_TYPE CurvedTextMeshPro_CurvedMeshInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedTextMeshPro_CurvedMeshInfo();

  // Ctor Parameters [CppParam { name: "uvs3", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }]
  constexpr CurvedTextMeshPro_CurvedMeshInfo(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20481 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field uvs3, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::CurvedTextMeshPro_CurvedMeshInfo, uvs3) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, 0x8>, "Size mismatch!");

} // namespace HMUI
// Dependencies TMPro.TextMeshProUGUI
namespace HMUI {
// Is value type: false
// CS Name: HMUI.CurvedTextMeshPro
class CORDL_TYPE CurvedTextMeshPro : public ::TMPro::TextMeshProUGUI {
public:
  // Declarations
  using CurvedMeshInfo = ::HMUI::CurvedTextMeshPro_CurvedMeshInfo;

  /// @brief Field _colorSo, offset 0x7c8, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSo, put = __cordl_internal_set__colorSo)) ::UnityW<::GlobalNamespace::ColorSO> _colorSo;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x7d8, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvasSettingsHelper, put = __cordl_internal_set__curvedCanvasSettingsHelper)) ::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  /// @brief Field _curvedMeshInfos, offset 0x7d0, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedMeshInfos,
                      put = __cordl_internal_set__curvedMeshInfos)) ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*>
      _curvedMeshInfos;

  /// @brief Field _useScriptableObjectColors, offset 0x7c0, size 0x1
  __declspec(property(get = __cordl_internal_get__useScriptableObjectColors, put = __cordl_internal_set__useScriptableObjectColors)) bool _useScriptableObjectColors;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_useScriptableObjectColors, put = set_useScriptableObjectColors)) bool useScriptableObjectColors;

  /// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
  constexpr operator ::GlobalNamespace::IComponentRefresher*() noexcept;

  /// @brief Method FillColors, addr 0x3203b68, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> FillColors(int32_t meshIndex, ::UnityEngine::Color32 color32);

  /// @brief Method FillUV3s, addr 0x3203a90, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> FillUV3s(int32_t meshIndex, int32_t vertexCount, ::UnityEngine::Vector2 curve);

  /// @brief Method GenerateTextMesh, addr 0x32036e8, size 0x2e8, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  static inline ::HMUI::CurvedTextMeshPro* New_ctor();

  /// @brief Method OnEnable, addr 0x32036b4, size 0x34, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method UpdateMesh, addr 0x32039d0, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateMesh(::UnityEngine::Mesh* mesh, int32_t meshIndex, ::UnityEngine::Vector2 curveUV, ::UnityEngine::Color32 color32);

  /// @brief Method __Refresh, addr 0x3203a80, size 0x10, virtual true, abstract: false, final true
  inline void __Refresh();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__colorSo() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__colorSo();

  constexpr ::HMUI::CurvedCanvasSettingsHelper* const& __cordl_internal_get__curvedCanvasSettingsHelper() const;

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __cordl_internal_get__curvedCanvasSettingsHelper();

  constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*> const& __cordl_internal_get__curvedMeshInfos() const;

  constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*>& __cordl_internal_get__curvedMeshInfos();

  constexpr bool const& __cordl_internal_get__useScriptableObjectColors() const;

  constexpr bool& __cordl_internal_get__useScriptableObjectColors();

  constexpr void __cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  constexpr void __cordl_internal_set__curvedMeshInfos(::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*> value);

  constexpr void __cordl_internal_set__useScriptableObjectColors(bool value);

  /// @brief Method .ctor, addr 0x3203bdc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x3203614, size 0x98, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_useScriptableObjectColors, addr 0x3203604, size 0x8, virtual false, abstract: false, final false
  inline bool get_useScriptableObjectColors();

  /// @brief Convert to "::GlobalNamespace::IComponentRefresher"
  constexpr ::GlobalNamespace::IComponentRefresher* i___GlobalNamespace__IComponentRefresher() noexcept;

  /// @brief Method set_color, addr 0x32036ac, size 0x8, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_useScriptableObjectColors, addr 0x320360c, size 0x8, virtual false, abstract: false, final false
  inline void set_useScriptableObjectColors(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurvedTextMeshPro();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurvedTextMeshPro(CurvedTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurvedTextMeshPro(CurvedTextMeshPro const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20482 };

  /// @brief Field _useScriptableObjectColors, offset: 0x7c0, size: 0x1, def value: None
  bool ____useScriptableObjectColors;

  /// @brief Field _colorSo, offset: 0x7c8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____colorSo;

  /// @brief Field _curvedMeshInfos, offset: 0x7d0, size: 0x8, def value: None
  ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*> ____curvedMeshInfos;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x7d8, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____useScriptableObjectColors) == 0x7c0, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____colorSo) == 0x7c8, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____curvedMeshInfos) == 0x7d0, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____curvedCanvasSettingsHelper) == 0x7d8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::CurvedTextMeshPro, 0x7e0>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro_CurvedMeshInfo, "HMUI", "CurvedTextMeshPro/CurvedMeshInfo");

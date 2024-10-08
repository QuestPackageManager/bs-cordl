#pragma once
// IWYU pragma private; include "HMUI/CurvedTextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __CurvedTextMeshPro__CurvedMeshInfo;
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
struct __CurvedTextMeshPro__CurvedMeshInfo;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CurvedTextMeshPro);
MARK_VAL_T(::HMUI::__CurvedTextMeshPro__CurvedMeshInfo);
// Type: ::CurvedMeshInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::CurvedTextMeshPro::CurvedMeshInfo
struct CORDL_TYPE __CurvedTextMeshPro__CurvedMeshInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CurvedTextMeshPro__CurvedMeshInfo();

  // Ctor Parameters [CppParam { name: "uvs3", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }]
  constexpr __CurvedTextMeshPro__CurvedMeshInfo(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs3) noexcept;

  /// @brief Field uvs3, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16785 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, uvs3) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::CurvedTextMeshPro
// SizeInfo { instance_size: 1976, native_size: -1, calculated_instance_size: 1976, calculated_native_size: 1976, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::CurvedTextMeshPro*
class CORDL_TYPE CurvedTextMeshPro : public ::TMPro::TextMeshProUGUI {
public:
  // Declarations
  using CurvedMeshInfo = ::HMUI::__CurvedTextMeshPro__CurvedMeshInfo;

  /// @brief Field _colorSo, offset 0x7a0, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSo, put = __cordl_internal_set__colorSo)) ::UnityW<::GlobalNamespace::ColorSO> _colorSo;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x7b0, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvasSettingsHelper, put = __cordl_internal_set__curvedCanvasSettingsHelper)) ::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  /// @brief Field _curvedMeshInfos, offset 0x7a8, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedMeshInfos,
                      put = __cordl_internal_set__curvedMeshInfos)) ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, ::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>
      _curvedMeshInfos;

  /// @brief Field _useScriptableObjectColors, offset 0x79d, size 0x1
  __declspec(property(get = __cordl_internal_get__useScriptableObjectColors, put = __cordl_internal_set__useScriptableObjectColors)) bool _useScriptableObjectColors;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_useScriptableObjectColors, put = set_useScriptableObjectColors)) bool useScriptableObjectColors;

  /// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
  constexpr operator ::GlobalNamespace::IComponentRefresher*() noexcept;

  /// @brief Method FillColors, addr 0x224f4cc, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> FillColors(int32_t meshIndex, ::UnityEngine::Color32 color32);

  /// @brief Method FillUV3s, addr 0x224f3f4, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> FillUV3s(int32_t meshIndex, int32_t vertexCount, ::UnityEngine::Vector2 curve);

  /// @brief Method GenerateTextMesh, addr 0x224f058, size 0x2dc, virtual true, abstract: false, final false
  inline void GenerateTextMesh();

  static inline ::HMUI::CurvedTextMeshPro* New_ctor();

  /// @brief Method OnEnable, addr 0x224f030, size 0x28, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method UpdateMesh, addr 0x224f334, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateMesh(::UnityEngine::Mesh* mesh, int32_t meshIndex, ::UnityEngine::Vector2 curveUV, ::UnityEngine::Color32 color32);

  /// @brief Method __Refresh, addr 0x224f3e4, size 0x10, virtual true, abstract: false, final true
  inline void __Refresh();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__colorSo() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__colorSo();

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __cordl_internal_get__curvedCanvasSettingsHelper();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& __cordl_internal_get__curvedCanvasSettingsHelper() const;

  constexpr ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, ::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*> const& __cordl_internal_get__curvedMeshInfos() const;

  constexpr ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, ::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>& __cordl_internal_get__curvedMeshInfos();

  constexpr bool const& __cordl_internal_get__useScriptableObjectColors() const;

  constexpr bool& __cordl_internal_get__useScriptableObjectColors();

  constexpr void __cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  constexpr void __cordl_internal_set__curvedMeshInfos(::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, ::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*> value);

  constexpr void __cordl_internal_set__useScriptableObjectColors(bool value);

  /// @brief Method .ctor, addr 0x224f540, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x224ef94, size 0x94, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_useScriptableObjectColors, addr 0x224ef80, size 0x8, virtual false, abstract: false, final false
  inline bool get_useScriptableObjectColors();

  /// @brief Convert to "::GlobalNamespace::IComponentRefresher"
  constexpr ::GlobalNamespace::IComponentRefresher* i___GlobalNamespace__IComponentRefresher() noexcept;

  /// @brief Method set_color, addr 0x224f028, size 0x8, virtual true, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_useScriptableObjectColors, addr 0x224ef88, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _useScriptableObjectColors, offset: 0x79d, size: 0x1, def value: None
  bool ____useScriptableObjectColors;

  /// @brief Field _colorSo, offset: 0x7a0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____colorSo;

  /// @brief Field _curvedMeshInfos, offset: 0x7a8, size: 0x8, def value: None
  ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, ::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*> ____curvedMeshInfos;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x7b0, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16786 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CurvedTextMeshPro, 0x7b8>, "Size mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____useScriptableObjectColors) == 0x79d, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____colorSo) == 0x7a0, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____curvedMeshInfos) == 0x7a8, "Offset mismatch!");

static_assert(offsetof(::HMUI::CurvedTextMeshPro, ____curvedCanvasSettingsHelper) == 0x7b0, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CurvedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__CurvedTextMeshPro__CurvedMeshInfo, "HMUI", "CurvedTextMeshPro/CurvedMeshInfo");

#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/MulticolorAvatarPartPropertyBlockSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MulticolorAvatarPartPropertyBlockSetter)
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter_ColorData;
}
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter_ColorData;
}
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter___c;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c);
// Dependencies System.Object, UnityEngine.Color
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.MulticolorAvatarPartPropertyBlockSetter/ColorData
class CORDL_TYPE MulticolorAvatarPartPropertyBlockSetter_ColorData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _darkerColorMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__darkerColorMultiplier, put = __cordl_internal_set__darkerColorMultiplier)) float_t _darkerColorMultiplier;

  /// @brief Field _defaultColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultColor, put = __cordl_internal_set__defaultColor)) ::UnityEngine::Color _defaultColor;

  /// @brief Field _whiteBoost, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__whiteBoost, put = __cordl_internal_set__whiteBoost)) float_t _whiteBoost;

  __declspec(property(get = get_darkerColorMultiplier)) float_t darkerColorMultiplier;

  __declspec(property(get = get_defaultColor)) ::UnityEngine::Color defaultColor;

  __declspec(property(get = get_whiteBoost)) float_t whiteBoost;

  static inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData* New_ctor();

  constexpr float_t const& __cordl_internal_get__darkerColorMultiplier() const;

  constexpr float_t& __cordl_internal_get__darkerColorMultiplier();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor();

  constexpr float_t const& __cordl_internal_get__whiteBoost() const;

  constexpr float_t& __cordl_internal_get__whiteBoost();

  constexpr void __cordl_internal_set__darkerColorMultiplier(float_t value);

  constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__whiteBoost(float_t value);

  /// @brief Method .ctor, addr 0x225d824, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_darkerColorMultiplier, addr 0x225d814, size 0x8, virtual false, abstract: false, final false
  inline float_t get_darkerColorMultiplier();

  /// @brief Method get_defaultColor, addr 0x225d808, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_defaultColor();

  /// @brief Method get_whiteBoost, addr 0x225d81c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_whiteBoost();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticolorAvatarPartPropertyBlockSetter_ColorData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter_ColorData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticolorAvatarPartPropertyBlockSetter_ColorData(MulticolorAvatarPartPropertyBlockSetter_ColorData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter_ColorData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticolorAvatarPartPropertyBlockSetter_ColorData(MulticolorAvatarPartPropertyBlockSetter_ColorData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18172 };

  /// @brief Field _defaultColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  /// @brief Field _darkerColorMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____darkerColorMultiplier;

  /// @brief Field _whiteBoost, offset: 0x24, size: 0x4, def value: None
  float_t ____whiteBoost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData, ____defaultColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData, ____darkerColorMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData, ____whiteBoost) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData, 0x28>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Dependencies System.Object
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.MulticolorAvatarPartPropertyBlockSetter/<>c
class CORDL_TYPE MulticolorAvatarPartPropertyBlockSetter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put = setStaticF___9__10_0)) ::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>* __9__10_0;

  static inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* New_ctor();

  /// @brief Method <OnValidate>b__10_0, addr 0x225d8a4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OnValidate_b__10_0(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData* x);

  /// @brief Method .ctor, addr 0x225d89c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* getStaticF___9();

  static inline ::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>* getStaticF___9__10_0();

  static inline void setStaticF___9(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticolorAvatarPartPropertyBlockSetter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticolorAvatarPartPropertyBlockSetter___c(MulticolorAvatarPartPropertyBlockSetter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticolorAvatarPartPropertyBlockSetter___c(MulticolorAvatarPartPropertyBlockSetter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.MulticolorAvatarPartPropertyBlockSetter
class CORDL_TYPE MulticolorAvatarPartPropertyBlockSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ColorData = ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData;

  using __c = ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c;

  /// @brief Field _boostColors, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__boostColors, put = __cordl_internal_set__boostColors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _boostColors;

  /// @brief Field _colorDataList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorDataList,
                      put = __cordl_internal_set__colorDataList)) ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*,
                                                                           ::Array<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>*>
      _colorDataList;

  /// @brief Field _colors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colors;

  /// @brief Field _editInPlayMode, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__editInPlayMode, put = __cordl_internal_set__editInPlayMode)) bool _editInPlayMode;

  /// @brief Field _highlighted, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _renderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Field _rimLightColors, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightColors, put = __cordl_internal_set__rimLightColors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _rimLightColors;

  /// @brief Field _uvSegment, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__uvSegment, put = __cordl_internal_set__uvSegment)) int32_t _uvSegment;

  static inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x225d488, size 0x1a4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetColors, addr 0x225d074, size 0x1d0, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method SetHighlight, addr 0x225d35c, size 0x10, virtual false, abstract: false, final false
  inline void SetHighlight(bool highlighted, int32_t uvSegment);

  /// @brief Method UpdateRenderer, addr 0x225d62c, size 0x174, virtual false, abstract: false, final false
  inline void UpdateRenderer();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__boostColors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__boostColors();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>*> const&
  __cordl_internal_get__colorDataList() const;

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>*>&
  __cordl_internal_get__colorDataList();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__colors();

  constexpr bool const& __cordl_internal_get__editInPlayMode() const;

  constexpr bool& __cordl_internal_get__editInPlayMode();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__rimLightColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__rimLightColors();

  constexpr int32_t const& __cordl_internal_get__uvSegment() const;

  constexpr int32_t& __cordl_internal_get__uvSegment();

  constexpr void __cordl_internal_set__boostColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__colorDataList(
      ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>*> value);

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__editInPlayMode(bool value);

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set__rimLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__uvSegment(int32_t value);

  /// @brief Method .ctor, addr 0x225d7a0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticolorAvatarPartPropertyBlockSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18174 };

  /// @brief Field _colorDataList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*>*> ____colorDataList;

  /// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _editInPlayMode, offset: 0x30, size: 0x1, def value: None
  bool ____editInPlayMode;

  /// @brief Field _colors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colors;

  /// @brief Field _rimLightColors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____rimLightColors;

  /// @brief Field _boostColors, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____boostColors;

  /// @brief Field _highlighted, offset: 0x50, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _uvSegment, offset: 0x54, size: 0x4, def value: None
  int32_t ____uvSegment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____colorDataList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____editInPlayMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____colors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____rimLightColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____boostColors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____highlighted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____uvSegment) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, 0x58>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter_ColorData*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter/ColorData");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter___c*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter/<>c");

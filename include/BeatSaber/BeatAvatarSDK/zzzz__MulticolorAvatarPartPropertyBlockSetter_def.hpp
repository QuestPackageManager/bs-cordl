#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MulticolorAvatarPartPropertyBlockSetter)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace BeatSaber::BeatAvatarSDK {
class __MulticolorAvatarPartPropertyBlockSetter__ColorData;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace BeatSaber::BeatAvatarSDK {
class __MulticolorAvatarPartPropertyBlockSetter____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace BeatSaber::BeatAvatarSDK {
class __MulticolorAvatarPartPropertyBlockSetter__ColorData;
}
namespace BeatSaber::BeatAvatarSDK {
class __MulticolorAvatarPartPropertyBlockSetter____c;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData);
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c);
// Type: ::ColorData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15698))
// CS Name: ::MulticolorAvatarPartPropertyBlockSetter::ColorData*
class CORDL_TYPE __MulticolorAvatarPartPropertyBlockSetter__ColorData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _defaultColor, offset 0x10, size 0x10
  __declspec(property(get = __get__defaultColor, put = __set__defaultColor))::UnityEngine::Color _defaultColor;

  /// @brief Field _darkerColorMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __get__darkerColorMultiplier, put = __set__darkerColorMultiplier)) float_t _darkerColorMultiplier;

  /// @brief Field _whiteBoost, offset 0x24, size 0x4
  __declspec(property(get = __get__whiteBoost, put = __set__whiteBoost)) float_t _whiteBoost;

  __declspec(property(get = get_defaultColor))::UnityEngine::Color defaultColor;

  __declspec(property(get = get_darkerColorMultiplier)) float_t darkerColorMultiplier;

  __declspec(property(get = get_whiteBoost)) float_t whiteBoost;

  constexpr ::UnityEngine::Color& __get__defaultColor();

  constexpr ::UnityEngine::Color const& __get__defaultColor() const;

  constexpr void __set__defaultColor(::UnityEngine::Color value);

  constexpr float_t& __get__darkerColorMultiplier();

  constexpr float_t const& __get__darkerColorMultiplier() const;

  constexpr void __set__darkerColorMultiplier(float_t value);

  constexpr float_t& __get__whiteBoost();

  constexpr float_t const& __get__whiteBoost() const;

  constexpr void __set__whiteBoost(float_t value);

  /// @brief Method get_defaultColor, addr 0xe1c488, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_defaultColor();

  /// @brief Method get_darkerColorMultiplier, addr 0xe1c494, size 0x8, virtual false, abstract: false, final false
  inline float_t get_darkerColorMultiplier();

  /// @brief Method get_whiteBoost, addr 0xe1c49c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_whiteBoost();

  static inline ::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData* New_ctor();

  /// @brief Method .ctor, addr 0xe1c4a4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MulticolorAvatarPartPropertyBlockSetter__ColorData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MulticolorAvatarPartPropertyBlockSetter__ColorData(__MulticolorAvatarPartPropertyBlockSetter__ColorData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MulticolorAvatarPartPropertyBlockSetter__ColorData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MulticolorAvatarPartPropertyBlockSetter__ColorData(__MulticolorAvatarPartPropertyBlockSetter__ColorData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MulticolorAvatarPartPropertyBlockSetter__ColorData();

public:
  /// @brief Field _defaultColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  /// @brief Field _darkerColorMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____darkerColorMultiplier;

  /// @brief Field _whiteBoost, offset: 0x24, size: 0x4, def value: None
  float_t ____whiteBoost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData, ____defaultColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData, ____darkerColorMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData, ____whiteBoost) == 0x24, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15699))
// CS Name: ::MulticolorAvatarPartPropertyBlockSetter::<>c*
class CORDL_TYPE __MulticolorAvatarPartPropertyBlockSetter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0,
                             put = setStaticF___9__10_0))::System::Func_2<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::UnityEngine::Color>* __9__10_0;

  static inline void setStaticF___9(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c* value);

  static inline ::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c* getStaticF___9();

  static inline void setStaticF___9__10_0(::System::Func_2<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::UnityEngine::Color>* value);

  static inline ::System::Func_2<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::UnityEngine::Color>* getStaticF___9__10_0();

  static inline ::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c* New_ctor();

  /// @brief Method .ctor, addr 0xe1c52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <OnValidate>b__10_0, addr 0xe1c534, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _OnValidate_b__10_0(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MulticolorAvatarPartPropertyBlockSetter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MulticolorAvatarPartPropertyBlockSetter____c(__MulticolorAvatarPartPropertyBlockSetter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MulticolorAvatarPartPropertyBlockSetter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MulticolorAvatarPartPropertyBlockSetter____c(__MulticolorAvatarPartPropertyBlockSetter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MulticolorAvatarPartPropertyBlockSetter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Type: BeatSaber.BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15700))
// CS Name: ::BeatSaber.BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*
class CORDL_TYPE MulticolorAvatarPartPropertyBlockSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c;

  using ColorData = ::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData;

  /// @brief Field _colorDataList, offset 0x18, size 0x8
  __declspec(property(get = __get__colorDataList, put = __set__colorDataList))::ArrayW<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*,
                                                                                       ::Array<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*>*> _colorDataList;

  /// @brief Field _renderer, offset 0x20, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  /// @brief Field _editInPlayMode, offset 0x28, size 0x1
  __declspec(property(get = __get__editInPlayMode, put = __set__editInPlayMode)) bool _editInPlayMode;

  /// @brief Field _colors, offset 0x30, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colors;

  /// @brief Field _rimLightColors, offset 0x38, size 0x8
  __declspec(property(get = __get__rimLightColors, put = __set__rimLightColors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _rimLightColors;

  /// @brief Field _boostColors, offset 0x40, size 0x8
  __declspec(property(get = __get__boostColors, put = __set__boostColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _boostColors;

  /// @brief Field _highlighted, offset 0x48, size 0x1
  __declspec(property(get = __get__highlighted, put = __set__highlighted)) bool _highlighted;

  /// @brief Field _uvSegment, offset 0x4c, size 0x4
  __declspec(property(get = __get__uvSegment, put = __set__uvSegment)) int32_t _uvSegment;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*>*>&
  __get__colorDataList();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*,
                     ::Array<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*>*> const&
  __get__colorDataList() const;

  constexpr void __set__colorDataList(
      ::ArrayW<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*>*> value);

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  constexpr bool& __get__editInPlayMode();

  constexpr bool const& __get__editInPlayMode() const;

  constexpr void __set__editInPlayMode(bool value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__colors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__rimLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__rimLightColors() const;

  constexpr void __set__rimLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get__boostColors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get__boostColors() const;

  constexpr void __set__boostColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr bool& __get__highlighted();

  constexpr bool const& __get__highlighted() const;

  constexpr void __set__highlighted(bool value);

  constexpr int32_t& __get__uvSegment();

  constexpr int32_t const& __get__uvSegment() const;

  constexpr void __set__uvSegment(int32_t value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method OnValidate, addr 0xe1c120, size 0x188, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetColors, addr 0xe1bd10, size 0x1d0, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method SetHighlight, addr 0xe1bff8, size 0x10, virtual false, abstract: false, final false
  inline void SetHighlight(bool highlighted, int32_t uvSegment);

  /// @brief Method UpdateRenderer, addr 0xe1c2a8, size 0x178, virtual false, abstract: false, final false
  inline void UpdateRenderer();

  static inline ::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter* New_ctor();

  /// @brief Method .ctor, addr 0xe1c420, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticolorAvatarPartPropertyBlockSetter();

public:
  /// @brief Field _colorDataList, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, ::Array<::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*>*>
      ____colorDataList;

  /// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  /// @brief Field _editInPlayMode, offset: 0x28, size: 0x1, def value: None
  bool ____editInPlayMode;

  /// @brief Field _colors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colors;

  /// @brief Field _rimLightColors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____rimLightColors;

  /// @brief Field _boostColors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____boostColors;

  /// @brief Field _highlighted, offset: 0x48, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _uvSegment, offset: 0x4c, size: 0x4, def value: None
  int32_t ____uvSegment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____colorDataList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____editInPlayMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____rimLightColors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____boostColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____highlighted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter, ____uvSegment) == 0x4c, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::MulticolorAvatarPartPropertyBlockSetter*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter__ColorData*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter/ColorData");
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::__MulticolorAvatarPartPropertyBlockSetter____c*, "BeatSaber.BeatAvatarSDK", "MulticolorAvatarPartPropertyBlockSetter/<>c");

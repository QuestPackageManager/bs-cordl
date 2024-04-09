#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoUnwrapSettings)
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Fill;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Fill;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor);
MARK_VAL_T(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill);
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings);
// Type: ::Anchor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::AutoUnwrapSettings::Anchor
struct CORDL_TYPE __AutoUnwrapSettings__Anchor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AutoUnwrapSettings__Anchor_Unwrapped
  enum struct ____AutoUnwrapSettings__Anchor_Unwrapped : int32_t {
    __E_UpperLeft = static_cast<int32_t>(0x0),
    __E_UpperCenter = static_cast<int32_t>(0x1),
    __E_UpperRight = static_cast<int32_t>(0x2),
    __E_MiddleLeft = static_cast<int32_t>(0x3),
    __E_MiddleCenter = static_cast<int32_t>(0x4),
    __E_MiddleRight = static_cast<int32_t>(0x5),
    __E_LowerLeft = static_cast<int32_t>(0x6),
    __E_LowerCenter = static_cast<int32_t>(0x7),
    __E_LowerRight = static_cast<int32_t>(0x8),
    __E_None = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AutoUnwrapSettings__Anchor_Unwrapped() const noexcept {
    return static_cast<____AutoUnwrapSettings__Anchor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AutoUnwrapSettings__Anchor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AutoUnwrapSettings__Anchor(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LowerCenter value: static_cast<int32_t>(0x7)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerCenter;

  /// @brief Field LowerLeft value: static_cast<int32_t>(0x6)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerLeft;

  /// @brief Field LowerRight value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const LowerRight;

  /// @brief Field MiddleCenter value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleCenter;

  /// @brief Field MiddleLeft value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleLeft;

  /// @brief Field MiddleRight value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const MiddleRight;

  /// @brief Field None value: static_cast<int32_t>(0x9)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const None;

  /// @brief Field UpperCenter value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperCenter;

  /// @brief Field UpperLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperLeft;

  /// @brief Field UpperRight value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor const UpperRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::Fill
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::AutoUnwrapSettings::Fill
struct CORDL_TYPE __AutoUnwrapSettings__Fill {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AutoUnwrapSettings__Fill_Unwrapped
  enum struct ____AutoUnwrapSettings__Fill_Unwrapped : int32_t {
    __E_Fit = static_cast<int32_t>(0x0),
    __E_Tile = static_cast<int32_t>(0x1),
    __E_Stretch = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AutoUnwrapSettings__Fill_Unwrapped() const noexcept {
    return static_cast<____AutoUnwrapSettings__Fill_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AutoUnwrapSettings__Fill();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AutoUnwrapSettings__Fill(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Fit;

  /// @brief Field Stretch value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Stretch;

  /// @brief Field Tile value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill const Tile;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::AutoUnwrapSettings
// SizeInfo { instance_size: 32, native_size: 44, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::AutoUnwrapSettings
struct CORDL_TYPE AutoUnwrapSettings {
public:
  // Declarations
  using Anchor = ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor;

  using Fill = ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill;

  __declspec(property(get = get_anchor, put = set_anchor))::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor anchor;

  __declspec(property(get = get_fill, put = set_fill))::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill fill;

  __declspec(property(get = get_flipU, put = set_flipU)) bool flipU;

  __declspec(property(get = get_flipV, put = set_flipV)) bool flipV;

  __declspec(property(get = get_offset, put = set_offset))::UnityEngine::Vector2 offset;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  __declspec(property(get = get_scale, put = set_scale))::UnityEngine::Vector2 scale;

  __declspec(property(get = get_swapUV, put = set_swapUV)) bool swapUV;

  __declspec(property(get = get_useWorldSpace, put = set_useWorldSpace)) bool useWorldSpace;

  /// @brief Method Reset, addr 0x30634fc, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x3063658, size 0x54c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x30635b4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method get_anchor, addr 0x30635a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor get_anchor();

  /// @brief Method get_defaultAutoUnwrapSettings, addr 0x30634e4, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings();

  /// @brief Method get_fill, addr 0x3063564, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill get_fill();

  /// @brief Method get_fit, addr 0x3063628, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit();

  /// @brief Method get_flipU, addr 0x3063528, size 0x8, virtual false, abstract: false, final false
  inline bool get_flipU();

  /// @brief Method get_flipV, addr 0x306353c, size 0x8, virtual false, abstract: false, final false
  inline bool get_flipV();

  /// @brief Method get_offset, addr 0x3063584, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offset();

  /// @brief Method get_rotation, addr 0x3063594, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method get_scale, addr 0x3063574, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scale();

  /// @brief Method get_stretch, addr 0x3063640, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch();

  /// @brief Method get_swapUV, addr 0x3063550, size 0x8, virtual false, abstract: false, final false
  inline bool get_swapUV();

  /// @brief Method get_tile, addr 0x3063610, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile();

  /// @brief Method get_useWorldSpace, addr 0x3063514, size 0x8, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method set_anchor, addr 0x30635ac, size 0x8, virtual false, abstract: false, final false
  inline void set_anchor(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor value);

  /// @brief Method set_fill, addr 0x306356c, size 0x8, virtual false, abstract: false, final false
  inline void set_fill(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill value);

  /// @brief Method set_flipU, addr 0x3063530, size 0xc, virtual false, abstract: false, final false
  inline void set_flipU(bool value);

  /// @brief Method set_flipV, addr 0x3063544, size 0xc, virtual false, abstract: false, final false
  inline void set_flipV(bool value);

  /// @brief Method set_offset, addr 0x306358c, size 0x8, virtual false, abstract: false, final false
  inline void set_offset(::UnityEngine::Vector2 value);

  /// @brief Method set_rotation, addr 0x306359c, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

  /// @brief Method set_scale, addr 0x306357c, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(::UnityEngine::Vector2 value);

  /// @brief Method set_swapUV, addr 0x3063558, size 0xc, virtual false, abstract: false, final false
  inline void set_swapUV(bool value);

  /// @brief Method set_useWorldSpace, addr 0x306351c, size 0xc, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoUnwrapSettings();

  // Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_FlipV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Fill", ty:
  // "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "m_Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Anchor", ty:
  // "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor", modifiers: "", def_value: None }]
  constexpr AutoUnwrapSettings(bool m_UseWorldSpace, bool m_FlipU, bool m_FlipV, bool m_SwapUV, ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill m_Fill, ::UnityEngine::Vector2 m_Scale,
                               ::UnityEngine::Vector2 m_Offset, float_t m_Rotation, ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor m_Anchor) noexcept;

  /// @brief Field m_UseWorldSpace, offset: 0x0, size: 0x1, def value: None
  bool m_UseWorldSpace;

  /// @brief Field m_FlipU, offset: 0x1, size: 0x1, def value: None
  bool m_FlipU;

  /// @brief Field m_FlipV, offset: 0x2, size: 0x1, def value: None
  bool m_FlipV;

  /// @brief Field m_SwapUV, offset: 0x3, size: 0x1, def value: None
  bool m_SwapUV;

  /// @brief Field m_Fill, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill m_Fill;

  /// @brief Field m_Scale, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Scale;

  /// @brief Field m_Offset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Offset;

  /// @brief Field m_Rotation, offset: 0x18, size: 0x4, def value: None
  float_t m_Rotation;

  /// @brief Field m_Anchor, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor m_Anchor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::AutoUnwrapSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_UseWorldSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipU) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipV) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_SwapUV) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Fill) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Anchor) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");

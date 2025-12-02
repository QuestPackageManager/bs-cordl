#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoUnwrapSettings)
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings_Anchor;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings_Fill;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings_Anchor;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings_Fill;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor);
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill);
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
struct CORDL_TYPE AutoUnwrapSettings_Anchor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AutoUnwrapSettings_Anchor_Unwrapped
  enum struct __AutoUnwrapSettings_Anchor_Unwrapped : int32_t {
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
  constexpr operator __AutoUnwrapSettings_Anchor_Unwrapped() const noexcept {
    return static_cast<__AutoUnwrapSettings_Anchor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoUnwrapSettings_Anchor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AutoUnwrapSettings_Anchor(int32_t value__) noexcept;

  /// @brief Field LowerCenter value: I32(7)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const LowerCenter;

  /// @brief Field LowerLeft value: I32(6)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const LowerLeft;

  /// @brief Field LowerRight value: I32(8)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const LowerRight;

  /// @brief Field MiddleCenter value: I32(4)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const MiddleCenter;

  /// @brief Field MiddleLeft value: I32(3)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const MiddleLeft;

  /// @brief Field MiddleRight value: I32(5)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const MiddleRight;

  /// @brief Field None value: I32(9)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const None;

  /// @brief Field UpperCenter value: I32(1)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const UpperCenter;

  /// @brief Field UpperLeft value: I32(0)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const UpperLeft;

  /// @brief Field UpperRight value: I32(2)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor const UpperRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16663 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
struct CORDL_TYPE AutoUnwrapSettings_Fill {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AutoUnwrapSettings_Fill_Unwrapped
  enum struct __AutoUnwrapSettings_Fill_Unwrapped : int32_t {
    __E_Fit = static_cast<int32_t>(0x0),
    __E_Tile = static_cast<int32_t>(0x1),
    __E_Stretch = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AutoUnwrapSettings_Fill_Unwrapped() const noexcept {
    return static_cast<__AutoUnwrapSettings_Fill_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoUnwrapSettings_Fill();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AutoUnwrapSettings_Fill(int32_t value__) noexcept;

  /// @brief Field Fit value: I32(0)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill const Fit;

  /// @brief Field Stretch value: I32(2)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill const Stretch;

  /// @brief Field Tile value: I32(1)
  static ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill const Tile;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16664 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies UnityEngine.ProBuilder.AutoUnwrapSettings::Anchor, UnityEngine.ProBuilder.AutoUnwrapSettings::Fill, UnityEngine.Vector2
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings
struct CORDL_TYPE AutoUnwrapSettings {
public:
  // Declarations
  using Anchor = ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor;

  using Fill = ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill;

  __declspec(property(get = get_anchor, put = set_anchor)) ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor anchor;

  __declspec(property(get = get_fill, put = set_fill)) ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill fill;

  __declspec(property(get = get_flipU, put = set_flipU)) bool flipU;

  __declspec(property(get = get_flipV, put = set_flipV)) bool flipV;

  __declspec(property(get = get_offset, put = set_offset)) ::UnityEngine::Vector2 offset;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  __declspec(property(get = get_scale, put = set_scale)) ::UnityEngine::Vector2 scale;

  __declspec(property(get = get_swapUV, put = set_swapUV)) bool swapUV;

  __declspec(property(get = get_useWorldSpace, put = set_useWorldSpace)) bool useWorldSpace;

  /// @brief Method Reset, addr 0x64946f0, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x649483c, size 0x394, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6494798, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method get_anchor, addr 0x6494788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor get_anchor();

  /// @brief Method get_defaultAutoUnwrapSettings, addr 0x64946d8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings();

  /// @brief Method get_fill, addr 0x6494748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill get_fill();

  /// @brief Method get_fit, addr 0x649480c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit();

  /// @brief Method get_flipU, addr 0x6494718, size 0x8, virtual false, abstract: false, final false
  inline bool get_flipU();

  /// @brief Method get_flipV, addr 0x6494728, size 0x8, virtual false, abstract: false, final false
  inline bool get_flipV();

  /// @brief Method get_offset, addr 0x6494768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_offset();

  /// @brief Method get_rotation, addr 0x6494778, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method get_scale, addr 0x6494758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scale();

  /// @brief Method get_stretch, addr 0x6494824, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch();

  /// @brief Method get_swapUV, addr 0x6494738, size 0x8, virtual false, abstract: false, final false
  inline bool get_swapUV();

  /// @brief Method get_tile, addr 0x64947f4, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile();

  /// @brief Method get_useWorldSpace, addr 0x6494708, size 0x8, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method set_anchor, addr 0x6494790, size 0x8, virtual false, abstract: false, final false
  inline void set_anchor(::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor value);

  /// @brief Method set_fill, addr 0x6494750, size 0x8, virtual false, abstract: false, final false
  inline void set_fill(::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill value);

  /// @brief Method set_flipU, addr 0x6494720, size 0x8, virtual false, abstract: false, final false
  inline void set_flipU(bool value);

  /// @brief Method set_flipV, addr 0x6494730, size 0x8, virtual false, abstract: false, final false
  inline void set_flipV(bool value);

  /// @brief Method set_offset, addr 0x6494770, size 0x8, virtual false, abstract: false, final false
  inline void set_offset(::UnityEngine::Vector2 value);

  /// @brief Method set_rotation, addr 0x6494780, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

  /// @brief Method set_scale, addr 0x6494760, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(::UnityEngine::Vector2 value);

  /// @brief Method set_swapUV, addr 0x6494740, size 0x8, virtual false, abstract: false, final false
  inline void set_swapUV(bool value);

  /// @brief Method set_useWorldSpace, addr 0x6494710, size 0x8, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoUnwrapSettings();

  // Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_FlipV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Fill", ty:
  // "::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "m_Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Anchor", ty:
  // "::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor", modifiers: "", def_value: None }]
  constexpr AutoUnwrapSettings(bool m_UseWorldSpace, bool m_FlipU, bool m_FlipV, bool m_SwapUV, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill m_Fill, ::UnityEngine::Vector2 m_Scale,
                               ::UnityEngine::Vector2 m_Offset, float_t m_Rotation, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor m_Anchor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_UseWorldSpace, offset: 0x0, size: 0x1, def value: None
  bool m_UseWorldSpace;

  /// @brief Field m_FlipU, offset: 0x1, size: 0x1, def value: None
  bool m_FlipU;

  /// @brief Field m_FlipV, offset: 0x2, size: 0x1, def value: None
  bool m_FlipV;

  /// @brief Field m_SwapUV, offset: 0x3, size: 0x1, def value: None
  bool m_SwapUV;

  /// @brief Field m_Fill, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill m_Fill;

  /// @brief Field m_Scale, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Scale;

  /// @brief Field m_Offset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Offset;

  /// @brief Field m_Rotation, offset: 0x18, size: 0x4, def value: None
  float_t m_Rotation;

  /// @brief Field m_Anchor, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor m_Anchor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_UseWorldSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipU) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipV) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_SwapUV) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Fill) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Anchor) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::AutoUnwrapSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings_Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");

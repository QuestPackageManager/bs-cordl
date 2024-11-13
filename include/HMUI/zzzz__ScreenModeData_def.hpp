#pragma once
// IWYU pragma private; include "HMUI/ScreenModeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScreenModeData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScreenModeData;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenModeData);
// Type: HMUI::ScreenModeData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScreenModeData*
class CORDL_TYPE ScreenModeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field minYPos, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_minYPos, put = __cordl_internal_set_minYPos)) float_t minYPos;

  /// @brief Field offsetHeightByHeadPos, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_offsetHeightByHeadPos, put = __cordl_internal_set_offsetHeightByHeadPos)) bool offsetHeightByHeadPos;

  /// @brief Field position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector3 position;

  /// @brief Field radius, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field rotation, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) ::UnityEngine::Vector3 rotation;

  /// @brief Field scale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) float_t scale;

  /// @brief Field yOffsetRelativeToHead, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_yOffsetRelativeToHead, put = __cordl_internal_set_yOffsetRelativeToHead)) float_t yOffsetRelativeToHead;

  static inline ::HMUI::ScreenModeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos,
                                                 float_t yOffsetRelativeToHead, float_t minYPos);

  constexpr float_t const& __cordl_internal_get_minYPos() const;

  constexpr float_t& __cordl_internal_get_minYPos();

  constexpr bool const& __cordl_internal_get_offsetHeightByHeadPos() const;

  constexpr bool& __cordl_internal_get_offsetHeightByHeadPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation();

  constexpr float_t const& __cordl_internal_get_scale() const;

  constexpr float_t& __cordl_internal_get_scale();

  constexpr float_t const& __cordl_internal_get_yOffsetRelativeToHead() const;

  constexpr float_t& __cordl_internal_get_yOffsetRelativeToHead();

  constexpr void __cordl_internal_set_minYPos(float_t value);

  constexpr void __cordl_internal_set_offsetHeightByHeadPos(bool value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_scale(float_t value);

  constexpr void __cordl_internal_set_yOffsetRelativeToHead(float_t value);

  /// @brief Method .ctor, addr 0x2256bb8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead, float_t minYPos);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeData(ScreenModeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeData(ScreenModeData const&) = delete;

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field rotation, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotation;

  /// @brief Field scale, offset: 0x28, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field offsetHeightByHeadPos, offset: 0x30, size: 0x1, def value: None
  bool ___offsetHeightByHeadPos;

  /// @brief Field yOffsetRelativeToHead, offset: 0x34, size: 0x4, def value: None
  float_t ___yOffsetRelativeToHead;

  /// @brief Field minYPos, offset: 0x38, size: 0x4, def value: None
  float_t ___minYPos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16769 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeData, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___offsetHeightByHeadPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___yOffsetRelativeToHead) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScreenModeData, ___minYPos) == 0x38, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenModeData);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeData*, "HMUI", "ScreenModeData");

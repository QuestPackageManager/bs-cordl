#pragma once
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13593))
// CS Name: ::HMUI::ScreenModeData*
class CORDL_TYPE ScreenModeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field position, offset 0x10, size 0xc
  __declspec(property(get = __get_position, put = __set_position))::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x1c, size 0xc
  __declspec(property(get = __get_rotation, put = __set_rotation))::UnityEngine::Vector3 rotation;

  /// @brief Field scale, offset 0x28, size 0x4
  __declspec(property(get = __get_scale, put = __set_scale)) float_t scale;

  /// @brief Field radius, offset 0x2c, size 0x4
  __declspec(property(get = __get_radius, put = __set_radius)) float_t radius;

  /// @brief Field offsetHeightByHeadPos, offset 0x30, size 0x1
  __declspec(property(get = __get_offsetHeightByHeadPos, put = __set_offsetHeightByHeadPos)) bool offsetHeightByHeadPos;

  /// @brief Field yOffsetRelativeToHead, offset 0x34, size 0x4
  __declspec(property(get = __get_yOffsetRelativeToHead, put = __set_yOffsetRelativeToHead)) float_t yOffsetRelativeToHead;

  /// @brief Field minYPos, offset 0x38, size 0x4
  __declspec(property(get = __get_minYPos, put = __set_minYPos)) float_t minYPos;

  constexpr ::UnityEngine::Vector3& __get_position();

  constexpr ::UnityEngine::Vector3 const& __get_position() const;

  constexpr void __set_position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_rotation();

  constexpr ::UnityEngine::Vector3 const& __get_rotation() const;

  constexpr void __set_rotation(::UnityEngine::Vector3 value);

  constexpr float_t& __get_scale();

  constexpr float_t const& __get_scale() const;

  constexpr void __set_scale(float_t value);

  constexpr float_t& __get_radius();

  constexpr float_t const& __get_radius() const;

  constexpr void __set_radius(float_t value);

  constexpr bool& __get_offsetHeightByHeadPos();

  constexpr bool const& __get_offsetHeightByHeadPos() const;

  constexpr void __set_offsetHeightByHeadPos(bool value);

  constexpr float_t& __get_yOffsetRelativeToHead();

  constexpr float_t const& __get_yOffsetRelativeToHead() const;

  constexpr void __set_yOffsetRelativeToHead(float_t value);

  constexpr float_t& __get_minYPos();

  constexpr float_t const& __get_minYPos() const;

  constexpr void __set_minYPos(float_t value);

  static inline ::HMUI::ScreenModeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos,
                                                 float_t yOffsetRelativeToHead, float_t minYPos);

  /// @brief Method .ctor, addr 0x212c3b8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, float_t scale, float_t radius, bool offsetHeightByHeadPos, float_t yOffsetRelativeToHead, float_t minYPos);

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeData(ScreenModeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeData(ScreenModeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeData();

public:
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

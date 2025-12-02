#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderDebugPrintInput)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderDebugPrintInput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderDebugPrintInput);
// Dependencies UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderDebugPrintInput
struct CORDL_TYPE ShaderDebugPrintInput {
public:
  // Declarations
  __declspec(property(get = get_leftDown, put = set_leftDown)) bool leftDown;

  __declspec(property(get = get_middleDown, put = set_middleDown)) bool middleDown;

  __declspec(property(get = get_pos, put = set_pos)) ::UnityEngine::Vector2 pos;

  __declspec(property(get = get_rightDown, put = set_rightDown)) bool rightDown;

  /// @brief Method String, addr 0x6550ddc, size 0x1e4, virtual false, abstract: false, final false
  inline ::StringW String();

  /// @brief Method get_leftDown, addr 0x6550dac, size 0x8, virtual false, abstract: false, final false
  inline bool get_leftDown();

  /// @brief Method get_middleDown, addr 0x6550dcc, size 0x8, virtual false, abstract: false, final false
  inline bool get_middleDown();

  /// @brief Method get_pos, addr 0x6550d9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pos();

  /// @brief Method get_rightDown, addr 0x6550dbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_rightDown();

  /// @brief Method set_leftDown, addr 0x6550db4, size 0x8, virtual false, abstract: false, final false
  inline void set_leftDown(bool value);

  /// @brief Method set_middleDown, addr 0x6550dd4, size 0x8, virtual false, abstract: false, final false
  inline void set_middleDown(bool value);

  /// @brief Method set_pos, addr 0x6550da4, size 0x8, virtual false, abstract: false, final false
  inline void set_pos(::UnityEngine::Vector2 value);

  /// @brief Method set_rightDown, addr 0x6550dc4, size 0x8, virtual false, abstract: false, final false
  inline void set_rightDown(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderDebugPrintInput();

  // Ctor Parameters [CppParam { name: "_pos_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_leftDown_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_rightDown_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_middleDown_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr ShaderDebugPrintInput(::UnityEngine::Vector2 _pos_k__BackingField, bool _leftDown_k__BackingField, bool _rightDown_k__BackingField, bool _middleDown_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12028 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field <pos>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _pos_k__BackingField;

  /// @brief Field <leftDown>k__BackingField, offset: 0x8, size: 0x1, def value: None
  bool _leftDown_k__BackingField;

  /// @brief Field <rightDown>k__BackingField, offset: 0x9, size: 0x1, def value: None
  bool _rightDown_k__BackingField;

  /// @brief Field <middleDown>k__BackingField, offset: 0xa, size: 0x1, def value: None
  bool _middleDown_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintInput, _pos_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintInput, _leftDown_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintInput, _rightDown_k__BackingField) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintInput, _middleDown_k__BackingField) == 0xa, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderDebugPrintInput, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderDebugPrintInput, "UnityEngine.Rendering", "ShaderDebugPrintInput");

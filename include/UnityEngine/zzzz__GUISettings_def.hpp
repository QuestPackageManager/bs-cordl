#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUISettings)
// Forward declare root types
namespace UnityEngine {
class GUISettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUISettings);
// Type: UnityEngine::GUISettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14617))
// CS Name: ::UnityEngine::GUISettings*
class CORDL_TYPE GUISettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DoubleClickSelectsWord, offset 0x10, size 0x1
  __declspec(property(get = __get_m_DoubleClickSelectsWord, put = __set_m_DoubleClickSelectsWord)) bool m_DoubleClickSelectsWord;

  /// @brief Field m_TripleClickSelectsLine, offset 0x11, size 0x1
  __declspec(property(get = __get_m_TripleClickSelectsLine, put = __set_m_TripleClickSelectsLine)) bool m_TripleClickSelectsLine;

  /// @brief Field m_CursorColor, offset 0x14, size 0x10
  __declspec(property(get = __get_m_CursorColor, put = __set_m_CursorColor))::UnityEngine::Color m_CursorColor;

  /// @brief Field m_CursorFlashSpeed, offset 0x24, size 0x4
  __declspec(property(get = __get_m_CursorFlashSpeed, put = __set_m_CursorFlashSpeed)) float_t m_CursorFlashSpeed;

  /// @brief Field m_SelectionColor, offset 0x28, size 0x10
  __declspec(property(get = __get_m_SelectionColor, put = __set_m_SelectionColor))::UnityEngine::Color m_SelectionColor;

  constexpr bool& __get_m_DoubleClickSelectsWord();

  constexpr bool const& __get_m_DoubleClickSelectsWord() const;

  constexpr void __set_m_DoubleClickSelectsWord(bool value);

  constexpr bool& __get_m_TripleClickSelectsLine();

  constexpr bool const& __get_m_TripleClickSelectsLine() const;

  constexpr void __set_m_TripleClickSelectsLine(bool value);

  constexpr ::UnityEngine::Color& __get_m_CursorColor();

  constexpr ::UnityEngine::Color const& __get_m_CursorColor() const;

  constexpr void __set_m_CursorColor(::UnityEngine::Color value);

  constexpr float_t& __get_m_CursorFlashSpeed();

  constexpr float_t const& __get_m_CursorFlashSpeed() const;

  constexpr void __set_m_CursorFlashSpeed(float_t value);

  constexpr ::UnityEngine::Color& __get_m_SelectionColor();

  constexpr ::UnityEngine::Color const& __get_m_SelectionColor() const;

  constexpr void __set_m_SelectionColor(::UnityEngine::Color value);

  static inline ::UnityEngine::GUISettings* New_ctor();

  /// @brief Method .ctor addr 0x2d085dc size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUISettings(GUISettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUISettings(GUISettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUISettings();

public:
  /// @brief Field m_DoubleClickSelectsWord, offset: 0x10, size: 0x1, def value: None
  bool ___m_DoubleClickSelectsWord;

  /// @brief Field m_TripleClickSelectsLine, offset: 0x11, size: 0x1, def value: None
  bool ___m_TripleClickSelectsLine;

  /// @brief Field m_CursorColor, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CursorColor;

  /// @brief Field m_CursorFlashSpeed, offset: 0x24, size: 0x4, def value: None
  float_t ___m_CursorFlashSpeed;

  /// @brief Field m_SelectionColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUISettings, 0x38>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUISettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUISettings*, "UnityEngine", "GUISettings");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicLevelParamsPanel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicLevelParamsPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicLevelParamsPanel);
// Type: ::BasicLevelParamsPanel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5770))
// CS Name: ::BasicLevelParamsPanel*
class CORDL_TYPE BasicLevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _durationText, offset 0x18, size 0x8
  __declspec(property(get = __get__durationText, put = __set__durationText))::TMPro::TextMeshProUGUI* _durationText;

  /// @brief Field _bpmText, offset 0x20, size 0x8
  __declspec(property(get = __get__bpmText, put = __set__bpmText))::TMPro::TextMeshProUGUI* _bpmText;

  __declspec(property(put = set_duration)) float_t duration;

  __declspec(property(put = set_bpm)) float_t bpm;

  constexpr ::TMPro::TextMeshProUGUI*& __get__durationText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__durationText() const;

  constexpr void __set__durationText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__bpmText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__bpmText() const;

  constexpr void __set__bpmText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method set_duration, addr 0x22df194, size 0x34, virtual false, abstract: false, final false
  inline void set_duration(float_t value);

  /// @brief Method set_bpm, addr 0x22df1c8, size 0x48, virtual false, abstract: false, final false
  inline void set_bpm(float_t value);

  static inline ::GlobalNamespace::BasicLevelParamsPanel* New_ctor();

  /// @brief Method .ctor, addr 0x22df210, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicLevelParamsPanel(BasicLevelParamsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicLevelParamsPanel(BasicLevelParamsPanel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicLevelParamsPanel();

public:
  /// @brief Field _durationText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____durationText;

  /// @brief Field _bpmText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____bpmText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicLevelParamsPanel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____durationText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicLevelParamsPanel, ____bpmText) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicLevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicLevelParamsPanel*, "", "BasicLevelParamsPanel");

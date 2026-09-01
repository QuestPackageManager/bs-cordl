#pragma once
// IWYU pragma private; include "GlobalNamespace\IncDecColorController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IncDecColorController)
namespace GlobalNamespace {
class ColorStepValuePicker;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecColorController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IncDecColorController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IncDecColorController
class CORDL_TYPE IncDecColorController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stepValuePicker, put = __cordl_internal_set__stepValuePicker)) ::UnityW<::GlobalNamespace::ColorStepValuePicker> _stepValuePicker;

  __declspec(property(put = set_color)) ::UnityEngine::Color color;

  __declspec(property(put = set_enableDec)) bool enableDec;

  __declspec(property(put = set_enableInc)) bool enableInc;

  /// @brief Method Awake, addr 0x5a2f3c0, size 0x11c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method DecButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::IncDecColorController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5a2f4dc, size 0x16c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::ColorStepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::ColorStepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::ColorStepValuePicker> value);

  /// @brief Method .ctor, addr 0x5a2f648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_color, addr 0x5a2f394, size 0x2c, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_enableDec, addr 0x5a2f344, size 0x28, virtual false, abstract: false, final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc, addr 0x5a2f36c, size 0x28, virtual false, abstract: false, final false
  inline void set_enableInc(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncDecColorController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncDecColorController(IncDecColorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncDecColorController(IncDecColorController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23338 };

  /// @brief Field _stepValuePicker, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorStepValuePicker> ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IncDecColorController, ____stepValuePicker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IncDecColorController) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace

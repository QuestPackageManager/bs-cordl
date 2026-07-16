#pragma once
// IWYU pragma private; include "GlobalNamespace/IncDecSettingsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IncDecSettingsController)
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecSettingsController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IncDecSettingsController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IncDecSettingsController
class CORDL_TYPE IncDecSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stepValuePicker, put = __cordl_internal_set__stepValuePicker)) ::UnityW<::GlobalNamespace::StepValuePicker> _stepValuePicker;

  __declspec(property(put = set_enableDec)) bool enableDec;

  __declspec(property(put = set_enableInc)) bool enableInc;

  __declspec(property(put = set_text)) ::StringW text;

  /// @brief Method Awake, addr 0x5a2d474, size 0x11c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method DecButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::IncDecSettingsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5a2d6e8, size 0x16c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x5a2d9ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_enableDec, addr 0x5a2d3a0, size 0x28, virtual false, abstract: false, final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc, addr 0x5a2d3e4, size 0x28, virtual false, abstract: false, final false
  inline void set_enableInc(bool value);

  /// @brief Method set_text, addr 0x5a2d428, size 0x2c, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncDecSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncDecSettingsController(IncDecSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncDecSettingsController(IncDecSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23287 };

  /// @brief Field _stepValuePicker, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IncDecSettingsController, ____stepValuePicker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IncDecSettingsController) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace

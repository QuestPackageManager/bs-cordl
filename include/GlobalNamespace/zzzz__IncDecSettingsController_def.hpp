#pragma once
// IWYU pragma private; include "GlobalNamespace/IncDecSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IncDecSettingsController)
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncDecSettingsController);
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

  /// @brief Method Awake, addr 0x3c350fc, size 0xb0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method DecButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::IncDecSettingsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c352e4, size 0xfc, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x3c35518, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_enableDec, addr 0x3c3501c, size 0x28, virtual false, abstract: false, final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc, addr 0x3c35064, size 0x28, virtual false, abstract: false, final false
  inline void set_enableInc(bool value);

  /// @brief Method set_text, addr 0x3c350ac, size 0x2c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18969 };

  /// @brief Field _stepValuePicker, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IncDecSettingsController, ____stepValuePicker) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecSettingsController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");

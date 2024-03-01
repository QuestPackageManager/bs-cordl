#pragma once
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
// Type: ::IncDecSettingsController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IncDecSettingsController*
class CORDL_TYPE IncDecSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stepValuePicker, put = __cordl_internal_set__stepValuePicker))::UnityW<::GlobalNamespace::StepValuePicker> _stepValuePicker;

  __declspec(property(put = set_enableDec)) bool enableDec;

  __declspec(property(put = set_enableInc)) bool enableInc;

  __declspec(property(put = set_text))::StringW text;

  /// @brief Method Awake, addr 0x24d2630, size 0xb8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method DecButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::IncDecSettingsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24d2820, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& __cordl_internal_get__stepValuePicker() const;

  constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& __cordl_internal_get__stepValuePicker();

  constexpr void __cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value);

  /// @brief Method .ctor, addr 0x24d2a5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_enableDec, addr 0x24d2550, size 0x28, virtual false, abstract: false, final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc, addr 0x24d2598, size 0x28, virtual false, abstract: false, final false
  inline void set_enableInc(bool value);

  /// @brief Method set_text, addr 0x24d25e0, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief Field _stepValuePicker, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StepValuePicker> ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecSettingsController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IncDecSettingsController, ____stepValuePicker) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");

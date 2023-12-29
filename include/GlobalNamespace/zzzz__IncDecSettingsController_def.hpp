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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5688))
// CS Name: ::IncDecSettingsController*
class CORDL_TYPE IncDecSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x18, size 0x8
  __declspec(property(get = __get__stepValuePicker, put = __set__stepValuePicker))::GlobalNamespace::StepValuePicker* _stepValuePicker;

  __declspec(property(put = set_enableDec)) bool enableDec;

  __declspec(property(put = set_enableInc)) bool enableInc;

  __declspec(property(put = set_text))::StringW text;

  constexpr ::GlobalNamespace::StepValuePicker*& __get__stepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> const& __get__stepValuePicker() const;

  constexpr void __set__stepValuePicker(::GlobalNamespace::StepValuePicker* value);

  /// @brief Method set_enableDec addr 0x216578c size 0x20 virtual false final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc addr 0x21657ac size 0x20 virtual false final false
  inline void set_enableInc(bool value);

  /// @brief Method set_text addr 0x21657cc size 0x1c virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method Awake addr 0x21657e8 size 0xc0 virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21658a8 size 0x10c virtual false final false
  inline void OnDestroy();

  /// @brief Method IncButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void IncButtonPressed();

  /// @brief Method DecButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DecButtonPressed();

  static inline ::GlobalNamespace::IncDecSettingsController* New_ctor();

  /// @brief Method .ctor addr 0x21659b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncDecSettingsController(IncDecSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncDecSettingsController(IncDecSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncDecSettingsController();

public:
  /// @brief Field _stepValuePicker, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StepValuePicker* ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecSettingsController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IncDecSettingsController, ____stepValuePicker) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");

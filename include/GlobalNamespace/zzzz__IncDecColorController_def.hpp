#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IncDecColorController)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorStepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecColorController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncDecColorController);
// Type: ::IncDecColorController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16146))
// CS Name: ::IncDecColorController*
class CORDL_TYPE IncDecColorController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _stepValuePicker, offset 0x18, size 0x8
  __declspec(property(get = __get__stepValuePicker, put = __set__stepValuePicker))::GlobalNamespace::ColorStepValuePicker* _stepValuePicker;

  __declspec(property(put = set_enableDec)) bool enableDec;

  __declspec(property(put = set_enableInc)) bool enableInc;

  __declspec(property(put = set_color))::UnityEngine::Color color;

  constexpr ::GlobalNamespace::ColorStepValuePicker*& __get__stepValuePicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorStepValuePicker*> const& __get__stepValuePicker() const;

  constexpr void __set__stepValuePicker(::GlobalNamespace::ColorStepValuePicker* value);

  /// @brief Method set_enableDec, addr 0x23e47b8, size 0x28, virtual false, abstract: false, final false
  inline void set_enableDec(bool value);

  /// @brief Method set_enableInc, addr 0x23e47e0, size 0x28, virtual false, abstract: false, final false
  inline void set_enableInc(bool value);

  /// @brief Method set_color, addr 0x23e4808, size 0x2c, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method Awake, addr 0x23e4834, size 0xb8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x23e48ec, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IncButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void IncButtonPressed();

  /// @brief Method DecButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DecButtonPressed();

  static inline ::GlobalNamespace::IncDecColorController* New_ctor();

  /// @brief Method .ctor, addr 0x23e49f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncDecColorController(IncDecColorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncDecColorController(IncDecColorController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncDecColorController();

public:
  /// @brief Field _stepValuePicker, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorStepValuePicker* ____stepValuePicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecColorController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IncDecColorController, ____stepValuePicker) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecColorController*, "", "IncDecColorController");

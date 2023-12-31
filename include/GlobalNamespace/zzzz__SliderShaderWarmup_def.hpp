#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SliderShaderWarmup)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class SliderMeshController;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderShaderWarmup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderShaderWarmup);
// Type: ::SliderShaderWarmup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4827))
// CS Name: ::SliderShaderWarmup*
class CORDL_TYPE SliderShaderWarmup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sliderMeshController, offset 0x18, size 0x8
  __declspec(property(get = __get__sliderMeshController, put = __set__sliderMeshController))::GlobalNamespace::SliderMeshController* _sliderMeshController;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  constexpr ::GlobalNamespace::SliderMeshController*& __get__sliderMeshController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshController*> const& __get__sliderMeshController() const;

  constexpr void __set__sliderMeshController(::GlobalNamespace::SliderMeshController* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  /// @brief Method Start, addr 0x23959c8, size 0x1d4, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::SliderShaderWarmup* New_ctor();

  /// @brief Method .ctor, addr 0x2395b9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderShaderWarmup(SliderShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderShaderWarmup(SliderShaderWarmup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderShaderWarmup();

public:
  /// @brief Field _sliderMeshController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SliderMeshController* ____sliderMeshController;

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderShaderWarmup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderShaderWarmup, ____sliderMeshController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderShaderWarmup, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderShaderWarmup*, "", "SliderShaderWarmup");

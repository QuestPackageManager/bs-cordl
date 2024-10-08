#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderShaderWarmup.hpp"
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderShaderWarmup*
class CORDL_TYPE SliderShaderWarmup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _sliderMeshController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderMeshController, put = __cordl_internal_set__sliderMeshController)) ::UnityW<::GlobalNamespace::SliderMeshController> _sliderMeshController;

  static inline ::GlobalNamespace::SliderShaderWarmup* New_ctor();

  /// @brief Method Start, addr 0x3b027e4, size 0x1d4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& __cordl_internal_get__sliderMeshController() const;

  constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& __cordl_internal_get__sliderMeshController();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__sliderMeshController(::UnityW<::GlobalNamespace::SliderMeshController> value);

  /// @brief Method .ctor, addr 0x3b029b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderShaderWarmup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderShaderWarmup(SliderShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderShaderWarmup(SliderShaderWarmup const&) = delete;

  /// @brief Field _sliderMeshController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderMeshController> ____sliderMeshController;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4165 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderShaderWarmup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderShaderWarmup, ____sliderMeshController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderShaderWarmup, ____materialPropertyBlockController) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderShaderWarmup*, "", "SliderShaderWarmup");

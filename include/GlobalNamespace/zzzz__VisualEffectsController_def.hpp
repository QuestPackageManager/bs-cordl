#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisualEffectsController)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualEffectsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VisualEffectsController);
// Type: ::VisualEffectsController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15430))
// CS Name: ::VisualEffectsController*
class CORDL_TYPE VisualEffectsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _depthTextureEnabled, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__depthTextureEnabled, put = __cordl_internal_set__depthTextureEnabled))::UnityW<::GlobalNamespace::BoolSO> _depthTextureEnabled;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__depthTextureEnabled();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__depthTextureEnabled() const;

  constexpr void __cordl_internal_set__depthTextureEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method Awake, addr 0x2810e78, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2810fac, size 0xe8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPreRender, addr 0x2811094, size 0x90, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method HandleDepthTextureEnabledDidChange, addr 0x2810f4c, size 0x60, virtual false, abstract: false, final false
  inline void HandleDepthTextureEnabledDidChange();

  /// @brief Method SetShaderKeyword, addr 0x2811124, size 0x14, virtual false, abstract: false, final false
  inline void SetShaderKeyword(::StringW keyword, bool value);

  static inline ::GlobalNamespace::VisualEffectsController* New_ctor();

  /// @brief Method .ctor, addr 0x2811138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectsController(VisualEffectsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectsController(VisualEffectsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectsController();

public:
  /// @brief Field _depthTextureEnabled, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____depthTextureEnabled;

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field kDepthTextureEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kDepthTextureEnabledKeyword{ u"DEPTH_TEXTURE_ENABLED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VisualEffectsController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectsController, ____depthTextureEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectsController, ____camera) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VisualEffectsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualEffectsController*, "", "VisualEffectsController");

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15343))
// CS Name: ::VisualEffectsController*
class CORDL_TYPE VisualEffectsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _depthTextureEnabled, offset 0x18, size 0x8
  __declspec(property(get = __get__depthTextureEnabled, put = __set__depthTextureEnabled))::GlobalNamespace::BoolSO* _depthTextureEnabled;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  constexpr ::GlobalNamespace::BoolSO*& __get__depthTextureEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__depthTextureEnabled() const;

  constexpr void __set__depthTextureEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  /// @brief Method Awake addr 0x26916dc size 0xd4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2691810 size 0xe8 virtual false final false
  inline void OnDestroy();

  /// @brief Method OnPreRender addr 0x26918f8 size 0x90 virtual false final false
  inline void OnPreRender();

  /// @brief Method HandleDepthTextureEnabledDidChange addr 0x26917b0 size 0x60 virtual false final false
  inline void HandleDepthTextureEnabledDidChange();

  /// @brief Method SetShaderKeyword addr 0x2691988 size 0x14 virtual false final false
  inline void SetShaderKeyword(::StringW keyword, bool value);

  static inline ::GlobalNamespace::VisualEffectsController* New_ctor();

  /// @brief Method .ctor addr 0x269199c size 0x8 virtual false final false
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
  ::GlobalNamespace::BoolSO* ____depthTextureEnabled;

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

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

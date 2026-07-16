#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MirrorCamera)
namespace GlobalNamespace {
class BloomPrePass;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorCamera*, "", "MirrorCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorCamera
class CORDL_TYPE MirrorCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomPrePass, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePass, put = __cordl_internal_set__bloomPrePass)) ::UnityW<::GlobalNamespace::BloomPrePass> _bloomPrePass;

  /// @brief Field _mainCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::UnityEngine::Camera> _mainCamera;

  /// @brief Field _mirrorCamera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorCamera, put = __cordl_internal_set__mirrorCamera)) ::UnityW<::UnityEngine::Camera> _mirrorCamera;

  static inline ::GlobalNamespace::MirrorCamera* New_ctor();

  /// @brief Method SetMainCamera, addr 0x5f44944, size 0x220, virtual false, abstract: false, final false
  inline void SetMainCamera(::UnityEngine::Camera* camera);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePass> const& __cordl_internal_get__bloomPrePass() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePass>& __cordl_internal_get__bloomPrePass();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mainCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mirrorCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mirrorCamera();

  constexpr void __cordl_internal_set__bloomPrePass(::UnityW<::GlobalNamespace::BloomPrePass> value);

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__mirrorCamera(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method .ctor, addr 0x5f44b64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorCamera(MirrorCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorCamera(MirrorCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20897 };

  /// @brief Field _mirrorCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____mirrorCamera;

  /// @brief Field _mainCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____mainCamera;

  /// @brief Field _bloomPrePass, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePass> ____bloomPrePass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorCamera, ____mirrorCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ____mainCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorCamera, ____bloomPrePass) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorCamera) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

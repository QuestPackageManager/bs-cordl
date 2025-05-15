#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothCamera)
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothCamera);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothCamera
class CORDL_TYPE SmoothCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _mainCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  /// @brief Field _positionSmooth, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__positionSmooth, put = __cordl_internal_set__positionSmooth)) float_t _positionSmooth;

  /// @brief Field _rotationSmooth, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationSmooth, put = __cordl_internal_set__rotationSmooth)) float_t _rotationSmooth;

  /// @brief Field _thirdPersonEnabled, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__thirdPersonEnabled, put = __cordl_internal_set__thirdPersonEnabled)) bool _thirdPersonEnabled;

  /// @brief Field _thirdPersonEulerAngles, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__thirdPersonEulerAngles, put = __cordl_internal_set__thirdPersonEulerAngles)) ::UnityEngine::Vector3 _thirdPersonEulerAngles;

  /// @brief Field _thirdPersonPosition, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__thirdPersonPosition, put = __cordl_internal_set__thirdPersonPosition)) ::UnityEngine::Vector3 _thirdPersonPosition;

  /// @brief Method Init, addr 0x3befa18, size 0x1a8, virtual false, abstract: false, final false
  inline void Init(float_t fieldOfView, float_t positionSmooth, float_t rotationSmooth, bool thirdPersonEnabled, ::UnityEngine::Vector3 thirdPersonPosition,
                   ::UnityEngine::Vector3 thirdPersonEulerAngles);

  /// @brief Method LateUpdate, addr 0x3befc00, size 0x1f4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SmoothCamera* New_ctor();

  /// @brief Method OnDisable, addr 0x3befbe0, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3befbc0, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::GlobalNamespace::MainCamera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera>& __cordl_internal_get__mainCamera();

  constexpr float_t const& __cordl_internal_get__positionSmooth() const;

  constexpr float_t& __cordl_internal_get__positionSmooth();

  constexpr float_t const& __cordl_internal_get__rotationSmooth() const;

  constexpr float_t& __cordl_internal_get__rotationSmooth();

  constexpr bool const& __cordl_internal_get__thirdPersonEnabled() const;

  constexpr bool& __cordl_internal_get__thirdPersonEnabled();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__thirdPersonEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__thirdPersonEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__thirdPersonPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__thirdPersonPosition();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value);

  constexpr void __cordl_internal_set__positionSmooth(float_t value);

  constexpr void __cordl_internal_set__rotationSmooth(float_t value);

  constexpr void __cordl_internal_set__thirdPersonEnabled(bool value);

  constexpr void __cordl_internal_set__thirdPersonEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__thirdPersonPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3befdf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCamera(SmoothCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCamera(SmoothCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4692 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _mainCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  /// @brief Field _thirdPersonPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____thirdPersonPosition;

  /// @brief Field _thirdPersonEulerAngles, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____thirdPersonEulerAngles;

  /// @brief Field _thirdPersonEnabled, offset: 0x48, size: 0x1, def value: None
  bool ____thirdPersonEnabled;

  /// @brief Field _rotationSmooth, offset: 0x4c, size: 0x4, def value: None
  float_t ____rotationSmooth;

  /// @brief Field _positionSmooth, offset: 0x50, size: 0x4, def value: None
  float_t ____positionSmooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____mainCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____thirdPersonPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____thirdPersonEulerAngles) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____thirdPersonEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____rotationSmooth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCamera, ____positionSmooth) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCamera, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCamera*, "", "SmoothCamera");

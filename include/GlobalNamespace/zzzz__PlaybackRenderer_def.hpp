#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlaybackRenderer)
namespace GlobalNamespace {
class __PlaybackRenderer__PlaybackScreenshot;
}
namespace GlobalNamespace {
struct __PlaybackRenderer__PlaybackScreenshot__Type;
}
namespace GlobalNamespace {
class __PosesRecordingData__ExternalCameraCalibration;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlaybackRenderer__PlaybackScreenshot__Type;
}
namespace GlobalNamespace {
class PlaybackRenderer;
}
namespace GlobalNamespace {
class __PlaybackRenderer__PlaybackScreenshot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type);
MARK_REF_PTR_T(::GlobalNamespace::PlaybackRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlaybackRenderer::PlaybackScreenshot::Type
struct CORDL_TYPE __PlaybackRenderer__PlaybackScreenshot__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped
  enum struct ____PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped : int32_t {
    __E_Foreground = static_cast<int32_t>(0x1),
    __E_Background = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped() const noexcept {
    return static_cast<____PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlaybackRenderer__PlaybackScreenshot__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlaybackRenderer__PlaybackScreenshot__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Background value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const Background;

  /// @brief Field Foreground value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const Foreground;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackScreenshot
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlaybackRenderer::PlaybackScreenshot*
class CORDL_TYPE __PlaybackRenderer__PlaybackScreenshot : public ::System::Object {
public:
  // Declarations
  using Type = ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type;

  /// @brief Field _backgroundColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__backgroundColor, put = __cordl_internal_set__backgroundColor))::UnityEngine::Color _backgroundColor;

  /// @brief Field _layerMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__layerMask, put = __cordl_internal_set__layerMask))::UnityEngine::LayerMask _layerMask;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _path, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__path, put = __cordl_internal_set__path))::StringW _path;

  /// @brief Field _texture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__texture, put = __cordl_internal_set__texture))::UnityW<::UnityEngine::RenderTexture> _texture;

  /// @brief Field _type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type _type;

  __declspec(property(get = get_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_layerMask))::UnityEngine::LayerMask layerMask;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_path, put = set_path))::StringW path;

  __declspec(property(get = get_texture))::UnityW<::UnityEngine::RenderTexture> texture;

  __declspec(property(get = get_type))::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type;

  /// @brief Method CreateTexture, addr 0x258cca0, size 0xc4, virtual false, abstract: false, final false
  inline void CreateTexture(int32_t width, int32_t height);

  static inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask,
                                                                                    ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type, ::UnityEngine::Color backgroundColor);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__backgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__backgroundColor();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__path() const;

  constexpr ::StringW& __cordl_internal_get__path();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__texture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__texture();

  constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const& __cordl_internal_get__type() const;

  constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__backgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__path(::StringW value);

  constexpr void __cordl_internal_set__texture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__type(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type value);

  /// @brief Method .ctor, addr 0x258d50c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type, ::UnityEngine::Color backgroundColor);

  /// @brief Method get_backgroundColor, addr 0x258d500, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_layerMask, addr 0x258d4e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_layerMask();

  /// @brief Method get_name, addr 0x258d4d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_path, addr 0x258d4f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_texture, addr 0x258d4d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_texture();

  /// @brief Method get_type, addr 0x258d4e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type get_type();

  /// @brief Method set_path, addr 0x258d4f8, size 0x8, virtual false, abstract: false, final false
  inline void set_path(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlaybackRenderer__PlaybackScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlaybackRenderer__PlaybackScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlaybackRenderer__PlaybackScreenshot(__PlaybackRenderer__PlaybackScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlaybackRenderer__PlaybackScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlaybackRenderer__PlaybackScreenshot(__PlaybackRenderer__PlaybackScreenshot const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _layerMask, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layerMask;

  /// @brief Field _type, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type ____type;

  /// @brief Field _texture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____texture;

  /// @brief Field _path, offset: 0x28, size: 0x8, def value: None
  ::StringW ____path;

  /// @brief Field _backgroundColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____backgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____layerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____texture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, ____backgroundColor) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackRenderer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlaybackRenderer*
class CORDL_TYPE PlaybackRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlaybackScreenshot = ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot;

  /// @brief Field _camera, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cameraCalibration, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraCalibration,
                      put = __cordl_internal_set__cameraCalibration))::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* _cameraCalibration;

  /// @brief Field _clearBackgroundShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__clearBackgroundShader, put = __cordl_internal_set__clearBackgroundShader))::UnityW<::UnityEngine::Shader> _clearBackgroundShader;

  /// @brief Field _clipMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__clipMaterial, put = __cordl_internal_set__clipMaterial))::UnityW<::UnityEngine::Material> _clipMaterial;

  /// @brief Field _clipQuad, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__clipQuad, put = __cordl_internal_set__clipQuad))::UnityW<::UnityEngine::GameObject> _clipQuad;

  /// @brief Field _hmd, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hmd, put = __cordl_internal_set__hmd))::UnityW<::UnityEngine::Transform> _hmd;

  /// @brief Field _isSetup, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isSetup, put = __cordl_internal_set__isSetup)) bool _isSetup;

  /// @brief Field _screenshots, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__screenshots,
      put = __cordl_internal_set__screenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> _screenshots;

  __declspec(property(get = get_screenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> screenshots;

  /// @brief Field texturesReadyEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_texturesReadyEvent, put = __cordl_internal_set_texturesReadyEvent))::System::Action* texturesReadyEvent;

  /// @brief Method CreateClipQuad, addr 0x258c9ac, size 0x280, virtual false, abstract: false, final false
  inline void CreateClipQuad();

  /// @brief Method CreateTextures, addr 0x258cc2c, size 0x74, virtual false, abstract: false, final false
  inline void CreateTextures(int32_t width, int32_t height);

  /// @brief Method GetDistanceToHMD, addr 0x258cd64, size 0x26c, virtual false, abstract: false, final false
  inline float_t GetDistanceToHMD();

  /// @brief Method InitCamera, addr 0x258c89c, size 0x110, virtual false, abstract: false, final false
  inline void InitCamera(::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration);

  /// @brief Method LateUpdate, addr 0x258d424, size 0xa4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PlaybackRenderer* New_ctor();

  /// @brief Method OrientClipQuad, addr 0x258cfd0, size 0x140, virtual false, abstract: false, final false
  inline void OrientClipQuad();

  /// @brief Method RenderBackground, addr 0x258d2d0, size 0x154, virtual false, abstract: false, final false
  inline void RenderBackground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot);

  /// @brief Method RenderForeground, addr 0x258d110, size 0x1c0, virtual false, abstract: false, final false
  inline void RenderForeground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot);

  /// @brief Method Setup, addr 0x258be24, size 0x88, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Camera* hmdCamera, ::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration, int32_t textureWidth,
                    int32_t textureHeight, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> screenshots);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*& __cordl_internal_get__cameraCalibration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> const& __cordl_internal_get__cameraCalibration() const;

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__clearBackgroundShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__clearBackgroundShader();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__clipMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__clipMaterial();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clipQuad() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clipQuad();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hmd() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hmd();

  constexpr bool const& __cordl_internal_get__isSetup() const;

  constexpr bool& __cordl_internal_get__isSetup();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& __cordl_internal_get__screenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __cordl_internal_get__screenshots();

  constexpr ::System::Action*& __cordl_internal_get_texturesReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_texturesReadyEvent() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* value);

  constexpr void __cordl_internal_set__clearBackgroundShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__clipMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__clipQuad(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__isSetup(bool value);

  constexpr void __cordl_internal_set__screenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set_texturesReadyEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x258d4c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_texturesReadyEvent, addr 0x258c75c, size 0x9c, virtual false, abstract: false, final false
  inline void add_texturesReadyEvent(::System::Action* value);

  /// @brief Method get_screenshots, addr 0x258c894, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> get_screenshots();

  /// @brief Method remove_texturesReadyEvent, addr 0x258c7f8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_texturesReadyEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackRenderer(PlaybackRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackRenderer(PlaybackRenderer const&) = delete;

  /// @brief Field texturesReadyEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___texturesReadyEvent;

  /// @brief Field _clearBackgroundShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____clearBackgroundShader;

  /// @brief Field _isSetup, offset: 0x28, size: 0x1, def value: None
  bool ____isSetup;

  /// @brief Field _hmd, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____hmd;

  /// @brief Field _camera, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _cameraCalibration, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* ____cameraCalibration;

  /// @brief Field _clipQuad, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clipQuad;

  /// @brief Field _clipMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____clipMaterial;

  /// @brief Field _screenshots, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> ____screenshots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackRenderer, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ___texturesReadyEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____clearBackgroundShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____isSetup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____hmd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____camera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____cameraCalibration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____clipQuad) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____clipMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRenderer, ____screenshots) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, "", "PlaybackRenderer/PlaybackScreenshot/Type");
NEED_NO_BOX(::GlobalNamespace::PlaybackRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer*, "", "PlaybackRenderer");
NEED_NO_BOX(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, "", "PlaybackRenderer/PlaybackScreenshot");

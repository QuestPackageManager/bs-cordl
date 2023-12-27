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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Shader;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class __PosesRecordingData__ExternalCameraCalibration;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __PlaybackRenderer__PlaybackScreenshot;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct __PlaybackRenderer__PlaybackScreenshot__Type;
}
namespace UnityEngine {
struct LayerMask;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5923))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlaybackRenderer__PlaybackScreenshot__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlaybackRenderer__PlaybackScreenshot__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Foreground value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const Foreground;

  /// @brief Field Background value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const Background;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackScreenshot
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(5923)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5924)) CS Name: ::PlaybackRenderer::PlaybackScreenshot*
class CORDL_TYPE __PlaybackRenderer__PlaybackScreenshot : public ::System::Object {
public:
  // Declarations
  using Type = ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _layerMask, offset 0x18, size 0x4
  __declspec(property(get = __get__layerMask, put = __set__layerMask))::UnityEngine::LayerMask _layerMask;

  /// @brief Field _type, offset 0x1c, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type _type;

  /// @brief Field _texture, offset 0x20, size 0x8
  __declspec(property(get = __get__texture, put = __set__texture))::UnityEngine::RenderTexture* _texture;

  /// @brief Field _path, offset 0x28, size 0x8
  __declspec(property(get = __get__path, put = __set__path))::StringW _path;

  /// @brief Field _backgroundColor, offset 0x30, size 0x10
  __declspec(property(get = __get__backgroundColor, put = __set__backgroundColor))::UnityEngine::Color _backgroundColor;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_texture))::UnityEngine::RenderTexture* texture;

  __declspec(property(get = get_layerMask))::UnityEngine::LayerMask layerMask;

  __declspec(property(get = get_type))::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type;

  __declspec(property(get = get_path, put = set_path))::StringW path;

  __declspec(property(get = get_backgroundColor))::UnityEngine::Color backgroundColor;

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::UnityEngine::LayerMask& __get__layerMask();

  constexpr ::UnityEngine::LayerMask const& __get__layerMask() const;

  constexpr void __set__layerMask(::UnityEngine::LayerMask value);

  constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type& __get__type();

  constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const& __get__type() const;

  constexpr void __set__type(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type value);

  constexpr ::UnityEngine::RenderTexture*& __get__texture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__texture() const;

  constexpr void __set__texture(::UnityEngine::RenderTexture* value);

  constexpr ::StringW& __get__path();

  constexpr ::StringW const& __get__path() const;

  constexpr void __set__path(::StringW value);

  constexpr ::UnityEngine::Color& __get__backgroundColor();

  constexpr ::UnityEngine::Color const& __get__backgroundColor() const;

  constexpr void __set__backgroundColor(::UnityEngine::Color value);

  /// @brief Method get_name addr 0x23012b4 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method get_texture addr 0x23012bc size 0x8 virtual false final false
  inline ::UnityEngine::RenderTexture* get_texture();

  /// @brief Method get_layerMask addr 0x23012c4 size 0x8 virtual false final false
  inline ::UnityEngine::LayerMask get_layerMask();

  /// @brief Method get_type addr 0x23012cc size 0x8 virtual false final false
  inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type get_type();

  /// @brief Method get_path addr 0x23012d4 size 0x8 virtual false final false
  inline ::StringW get_path();

  /// @brief Method set_path addr 0x23012dc size 0x8 virtual false final false
  inline void set_path(::StringW value);

  /// @brief Method get_backgroundColor addr 0x23012e4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_backgroundColor();

  static inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask,
                                                                                    ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type, ::UnityEngine::Color backgroundColor);

  /// @brief Method .ctor addr 0x23012f0 size 0x68 virtual false final false
  inline void _ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type, ::UnityEngine::Color backgroundColor);

  /// @brief Method CreateTexture addr 0x2300a84 size 0xc4 virtual false final false
  inline void CreateTexture(int32_t width, int32_t height);

  // Ctor Parameters [CppParam { name: "", ty: "__PlaybackRenderer__PlaybackScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlaybackRenderer__PlaybackScreenshot(__PlaybackRenderer__PlaybackScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlaybackRenderer__PlaybackScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlaybackRenderer__PlaybackScreenshot(__PlaybackRenderer__PlaybackScreenshot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlaybackRenderer__PlaybackScreenshot();

public:
  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _layerMask, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layerMask;

  /// @brief Field _type, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type ____type;

  /// @brief Field _texture, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____texture;

  /// @brief Field _path, offset: 0x28, size: 0x8, def value: None
  ::StringW ____path;

  /// @brief Field _backgroundColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____backgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlaybackRenderer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5925))
// CS Name: ::PlaybackRenderer*
class CORDL_TYPE PlaybackRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlaybackScreenshot = ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot;

  /// @brief Field texturesReadyEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_texturesReadyEvent, put = __set_texturesReadyEvent))::System::Action* texturesReadyEvent;

  /// @brief Field _clearBackgroundShader, offset 0x20, size 0x8
  __declspec(property(get = __get__clearBackgroundShader, put = __set__clearBackgroundShader))::UnityEngine::Shader* _clearBackgroundShader;

  /// @brief Field _isSetup, offset 0x28, size 0x1
  __declspec(property(get = __get__isSetup, put = __set__isSetup)) bool _isSetup;

  /// @brief Field _hmd, offset 0x30, size 0x8
  __declspec(property(get = __get__hmd, put = __set__hmd))::UnityEngine::Transform* _hmd;

  /// @brief Field _camera, offset 0x38, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _cameraCalibration, offset 0x40, size 0x8
  __declspec(property(get = __get__cameraCalibration, put = __set__cameraCalibration))::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* _cameraCalibration;

  /// @brief Field _clipQuad, offset 0x48, size 0x8
  __declspec(property(get = __get__clipQuad, put = __set__clipQuad))::UnityEngine::GameObject* _clipQuad;

  /// @brief Field _clipMaterial, offset 0x50, size 0x8
  __declspec(property(get = __get__clipMaterial, put = __set__clipMaterial))::UnityEngine::Material* _clipMaterial;

  /// @brief Field _screenshots, offset 0x58, size 0x8
  __declspec(property(get = __get__screenshots,
                      put = __set__screenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> _screenshots;

  __declspec(property(get = get_screenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> screenshots;

  constexpr ::System::Action*& __get_texturesReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_texturesReadyEvent() const;

  constexpr void __set_texturesReadyEvent(::System::Action* value);

  constexpr ::UnityEngine::Shader*& __get__clearBackgroundShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__clearBackgroundShader() const;

  constexpr void __set__clearBackgroundShader(::UnityEngine::Shader* value);

  constexpr bool& __get__isSetup();

  constexpr bool const& __get__isSetup() const;

  constexpr void __set__isSetup(bool value);

  constexpr ::UnityEngine::Transform*& __get__hmd();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__hmd() const;

  constexpr void __set__hmd(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*& __get__cameraCalibration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> const& __get__cameraCalibration() const;

  constexpr void __set__cameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* value);

  constexpr ::UnityEngine::GameObject*& __get__clipQuad();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__clipQuad() const;

  constexpr void __set__clipQuad(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Material*& __get__clipMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__clipMaterial() const;

  constexpr void __set__clipMaterial(::UnityEngine::Material* value);

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __get__screenshots();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& __get__screenshots() const;

  constexpr void __set__screenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  /// @brief Method add_texturesReadyEvent addr 0x2300540 size 0x9c virtual false final false
  inline void add_texturesReadyEvent(::System::Action* value);

  /// @brief Method remove_texturesReadyEvent addr 0x23005dc size 0x9c virtual false final false
  inline void remove_texturesReadyEvent(::System::Action* value);

  /// @brief Method get_screenshots addr 0x2300678 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> get_screenshots();

  /// @brief Method Setup addr 0x22ffc08 size 0x88 virtual false final false
  inline void Setup(::UnityEngine::Camera* hmdCamera, ::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration, int32_t textureWidth,
                    int32_t textureHeight, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> screenshots);

  /// @brief Method CreateClipQuad addr 0x2300790 size 0x280 virtual false final false
  inline void CreateClipQuad();

  /// @brief Method InitCamera addr 0x2300680 size 0x110 virtual false final false
  inline void InitCamera(::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration);

  /// @brief Method CreateTextures addr 0x2300a10 size 0x74 virtual false final false
  inline void CreateTextures(int32_t width, int32_t height);

  /// @brief Method GetDistanceToHMD addr 0x2300b48 size 0x26c virtual false final false
  inline float_t GetDistanceToHMD();

  /// @brief Method OrientClipQuad addr 0x2300db4 size 0x140 virtual false final false
  inline void OrientClipQuad();

  /// @brief Method RenderForeground addr 0x2300ef4 size 0x1c0 virtual false final false
  inline void RenderForeground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot);

  /// @brief Method RenderBackground addr 0x23010b4 size 0x154 virtual false final false
  inline void RenderBackground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot);

  /// @brief Method LateUpdate addr 0x2301208 size 0xa4 virtual false final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PlaybackRenderer* New_ctor();

  /// @brief Method .ctor addr 0x23012ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackRenderer(PlaybackRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackRenderer(PlaybackRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackRenderer();

public:
  /// @brief Field texturesReadyEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___texturesReadyEvent;

  /// @brief Field _clearBackgroundShader, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Shader* ____clearBackgroundShader;

  /// @brief Field _isSetup, offset: 0x28, size: 0x1, def value: None
  bool ____isSetup;

  /// @brief Field _hmd, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____hmd;

  /// @brief Field _camera, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _cameraCalibration, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* ____cameraCalibration;

  /// @brief Field _clipQuad, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____clipQuad;

  /// @brief Field _clipMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Material* ____clipMaterial;

  /// @brief Field _screenshots, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> ____screenshots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackRenderer, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, "", "PlaybackRenderer/PlaybackScreenshot/Type");
NEED_NO_BOX(::GlobalNamespace::PlaybackRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer*, "", "PlaybackRenderer");
NEED_NO_BOX(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, "", "PlaybackRenderer/PlaybackScreenshot");

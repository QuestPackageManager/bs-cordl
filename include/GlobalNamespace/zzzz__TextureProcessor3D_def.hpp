#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureProcessor3D)
namespace GlobalNamespace {
struct TextureProcessor3D_ChannelParamsChangeIntention;
}
namespace GlobalNamespace {
struct TextureProcessor3D_ChannelParams;
}
namespace GlobalNamespace {
struct TextureProcessor3D_ComputeKernel;
}
namespace GlobalNamespace {
struct TextureProcessor3D_MotionPresetChangeIntention;
}
namespace GlobalNamespace {
struct TextureProcessor3D_MotionPreset;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextureProcessor3D_ComputeKernel;
}
namespace GlobalNamespace {
class TextureProcessor3D;
}
namespace GlobalNamespace {
struct TextureProcessor3D_ChannelParams;
}
namespace GlobalNamespace {
struct TextureProcessor3D_ChannelParamsChangeIntention;
}
namespace GlobalNamespace {
struct TextureProcessor3D_MotionPreset;
}
namespace GlobalNamespace {
struct TextureProcessor3D_MotionPresetChangeIntention;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureProcessor3D_ComputeKernel);
MARK_REF_PTR_T(::GlobalNamespace::TextureProcessor3D);
MARK_VAL_T(::GlobalNamespace::TextureProcessor3D_ChannelParams);
MARK_VAL_T(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention);
MARK_VAL_T(::GlobalNamespace::TextureProcessor3D_MotionPreset);
MARK_VAL_T(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextureProcessor3D/ComputeKernel
struct CORDL_TYPE TextureProcessor3D_ComputeKernel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureProcessor3D_ComputeKernel_Unwrapped
  enum struct __TextureProcessor3D_ComputeKernel_Unwrapped : int32_t {
    __E_Constant = static_cast<int32_t>(0x0),
    __E_Texture = static_cast<int32_t>(0x1),
    __E_PlanarWave = static_cast<int32_t>(0x2),
    __E_CylindricalWave = static_cast<int32_t>(0x3),
    __E_SphericalWave = static_cast<int32_t>(0x4),
    __E_PerlinNoise3D = static_cast<int32_t>(0x5),
    __E_Ramp3D = static_cast<int32_t>(0x6),
    __E_SplitPlane = static_cast<int32_t>(0x7),
    __E_WaveRipple = static_cast<int32_t>(0x8),
    __E_RectRipple = static_cast<int32_t>(0x9),
    __E_TextureMaskMult = static_cast<int32_t>(0xa),
    __E_TextureMaskAdd = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureProcessor3D_ComputeKernel_Unwrapped() const noexcept {
    return static_cast<__TextureProcessor3D_ComputeKernel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D_ComputeKernel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureProcessor3D_ComputeKernel(int32_t value__) noexcept;

  /// @brief Field Constant value: I32(0)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const Constant;

  /// @brief Field CylindricalWave value: I32(3)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const CylindricalWave;

  /// @brief Field PerlinNoise3D value: I32(5)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const PerlinNoise3D;

  /// @brief Field PlanarWave value: I32(2)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const PlanarWave;

  /// @brief Field Ramp3D value: I32(6)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const Ramp3D;

  /// @brief Field RectRipple value: I32(9)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const RectRipple;

  /// @brief Field SphericalWave value: I32(4)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const SphericalWave;

  /// @brief Field SplitPlane value: I32(7)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const SplitPlane;

  /// @brief Field Texture value: I32(1)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const Texture;

  /// @brief Field TextureMaskAdd value: I32(11)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const TextureMaskAdd;

  /// @brief Field TextureMaskMult value: I32(10)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const TextureMaskMult;

  /// @brief Field WaveRipple value: I32(8)
  static ::GlobalNamespace::TextureProcessor3D_ComputeKernel const WaveRipple;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ComputeKernel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D_ComputeKernel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TextureProcessor3D::ComputeKernel
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextureProcessor3D/ChannelParams
struct CORDL_TYPE TextureProcessor3D_ChannelParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D_ChannelParams();

  // Ctor Parameters [CppParam { name: "_computeKernel", ty: "::GlobalNamespace::TextureProcessor3D_ComputeKernel", modifiers: "", def_value: None }, CppParam { name: "_inputTextureIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_spatialScale", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "_phase", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_param1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_param2", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "_outputOffset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TextureProcessor3D_ChannelParams(::GlobalNamespace::TextureProcessor3D_ComputeKernel _computeKernel, int32_t _inputTextureIndex, float_t _speed, float_t _spatialScale, float_t _phase,
                                             float_t _param1, float_t _param2, float_t _outputOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _computeKernel, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::TextureProcessor3D_ComputeKernel _computeKernel;

  /// @brief Field _inputTextureIndex, offset: 0x4, size: 0x4, def value: None
  int32_t _inputTextureIndex;

  /// @brief Field _speed, offset: 0x8, size: 0x4, def value: None
  float_t _speed;

  /// @brief Field _spatialScale, offset: 0xc, size: 0x4, def value: None
  float_t _spatialScale;

  /// @brief Field _phase, offset: 0x10, size: 0x4, def value: None
  float_t _phase;

  /// @brief Field _param1, offset: 0x14, size: 0x4, def value: None
  float_t _param1;

  /// @brief Field _param2, offset: 0x18, size: 0x4, def value: None
  float_t _param2;

  /// @brief Field _outputOffset, offset: 0x1c, size: 0x4, def value: None
  float_t _outputOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _computeKernel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _inputTextureIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _speed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _spatialScale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _phase) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _param1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _param2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParams, _outputOffset) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D_ChannelParams, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TextureProcessor3D::ChannelParams
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextureProcessor3D/MotionPreset
struct CORDL_TYPE TextureProcessor3D_MotionPreset {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D_MotionPreset();

  // Ctor Parameters [CppParam { name: "channelA", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: None }, CppParam { name: "channelB", ty:
  // "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: None }, CppParam { name: "channelC", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "",
  // def_value: None }, CppParam { name: "channelD", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: None }]
  constexpr TextureProcessor3D_MotionPreset(::GlobalNamespace::TextureProcessor3D_ChannelParams channelA, ::GlobalNamespace::TextureProcessor3D_ChannelParams channelB,
                                            ::GlobalNamespace::TextureProcessor3D_ChannelParams channelC, ::GlobalNamespace::TextureProcessor3D_ChannelParams channelD) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20818 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field channelA, offset: 0x0, size: 0x20, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParams channelA;

  /// @brief Field channelB, offset: 0x20, size: 0x20, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParams channelB;

  /// @brief Field channelC, offset: 0x40, size: 0x20, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParams channelC;

  /// @brief Field channelD, offset: 0x60, size: 0x20, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParams channelD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPreset, channelA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPreset, channelB) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPreset, channelC) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPreset, channelD) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D_MotionPreset, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Nullable`1<T>, TextureProcessor3D::ComputeKernel
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextureProcessor3D/ChannelParamsChangeIntention
struct CORDL_TYPE TextureProcessor3D_ChannelParamsChangeIntention {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D_ChannelParamsChangeIntention();

  // Ctor Parameters [CppParam { name: "_computeKernel", ty: "::System::Nullable_1<::GlobalNamespace::TextureProcessor3D_ComputeKernel>", modifiers: "", def_value: None }, CppParam { name:
  // "_inputTextureIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_speed", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None },
  // CppParam { name: "_spatialScale", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_phase", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value:
  // None }, CppParam { name: "_param1", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_param2", ty: "::System::Nullable_1<float_t>", modifiers: "",
  // def_value: None }, CppParam { name: "_outputOffset", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None }]
  constexpr TextureProcessor3D_ChannelParamsChangeIntention(::System::Nullable_1<::GlobalNamespace::TextureProcessor3D_ComputeKernel> _computeKernel, ::System::Nullable_1<int32_t> _inputTextureIndex,
                                                            ::System::Nullable_1<float_t> _speed, ::System::Nullable_1<float_t> _spatialScale, ::System::Nullable_1<float_t> _phase,
                                                            ::System::Nullable_1<float_t> _param1, ::System::Nullable_1<float_t> _param2, ::System::Nullable_1<float_t> _outputOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20819 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field _computeKernel, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::TextureProcessor3D_ComputeKernel> _computeKernel;

  /// @brief Field _inputTextureIndex, offset: 0x8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> _inputTextureIndex;

  /// @brief Field _speed, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _speed;

  /// @brief Field _spatialScale, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _spatialScale;

  /// @brief Field _phase, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _phase;

  /// @brief Field _param1, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _param1;

  /// @brief Field _param2, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _param2;

  /// @brief Field _outputOffset, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<float_t> _outputOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _computeKernel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _inputTextureIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _speed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _spatialScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _phase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _param1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _param2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, _outputOffset) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TextureProcessor3D::ChannelParamsChangeIntention
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextureProcessor3D/MotionPresetChangeIntention
struct CORDL_TYPE TextureProcessor3D_MotionPresetChangeIntention {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D_MotionPresetChangeIntention();

  // Ctor Parameters [CppParam { name: "channelA", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: None }, CppParam { name: "channelB", ty:
  // "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: None }, CppParam { name: "channelC", ty:
  // "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: None }, CppParam { name: "channelD", ty:
  // "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: None }]
  constexpr TextureProcessor3D_MotionPresetChangeIntention(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelA,
                                                           ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelB,
                                                           ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelC,
                                                           ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelD) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field channelA, offset: 0x0, size: 0x40, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelA;

  /// @brief Field channelB, offset: 0x40, size: 0x40, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelB;

  /// @brief Field channelC, offset: 0x80, size: 0x40, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelC;

  /// @brief Field channelD, offset: 0xc0, size: 0x40, def value: None
  ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, channelA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, channelB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, channelC) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, channelD) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, 0x100>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TextureProcessor3D::MotionPresetChangeIntention, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureProcessor3D
class CORDL_TYPE TextureProcessor3D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ChannelParams = ::GlobalNamespace::TextureProcessor3D_ChannelParams;

  using ChannelParamsChangeIntention = ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention;

  using ComputeKernel = ::GlobalNamespace::TextureProcessor3D_ComputeKernel;

  using MotionPreset = ::GlobalNamespace::TextureProcessor3D_MotionPreset;

  using MotionPresetChangeIntention = ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention;

  /// @brief Field _MaterialsUsingOutput, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__MaterialsUsingOutput,
                      put = __cordl_internal_set__MaterialsUsingOutput)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      _MaterialsUsingOutput;

  __declspec(property(get = get__activePreset)) ::GlobalNamespace::TextureProcessor3D_MotionPreset _activePreset;

  /// @brief Field _activePresetChangeIntention, offset 0xa4, size 0x100
  __declspec(property(get = __cordl_internal_get__activePresetChangeIntention,
                      put = __cordl_internal_set__activePresetChangeIntention)) ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention _activePresetChangeIntention;

  /// @brief Field _activePresetIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__activePresetIndex, put = __cordl_internal_set__activePresetIndex)) int32_t _activePresetIndex;

  /// @brief Field _activePresetIndexOld, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__activePresetIndexOld, put = __cordl_internal_set__activePresetIndexOld)) int32_t _activePresetIndexOld;

  /// @brief Field _animationTextureA, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__animationTextureA, put = __cordl_internal_set__animationTextureA)) ::UnityW<::UnityEngine::RenderTexture> _animationTextureA;

  /// @brief Field _animationTextureB, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__animationTextureB, put = __cordl_internal_set__animationTextureB)) ::UnityW<::UnityEngine::RenderTexture> _animationTextureB;

  /// @brief Field _animationTextureC, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__animationTextureC, put = __cordl_internal_set__animationTextureC)) ::UnityW<::UnityEngine::RenderTexture> _animationTextureC;

  /// @brief Field _animationTextureD, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__animationTextureD, put = __cordl_internal_set__animationTextureD)) ::UnityW<::UnityEngine::RenderTexture> _animationTextureD;

  /// @brief Field _animationTextureOut, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__animationTextureOut, put = __cordl_internal_set__animationTextureOut)) ::UnityW<::UnityEngine::RenderTexture> _animationTextureOut;

  /// @brief Field _columnSize, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__columnSize, put = __cordl_internal_set__columnSize)) int32_t _columnSize;

  /// @brief Field _depthSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__depthSize, put = __cordl_internal_set__depthSize)) int32_t _depthSize;

  /// @brief Field _inputTextures, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__inputTextures, put = __cordl_internal_set__inputTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      _inputTextures;

  /// @brief Field _kernelIndexMax, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__kernelIndexMax, put = __cordl_internal_set__kernelIndexMax)) int32_t _kernelIndexMax;

  /// @brief Field _kernelStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__kernelStrings, put = setStaticF__kernelStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> _kernelStrings;

  /// @brief Field _matrices, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__matrices, put = __cordl_internal_set__matrices)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> _matrices;

  /// @brief Field _numInstances, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__numInstances, put = __cordl_internal_set__numInstances)) int32_t _numInstances;

  /// @brief Field _presetArray, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__presetArray,
                      put = __cordl_internal_set__presetArray)) ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*>
      _presetArray;

  /// @brief Field _rowSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rowSize, put = __cordl_internal_set__rowSize)) int32_t _rowSize;

  /// @brief Field _testMaterialArrayCount, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__testMaterialArrayCount, put = __cordl_internal_set__testMaterialArrayCount)) int32_t _testMaterialArrayCount;

  /// @brief Field _textureArrayLength, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__textureArrayLength, put = __cordl_internal_set__textureArrayLength)) int32_t _textureArrayLength;

  /// @brief Field _textureGenCompute, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textureGenCompute, put = __cordl_internal_set__textureGenCompute)) ::UnityW<::UnityEngine::ComputeShader> _textureGenCompute;

  /// @brief Field _writeTexturesCompute, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__writeTexturesCompute, put = __cordl_internal_set__writeTexturesCompute)) ::UnityW<::UnityEngine::ComputeShader> _writeTexturesCompute;

  __declspec(property(get = get_activePresetIndex, put = set_activePresetIndex)) int32_t activePresetIndex;

  __declspec(property(get = get_columnSize, put = set_columnSize)) int32_t columnSize;

  __declspec(property(get = get_computeKernelA, put = set_computeKernelA)) ::GlobalNamespace::TextureProcessor3D_ComputeKernel computeKernelA;

  __declspec(property(get = get_computeKernelB, put = set_computeKernelB)) ::GlobalNamespace::TextureProcessor3D_ComputeKernel computeKernelB;

  __declspec(property(get = get_computeKernelC, put = set_computeKernelC)) ::GlobalNamespace::TextureProcessor3D_ComputeKernel computeKernelC;

  __declspec(property(get = get_computeKernelD, put = set_computeKernelD)) ::GlobalNamespace::TextureProcessor3D_ComputeKernel computeKernelD;

  __declspec(property(get = get_depthSize, put = set_depthSize)) int32_t depthSize;

  __declspec(property(get = get_inputTextureIndexA, put = set_inputTextureIndexA)) int32_t inputTextureIndexA;

  __declspec(property(get = get_inputTextureIndexB, put = set_inputTextureIndexB)) int32_t inputTextureIndexB;

  __declspec(property(get = get_inputTextureIndexC, put = set_inputTextureIndexC)) int32_t inputTextureIndexC;

  __declspec(property(get = get_inputTextureIndexD, put = set_inputTextureIndexD)) int32_t inputTextureIndexD;

  /// @brief Field kColumnSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kColumnSize, put = setStaticF_kColumnSize)) int32_t kColumnSize;

  /// @brief Field kDepthSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kDepthSize, put = setStaticF_kDepthSize)) int32_t kDepthSize;

  /// @brief Field kInputTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kInputTexture, put = setStaticF_kInputTexture)) int32_t kInputTexture;

  /// @brief Field kInputTextureA, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kInputTextureA, put = setStaticF_kInputTextureA)) int32_t kInputTextureA;

  /// @brief Field kInputTextureB, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kInputTextureB, put = setStaticF_kInputTextureB)) int32_t kInputTextureB;

  /// @brief Field kInputTextureC, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kInputTextureC, put = setStaticF_kInputTextureC)) int32_t kInputTextureC;

  /// @brief Field kInputTextureD, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kInputTextureD, put = setStaticF_kInputTextureD)) int32_t kInputTextureD;

  /// @brief Field kLookupTexture3D, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kLookupTexture3D, put = setStaticF_kLookupTexture3D)) int32_t kLookupTexture3D;

  /// @brief Field kOutputMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kOutputMask, put = setStaticF_kOutputMask)) int32_t kOutputMask;

  /// @brief Field kOutputOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kOutputOffset, put = setStaticF_kOutputOffset)) int32_t kOutputOffset;

  /// @brief Field kOutputTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kOutputTexture, put = setStaticF_kOutputTexture)) int32_t kOutputTexture;

  /// @brief Field kParam1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kParam1, put = setStaticF_kParam1)) int32_t kParam1;

  /// @brief Field kParam2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kParam2, put = setStaticF_kParam2)) int32_t kParam2;

  /// @brief Field kPhase, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kPhase, put = setStaticF_kPhase)) int32_t kPhase;

  /// @brief Field kRowSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kRowSize, put = setStaticF_kRowSize)) int32_t kRowSize;

  /// @brief Field kSpatialScale, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kSpatialScale, put = setStaticF_kSpatialScale)) int32_t kSpatialScale;

  /// @brief Field kSpeed, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kSpeed, put = setStaticF_kSpeed)) int32_t kSpeed;

  __declspec(property(get = get_outputOffsetA, put = set_outputOffsetA)) float_t outputOffsetA;

  __declspec(property(get = get_outputOffsetB, put = set_outputOffsetB)) float_t outputOffsetB;

  __declspec(property(get = get_outputOffsetC, put = set_outputOffsetC)) float_t outputOffsetC;

  __declspec(property(get = get_outputOffsetD, put = set_outputOffsetD)) float_t outputOffsetD;

  __declspec(property(get = get_param1A, put = set_param1A)) float_t param1A;

  __declspec(property(get = get_param1B, put = set_param1B)) float_t param1B;

  __declspec(property(get = get_param1C, put = set_param1C)) float_t param1C;

  __declspec(property(get = get_param1D, put = set_param1D)) float_t param1D;

  __declspec(property(get = get_param2A, put = set_param2A)) float_t param2A;

  __declspec(property(get = get_param2B, put = set_param2B)) float_t param2B;

  __declspec(property(get = get_param2C, put = set_param2C)) float_t param2C;

  __declspec(property(get = get_param2D, put = set_param2D)) float_t param2D;

  __declspec(property(get = get_phaseA, put = set_phaseA)) float_t phaseA;

  __declspec(property(get = get_phaseB, put = set_phaseB)) float_t phaseB;

  __declspec(property(get = get_phaseC, put = set_phaseC)) float_t phaseC;

  __declspec(property(get = get_phaseD, put = set_phaseD)) float_t phaseD;

  __declspec(property(get = get_rowSize, put = set_rowSize)) int32_t rowSize;

  __declspec(property(get = get_spatialScaleA, put = set_spatialScaleA)) float_t spatialScaleA;

  __declspec(property(get = get_spatialScaleB, put = set_spatialScaleB)) float_t spatialScaleB;

  __declspec(property(get = get_spatialScaleC, put = set_spatialScaleC)) float_t spatialScaleC;

  __declspec(property(get = get_spatialScaleD, put = set_spatialScaleD)) float_t spatialScaleD;

  __declspec(property(get = get_speedA, put = set_speedA)) float_t speedA;

  __declspec(property(get = get_speedB, put = set_speedB)) float_t speedB;

  __declspec(property(get = get_speedC, put = set_speedC)) float_t speedC;

  __declspec(property(get = get_speedD, put = set_speedD)) float_t speedD;

  /// @brief Method AnimateChannel, addr 0x5d9d248, size 0x28c, virtual false, abstract: false, final false
  inline void AnimateChannel(::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel, ::UnityEngine::RenderTexture* outputTexture);

  /// @brief Method AnimateTextures, addr 0x5d9ccd4, size 0x274, virtual false, abstract: false, final false
  inline void AnimateTextures();

  /// @brief Method ApplyIntention, addr 0x5d9d1a0, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyIntention();

  /// @brief Method Awake, addr 0x5d9ca14, size 0x108, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateTexture, addr 0x5d9cf50, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> CreateTexture(int32_t sizeX, int32_t sizeY, int32_t sizeZ);

  /// @brief Method GetKernelName, addr 0x5d9d4d4, size 0x138, virtual false, abstract: false, final false
  inline ::StringW GetKernelName(::GlobalNamespace::TextureProcessor3D_ComputeKernel kernel);

  /// @brief Method LateUpdate, addr 0x5d9cc90, size 0x44, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method ModifyGridSize, addr 0x5d9d7dc, size 0xa0, virtual false, abstract: false, final false
  inline void ModifyGridSize(int32_t rowSizeDelta, int32_t columnSizeDelta, int32_t depthSizeDelta);

  static inline ::GlobalNamespace::TextureProcessor3D* New_ctor();

  /// @brief Method OnDestroy, addr 0x5d9d7d8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x5d9d7d4, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5d9cf48, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x5d9cf4c, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ReleaseTextures, addr 0x5d9d040, size 0x160, virtual false, abstract: false, final false
  inline void ReleaseTextures();

  /// @brief Method Step, addr 0x5d9d87c, size 0x4, virtual false, abstract: false, final false
  inline void Step();

  /// @brief Method UpdateBuffers, addr 0x5d9cb1c, size 0x174, virtual false, abstract: false, final false
  inline void UpdateBuffers();

  /// @brief Method <ApplyIntention>g__ApplyChannelIntention|163_0, addr 0x5d9d60c, size 0x1c8, virtual false, abstract: false, final false
  static inline void _ApplyIntention_g__ApplyChannelIntention_163_0(::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel,
                                                                    ::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention> channelIntention);

  /// @brief Method <ApplyIntention>g__ApplyParamIntention|163_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void _ApplyIntention_g__ApplyParamIntention_163_1(::ByRef<T> param, ::ByRef<::System::Nullable_1<T>> intention);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__MaterialsUsingOutput() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__MaterialsUsingOutput();

  constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention const& __cordl_internal_get__activePresetChangeIntention() const;

  constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention& __cordl_internal_get__activePresetChangeIntention();

  constexpr int32_t const& __cordl_internal_get__activePresetIndex() const;

  constexpr int32_t& __cordl_internal_get__activePresetIndex();

  constexpr int32_t const& __cordl_internal_get__activePresetIndexOld() const;

  constexpr int32_t& __cordl_internal_get__activePresetIndexOld();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__animationTextureA() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__animationTextureA();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__animationTextureB() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__animationTextureB();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__animationTextureC() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__animationTextureC();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__animationTextureD() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__animationTextureD();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__animationTextureOut() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__animationTextureOut();

  constexpr int32_t const& __cordl_internal_get__columnSize() const;

  constexpr int32_t& __cordl_internal_get__columnSize();

  constexpr int32_t const& __cordl_internal_get__depthSize() const;

  constexpr int32_t& __cordl_internal_get__depthSize();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get__inputTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get__inputTextures();

  constexpr int32_t const& __cordl_internal_get__kernelIndexMax() const;

  constexpr int32_t& __cordl_internal_get__kernelIndexMax();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get__matrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get__matrices();

  constexpr int32_t const& __cordl_internal_get__numInstances() const;

  constexpr int32_t& __cordl_internal_get__numInstances();

  constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*> const& __cordl_internal_get__presetArray() const;

  constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*>& __cordl_internal_get__presetArray();

  constexpr int32_t const& __cordl_internal_get__rowSize() const;

  constexpr int32_t& __cordl_internal_get__rowSize();

  constexpr int32_t const& __cordl_internal_get__testMaterialArrayCount() const;

  constexpr int32_t& __cordl_internal_get__testMaterialArrayCount();

  constexpr int32_t const& __cordl_internal_get__textureArrayLength() const;

  constexpr int32_t& __cordl_internal_get__textureArrayLength();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__textureGenCompute() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__textureGenCompute();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__writeTexturesCompute() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__writeTexturesCompute();

  constexpr void __cordl_internal_set__MaterialsUsingOutput(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__activePresetChangeIntention(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention value);

  constexpr void __cordl_internal_set__activePresetIndex(int32_t value);

  constexpr void __cordl_internal_set__activePresetIndexOld(int32_t value);

  constexpr void __cordl_internal_set__animationTextureA(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__animationTextureB(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__animationTextureC(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__animationTextureD(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__animationTextureOut(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__columnSize(int32_t value);

  constexpr void __cordl_internal_set__depthSize(int32_t value);

  constexpr void __cordl_internal_set__inputTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set__kernelIndexMax(int32_t value);

  constexpr void __cordl_internal_set__matrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set__numInstances(int32_t value);

  constexpr void __cordl_internal_set__presetArray(::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*> value);

  constexpr void __cordl_internal_set__rowSize(int32_t value);

  constexpr void __cordl_internal_set__testMaterialArrayCount(int32_t value);

  constexpr void __cordl_internal_set__textureArrayLength(int32_t value);

  constexpr void __cordl_internal_set__textureGenCompute(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__writeTexturesCompute(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x5d9d880, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__kernelStrings();

  static inline int32_t getStaticF_kColumnSize();

  static inline int32_t getStaticF_kDepthSize();

  static inline int32_t getStaticF_kInputTexture();

  static inline int32_t getStaticF_kInputTextureA();

  static inline int32_t getStaticF_kInputTextureB();

  static inline int32_t getStaticF_kInputTextureC();

  static inline int32_t getStaticF_kInputTextureD();

  static inline int32_t getStaticF_kLookupTexture3D();

  static inline int32_t getStaticF_kOutputMask();

  static inline int32_t getStaticF_kOutputOffset();

  static inline int32_t getStaticF_kOutputTexture();

  static inline int32_t getStaticF_kParam1();

  static inline int32_t getStaticF_kParam2();

  static inline int32_t getStaticF_kPhase();

  static inline int32_t getStaticF_kRowSize();

  static inline int32_t getStaticF_kSpatialScale();

  static inline int32_t getStaticF_kSpeed();

  /// @brief Method get__activePreset, addr 0x5d9ade4, size 0x34, virtual false, abstract: false, final false
  inline ::ByRef<::GlobalNamespace::TextureProcessor3D_MotionPreset> get__activePreset();

  /// @brief Method get_activePresetIndex, addr 0x5d9ad60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_activePresetIndex();

  /// @brief Method get_columnSize, addr 0x5d9c9f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnSize();

  /// @brief Method get_computeKernelA, addr 0x5d9ad70, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel get_computeKernelA();

  /// @brief Method get_computeKernelB, addr 0x5d9af18, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel get_computeKernelB();

  /// @brief Method get_computeKernelC, addr 0x5d9b08c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel get_computeKernelC();

  /// @brief Method get_computeKernelD, addr 0x5d9b208, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel get_computeKernelD();

  /// @brief Method get_depthSize, addr 0x5d9ca04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_depthSize();

  /// @brief Method get_inputTextureIndexA, addr 0x5d9b384, size 0x74, virtual false, abstract: false, final false
  inline int32_t get_inputTextureIndexA();

  /// @brief Method get_inputTextureIndexB, addr 0x5d9b450, size 0x74, virtual false, abstract: false, final false
  inline int32_t get_inputTextureIndexB();

  /// @brief Method get_inputTextureIndexC, addr 0x5d9b51c, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_inputTextureIndexC();

  /// @brief Method get_inputTextureIndexD, addr 0x5d9b5f0, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_inputTextureIndexD();

  /// @brief Method get_outputOffsetA, addr 0x5d9c6b4, size 0x74, virtual false, abstract: false, final false
  inline float_t get_outputOffsetA();

  /// @brief Method get_outputOffsetB, addr 0x5d9c780, size 0x74, virtual false, abstract: false, final false
  inline float_t get_outputOffsetB();

  /// @brief Method get_outputOffsetC, addr 0x5d9c84c, size 0x74, virtual false, abstract: false, final false
  inline float_t get_outputOffsetC();

  /// @brief Method get_outputOffsetD, addr 0x5d9c918, size 0x74, virtual false, abstract: false, final false
  inline float_t get_outputOffsetD();

  /// @brief Method get_param1A, addr 0x5d9c054, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param1A();

  /// @brief Method get_param1B, addr 0x5d9c120, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param1B();

  /// @brief Method get_param1C, addr 0x5d9c1ec, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param1C();

  /// @brief Method get_param1D, addr 0x5d9c2b8, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param1D();

  /// @brief Method get_param2A, addr 0x5d9c384, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param2A();

  /// @brief Method get_param2B, addr 0x5d9c450, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param2B();

  /// @brief Method get_param2C, addr 0x5d9c51c, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param2C();

  /// @brief Method get_param2D, addr 0x5d9c5e8, size 0x74, virtual false, abstract: false, final false
  inline float_t get_param2D();

  /// @brief Method get_phaseA, addr 0x5d9bd24, size 0x74, virtual false, abstract: false, final false
  inline float_t get_phaseA();

  /// @brief Method get_phaseB, addr 0x5d9bdf0, size 0x74, virtual false, abstract: false, final false
  inline float_t get_phaseB();

  /// @brief Method get_phaseC, addr 0x5d9bebc, size 0x74, virtual false, abstract: false, final false
  inline float_t get_phaseC();

  /// @brief Method get_phaseD, addr 0x5d9bf88, size 0x74, virtual false, abstract: false, final false
  inline float_t get_phaseD();

  /// @brief Method get_rowSize, addr 0x5d9c9e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rowSize();

  /// @brief Method get_spatialScaleA, addr 0x5d9b9f4, size 0x74, virtual false, abstract: false, final false
  inline float_t get_spatialScaleA();

  /// @brief Method get_spatialScaleB, addr 0x5d9bac0, size 0x74, virtual false, abstract: false, final false
  inline float_t get_spatialScaleB();

  /// @brief Method get_spatialScaleC, addr 0x5d9bb8c, size 0x74, virtual false, abstract: false, final false
  inline float_t get_spatialScaleC();

  /// @brief Method get_spatialScaleD, addr 0x5d9bc58, size 0x74, virtual false, abstract: false, final false
  inline float_t get_spatialScaleD();

  /// @brief Method get_speedA, addr 0x5d9b6c4, size 0x74, virtual false, abstract: false, final false
  inline float_t get_speedA();

  /// @brief Method get_speedB, addr 0x5d9b790, size 0x74, virtual false, abstract: false, final false
  inline float_t get_speedB();

  /// @brief Method get_speedC, addr 0x5d9b85c, size 0x74, virtual false, abstract: false, final false
  inline float_t get_speedC();

  /// @brief Method get_speedD, addr 0x5d9b928, size 0x74, virtual false, abstract: false, final false
  inline float_t get_speedD();

  static inline void setStaticF__kernelStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_kColumnSize(int32_t value);

  static inline void setStaticF_kDepthSize(int32_t value);

  static inline void setStaticF_kInputTexture(int32_t value);

  static inline void setStaticF_kInputTextureA(int32_t value);

  static inline void setStaticF_kInputTextureB(int32_t value);

  static inline void setStaticF_kInputTextureC(int32_t value);

  static inline void setStaticF_kInputTextureD(int32_t value);

  static inline void setStaticF_kLookupTexture3D(int32_t value);

  static inline void setStaticF_kOutputMask(int32_t value);

  static inline void setStaticF_kOutputOffset(int32_t value);

  static inline void setStaticF_kOutputTexture(int32_t value);

  static inline void setStaticF_kParam1(int32_t value);

  static inline void setStaticF_kParam2(int32_t value);

  static inline void setStaticF_kPhase(int32_t value);

  static inline void setStaticF_kRowSize(int32_t value);

  static inline void setStaticF_kSpatialScale(int32_t value);

  static inline void setStaticF_kSpeed(int32_t value);

  /// @brief Method set_activePresetIndex, addr 0x5d9ad68, size 0x8, virtual false, abstract: false, final false
  inline void set_activePresetIndex(int32_t value);

  /// @brief Method set_columnSize, addr 0x5d9c9fc, size 0x8, virtual false, abstract: false, final false
  inline void set_columnSize(int32_t value);

  /// @brief Method set_computeKernelA, addr 0x5d9ae18, size 0x100, virtual false, abstract: false, final false
  inline void set_computeKernelA(::GlobalNamespace::TextureProcessor3D_ComputeKernel value);

  /// @brief Method set_computeKernelB, addr 0x5d9af8c, size 0x100, virtual false, abstract: false, final false
  inline void set_computeKernelB(::GlobalNamespace::TextureProcessor3D_ComputeKernel value);

  /// @brief Method set_computeKernelC, addr 0x5d9b104, size 0x104, virtual false, abstract: false, final false
  inline void set_computeKernelC(::GlobalNamespace::TextureProcessor3D_ComputeKernel value);

  /// @brief Method set_computeKernelD, addr 0x5d9b280, size 0x104, virtual false, abstract: false, final false
  inline void set_computeKernelD(::GlobalNamespace::TextureProcessor3D_ComputeKernel value);

  /// @brief Method set_depthSize, addr 0x5d9ca0c, size 0x8, virtual false, abstract: false, final false
  inline void set_depthSize(int32_t value);

  /// @brief Method set_inputTextureIndexA, addr 0x5d9b3f8, size 0x58, virtual false, abstract: false, final false
  inline void set_inputTextureIndexA(int32_t value);

  /// @brief Method set_inputTextureIndexB, addr 0x5d9b4c4, size 0x58, virtual false, abstract: false, final false
  inline void set_inputTextureIndexB(int32_t value);

  /// @brief Method set_inputTextureIndexC, addr 0x5d9b594, size 0x5c, virtual false, abstract: false, final false
  inline void set_inputTextureIndexC(int32_t value);

  /// @brief Method set_inputTextureIndexD, addr 0x5d9b668, size 0x5c, virtual false, abstract: false, final false
  inline void set_inputTextureIndexD(int32_t value);

  /// @brief Method set_outputOffsetA, addr 0x5d9c728, size 0x58, virtual false, abstract: false, final false
  inline void set_outputOffsetA(float_t value);

  /// @brief Method set_outputOffsetB, addr 0x5d9c7f4, size 0x58, virtual false, abstract: false, final false
  inline void set_outputOffsetB(float_t value);

  /// @brief Method set_outputOffsetC, addr 0x5d9c8c0, size 0x58, virtual false, abstract: false, final false
  inline void set_outputOffsetC(float_t value);

  /// @brief Method set_outputOffsetD, addr 0x5d9c98c, size 0x58, virtual false, abstract: false, final false
  inline void set_outputOffsetD(float_t value);

  /// @brief Method set_param1A, addr 0x5d9c0c8, size 0x58, virtual false, abstract: false, final false
  inline void set_param1A(float_t value);

  /// @brief Method set_param1B, addr 0x5d9c194, size 0x58, virtual false, abstract: false, final false
  inline void set_param1B(float_t value);

  /// @brief Method set_param1C, addr 0x5d9c260, size 0x58, virtual false, abstract: false, final false
  inline void set_param1C(float_t value);

  /// @brief Method set_param1D, addr 0x5d9c32c, size 0x58, virtual false, abstract: false, final false
  inline void set_param1D(float_t value);

  /// @brief Method set_param2A, addr 0x5d9c3f8, size 0x58, virtual false, abstract: false, final false
  inline void set_param2A(float_t value);

  /// @brief Method set_param2B, addr 0x5d9c4c4, size 0x58, virtual false, abstract: false, final false
  inline void set_param2B(float_t value);

  /// @brief Method set_param2C, addr 0x5d9c590, size 0x58, virtual false, abstract: false, final false
  inline void set_param2C(float_t value);

  /// @brief Method set_param2D, addr 0x5d9c65c, size 0x58, virtual false, abstract: false, final false
  inline void set_param2D(float_t value);

  /// @brief Method set_phaseA, addr 0x5d9bd98, size 0x58, virtual false, abstract: false, final false
  inline void set_phaseA(float_t value);

  /// @brief Method set_phaseB, addr 0x5d9be64, size 0x58, virtual false, abstract: false, final false
  inline void set_phaseB(float_t value);

  /// @brief Method set_phaseC, addr 0x5d9bf30, size 0x58, virtual false, abstract: false, final false
  inline void set_phaseC(float_t value);

  /// @brief Method set_phaseD, addr 0x5d9bffc, size 0x58, virtual false, abstract: false, final false
  inline void set_phaseD(float_t value);

  /// @brief Method set_rowSize, addr 0x5d9c9ec, size 0x8, virtual false, abstract: false, final false
  inline void set_rowSize(int32_t value);

  /// @brief Method set_spatialScaleA, addr 0x5d9ba68, size 0x58, virtual false, abstract: false, final false
  inline void set_spatialScaleA(float_t value);

  /// @brief Method set_spatialScaleB, addr 0x5d9bb34, size 0x58, virtual false, abstract: false, final false
  inline void set_spatialScaleB(float_t value);

  /// @brief Method set_spatialScaleC, addr 0x5d9bc00, size 0x58, virtual false, abstract: false, final false
  inline void set_spatialScaleC(float_t value);

  /// @brief Method set_spatialScaleD, addr 0x5d9bccc, size 0x58, virtual false, abstract: false, final false
  inline void set_spatialScaleD(float_t value);

  /// @brief Method set_speedA, addr 0x5d9b738, size 0x58, virtual false, abstract: false, final false
  inline void set_speedA(float_t value);

  /// @brief Method set_speedB, addr 0x5d9b804, size 0x58, virtual false, abstract: false, final false
  inline void set_speedB(float_t value);

  /// @brief Method set_speedC, addr 0x5d9b8d0, size 0x58, virtual false, abstract: false, final false
  inline void set_speedC(float_t value);

  /// @brief Method set_speedD, addr 0x5d9b99c, size 0x58, virtual false, abstract: false, final false
  inline void set_speedD(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureProcessor3D(TextureProcessor3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureProcessor3D(TextureProcessor3D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20822 };

  /// @brief Field _textureGenCompute, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____textureGenCompute;

  /// @brief Field _writeTexturesCompute, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____writeTexturesCompute;

  /// @brief Field _inputTextures, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ____inputTextures;

  /// @brief Field _rowSize, offset: 0x38, size: 0x4, def value: None
  int32_t ____rowSize;

  /// @brief Field _columnSize, offset: 0x3c, size: 0x4, def value: None
  int32_t ____columnSize;

  /// @brief Field _depthSize, offset: 0x40, size: 0x4, def value: None
  int32_t ____depthSize;

  /// @brief Field _presetArray, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*> ____presetArray;

  /// @brief Field _activePresetIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ____activePresetIndex;

  /// @brief Field _activePresetIndexOld, offset: 0x54, size: 0x4, def value: None
  int32_t ____activePresetIndexOld;

  /// @brief Field _MaterialsUsingOutput, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____MaterialsUsingOutput;

  /// @brief Field _matrices, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ____matrices;

  /// @brief Field _numInstances, offset: 0x68, size: 0x4, def value: None
  int32_t ____numInstances;

  /// @brief Field _animationTextureA, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____animationTextureA;

  /// @brief Field _animationTextureB, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____animationTextureB;

  /// @brief Field _animationTextureC, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____animationTextureC;

  /// @brief Field _animationTextureD, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____animationTextureD;

  /// @brief Field _animationTextureOut, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____animationTextureOut;

  /// @brief Field _textureArrayLength, offset: 0x98, size: 0x4, def value: None
  int32_t ____textureArrayLength;

  /// @brief Field _testMaterialArrayCount, offset: 0x9c, size: 0x4, def value: None
  int32_t ____testMaterialArrayCount;

  /// @brief Field _kernelIndexMax, offset: 0xa0, size: 0x4, def value: None
  int32_t ____kernelIndexMax;

  /// @brief Field _activePresetChangeIntention, offset: 0xa4, size: 0x100, def value: None
  ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention ____activePresetChangeIntention;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____textureGenCompute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____writeTexturesCompute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____inputTextures) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____rowSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____columnSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____depthSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____presetArray) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____activePresetIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____activePresetIndexOld) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____MaterialsUsingOutput) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____matrices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____numInstances) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____animationTextureA) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____animationTextureB) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____animationTextureC) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____animationTextureD) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____animationTextureOut) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____textureArrayLength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____testMaterialArrayCount) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____kernelIndexMax) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3D, ____activePresetChangeIntention) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3D, 0x1a8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D_ComputeKernel, "", "TextureProcessor3D/ComputeKernel");
NEED_NO_BOX(::GlobalNamespace::TextureProcessor3D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D*, "", "TextureProcessor3D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D_ChannelParams, "", "TextureProcessor3D/ChannelParams");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention, "", "TextureProcessor3D/ChannelParamsChangeIntention");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D_MotionPreset, "", "TextureProcessor3D/MotionPreset");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention, "", "TextureProcessor3D/MotionPresetChangeIntention");

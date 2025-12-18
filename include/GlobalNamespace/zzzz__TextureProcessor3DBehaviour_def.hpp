#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3DBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureProcessor3DBehaviour)
namespace GlobalNamespace {
class TextureProcessor3D;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureProcessor3DBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureProcessor3DBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureProcessor3DBehaviour
class CORDL_TYPE TextureProcessor3DBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _initialized, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _originalComputeKernelA, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__originalComputeKernelA, put = __cordl_internal_set__originalComputeKernelA)) float_t _originalComputeKernelA;

  /// @brief Field _originalComputeKernelB, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__originalComputeKernelB, put = __cordl_internal_set__originalComputeKernelB)) float_t _originalComputeKernelB;

  /// @brief Field _originalComputeKernelC, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__originalComputeKernelC, put = __cordl_internal_set__originalComputeKernelC)) float_t _originalComputeKernelC;

  /// @brief Field _originalComputeKernelD, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__originalComputeKernelD, put = __cordl_internal_set__originalComputeKernelD)) float_t _originalComputeKernelD;

  /// @brief Field _originalInputTextureIndexA, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__originalInputTextureIndexA, put = __cordl_internal_set__originalInputTextureIndexA)) float_t _originalInputTextureIndexA;

  /// @brief Field _originalInputTextureIndexB, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__originalInputTextureIndexB, put = __cordl_internal_set__originalInputTextureIndexB)) float_t _originalInputTextureIndexB;

  /// @brief Field _originalInputTextureIndexC, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__originalInputTextureIndexC, put = __cordl_internal_set__originalInputTextureIndexC)) float_t _originalInputTextureIndexC;

  /// @brief Field _originalInputTextureIndexD, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__originalInputTextureIndexD, put = __cordl_internal_set__originalInputTextureIndexD)) float_t _originalInputTextureIndexD;

  /// @brief Field _originalSpatialScaleA, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpatialScaleA, put = __cordl_internal_set__originalSpatialScaleA)) float_t _originalSpatialScaleA;

  /// @brief Field _originalSpatialScaleB, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpatialScaleB, put = __cordl_internal_set__originalSpatialScaleB)) float_t _originalSpatialScaleB;

  /// @brief Field _originalSpatialScaleC, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpatialScaleC, put = __cordl_internal_set__originalSpatialScaleC)) float_t _originalSpatialScaleC;

  /// @brief Field _originalSpatialScaleD, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpatialScaleD, put = __cordl_internal_set__originalSpatialScaleD)) float_t _originalSpatialScaleD;

  /// @brief Field _originalSpeedA, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpeedA, put = __cordl_internal_set__originalSpeedA)) float_t _originalSpeedA;

  /// @brief Field _originalSpeedB, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpeedB, put = __cordl_internal_set__originalSpeedB)) float_t _originalSpeedB;

  /// @brief Field _originalSpeedC, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpeedC, put = __cordl_internal_set__originalSpeedC)) float_t _originalSpeedC;

  /// @brief Field _originalSpeedD, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__originalSpeedD, put = __cordl_internal_set__originalSpeedD)) float_t _originalSpeedD;

  /// @brief Field _param1A, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get__param1A, put = __cordl_internal_set__param1A)) float_t _param1A;

  /// @brief Field _param1B, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get__param1B, put = __cordl_internal_set__param1B)) float_t _param1B;

  /// @brief Field _param1C, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get__param1C, put = __cordl_internal_set__param1C)) float_t _param1C;

  /// @brief Field _param1D, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__param1D, put = __cordl_internal_set__param1D)) float_t _param1D;

  /// @brief Field _param2A, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__param2A, put = __cordl_internal_set__param2A)) float_t _param2A;

  /// @brief Field _param2B, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__param2B, put = __cordl_internal_set__param2B)) float_t _param2B;

  /// @brief Field _param2C, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get__param2C, put = __cordl_internal_set__param2C)) float_t _param2C;

  /// @brief Field _param2D, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get__param2D, put = __cordl_internal_set__param2D)) float_t _param2D;

  /// @brief Field _phaseA, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__phaseA, put = __cordl_internal_set__phaseA)) float_t _phaseA;

  /// @brief Field _phaseB, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get__phaseB, put = __cordl_internal_set__phaseB)) float_t _phaseB;

  /// @brief Field _phaseC, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get__phaseC, put = __cordl_internal_set__phaseC)) float_t _phaseC;

  /// @brief Field _phaseD, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__phaseD, put = __cordl_internal_set__phaseD)) float_t _phaseD;

  /// @brief Field _textureProcessor, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__textureProcessor, put = __cordl_internal_set__textureProcessor)) ::UnityW<::GlobalNamespace::TextureProcessor3D> _textureProcessor;

  /// @brief Field computeKernelA, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_computeKernelA, put = __cordl_internal_set_computeKernelA)) float_t computeKernelA;

  /// @brief Field computeKernelB, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_computeKernelB, put = __cordl_internal_set_computeKernelB)) float_t computeKernelB;

  /// @brief Field computeKernelC, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_computeKernelC, put = __cordl_internal_set_computeKernelC)) float_t computeKernelC;

  /// @brief Field computeKernelD, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_computeKernelD, put = __cordl_internal_set_computeKernelD)) float_t computeKernelD;

  /// @brief Field inputTextureIndexA, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_inputTextureIndexA, put = __cordl_internal_set_inputTextureIndexA)) float_t inputTextureIndexA;

  /// @brief Field inputTextureIndexB, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_inputTextureIndexB, put = __cordl_internal_set_inputTextureIndexB)) float_t inputTextureIndexB;

  /// @brief Field inputTextureIndexC, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_inputTextureIndexC, put = __cordl_internal_set_inputTextureIndexC)) float_t inputTextureIndexC;

  /// @brief Field inputTextureIndexD, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputTextureIndexD, put = __cordl_internal_set_inputTextureIndexD)) float_t inputTextureIndexD;

  /// @brief Field param1A, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_param1A, put = __cordl_internal_set_param1A)) float_t param1A;

  /// @brief Field param1B, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_param1B, put = __cordl_internal_set_param1B)) float_t param1B;

  /// @brief Field param1C, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_param1C, put = __cordl_internal_set_param1C)) float_t param1C;

  /// @brief Field param1D, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_param1D, put = __cordl_internal_set_param1D)) float_t param1D;

  /// @brief Field param2A, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_param2A, put = __cordl_internal_set_param2A)) float_t param2A;

  /// @brief Field param2B, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_param2B, put = __cordl_internal_set_param2B)) float_t param2B;

  /// @brief Field param2C, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_param2C, put = __cordl_internal_set_param2C)) float_t param2C;

  /// @brief Field param2D, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_param2D, put = __cordl_internal_set_param2D)) float_t param2D;

  /// @brief Field phaseA, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_phaseA, put = __cordl_internal_set_phaseA)) float_t phaseA;

  /// @brief Field phaseB, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_phaseB, put = __cordl_internal_set_phaseB)) float_t phaseB;

  /// @brief Field phaseC, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_phaseC, put = __cordl_internal_set_phaseC)) float_t phaseC;

  /// @brief Field phaseD, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_phaseD, put = __cordl_internal_set_phaseD)) float_t phaseD;

  /// @brief Field spatialScaleA, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialScaleA, put = __cordl_internal_set_spatialScaleA)) float_t spatialScaleA;

  /// @brief Field spatialScaleB, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialScaleB, put = __cordl_internal_set_spatialScaleB)) float_t spatialScaleB;

  /// @brief Field spatialScaleC, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialScaleC, put = __cordl_internal_set_spatialScaleC)) float_t spatialScaleC;

  /// @brief Field spatialScaleD, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialScaleD, put = __cordl_internal_set_spatialScaleD)) float_t spatialScaleD;

  /// @brief Field speedA, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_speedA, put = __cordl_internal_set_speedA)) float_t speedA;

  /// @brief Field speedB, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_speedB, put = __cordl_internal_set_speedB)) float_t speedB;

  /// @brief Field speedC, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_speedC, put = __cordl_internal_set_speedC)) float_t speedC;

  /// @brief Field speedD, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_speedD, put = __cordl_internal_set_speedD)) float_t speedD;

  static inline ::GlobalNamespace::TextureProcessor3DBehaviour* New_ctor();

  /// @brief Method OnPlayableDestroy, addr 0x5774f50, size 0x7a8, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x5774b4c, size 0x404, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr float_t const& __cordl_internal_get__originalComputeKernelA() const;

  constexpr float_t& __cordl_internal_get__originalComputeKernelA();

  constexpr float_t const& __cordl_internal_get__originalComputeKernelB() const;

  constexpr float_t& __cordl_internal_get__originalComputeKernelB();

  constexpr float_t const& __cordl_internal_get__originalComputeKernelC() const;

  constexpr float_t& __cordl_internal_get__originalComputeKernelC();

  constexpr float_t const& __cordl_internal_get__originalComputeKernelD() const;

  constexpr float_t& __cordl_internal_get__originalComputeKernelD();

  constexpr float_t const& __cordl_internal_get__originalInputTextureIndexA() const;

  constexpr float_t& __cordl_internal_get__originalInputTextureIndexA();

  constexpr float_t const& __cordl_internal_get__originalInputTextureIndexB() const;

  constexpr float_t& __cordl_internal_get__originalInputTextureIndexB();

  constexpr float_t const& __cordl_internal_get__originalInputTextureIndexC() const;

  constexpr float_t& __cordl_internal_get__originalInputTextureIndexC();

  constexpr float_t const& __cordl_internal_get__originalInputTextureIndexD() const;

  constexpr float_t& __cordl_internal_get__originalInputTextureIndexD();

  constexpr float_t const& __cordl_internal_get__originalSpatialScaleA() const;

  constexpr float_t& __cordl_internal_get__originalSpatialScaleA();

  constexpr float_t const& __cordl_internal_get__originalSpatialScaleB() const;

  constexpr float_t& __cordl_internal_get__originalSpatialScaleB();

  constexpr float_t const& __cordl_internal_get__originalSpatialScaleC() const;

  constexpr float_t& __cordl_internal_get__originalSpatialScaleC();

  constexpr float_t const& __cordl_internal_get__originalSpatialScaleD() const;

  constexpr float_t& __cordl_internal_get__originalSpatialScaleD();

  constexpr float_t const& __cordl_internal_get__originalSpeedA() const;

  constexpr float_t& __cordl_internal_get__originalSpeedA();

  constexpr float_t const& __cordl_internal_get__originalSpeedB() const;

  constexpr float_t& __cordl_internal_get__originalSpeedB();

  constexpr float_t const& __cordl_internal_get__originalSpeedC() const;

  constexpr float_t& __cordl_internal_get__originalSpeedC();

  constexpr float_t const& __cordl_internal_get__originalSpeedD() const;

  constexpr float_t& __cordl_internal_get__originalSpeedD();

  constexpr float_t const& __cordl_internal_get__param1A() const;

  constexpr float_t& __cordl_internal_get__param1A();

  constexpr float_t const& __cordl_internal_get__param1B() const;

  constexpr float_t& __cordl_internal_get__param1B();

  constexpr float_t const& __cordl_internal_get__param1C() const;

  constexpr float_t& __cordl_internal_get__param1C();

  constexpr float_t const& __cordl_internal_get__param1D() const;

  constexpr float_t& __cordl_internal_get__param1D();

  constexpr float_t const& __cordl_internal_get__param2A() const;

  constexpr float_t& __cordl_internal_get__param2A();

  constexpr float_t const& __cordl_internal_get__param2B() const;

  constexpr float_t& __cordl_internal_get__param2B();

  constexpr float_t const& __cordl_internal_get__param2C() const;

  constexpr float_t& __cordl_internal_get__param2C();

  constexpr float_t const& __cordl_internal_get__param2D() const;

  constexpr float_t& __cordl_internal_get__param2D();

  constexpr float_t const& __cordl_internal_get__phaseA() const;

  constexpr float_t& __cordl_internal_get__phaseA();

  constexpr float_t const& __cordl_internal_get__phaseB() const;

  constexpr float_t& __cordl_internal_get__phaseB();

  constexpr float_t const& __cordl_internal_get__phaseC() const;

  constexpr float_t& __cordl_internal_get__phaseC();

  constexpr float_t const& __cordl_internal_get__phaseD() const;

  constexpr float_t& __cordl_internal_get__phaseD();

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& __cordl_internal_get__textureProcessor() const;

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& __cordl_internal_get__textureProcessor();

  constexpr float_t const& __cordl_internal_get_computeKernelA() const;

  constexpr float_t& __cordl_internal_get_computeKernelA();

  constexpr float_t const& __cordl_internal_get_computeKernelB() const;

  constexpr float_t& __cordl_internal_get_computeKernelB();

  constexpr float_t const& __cordl_internal_get_computeKernelC() const;

  constexpr float_t& __cordl_internal_get_computeKernelC();

  constexpr float_t const& __cordl_internal_get_computeKernelD() const;

  constexpr float_t& __cordl_internal_get_computeKernelD();

  constexpr float_t const& __cordl_internal_get_inputTextureIndexA() const;

  constexpr float_t& __cordl_internal_get_inputTextureIndexA();

  constexpr float_t const& __cordl_internal_get_inputTextureIndexB() const;

  constexpr float_t& __cordl_internal_get_inputTextureIndexB();

  constexpr float_t const& __cordl_internal_get_inputTextureIndexC() const;

  constexpr float_t& __cordl_internal_get_inputTextureIndexC();

  constexpr float_t const& __cordl_internal_get_inputTextureIndexD() const;

  constexpr float_t& __cordl_internal_get_inputTextureIndexD();

  constexpr float_t const& __cordl_internal_get_param1A() const;

  constexpr float_t& __cordl_internal_get_param1A();

  constexpr float_t const& __cordl_internal_get_param1B() const;

  constexpr float_t& __cordl_internal_get_param1B();

  constexpr float_t const& __cordl_internal_get_param1C() const;

  constexpr float_t& __cordl_internal_get_param1C();

  constexpr float_t const& __cordl_internal_get_param1D() const;

  constexpr float_t& __cordl_internal_get_param1D();

  constexpr float_t const& __cordl_internal_get_param2A() const;

  constexpr float_t& __cordl_internal_get_param2A();

  constexpr float_t const& __cordl_internal_get_param2B() const;

  constexpr float_t& __cordl_internal_get_param2B();

  constexpr float_t const& __cordl_internal_get_param2C() const;

  constexpr float_t& __cordl_internal_get_param2C();

  constexpr float_t const& __cordl_internal_get_param2D() const;

  constexpr float_t& __cordl_internal_get_param2D();

  constexpr float_t const& __cordl_internal_get_phaseA() const;

  constexpr float_t& __cordl_internal_get_phaseA();

  constexpr float_t const& __cordl_internal_get_phaseB() const;

  constexpr float_t& __cordl_internal_get_phaseB();

  constexpr float_t const& __cordl_internal_get_phaseC() const;

  constexpr float_t& __cordl_internal_get_phaseC();

  constexpr float_t const& __cordl_internal_get_phaseD() const;

  constexpr float_t& __cordl_internal_get_phaseD();

  constexpr float_t const& __cordl_internal_get_spatialScaleA() const;

  constexpr float_t& __cordl_internal_get_spatialScaleA();

  constexpr float_t const& __cordl_internal_get_spatialScaleB() const;

  constexpr float_t& __cordl_internal_get_spatialScaleB();

  constexpr float_t const& __cordl_internal_get_spatialScaleC() const;

  constexpr float_t& __cordl_internal_get_spatialScaleC();

  constexpr float_t const& __cordl_internal_get_spatialScaleD() const;

  constexpr float_t& __cordl_internal_get_spatialScaleD();

  constexpr float_t const& __cordl_internal_get_speedA() const;

  constexpr float_t& __cordl_internal_get_speedA();

  constexpr float_t const& __cordl_internal_get_speedB() const;

  constexpr float_t& __cordl_internal_get_speedB();

  constexpr float_t const& __cordl_internal_get_speedC() const;

  constexpr float_t& __cordl_internal_get_speedC();

  constexpr float_t const& __cordl_internal_get_speedD() const;

  constexpr float_t& __cordl_internal_get_speedD();

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__originalComputeKernelA(float_t value);

  constexpr void __cordl_internal_set__originalComputeKernelB(float_t value);

  constexpr void __cordl_internal_set__originalComputeKernelC(float_t value);

  constexpr void __cordl_internal_set__originalComputeKernelD(float_t value);

  constexpr void __cordl_internal_set__originalInputTextureIndexA(float_t value);

  constexpr void __cordl_internal_set__originalInputTextureIndexB(float_t value);

  constexpr void __cordl_internal_set__originalInputTextureIndexC(float_t value);

  constexpr void __cordl_internal_set__originalInputTextureIndexD(float_t value);

  constexpr void __cordl_internal_set__originalSpatialScaleA(float_t value);

  constexpr void __cordl_internal_set__originalSpatialScaleB(float_t value);

  constexpr void __cordl_internal_set__originalSpatialScaleC(float_t value);

  constexpr void __cordl_internal_set__originalSpatialScaleD(float_t value);

  constexpr void __cordl_internal_set__originalSpeedA(float_t value);

  constexpr void __cordl_internal_set__originalSpeedB(float_t value);

  constexpr void __cordl_internal_set__originalSpeedC(float_t value);

  constexpr void __cordl_internal_set__originalSpeedD(float_t value);

  constexpr void __cordl_internal_set__param1A(float_t value);

  constexpr void __cordl_internal_set__param1B(float_t value);

  constexpr void __cordl_internal_set__param1C(float_t value);

  constexpr void __cordl_internal_set__param1D(float_t value);

  constexpr void __cordl_internal_set__param2A(float_t value);

  constexpr void __cordl_internal_set__param2B(float_t value);

  constexpr void __cordl_internal_set__param2C(float_t value);

  constexpr void __cordl_internal_set__param2D(float_t value);

  constexpr void __cordl_internal_set__phaseA(float_t value);

  constexpr void __cordl_internal_set__phaseB(float_t value);

  constexpr void __cordl_internal_set__phaseC(float_t value);

  constexpr void __cordl_internal_set__phaseD(float_t value);

  constexpr void __cordl_internal_set__textureProcessor(::UnityW<::GlobalNamespace::TextureProcessor3D> value);

  constexpr void __cordl_internal_set_computeKernelA(float_t value);

  constexpr void __cordl_internal_set_computeKernelB(float_t value);

  constexpr void __cordl_internal_set_computeKernelC(float_t value);

  constexpr void __cordl_internal_set_computeKernelD(float_t value);

  constexpr void __cordl_internal_set_inputTextureIndexA(float_t value);

  constexpr void __cordl_internal_set_inputTextureIndexB(float_t value);

  constexpr void __cordl_internal_set_inputTextureIndexC(float_t value);

  constexpr void __cordl_internal_set_inputTextureIndexD(float_t value);

  constexpr void __cordl_internal_set_param1A(float_t value);

  constexpr void __cordl_internal_set_param1B(float_t value);

  constexpr void __cordl_internal_set_param1C(float_t value);

  constexpr void __cordl_internal_set_param1D(float_t value);

  constexpr void __cordl_internal_set_param2A(float_t value);

  constexpr void __cordl_internal_set_param2B(float_t value);

  constexpr void __cordl_internal_set_param2C(float_t value);

  constexpr void __cordl_internal_set_param2D(float_t value);

  constexpr void __cordl_internal_set_phaseA(float_t value);

  constexpr void __cordl_internal_set_phaseB(float_t value);

  constexpr void __cordl_internal_set_phaseC(float_t value);

  constexpr void __cordl_internal_set_phaseD(float_t value);

  constexpr void __cordl_internal_set_spatialScaleA(float_t value);

  constexpr void __cordl_internal_set_spatialScaleB(float_t value);

  constexpr void __cordl_internal_set_spatialScaleC(float_t value);

  constexpr void __cordl_internal_set_spatialScaleD(float_t value);

  constexpr void __cordl_internal_set_speedA(float_t value);

  constexpr void __cordl_internal_set_speedB(float_t value);

  constexpr void __cordl_internal_set_speedC(float_t value);

  constexpr void __cordl_internal_set_speedD(float_t value);

  /// @brief Method .ctor, addr 0x57756f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3DBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureProcessor3DBehaviour(TextureProcessor3DBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureProcessor3DBehaviour(TextureProcessor3DBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6779 };

  /// @brief Field computeKernelA, offset: 0x10, size: 0x4, def value: None
  float_t ___computeKernelA;

  /// @brief Field computeKernelB, offset: 0x14, size: 0x4, def value: None
  float_t ___computeKernelB;

  /// @brief Field computeKernelC, offset: 0x18, size: 0x4, def value: None
  float_t ___computeKernelC;

  /// @brief Field computeKernelD, offset: 0x1c, size: 0x4, def value: None
  float_t ___computeKernelD;

  /// @brief Field inputTextureIndexA, offset: 0x20, size: 0x4, def value: None
  float_t ___inputTextureIndexA;

  /// @brief Field inputTextureIndexB, offset: 0x24, size: 0x4, def value: None
  float_t ___inputTextureIndexB;

  /// @brief Field inputTextureIndexC, offset: 0x28, size: 0x4, def value: None
  float_t ___inputTextureIndexC;

  /// @brief Field inputTextureIndexD, offset: 0x2c, size: 0x4, def value: None
  float_t ___inputTextureIndexD;

  /// @brief Field speedA, offset: 0x30, size: 0x4, def value: None
  float_t ___speedA;

  /// @brief Field speedB, offset: 0x34, size: 0x4, def value: None
  float_t ___speedB;

  /// @brief Field speedC, offset: 0x38, size: 0x4, def value: None
  float_t ___speedC;

  /// @brief Field speedD, offset: 0x3c, size: 0x4, def value: None
  float_t ___speedD;

  /// @brief Field spatialScaleA, offset: 0x40, size: 0x4, def value: None
  float_t ___spatialScaleA;

  /// @brief Field spatialScaleB, offset: 0x44, size: 0x4, def value: None
  float_t ___spatialScaleB;

  /// @brief Field spatialScaleC, offset: 0x48, size: 0x4, def value: None
  float_t ___spatialScaleC;

  /// @brief Field spatialScaleD, offset: 0x4c, size: 0x4, def value: None
  float_t ___spatialScaleD;

  /// @brief Field phaseA, offset: 0x50, size: 0x4, def value: None
  float_t ___phaseA;

  /// @brief Field phaseB, offset: 0x54, size: 0x4, def value: None
  float_t ___phaseB;

  /// @brief Field phaseC, offset: 0x58, size: 0x4, def value: None
  float_t ___phaseC;

  /// @brief Field phaseD, offset: 0x5c, size: 0x4, def value: None
  float_t ___phaseD;

  /// @brief Field param2A, offset: 0x60, size: 0x4, def value: None
  float_t ___param2A;

  /// @brief Field param2B, offset: 0x64, size: 0x4, def value: None
  float_t ___param2B;

  /// @brief Field param2C, offset: 0x68, size: 0x4, def value: None
  float_t ___param2C;

  /// @brief Field param2D, offset: 0x6c, size: 0x4, def value: None
  float_t ___param2D;

  /// @brief Field param1A, offset: 0x70, size: 0x4, def value: None
  float_t ___param1A;

  /// @brief Field param1B, offset: 0x74, size: 0x4, def value: None
  float_t ___param1B;

  /// @brief Field param1C, offset: 0x78, size: 0x4, def value: None
  float_t ___param1C;

  /// @brief Field param1D, offset: 0x7c, size: 0x4, def value: None
  float_t ___param1D;

  /// @brief Field _initialized, offset: 0x80, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _originalComputeKernelA, offset: 0x84, size: 0x4, def value: None
  float_t ____originalComputeKernelA;

  /// @brief Field _originalComputeKernelB, offset: 0x88, size: 0x4, def value: None
  float_t ____originalComputeKernelB;

  /// @brief Field _originalComputeKernelC, offset: 0x8c, size: 0x4, def value: None
  float_t ____originalComputeKernelC;

  /// @brief Field _originalComputeKernelD, offset: 0x90, size: 0x4, def value: None
  float_t ____originalComputeKernelD;

  /// @brief Field _originalInputTextureIndexA, offset: 0x94, size: 0x4, def value: None
  float_t ____originalInputTextureIndexA;

  /// @brief Field _originalInputTextureIndexB, offset: 0x98, size: 0x4, def value: None
  float_t ____originalInputTextureIndexB;

  /// @brief Field _originalInputTextureIndexC, offset: 0x9c, size: 0x4, def value: None
  float_t ____originalInputTextureIndexC;

  /// @brief Field _originalInputTextureIndexD, offset: 0xa0, size: 0x4, def value: None
  float_t ____originalInputTextureIndexD;

  /// @brief Field _originalSpeedA, offset: 0xa4, size: 0x4, def value: None
  float_t ____originalSpeedA;

  /// @brief Field _originalSpeedB, offset: 0xa8, size: 0x4, def value: None
  float_t ____originalSpeedB;

  /// @brief Field _originalSpeedC, offset: 0xac, size: 0x4, def value: None
  float_t ____originalSpeedC;

  /// @brief Field _originalSpeedD, offset: 0xb0, size: 0x4, def value: None
  float_t ____originalSpeedD;

  /// @brief Field _originalSpatialScaleA, offset: 0xb4, size: 0x4, def value: None
  float_t ____originalSpatialScaleA;

  /// @brief Field _originalSpatialScaleB, offset: 0xb8, size: 0x4, def value: None
  float_t ____originalSpatialScaleB;

  /// @brief Field _originalSpatialScaleC, offset: 0xbc, size: 0x4, def value: None
  float_t ____originalSpatialScaleC;

  /// @brief Field _originalSpatialScaleD, offset: 0xc0, size: 0x4, def value: None
  float_t ____originalSpatialScaleD;

  /// @brief Field _phaseA, offset: 0xc4, size: 0x4, def value: None
  float_t ____phaseA;

  /// @brief Field _phaseB, offset: 0xc8, size: 0x4, def value: None
  float_t ____phaseB;

  /// @brief Field _phaseC, offset: 0xcc, size: 0x4, def value: None
  float_t ____phaseC;

  /// @brief Field _phaseD, offset: 0xd0, size: 0x4, def value: None
  float_t ____phaseD;

  /// @brief Field _param2A, offset: 0xd4, size: 0x4, def value: None
  float_t ____param2A;

  /// @brief Field _param2B, offset: 0xd8, size: 0x4, def value: None
  float_t ____param2B;

  /// @brief Field _param2C, offset: 0xdc, size: 0x4, def value: None
  float_t ____param2C;

  /// @brief Field _param2D, offset: 0xe0, size: 0x4, def value: None
  float_t ____param2D;

  /// @brief Field _param1A, offset: 0xe4, size: 0x4, def value: None
  float_t ____param1A;

  /// @brief Field _param1B, offset: 0xe8, size: 0x4, def value: None
  float_t ____param1B;

  /// @brief Field _param1C, offset: 0xec, size: 0x4, def value: None
  float_t ____param1C;

  /// @brief Field _param1D, offset: 0xf0, size: 0x4, def value: None
  float_t ____param1D;

  /// @brief Field _textureProcessor, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextureProcessor3D> ____textureProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___computeKernelA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___computeKernelB) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___computeKernelC) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___computeKernelD) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___inputTextureIndexA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___inputTextureIndexB) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___inputTextureIndexC) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___inputTextureIndexD) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___speedA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___speedB) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___speedC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___speedD) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___spatialScaleA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___spatialScaleB) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___spatialScaleC) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___spatialScaleD) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___phaseA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___phaseB) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___phaseC) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___phaseD) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param2A) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param2B) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param2C) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param2D) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param1A) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param1B) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param1C) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ___param1D) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____initialized) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalComputeKernelA) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalComputeKernelB) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalComputeKernelC) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalComputeKernelD) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalInputTextureIndexA) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalInputTextureIndexB) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalInputTextureIndexC) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalInputTextureIndexD) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpeedA) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpeedB) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpeedC) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpeedD) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpatialScaleA) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpatialScaleB) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpatialScaleC) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____originalSpatialScaleD) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____phaseA) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____phaseB) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____phaseC) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____phaseD) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param2A) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param2B) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param2C) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param2D) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param1A) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param1B) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param1C) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____param1D) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureProcessor3DBehaviour, ____textureProcessor) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3DBehaviour, 0x100>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureProcessor3DBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3DBehaviour*, "", "TextureProcessor3DBehaviour");

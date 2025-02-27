#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightIntensityBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TubeLightIntensityBehaviour)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
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
class TubeLightIntensityBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightIntensityBehaviour
class CORDL_TYPE TubeLightIntensityBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _blend, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__blend, put = __cordl_internal_set__blend)) float_t _blend;

  /// @brief Field _directionalLights, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLights,
                      put = __cordl_internal_set__directionalLights)) ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>
      _directionalLights;

  /// @brief Field _disableWhenFinished, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__disableWhenFinished, put = __cordl_internal_set__disableWhenFinished)) bool _disableWhenFinished;

  /// @brief Field _endLaserIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__endLaserIntensity, put = __cordl_internal_set__endLaserIntensity)) float_t _endLaserIntensity;

  /// @brief Field _endLightIntensity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__endLightIntensity, put = __cordl_internal_set__endLightIntensity)) float_t _endLightIntensity;

  /// @brief Field _finished, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__finished, put = __cordl_internal_set__finished)) bool _finished;

  /// @brief Field _firstFrameLaserIntensity, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__firstFrameLaserIntensity, put = __cordl_internal_set__firstFrameLaserIntensity)) float_t _firstFrameLaserIntensity;

  /// @brief Field _firstFrameLightIntensity, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__firstFrameLightIntensity, put = __cordl_internal_set__firstFrameLightIntensity)) float_t _firstFrameLightIntensity;

  /// @brief Field _initialized, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _noPredefinedStartValue, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__noPredefinedStartValue, put = __cordl_internal_set__noPredefinedStartValue)) bool _noPredefinedStartValue;

  /// @brief Field _originalLaserIntensity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__originalLaserIntensity, put = __cordl_internal_set__originalLaserIntensity)) float_t _originalLaserIntensity;

  /// @brief Field _originalLightIntensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__originalLightIntensity, put = __cordl_internal_set__originalLightIntensity)) float_t _originalLightIntensity;

  /// @brief Field _startLaserIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__startLaserIntensity, put = __cordl_internal_set__startLaserIntensity)) float_t _startLaserIntensity;

  /// @brief Field _startLightIntensity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__startLightIntensity, put = __cordl_internal_set__startLightIntensity)) float_t _startLightIntensity;

  /// @brief Field _started, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__started, put = __cordl_internal_set__started)) bool _started;

  /// @brief Field _tubeLights, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeLights,
                      put = __cordl_internal_set__tubeLights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _tubeLights;

  /// @brief Method EnableObjects, addr 0x3b4455c, size 0xd4, virtual false, abstract: false, final false
  inline void EnableObjects(bool on);

  static inline ::GlobalNamespace::TubeLightIntensityBehaviour* New_ctor();

  /// @brief Method OnPlayableDestroy, addr 0x3b44630, size 0xd4, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x3b441e0, size 0x37c, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr float_t const& __cordl_internal_get__blend() const;

  constexpr float_t& __cordl_internal_get__blend();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr bool const& __cordl_internal_get__disableWhenFinished() const;

  constexpr bool& __cordl_internal_get__disableWhenFinished();

  constexpr float_t const& __cordl_internal_get__endLaserIntensity() const;

  constexpr float_t& __cordl_internal_get__endLaserIntensity();

  constexpr float_t const& __cordl_internal_get__endLightIntensity() const;

  constexpr float_t& __cordl_internal_get__endLightIntensity();

  constexpr bool const& __cordl_internal_get__finished() const;

  constexpr bool& __cordl_internal_get__finished();

  constexpr float_t const& __cordl_internal_get__firstFrameLaserIntensity() const;

  constexpr float_t& __cordl_internal_get__firstFrameLaserIntensity();

  constexpr float_t const& __cordl_internal_get__firstFrameLightIntensity() const;

  constexpr float_t& __cordl_internal_get__firstFrameLightIntensity();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__noPredefinedStartValue() const;

  constexpr bool& __cordl_internal_get__noPredefinedStartValue();

  constexpr float_t const& __cordl_internal_get__originalLaserIntensity() const;

  constexpr float_t& __cordl_internal_get__originalLaserIntensity();

  constexpr float_t const& __cordl_internal_get__originalLightIntensity() const;

  constexpr float_t& __cordl_internal_get__originalLightIntensity();

  constexpr float_t const& __cordl_internal_get__startLaserIntensity() const;

  constexpr float_t& __cordl_internal_get__startLaserIntensity();

  constexpr float_t const& __cordl_internal_get__startLightIntensity() const;

  constexpr float_t& __cordl_internal_get__startLightIntensity();

  constexpr bool const& __cordl_internal_get__started() const;

  constexpr bool& __cordl_internal_get__started();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__tubeLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__tubeLights();

  constexpr void __cordl_internal_set__blend(float_t value);

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__disableWhenFinished(bool value);

  constexpr void __cordl_internal_set__endLaserIntensity(float_t value);

  constexpr void __cordl_internal_set__endLightIntensity(float_t value);

  constexpr void __cordl_internal_set__finished(bool value);

  constexpr void __cordl_internal_set__firstFrameLaserIntensity(float_t value);

  constexpr void __cordl_internal_set__firstFrameLightIntensity(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__noPredefinedStartValue(bool value);

  constexpr void __cordl_internal_set__originalLaserIntensity(float_t value);

  constexpr void __cordl_internal_set__originalLightIntensity(float_t value);

  constexpr void __cordl_internal_set__startLaserIntensity(float_t value);

  constexpr void __cordl_internal_set__startLightIntensity(float_t value);

  constexpr void __cordl_internal_set__started(bool value);

  constexpr void __cordl_internal_set__tubeLights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  /// @brief Method .ctor, addr 0x3b44704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightIntensityBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightIntensityBehaviour(TubeLightIntensityBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightIntensityBehaviour(TubeLightIntensityBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5215 };

  /// @brief Field _noPredefinedStartValue, offset: 0x10, size: 0x1, def value: None
  bool ____noPredefinedStartValue;

  /// @brief Field _startLightIntensity, offset: 0x14, size: 0x4, def value: None
  float_t ____startLightIntensity;

  /// @brief Field _startLaserIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ____startLaserIntensity;

  /// @brief Field _endLightIntensity, offset: 0x1c, size: 0x4, def value: None
  float_t ____endLightIntensity;

  /// @brief Field _endLaserIntensity, offset: 0x20, size: 0x4, def value: None
  float_t ____endLaserIntensity;

  /// @brief Field _disableWhenFinished, offset: 0x24, size: 0x1, def value: None
  bool ____disableWhenFinished;

  /// @brief Field _blend, offset: 0x28, size: 0x4, def value: None
  float_t ____blend;

  /// @brief Field _initialized, offset: 0x2c, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _originalLightIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ____originalLightIntensity;

  /// @brief Field _originalLaserIntensity, offset: 0x34, size: 0x4, def value: None
  float_t ____originalLaserIntensity;

  /// @brief Field _tubeLights, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____tubeLights;

  /// @brief Field _directionalLights, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  /// @brief Field _started, offset: 0x48, size: 0x1, def value: None
  bool ____started;

  /// @brief Field _finished, offset: 0x49, size: 0x1, def value: None
  bool ____finished;

  /// @brief Field _firstFrameLightIntensity, offset: 0x4c, size: 0x4, def value: None
  float_t ____firstFrameLightIntensity;

  /// @brief Field _firstFrameLaserIntensity, offset: 0x50, size: 0x4, def value: None
  float_t ____firstFrameLaserIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____noPredefinedStartValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____startLightIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____startLaserIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____endLightIntensity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____endLaserIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____disableWhenFinished) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____blend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____initialized) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____originalLightIntensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____originalLaserIntensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____tubeLights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____directionalLights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____started) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____finished) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____firstFrameLightIntensity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityBehaviour, ____firstFrameLaserIntensity) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityBehaviour, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityBehaviour*, "", "TubeLightIntensityBehaviour");

#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeLightBehaviour)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
struct TubeLightBehaviour_ParameterType;
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
struct TubeLightBehaviour_ParameterType;
}
namespace GlobalNamespace {
class TubeLightBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TubeLightBehaviour_ParameterType);
MARK_REF_PTR_T(::GlobalNamespace::TubeLightBehaviour);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TubeLightBehaviour/ParameterType
struct CORDL_TYPE TubeLightBehaviour_ParameterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TubeLightBehaviour_ParameterType_Unwrapped
  enum struct __TubeLightBehaviour_ParameterType_Unwrapped : int32_t {
    __E_Values = static_cast<int32_t>(0x0),
    __E_References = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TubeLightBehaviour_ParameterType_Unwrapped() const noexcept {
    return static_cast<__TubeLightBehaviour_ParameterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightBehaviour_ParameterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TubeLightBehaviour_ParameterType(int32_t value__) noexcept;

  /// @brief Field References value: I32(1)
  static ::GlobalNamespace::TubeLightBehaviour_ParameterType const References;

  /// @brief Field Values value: I32(0)
  static ::GlobalNamespace::TubeLightBehaviour_ParameterType const Values;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour_ParameterType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightBehaviour_ParameterType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightBehaviour
class CORDL_TYPE TubeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using ParameterType = ::GlobalNamespace::TubeLightBehaviour_ParameterType;

  /// @brief Field _directionalLights, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLights,
                      put = __cordl_internal_set__directionalLights)) ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>
      _directionalLights;

  /// @brief Field _firstFrameColor, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__firstFrameColor, put = __cordl_internal_set__firstFrameColor)) ::UnityEngine::Color _firstFrameColor;

  /// @brief Field _initialized, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _noPredefinedStartValue, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__noPredefinedStartValue, put = __cordl_internal_set__noPredefinedStartValue)) bool _noPredefinedStartValue;

  /// @brief Field _originalColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__originalColor, put = __cordl_internal_set__originalColor)) ::UnityEngine::Color _originalColor;

  /// @brief Field _tubeLights, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeLights,
                      put = __cordl_internal_set__tubeLights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _tubeLights;

  /// @brief Field blend, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_blend, put = __cordl_internal_set_blend)) float_t blend;

  /// @brief Field endColor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_endColor, put = __cordl_internal_set_endColor)) ::UnityW<::GlobalNamespace::ColorSO> endColor;

  /// @brief Field startColor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_startColor, put = __cordl_internal_set_startColor)) ::UnityW<::GlobalNamespace::ColorSO> startColor;

  /// @brief Field started, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) bool started;

  static inline ::GlobalNamespace::TubeLightBehaviour* New_ctor();

  /// @brief Method OnPlayableDestroy, addr 0x5776af8, size 0xd8, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x57766f8, size 0x400, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const& __cordl_internal_get__directionalLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>& __cordl_internal_get__directionalLights();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__firstFrameColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__firstFrameColor();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__noPredefinedStartValue() const;

  constexpr bool& __cordl_internal_get__noPredefinedStartValue();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__originalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__originalColor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__tubeLights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__tubeLights();

  constexpr float_t const& __cordl_internal_get_blend() const;

  constexpr float_t& __cordl_internal_get_blend();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get_endColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get_endColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get_startColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get_startColor();

  constexpr bool const& __cordl_internal_get_started() const;

  constexpr bool& __cordl_internal_get_started();

  constexpr void __cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value);

  constexpr void __cordl_internal_set__firstFrameColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__noPredefinedStartValue(bool value);

  constexpr void __cordl_internal_set__originalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__tubeLights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set_blend(float_t value);

  constexpr void __cordl_internal_set_endColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set_startColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set_started(bool value);

  /// @brief Method .ctor, addr 0x5776bd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightBehaviour(TubeLightBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightBehaviour(TubeLightBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6787 };

  /// @brief Field _noPredefinedStartValue, offset: 0x10, size: 0x1, def value: None
  bool ____noPredefinedStartValue;

  /// @brief Field startColor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ___startColor;

  /// @brief Field endColor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ___endColor;

  /// @brief Field blend, offset: 0x28, size: 0x4, def value: None
  float_t ___blend;

  /// @brief Field _initialized, offset: 0x2c, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _originalColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____originalColor;

  /// @brief Field _tubeLights, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____tubeLights;

  /// @brief Field _directionalLights, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> ____directionalLights;

  /// @brief Field started, offset: 0x50, size: 0x1, def value: None
  bool ___started;

  /// @brief Field _firstFrameColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____firstFrameColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____noPredefinedStartValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ___startColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ___endColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ___blend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____initialized) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____originalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____tubeLights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____directionalLights) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ___started) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightBehaviour, ____firstFrameColor) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightBehaviour, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightBehaviour_ParameterType, "", "TubeLightBehaviour/ParameterType");
NEED_NO_BOX(::GlobalNamespace::TubeLightBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightBehaviour*, "", "TubeLightBehaviour");

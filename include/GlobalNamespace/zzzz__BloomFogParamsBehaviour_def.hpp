#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogParamsBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomFogParamsBehaviour)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogSO;
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
class BloomFogParamsBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogParamsBehaviour
class CORDL_TYPE BloomFogParamsBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _blend, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__blend, put = __cordl_internal_set__blend)) float_t _blend;

  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bloomFogParams, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFogParams, put = __cordl_internal_set__bloomFogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> _bloomFogParams;

  /// @brief Field _initialized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  static inline ::GlobalNamespace::BloomFogParamsBehaviour* New_ctor();

  /// @brief Method OnPlayableDestroy, addr 0x3b3420c, size 0x90, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x3b340b8, size 0x154, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr float_t const& __cordl_internal_get__blend() const;

  constexpr float_t& __cordl_internal_get__blend();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get__bloomFogParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get__bloomFogParams();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr void __cordl_internal_set__blend(float_t value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__bloomFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  /// @brief Method .ctor, addr 0x3b3429c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogParamsBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogParamsBehaviour(BloomFogParamsBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogParamsBehaviour(BloomFogParamsBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5197 };

  /// @brief Field _bloomFogParams, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ____bloomFogParams;

  /// @brief Field _blend, offset: 0x18, size: 0x4, def value: None
  float_t ____blend;

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____bloomFogParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____blend) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____bloomFog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____initialized) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsBehaviour, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsBehaviour*, "", "BloomFogParamsBehaviour");

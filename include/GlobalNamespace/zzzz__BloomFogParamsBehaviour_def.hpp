#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomFogParamsBehaviour)
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class BloomFogSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsBehaviour);
// Type: ::BloomFogParamsBehaviour
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6062))
// CS Name: ::BloomFogParamsBehaviour*
class CORDL_TYPE BloomFogParamsBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _bloomFogParams, offset 0x10, size 0x8
  __declspec(property(get = __get__bloomFogParams, put = __set__bloomFogParams))::GlobalNamespace::BloomFogEnvironmentParams* _bloomFogParams;

  /// @brief Field _blend, offset 0x18, size 0x4
  __declspec(property(get = __get__blend, put = __set__blend)) float_t _blend;

  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __get__bloomFog, put = __set__bloomFog))::GlobalNamespace::BloomFogSO* _bloomFog;

  /// @brief Field _initialized, offset 0x28, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& __get__bloomFogParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& __get__bloomFogParams() const;

  constexpr void __set__bloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value);

  constexpr float_t& __get__blend();

  constexpr float_t const& __get__blend() const;

  constexpr void __set__blend(float_t value);

  constexpr ::GlobalNamespace::BloomFogSO*& __get__bloomFog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& __get__bloomFog() const;

  constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  /// @brief Method ProcessFrame addr 0x21c3844 size 0x158 virtual true final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method OnPlayableDestroy addr 0x21c399c size 0x90 virtual true final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  static inline ::GlobalNamespace::BloomFogParamsBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x21c3a2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogParamsBehaviour(BloomFogParamsBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogParamsBehaviour(BloomFogParamsBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogParamsBehaviour();

public:
  /// @brief Field _bloomFogParams, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogEnvironmentParams* ____bloomFogParams;

  /// @brief Field _blend, offset: 0x18, size: 0x4, def value: None
  float_t ____blend;

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BloomFogSO* ____bloomFog;

  /// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsBehaviour, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____bloomFogParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____blend) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____bloomFog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogParamsBehaviour, ____initialized) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsBehaviour*, "", "BloomFogParamsBehaviour");

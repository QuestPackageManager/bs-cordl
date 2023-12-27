#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleControlPlayable)
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ParticleControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ParticleControlPlayable);
// Type: UnityEngine.Timeline::ParticleControlPlayable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13907))
// CS Name: ::UnityEngine.Timeline::ParticleControlPlayable*
class CORDL_TYPE ParticleControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_LastPlayableTime, offset 0x10, size 0x4
  __declspec(property(get = __get_m_LastPlayableTime, put = __set_m_LastPlayableTime)) float_t m_LastPlayableTime;

  /// @brief Field m_LastParticleTime, offset 0x14, size 0x4
  __declspec(property(get = __get_m_LastParticleTime, put = __set_m_LastParticleTime)) float_t m_LastParticleTime;

  /// @brief Field m_RandomSeed, offset 0x18, size 0x4
  __declspec(property(get = __get_m_RandomSeed, put = __set_m_RandomSeed)) uint32_t m_RandomSeed;

  /// @brief Field <particleSystem>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__particleSystem_k__BackingField, put = __set__particleSystem_k__BackingField))::UnityEngine::ParticleSystem* _particleSystem_k__BackingField;

  __declspec(property(get = get_particleSystem, put = set_particleSystem))::UnityEngine::ParticleSystem* particleSystem;

  constexpr float_t& __get_m_LastPlayableTime();

  constexpr float_t const& __get_m_LastPlayableTime() const;

  constexpr void __set_m_LastPlayableTime(float_t value);

  constexpr float_t& __get_m_LastParticleTime();

  constexpr float_t const& __get_m_LastParticleTime() const;

  constexpr void __set_m_LastParticleTime(float_t value);

  constexpr uint32_t& __get_m_RandomSeed();

  constexpr uint32_t const& __get_m_RandomSeed() const;

  constexpr void __set_m_RandomSeed(uint32_t value);

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem_k__BackingField() const;

  constexpr void __set__particleSystem_k__BackingField(::UnityEngine::ParticleSystem* value);

  /// @brief Method Create addr 0x2c6c478 size 0x144 virtual false final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                     ::UnityEngine::ParticleSystem* component, uint32_t randomSeed);

  /// @brief Method get_particleSystem addr 0x2c6c63c size 0x8 virtual false final false
  inline ::UnityEngine::ParticleSystem* get_particleSystem();

  /// @brief Method set_particleSystem addr 0x2c6c644 size 0x8 virtual false final false
  inline void set_particleSystem(::UnityEngine::ParticleSystem* value);

  /// @brief Method Initialize addr 0x2c6c5bc size 0x80 virtual false final false
  inline void Initialize(::UnityEngine::ParticleSystem* ps, uint32_t randomSeed);

  /// @brief Method SetRandomSeed addr 0x2c6c64c size 0x13c virtual false final false
  static inline void SetRandomSeed(::UnityEngine::ParticleSystem* particleSystem, uint32_t randomSeed);

  /// @brief Method PrepareFrame addr 0x2c6c788 size 0x1b4 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data);

  /// @brief Method OnBehaviourPlay addr 0x2c6ca00 size 0xc virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause addr 0x2c6ca0c size 0xc virtual true final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method Simulate addr 0x2c6c93c size 0xc4 virtual false final false
  inline void Simulate(float_t time, bool restart);

  static inline ::UnityEngine::Timeline::ParticleControlPlayable* New_ctor();

  /// @brief Method .ctor addr 0x2c6ca18 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleControlPlayable(ParticleControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleControlPlayable(ParticleControlPlayable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleControlPlayable();

public:
  /// @brief Field m_LastPlayableTime, offset: 0x10, size: 0x4, def value: None
  float_t ___m_LastPlayableTime;

  /// @brief Field m_LastParticleTime, offset: 0x14, size: 0x4, def value: None
  float_t ___m_LastParticleTime;

  /// @brief Field m_RandomSeed, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_RandomSeed;

  /// @brief Field <particleSystem>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem_k__BackingField;

  /// @brief Field kUnsetTime offset 0xffffffff size 0x4
  static constexpr float_t kUnsetTime{ 340282350000000000000000000000000000000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ParticleControlPlayable, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ParticleControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ParticleControlPlayable*, "UnityEngine.Timeline", "ParticleControlPlayable");

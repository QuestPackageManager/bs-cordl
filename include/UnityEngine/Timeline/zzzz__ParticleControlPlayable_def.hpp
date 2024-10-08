#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ParticleControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleControlPlayable)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ParticleControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ParticleControlPlayable);
// Type: UnityEngine.Timeline::ParticleControlPlayable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ParticleControlPlayable*
class CORDL_TYPE ParticleControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field <particleSystem>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem_k__BackingField, put = __cordl_internal_set__particleSystem_k__BackingField)) ::UnityW<::UnityEngine::ParticleSystem>
      _particleSystem_k__BackingField;

  /// @brief Field m_LastParticleTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastParticleTime, put = __cordl_internal_set_m_LastParticleTime)) float_t m_LastParticleTime;

  /// @brief Field m_LastPlayableTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastPlayableTime, put = __cordl_internal_set_m_LastPlayableTime)) float_t m_LastPlayableTime;

  /// @brief Field m_RandomSeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RandomSeed, put = __cordl_internal_set_m_RandomSeed)) uint32_t m_RandomSeed;

  __declspec(property(get = get_particleSystem, put = set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> particleSystem;

  /// @brief Method Create, addr 0x47b1598, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                     ::UnityEngine::ParticleSystem* component, uint32_t randomSeed);

  /// @brief Method Initialize, addr 0x47b16d8, size 0x80, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::ParticleSystem* ps, uint32_t randomSeed);

  static inline ::UnityEngine::Timeline::ParticleControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x47b1b28, size 0xc, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x47b1b1c, size 0xc, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame, addr 0x47b18a4, size 0x1b4, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data);

  /// @brief Method SetRandomSeed, addr 0x47b1768, size 0x13c, virtual false, abstract: false, final false
  static inline void SetRandomSeed(::UnityEngine::ParticleSystem* particleSystem, uint32_t randomSeed);

  /// @brief Method Simulate, addr 0x47b1a58, size 0xc4, virtual false, abstract: false, final false
  inline void Simulate(float_t time, bool restart);

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem_k__BackingField();

  constexpr float_t const& __cordl_internal_get_m_LastParticleTime() const;

  constexpr float_t& __cordl_internal_get_m_LastParticleTime();

  constexpr float_t const& __cordl_internal_get_m_LastPlayableTime() const;

  constexpr float_t& __cordl_internal_get_m_LastPlayableTime();

  constexpr uint32_t const& __cordl_internal_get_m_RandomSeed() const;

  constexpr uint32_t& __cordl_internal_get_m_RandomSeed();

  constexpr void __cordl_internal_set__particleSystem_k__BackingField(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_m_LastParticleTime(float_t value);

  constexpr void __cordl_internal_set_m_LastPlayableTime(float_t value);

  constexpr void __cordl_internal_set_m_RandomSeed(uint32_t value);

  /// @brief Method .ctor, addr 0x47b1b34, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_particleSystem, addr 0x47b1758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ParticleSystem> get_particleSystem();

  /// @brief Method set_particleSystem, addr 0x47b1760, size 0x8, virtual false, abstract: false, final false
  inline void set_particleSystem(::UnityEngine::ParticleSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleControlPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleControlPlayable(ParticleControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleControlPlayable(ParticleControlPlayable const&) = delete;

  /// @brief Field m_LastPlayableTime, offset: 0x10, size: 0x4, def value: None
  float_t ___m_LastPlayableTime;

  /// @brief Field m_LastParticleTime, offset: 0x14, size: 0x4, def value: None
  float_t ___m_LastParticleTime;

  /// @brief Field m_RandomSeed, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_RandomSeed;

  /// @brief Field <particleSystem>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15822 };

  /// @brief Field kUnsetTime offset 0xffffffff size 0x4
  static constexpr float_t kUnsetTime{ 340282350000000000000000000000000000000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ParticleControlPlayable, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ParticleControlPlayable, ___m_LastPlayableTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ParticleControlPlayable, ___m_LastParticleTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ParticleControlPlayable, ___m_RandomSeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ParticleControlPlayable, ____particleSystem_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ParticleControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ParticleControlPlayable*, "UnityEngine.Timeline", "ParticleControlPlayable");

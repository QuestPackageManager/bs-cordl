#pragma once
// IWYU pragma private; include "UnityEngine\VFX\LoopAndDelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopAndDelay)
namespace UnityEngine::VFX {
class LoopAndDelay_InputProperties;
}
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class LoopAndDelay;
}
namespace UnityEngine::VFX {
class LoopAndDelay_InputProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::LoopAndDelay*);
MARK_REF_T(::UnityEngine::VFX::LoopAndDelay_InputProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::LoopAndDelay*, "UnityEngine.VFX", "LoopAndDelay");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::LoopAndDelay_InputProperties*, "UnityEngine.VFX", "LoopAndDelay/InputProperties");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.LoopAndDelay/InputProperties
class CORDL_TYPE LoopAndDelay_InputProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field Delay, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Delay, put = __cordl_internal_set_Delay)) float_t Delay;

  /// @brief Field LoopCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LoopCount, put = __cordl_internal_set_LoopCount)) int32_t LoopCount;

  /// @brief Field LoopDuration, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LoopDuration, put = __cordl_internal_set_LoopDuration)) float_t LoopDuration;

  static inline ::UnityEngine::VFX::LoopAndDelay_InputProperties* New_ctor();

  constexpr float_t const& __cordl_internal_get_Delay() const;

  constexpr float_t& __cordl_internal_get_Delay();

  constexpr int32_t const& __cordl_internal_get_LoopCount() const;

  constexpr int32_t& __cordl_internal_get_LoopCount();

  constexpr float_t const& __cordl_internal_get_LoopDuration() const;

  constexpr float_t& __cordl_internal_get_LoopDuration();

  constexpr void __cordl_internal_set_Delay(float_t value);

  constexpr void __cordl_internal_set_LoopCount(int32_t value);

  constexpr void __cordl_internal_set_LoopDuration(float_t value);

  /// @brief Method .ctor, addr 0x69d1bfc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoopAndDelay_InputProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoopAndDelay_InputProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoopAndDelay_InputProperties(LoopAndDelay_InputProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoopAndDelay_InputProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoopAndDelay_InputProperties(LoopAndDelay_InputProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19923 };

  /// @brief Field LoopCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___LoopCount;

  /// @brief Field LoopDuration, offset: 0x14, size: 0x4, def value: None
  float_t ___LoopDuration;

  /// @brief Field Delay, offset: 0x18, size: 0x4, def value: None
  float_t ___Delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay_InputProperties, ___LoopCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay_InputProperties, ___LoopDuration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay_InputProperties, ___Delay) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::LoopAndDelay_InputProperties) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.VFXSpawnerCallbacks
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.LoopAndDelay
class CORDL_TYPE LoopAndDelay : public ::UnityEngine::VFX::VFXSpawnerCallbacks {
public:
  // Declarations
  using InputProperties = ::UnityEngine::VFX::LoopAndDelay_InputProperties;

  /// @brief Field delayPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_delayPropertyID, put = setStaticF_delayPropertyID)) int32_t delayPropertyID;

  /// @brief Field loopCountPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_loopCountPropertyID, put = setStaticF_loopCountPropertyID)) int32_t loopCountPropertyID;

  /// @brief Field loopDurationPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_loopDurationPropertyID, put = setStaticF_loopDurationPropertyID)) int32_t loopDurationPropertyID;

  /// @brief Field m_LoopCurrentIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LoopCurrentIndex, put = __cordl_internal_set_m_LoopCurrentIndex)) int32_t m_LoopCurrentIndex;

  /// @brief Field m_LoopMaxCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LoopMaxCount, put = __cordl_internal_set_m_LoopMaxCount)) int32_t m_LoopMaxCount;

  /// @brief Field m_WaitingForTotalTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WaitingForTotalTime, put = __cordl_internal_set_m_WaitingForTotalTime)) float_t m_WaitingForTotalTime;

  static inline ::UnityEngine::VFX::LoopAndDelay* New_ctor();

  /// @brief Method OnPlay, addr 0x69d18ec, size 0xcc, virtual true, abstract: false, final true
  inline void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnStop, addr 0x69d1b10, size 0xc, virtual true, abstract: false, final true
  inline void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnUpdate, addr 0x69d19b8, size 0x158, virtual true, abstract: false, final true
  inline void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  constexpr int32_t const& __cordl_internal_get_m_LoopCurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LoopCurrentIndex();

  constexpr int32_t const& __cordl_internal_get_m_LoopMaxCount() const;

  constexpr int32_t& __cordl_internal_get_m_LoopMaxCount();

  constexpr float_t const& __cordl_internal_get_m_WaitingForTotalTime() const;

  constexpr float_t& __cordl_internal_get_m_WaitingForTotalTime();

  constexpr void __cordl_internal_set_m_LoopCurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LoopMaxCount(int32_t value);

  constexpr void __cordl_internal_set_m_WaitingForTotalTime(float_t value);

  /// @brief Method .ctor, addr 0x69d1b1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_delayPropertyID();

  static inline int32_t getStaticF_loopCountPropertyID();

  static inline int32_t getStaticF_loopDurationPropertyID();

  static inline void setStaticF_delayPropertyID(int32_t value);

  static inline void setStaticF_loopCountPropertyID(int32_t value);

  static inline void setStaticF_loopDurationPropertyID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoopAndDelay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoopAndDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoopAndDelay(LoopAndDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoopAndDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoopAndDelay(LoopAndDelay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19924 };

  /// @brief Field m_LoopMaxCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_LoopMaxCount;

  /// @brief Field m_LoopCurrentIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_LoopCurrentIndex;

  /// @brief Field m_WaitingForTotalTime, offset: 0x20, size: 0x4, def value: None
  float_t ___m_WaitingForTotalTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay, ___m_LoopMaxCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay, ___m_LoopCurrentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::LoopAndDelay, ___m_WaitingForTotalTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::LoopAndDelay) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX

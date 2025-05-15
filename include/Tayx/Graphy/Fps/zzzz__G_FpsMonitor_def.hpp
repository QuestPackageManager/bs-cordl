#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsMonitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsMonitor)
namespace System {
template <typename T> class Comparison_1;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor___c;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor___c;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsMonitor);
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsMonitor___c);
// Dependencies System.Object
namespace Tayx::Graphy::Fps {
// Is value type: false
// CS Name: Tayx.Graphy.Fps.G_FpsMonitor/<>c
class CORDL_TYPE G_FpsMonitor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Tayx::Graphy::Fps::G_FpsMonitor___c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Comparison_1<int16_t>* __9__25_0;

  static inline ::Tayx::Graphy::Fps::G_FpsMonitor___c* New_ctor();

  /// @brief Method <Update>b__25_0, addr 0x44d44a8, size 0x20, virtual false, abstract: false, final false
  inline int32_t _Update_b__25_0(int16_t x, int16_t y);

  /// @brief Method .ctor, addr 0x44d44a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Tayx::Graphy::Fps::G_FpsMonitor___c* getStaticF___9();

  static inline ::System::Comparison_1<int16_t>* getStaticF___9__25_0();

  static inline void setStaticF___9(::Tayx::Graphy::Fps::G_FpsMonitor___c* value);

  static inline void setStaticF___9__25_0(::System::Comparison_1<int16_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsMonitor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsMonitor___c(G_FpsMonitor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsMonitor___c(G_FpsMonitor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsMonitor___c, 0x10>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
// Dependencies UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Fps {
// Is value type: false
// CS Name: Tayx.Graphy.Fps.G_FpsMonitor
class CORDL_TYPE G_FpsMonitor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::Tayx::Graphy::Fps::G_FpsMonitor___c;

  __declspec(property(get = get_AverageFPS, put = set_AverageFPS)) int16_t AverageFPS;

  __declspec(property(get = get_CurrentFPS, put = set_CurrentFPS)) int16_t CurrentFPS;

  __declspec(property(get = get_OnePercentFPS, put = set_OnePercentFPS)) int16_t OnePercentFPS;

  __declspec(property(get = get_Zero1PercentFps, put = set_Zero1PercentFps)) int16_t Zero1PercentFps;

  /// @brief Field <AverageFPS>k__BackingField, offset 0x42, size 0x2
  __declspec(property(get = __cordl_internal_get__AverageFPS_k__BackingField, put = __cordl_internal_set__AverageFPS_k__BackingField)) int16_t _AverageFPS_k__BackingField;

  /// @brief Field <CurrentFPS>k__BackingField, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get__CurrentFPS_k__BackingField, put = __cordl_internal_set__CurrentFPS_k__BackingField)) int16_t _CurrentFPS_k__BackingField;

  /// @brief Field <OnePercentFPS>k__BackingField, offset 0x44, size 0x2
  __declspec(property(get = __cordl_internal_get__OnePercentFPS_k__BackingField, put = __cordl_internal_set__OnePercentFPS_k__BackingField)) int16_t _OnePercentFPS_k__BackingField;

  /// @brief Field <Zero1PercentFps>k__BackingField, offset 0x46, size 0x2
  __declspec(property(get = __cordl_internal_get__Zero1PercentFps_k__BackingField, put = __cordl_internal_set__Zero1PercentFps_k__BackingField)) int16_t _Zero1PercentFps_k__BackingField;

  /// @brief Field m_fpsSamples, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsSamples, put = __cordl_internal_set_m_fpsSamples)) ::ArrayW<int16_t, ::Array<int16_t>*> m_fpsSamples;

  /// @brief Field m_fpsSamplesCapacity, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesCapacity, put = __cordl_internal_set_m_fpsSamplesCapacity)) int16_t m_fpsSamplesCapacity;

  /// @brief Field m_fpsSamplesCount, offset 0x36, size 0x2
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesCount, put = __cordl_internal_set_m_fpsSamplesCount)) int16_t m_fpsSamplesCount;

  /// @brief Field m_fpsSamplesSorted, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesSorted, put = __cordl_internal_set_m_fpsSamplesSorted)) ::ArrayW<int16_t, ::Array<int16_t>*> m_fpsSamplesSorted;

  /// @brief Field m_indexSample, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get_m_indexSample, put = __cordl_internal_set_m_indexSample)) int16_t m_indexSample;

  /// @brief Field m_onePercentSamples, offset 0x32, size 0x2
  __declspec(property(get = __cordl_internal_get_m_onePercentSamples, put = __cordl_internal_set_m_onePercentSamples)) int16_t m_onePercentSamples;

  /// @brief Field m_unscaledDeltaTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_unscaledDeltaTime, put = __cordl_internal_set_m_unscaledDeltaTime)) float_t m_unscaledDeltaTime;

  /// @brief Field m_zero1PercentSamples, offset 0x34, size 0x2
  __declspec(property(get = __cordl_internal_get_m_zero1PercentSamples, put = __cordl_internal_set_m_zero1PercentSamples)) int16_t m_zero1PercentSamples;

  /// @brief Method Awake, addr 0x44d4090, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x44cec0c, size 0xa4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsMonitor* New_ctor();

  /// @brief Method Update, addr 0x44d4094, size 0x394, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x44d3dd0, size 0x40, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr int16_t const& __cordl_internal_get__AverageFPS_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__AverageFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__CurrentFPS_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__CurrentFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__OnePercentFPS_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__OnePercentFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__Zero1PercentFps_k__BackingField() const;

  constexpr int16_t& __cordl_internal_get__Zero1PercentFps_k__BackingField();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_fpsSamples() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_fpsSamples();

  constexpr int16_t const& __cordl_internal_get_m_fpsSamplesCapacity() const;

  constexpr int16_t& __cordl_internal_get_m_fpsSamplesCapacity();

  constexpr int16_t const& __cordl_internal_get_m_fpsSamplesCount() const;

  constexpr int16_t& __cordl_internal_get_m_fpsSamplesCount();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_fpsSamplesSorted() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_fpsSamplesSorted();

  constexpr int16_t const& __cordl_internal_get_m_indexSample() const;

  constexpr int16_t& __cordl_internal_get_m_indexSample();

  constexpr int16_t const& __cordl_internal_get_m_onePercentSamples() const;

  constexpr int16_t& __cordl_internal_get_m_onePercentSamples();

  constexpr float_t const& __cordl_internal_get_m_unscaledDeltaTime() const;

  constexpr float_t& __cordl_internal_get_m_unscaledDeltaTime();

  constexpr int16_t const& __cordl_internal_get_m_zero1PercentSamples() const;

  constexpr int16_t& __cordl_internal_get_m_zero1PercentSamples();

  constexpr void __cordl_internal_set__AverageFPS_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set__CurrentFPS_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set__OnePercentFPS_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set__Zero1PercentFps_k__BackingField(int16_t value);

  constexpr void __cordl_internal_set_m_fpsSamples(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_m_fpsSamplesCapacity(int16_t value);

  constexpr void __cordl_internal_set_m_fpsSamplesCount(int16_t value);

  constexpr void __cordl_internal_set_m_fpsSamplesSorted(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_m_indexSample(int16_t value);

  constexpr void __cordl_internal_set_m_onePercentSamples(int16_t value);

  constexpr void __cordl_internal_set_m_unscaledDeltaTime(float_t value);

  constexpr void __cordl_internal_set_m_zero1PercentSamples(int16_t value);

  /// @brief Method .ctor, addr 0x44d4428, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AverageFPS, addr 0x44d4060, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_AverageFPS();

  /// @brief Method get_CurrentFPS, addr 0x44d4050, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_CurrentFPS();

  /// @brief Method get_OnePercentFPS, addr 0x44d4070, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_OnePercentFPS();

  /// @brief Method get_Zero1PercentFps, addr 0x44d4080, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_Zero1PercentFps();

  /// @brief Method set_AverageFPS, addr 0x44d4068, size 0x8, virtual false, abstract: false, final false
  inline void set_AverageFPS(int16_t value);

  /// @brief Method set_CurrentFPS, addr 0x44d4058, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentFPS(int16_t value);

  /// @brief Method set_OnePercentFPS, addr 0x44d4078, size 0x8, virtual false, abstract: false, final false
  inline void set_OnePercentFPS(int16_t value);

  /// @brief Method set_Zero1PercentFps, addr 0x44d4088, size 0x8, virtual false, abstract: false, final false
  inline void set_Zero1PercentFps(int16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsMonitor(G_FpsMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsMonitor(G_FpsMonitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17239 };

  /// @brief Field m_fpsSamples, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_fpsSamples;

  /// @brief Field m_fpsSamplesSorted, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_fpsSamplesSorted;

  /// @brief Field m_fpsSamplesCapacity, offset: 0x30, size: 0x2, def value: None
  int16_t ___m_fpsSamplesCapacity;

  /// @brief Field m_onePercentSamples, offset: 0x32, size: 0x2, def value: None
  int16_t ___m_onePercentSamples;

  /// @brief Field m_zero1PercentSamples, offset: 0x34, size: 0x2, def value: None
  int16_t ___m_zero1PercentSamples;

  /// @brief Field m_fpsSamplesCount, offset: 0x36, size: 0x2, def value: None
  int16_t ___m_fpsSamplesCount;

  /// @brief Field m_indexSample, offset: 0x38, size: 0x2, def value: None
  int16_t ___m_indexSample;

  /// @brief Field m_unscaledDeltaTime, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_unscaledDeltaTime;

  /// @brief Field <CurrentFPS>k__BackingField, offset: 0x40, size: 0x2, def value: None
  int16_t ____CurrentFPS_k__BackingField;

  /// @brief Field <AverageFPS>k__BackingField, offset: 0x42, size: 0x2, def value: None
  int16_t ____AverageFPS_k__BackingField;

  /// @brief Field <OnePercentFPS>k__BackingField, offset: 0x44, size: 0x2, def value: None
  int16_t ____OnePercentFPS_k__BackingField;

  /// @brief Field <Zero1PercentFps>k__BackingField, offset: 0x46, size: 0x2, def value: None
  int16_t ____Zero1PercentFps_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamples) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesSorted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesCapacity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_onePercentSamples) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_zero1PercentSamples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesCount) == 0x36, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_indexSample) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_unscaledDeltaTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____CurrentFPS_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____AverageFPS_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____OnePercentFPS_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____Zero1PercentFps_k__BackingField) == 0x46, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsMonitor, 0x48>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsMonitor*, "Tayx.Graphy.Fps", "G_FpsMonitor");
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsMonitor___c);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsMonitor___c*, "Tayx.Graphy.Fps", "G_FpsMonitor/<>c");

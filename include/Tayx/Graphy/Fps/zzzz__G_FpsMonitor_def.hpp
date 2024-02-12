#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_FpsMonitor)
namespace System {
template <typename T> class Comparison_1;
}
namespace Tayx::Graphy::Fps {
class __G_FpsMonitor____c;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Fps {
class __G_FpsMonitor____c;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsMonitor);
MARK_REF_PTR_T(::Tayx::Graphy::Fps::__G_FpsMonitor____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14956))
// CS Name: ::G_FpsMonitor::<>c*
class CORDL_TYPE __G_FpsMonitor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Tayx::Graphy::Fps::__G_FpsMonitor____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Comparison_1<int16_t>* __9__25_0;

  static inline void setStaticF___9(::Tayx::Graphy::Fps::__G_FpsMonitor____c* value);

  static inline ::Tayx::Graphy::Fps::__G_FpsMonitor____c* getStaticF___9();

  static inline void setStaticF___9__25_0(::System::Comparison_1<int16_t>* value);

  static inline ::System::Comparison_1<int16_t>* getStaticF___9__25_0();

  static inline ::Tayx::Graphy::Fps::__G_FpsMonitor____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a0dbd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Update>b__25_0, addr 0x2a0dbd8, size 0x20, virtual false, abstract: false, final false
  inline int32_t _Update_b__25_0(int16_t x, int16_t y);

  // Ctor Parameters [CppParam { name: "", ty: "__G_FpsMonitor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __G_FpsMonitor____c(__G_FpsMonitor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__G_FpsMonitor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __G_FpsMonitor____c(__G_FpsMonitor____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __G_FpsMonitor____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::__G_FpsMonitor____c, 0x10>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
// Type: Tayx.Graphy.Fps::G_FpsMonitor
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14957))
// CS Name: ::Tayx.Graphy.Fps::G_FpsMonitor*
class CORDL_TYPE G_FpsMonitor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::Tayx::Graphy::Fps::__G_FpsMonitor____c;

  /// @brief Field m_fpsSamples, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsSamples, put = __cordl_internal_set_m_fpsSamples))::ArrayW<int16_t, ::Array<int16_t>*> m_fpsSamples;

  /// @brief Field m_fpsSamplesSorted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesSorted, put = __cordl_internal_set_m_fpsSamplesSorted))::ArrayW<int16_t, ::Array<int16_t>*> m_fpsSamplesSorted;

  /// @brief Field m_fpsSamplesCapacity, offset 0x28, size 0x2
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesCapacity, put = __cordl_internal_set_m_fpsSamplesCapacity)) int16_t m_fpsSamplesCapacity;

  /// @brief Field m_onePercentSamples, offset 0x2a, size 0x2
  __declspec(property(get = __cordl_internal_get_m_onePercentSamples, put = __cordl_internal_set_m_onePercentSamples)) int16_t m_onePercentSamples;

  /// @brief Field m_zero1PercentSamples, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get_m_zero1PercentSamples, put = __cordl_internal_set_m_zero1PercentSamples)) int16_t m_zero1PercentSamples;

  /// @brief Field m_fpsSamplesCount, offset 0x2e, size 0x2
  __declspec(property(get = __cordl_internal_get_m_fpsSamplesCount, put = __cordl_internal_set_m_fpsSamplesCount)) int16_t m_fpsSamplesCount;

  /// @brief Field m_indexSample, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get_m_indexSample, put = __cordl_internal_set_m_indexSample)) int16_t m_indexSample;

  /// @brief Field m_unscaledDeltaTime, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_unscaledDeltaTime, put = __cordl_internal_set_m_unscaledDeltaTime)) float_t m_unscaledDeltaTime;

  /// @brief Field <CurrentFPS>k__BackingField, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get__CurrentFPS_k__BackingField, put = __cordl_internal_set__CurrentFPS_k__BackingField)) int16_t _CurrentFPS_k__BackingField;

  /// @brief Field <AverageFPS>k__BackingField, offset 0x3a, size 0x2
  __declspec(property(get = __cordl_internal_get__AverageFPS_k__BackingField, put = __cordl_internal_set__AverageFPS_k__BackingField)) int16_t _AverageFPS_k__BackingField;

  /// @brief Field <OnePercentFPS>k__BackingField, offset 0x3c, size 0x2
  __declspec(property(get = __cordl_internal_get__OnePercentFPS_k__BackingField, put = __cordl_internal_set__OnePercentFPS_k__BackingField)) int16_t _OnePercentFPS_k__BackingField;

  /// @brief Field <Zero1PercentFps>k__BackingField, offset 0x3e, size 0x2
  __declspec(property(get = __cordl_internal_get__Zero1PercentFps_k__BackingField, put = __cordl_internal_set__Zero1PercentFps_k__BackingField)) int16_t _Zero1PercentFps_k__BackingField;

  __declspec(property(get = get_CurrentFPS, put = set_CurrentFPS)) int16_t CurrentFPS;

  __declspec(property(get = get_AverageFPS, put = set_AverageFPS)) int16_t AverageFPS;

  __declspec(property(get = get_OnePercentFPS, put = set_OnePercentFPS)) int16_t OnePercentFPS;

  __declspec(property(get = get_Zero1PercentFps, put = set_Zero1PercentFps)) int16_t Zero1PercentFps;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_fpsSamples();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_fpsSamples() const;

  constexpr void __cordl_internal_set_m_fpsSamples(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_m_fpsSamplesSorted();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_m_fpsSamplesSorted() const;

  constexpr void __cordl_internal_set_m_fpsSamplesSorted(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr int16_t& __cordl_internal_get_m_fpsSamplesCapacity();

  constexpr int16_t const& __cordl_internal_get_m_fpsSamplesCapacity() const;

  constexpr void __cordl_internal_set_m_fpsSamplesCapacity(int16_t value);

  constexpr int16_t& __cordl_internal_get_m_onePercentSamples();

  constexpr int16_t const& __cordl_internal_get_m_onePercentSamples() const;

  constexpr void __cordl_internal_set_m_onePercentSamples(int16_t value);

  constexpr int16_t& __cordl_internal_get_m_zero1PercentSamples();

  constexpr int16_t const& __cordl_internal_get_m_zero1PercentSamples() const;

  constexpr void __cordl_internal_set_m_zero1PercentSamples(int16_t value);

  constexpr int16_t& __cordl_internal_get_m_fpsSamplesCount();

  constexpr int16_t const& __cordl_internal_get_m_fpsSamplesCount() const;

  constexpr void __cordl_internal_set_m_fpsSamplesCount(int16_t value);

  constexpr int16_t& __cordl_internal_get_m_indexSample();

  constexpr int16_t const& __cordl_internal_get_m_indexSample() const;

  constexpr void __cordl_internal_set_m_indexSample(int16_t value);

  constexpr float_t& __cordl_internal_get_m_unscaledDeltaTime();

  constexpr float_t const& __cordl_internal_get_m_unscaledDeltaTime() const;

  constexpr void __cordl_internal_set_m_unscaledDeltaTime(float_t value);

  constexpr int16_t& __cordl_internal_get__CurrentFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__CurrentFPS_k__BackingField() const;

  constexpr void __cordl_internal_set__CurrentFPS_k__BackingField(int16_t value);

  constexpr int16_t& __cordl_internal_get__AverageFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__AverageFPS_k__BackingField() const;

  constexpr void __cordl_internal_set__AverageFPS_k__BackingField(int16_t value);

  constexpr int16_t& __cordl_internal_get__OnePercentFPS_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__OnePercentFPS_k__BackingField() const;

  constexpr void __cordl_internal_set__OnePercentFPS_k__BackingField(int16_t value);

  constexpr int16_t& __cordl_internal_get__Zero1PercentFps_k__BackingField();

  constexpr int16_t const& __cordl_internal_get__Zero1PercentFps_k__BackingField() const;

  constexpr void __cordl_internal_set__Zero1PercentFps_k__BackingField(int16_t value);

  /// @brief Method get_CurrentFPS, addr 0x2a0d77c, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_CurrentFPS();

  /// @brief Method set_CurrentFPS, addr 0x2a0d784, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentFPS(int16_t value);

  /// @brief Method get_AverageFPS, addr 0x2a0d78c, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_AverageFPS();

  /// @brief Method set_AverageFPS, addr 0x2a0d794, size 0x8, virtual false, abstract: false, final false
  inline void set_AverageFPS(int16_t value);

  /// @brief Method get_OnePercentFPS, addr 0x2a0d79c, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_OnePercentFPS();

  /// @brief Method set_OnePercentFPS, addr 0x2a0d7a4, size 0x8, virtual false, abstract: false, final false
  inline void set_OnePercentFPS(int16_t value);

  /// @brief Method get_Zero1PercentFps, addr 0x2a0d7ac, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_Zero1PercentFps();

  /// @brief Method set_Zero1PercentFps, addr 0x2a0d7b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Zero1PercentFps(int16_t value);

  /// @brief Method Awake, addr 0x2a0d7bc, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x2a0d7c0, size 0x390, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateParameters, addr 0x2a0d4f4, size 0x40, virtual false, abstract: false, final false
  inline void UpdateParameters();

  /// @brief Method Init, addr 0x2a080c4, size 0xa4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsMonitor* New_ctor();

  /// @brief Method .ctor, addr 0x2a0db50, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsMonitor(G_FpsMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsMonitor(G_FpsMonitor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsMonitor();

public:
  /// @brief Field m_fpsSamples, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_fpsSamples;

  /// @brief Field m_fpsSamplesSorted, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_fpsSamplesSorted;

  /// @brief Field m_fpsSamplesCapacity, offset: 0x28, size: 0x2, def value: None
  int16_t ___m_fpsSamplesCapacity;

  /// @brief Field m_onePercentSamples, offset: 0x2a, size: 0x2, def value: None
  int16_t ___m_onePercentSamples;

  /// @brief Field m_zero1PercentSamples, offset: 0x2c, size: 0x2, def value: None
  int16_t ___m_zero1PercentSamples;

  /// @brief Field m_fpsSamplesCount, offset: 0x2e, size: 0x2, def value: None
  int16_t ___m_fpsSamplesCount;

  /// @brief Field m_indexSample, offset: 0x30, size: 0x2, def value: None
  int16_t ___m_indexSample;

  /// @brief Field m_unscaledDeltaTime, offset: 0x34, size: 0x4, def value: None
  float_t ___m_unscaledDeltaTime;

  /// @brief Field <CurrentFPS>k__BackingField, offset: 0x38, size: 0x2, def value: None
  int16_t ____CurrentFPS_k__BackingField;

  /// @brief Field <AverageFPS>k__BackingField, offset: 0x3a, size: 0x2, def value: None
  int16_t ____AverageFPS_k__BackingField;

  /// @brief Field <OnePercentFPS>k__BackingField, offset: 0x3c, size: 0x2, def value: None
  int16_t ____OnePercentFPS_k__BackingField;

  /// @brief Field <Zero1PercentFps>k__BackingField, offset: 0x3e, size: 0x2, def value: None
  int16_t ____Zero1PercentFps_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsMonitor, 0x40>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamples) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesSorted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesCapacity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_onePercentSamples) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_zero1PercentSamples) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_fpsSamplesCount) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_indexSample) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ___m_unscaledDeltaTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____CurrentFPS_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____AverageFPS_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____OnePercentFPS_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsMonitor, ____Zero1PercentFps_k__BackingField) == 0x3e, "Offset mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsMonitor*, "Tayx.Graphy.Fps", "G_FpsMonitor");
NEED_NO_BOX(::Tayx::Graphy::Fps::__G_FpsMonitor____c);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::__G_FpsMonitor____c*, "Tayx.Graphy.Fps", "G_FpsMonitor/<>c");

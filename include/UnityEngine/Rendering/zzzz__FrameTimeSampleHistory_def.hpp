#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrameTimeSampleHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTimeSampleHistory)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::Rendering {
class FrameTimeSampleHistory___c;
}
namespace UnityEngine::Rendering {
struct FrameTimeSample;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class FrameTimeSampleHistory;
}
namespace UnityEngine::Rendering {
class FrameTimeSampleHistory___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FrameTimeSampleHistory);
MARK_REF_PTR_T(::UnityEngine::Rendering::FrameTimeSampleHistory___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FrameTimeSampleHistory/<>c
class CORDL_TYPE FrameTimeSampleHistory___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::FrameTimeSampleHistory___c* __9;

  static inline ::UnityEngine::Rendering::FrameTimeSampleHistory___c* New_ctor();

  /// @brief Method <.cctor>b__15_0, addr 0x65b665c, size 0x8, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_0(float_t value, float_t other);

  /// @brief Method <.cctor>b__15_1, addr 0x65b6664, size 0x14, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_1(float_t value, float_t other);

  /// @brief Method <.cctor>b__15_2, addr 0x65b6678, size 0xc, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_2(float_t value, float_t other);

  /// @brief Method <.cctor>b__15_3, addr 0x65b6684, size 0x14, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_3(float_t value, float_t other);

  /// @brief Method <.cctor>b__15_4, addr 0x65b6698, size 0x10, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_4(float_t value, float_t other);

  /// @brief Method <.cctor>b__15_5, addr 0x65b66a8, size 0x14, virtual false, abstract: false, final false
  inline float_t __cctor_b__15_5(float_t value, float_t other);

  /// @brief Method .ctor, addr 0x65b6658, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::FrameTimeSampleHistory___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::FrameTimeSampleHistory___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTimeSampleHistory___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameTimeSampleHistory___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameTimeSampleHistory___c(FrameTimeSampleHistory___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameTimeSampleHistory___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameTimeSampleHistory___c(FrameTimeSampleHistory___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrameTimeSampleHistory___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.FrameTimeSample
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FrameTimeSampleHistory
class CORDL_TYPE FrameTimeSampleHistory : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::FrameTimeSampleHistory___c;

  /// @brief Field SampleAverage, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_SampleAverage, put = __cordl_internal_set_SampleAverage)) ::UnityEngine::Rendering::FrameTimeSample SampleAverage;

  /// @brief Field SampleMax, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_SampleMax, put = __cordl_internal_set_SampleMax)) ::UnityEngine::Rendering::FrameTimeSample SampleMax;

  /// @brief Field SampleMin, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_SampleMin, put = __cordl_internal_set_SampleMin)) ::UnityEngine::Rendering::FrameTimeSample SampleMin;

  /// @brief Field m_Samples, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Samples, put = __cordl_internal_set_m_Samples)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::FrameTimeSample>* m_Samples;

  /// @brief Field s_SampleValueAdd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueAdd, put = setStaticF_s_SampleValueAdd)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueAdd;

  /// @brief Field s_SampleValueCountValid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueCountValid, put = setStaticF_s_SampleValueCountValid)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueCountValid;

  /// @brief Field s_SampleValueDivide, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueDivide, put = setStaticF_s_SampleValueDivide)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueDivide;

  /// @brief Field s_SampleValueEnsureValid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueEnsureValid, put = setStaticF_s_SampleValueEnsureValid)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueEnsureValid;

  /// @brief Field s_SampleValueMax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueMax, put = setStaticF_s_SampleValueMax)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueMax;

  /// @brief Field s_SampleValueMin, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SampleValueMin, put = setStaticF_s_SampleValueMin)) ::System::Func_3<float_t, float_t, float_t>* s_SampleValueMin;

  /// @brief Method Add, addr 0x65a9d5c, size 0xe8, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Rendering::FrameTimeSample sample);

  /// @brief Method Clear, addr 0x65ab9a0, size 0x58, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeAggregateValues, addr 0x65a9e44, size 0x258, virtual false, abstract: false, final false
  inline void ComputeAggregateValues();

  /// @brief Method DiscardOldSamples, addr 0x65a9cac, size 0xb0, virtual false, abstract: false, final false
  inline void DiscardOldSamples(int32_t sampleHistorySize);

  static inline ::UnityEngine::Rendering::FrameTimeSampleHistory* New_ctor(int32_t initialCapacity);

  /// @brief Method <ComputeAggregateValues>g__ForEachSampleMember|12_0, addr 0x65b62d0, size 0xe4, virtual false, abstract: false, final false
  static inline void _ComputeAggregateValues_g__ForEachSampleMember_12_0(::ByRef<::UnityEngine::Rendering::FrameTimeSample> aggregate, ::UnityEngine::Rendering::FrameTimeSample sample,
                                                                         ::System::Func_3<float_t, float_t, float_t>* func);

  constexpr ::UnityEngine::Rendering::FrameTimeSample const& __cordl_internal_get_SampleAverage() const;

  constexpr ::UnityEngine::Rendering::FrameTimeSample& __cordl_internal_get_SampleAverage();

  constexpr ::UnityEngine::Rendering::FrameTimeSample const& __cordl_internal_get_SampleMax() const;

  constexpr ::UnityEngine::Rendering::FrameTimeSample& __cordl_internal_get_SampleMax();

  constexpr ::UnityEngine::Rendering::FrameTimeSample const& __cordl_internal_get_SampleMin() const;

  constexpr ::UnityEngine::Rendering::FrameTimeSample& __cordl_internal_get_SampleMin();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::FrameTimeSample>* const& __cordl_internal_get_m_Samples() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::FrameTimeSample>*& __cordl_internal_get_m_Samples();

  constexpr void __cordl_internal_set_SampleAverage(::UnityEngine::Rendering::FrameTimeSample value);

  constexpr void __cordl_internal_set_SampleMax(::UnityEngine::Rendering::FrameTimeSample value);

  constexpr void __cordl_internal_set_SampleMin(::UnityEngine::Rendering::FrameTimeSample value);

  constexpr void __cordl_internal_set_m_Samples(::System::Collections::Generic::List_1<::UnityEngine::Rendering::FrameTimeSample>* value);

  /// @brief Method .ctor, addr 0x65a9970, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueAdd();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueCountValid();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueDivide();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueEnsureValid();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueMax();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF_s_SampleValueMin();

  static inline void setStaticF_s_SampleValueAdd(::System::Func_3<float_t, float_t, float_t>* value);

  static inline void setStaticF_s_SampleValueCountValid(::System::Func_3<float_t, float_t, float_t>* value);

  static inline void setStaticF_s_SampleValueDivide(::System::Func_3<float_t, float_t, float_t>* value);

  static inline void setStaticF_s_SampleValueEnsureValid(::System::Func_3<float_t, float_t, float_t>* value);

  static inline void setStaticF_s_SampleValueMax(::System::Func_3<float_t, float_t, float_t>* value);

  static inline void setStaticF_s_SampleValueMin(::System::Func_3<float_t, float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTimeSampleHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameTimeSampleHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameTimeSampleHistory(FrameTimeSampleHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameTimeSampleHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameTimeSampleHistory(FrameTimeSampleHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12016 };

  /// @brief Field m_Samples, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::FrameTimeSample>* ___m_Samples;

  /// @brief Field SampleAverage, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::Rendering::FrameTimeSample ___SampleAverage;

  /// @brief Field SampleMin, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::Rendering::FrameTimeSample ___SampleMin;

  /// @brief Field SampleMax, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::Rendering::FrameTimeSample ___SampleMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSampleHistory, ___m_Samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSampleHistory, ___SampleAverage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSampleHistory, ___SampleMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FrameTimeSampleHistory, ___SampleMax) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FrameTimeSampleHistory, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FrameTimeSampleHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrameTimeSampleHistory*, "UnityEngine.Rendering", "FrameTimeSampleHistory");
NEED_NO_BOX(::UnityEngine::Rendering::FrameTimeSampleHistory___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FrameTimeSampleHistory___c*, "UnityEngine.Rendering", "FrameTimeSampleHistory/<>c");

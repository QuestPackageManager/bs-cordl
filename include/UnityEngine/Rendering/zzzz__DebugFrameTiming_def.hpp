#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugFrameTiming.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugFrameTiming)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class BottleneckHistory;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class FrameTimeSampleHistory;
}
namespace UnityEngine {
struct FrameTiming;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugFrameTiming;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugFrameTiming);
// Dependencies System.Object, UnityEngine.Rendering.FrameTimeSample
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugFrameTiming
class CORDL_TYPE DebugFrameTiming : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bottleneckHistorySize>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__bottleneckHistorySize_k__BackingField,
                      put = __cordl_internal_set__bottleneckHistorySize_k__BackingField)) int32_t _bottleneckHistorySize_k__BackingField;

  /// @brief Field <sampleHistorySize>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__sampleHistorySize_k__BackingField, put = __cordl_internal_set__sampleHistorySize_k__BackingField)) int32_t _sampleHistorySize_k__BackingField;

  __declspec(property(get = get_bottleneckHistorySize, put = set_bottleneckHistorySize)) int32_t bottleneckHistorySize;

  /// @brief Field m_BottleneckHistory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BottleneckHistory, put = __cordl_internal_set_m_BottleneckHistory)) ::UnityEngine::Rendering::BottleneckHistory* m_BottleneckHistory;

  /// @brief Field m_FrameHistory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameHistory, put = __cordl_internal_set_m_FrameHistory)) ::UnityEngine::Rendering::FrameTimeSampleHistory* m_FrameHistory;

  /// @brief Field m_Sample, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Sample, put = __cordl_internal_set_m_Sample)) ::UnityEngine::Rendering::FrameTimeSample m_Sample;

  /// @brief Field m_Timing, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Timing, put = __cordl_internal_set_m_Timing)) ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> m_Timing;

  __declspec(property(get = get_sampleHistorySize, put = set_sampleHistorySize)) int32_t sampleHistorySize;

  static inline ::UnityEngine::Rendering::DebugFrameTiming* New_ctor();

  /// @brief Method RegisterDebugUI, addr 0x65aa340, size 0x14e8, virtual false, abstract: false, final false
  inline void RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* list);

  /// @brief Method Reset, addr 0x65ab91c, size 0x28, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UpdateFrameTiming, addr 0x65a9ac8, size 0x1e4, virtual false, abstract: false, final false
  inline void UpdateFrameTiming();

  /// @brief Method <RegisterDebugUI>b__17_0, addr 0x65ab9f8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_0();

  /// @brief Method <RegisterDebugUI>b__17_1, addr 0x65aba28, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_1();

  /// @brief Method <RegisterDebugUI>b__17_10, addr 0x65abbd8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_10();

  /// @brief Method <RegisterDebugUI>b__17_11, addr 0x65abc08, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_11();

  /// @brief Method <RegisterDebugUI>b__17_12, addr 0x65abc38, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_12();

  /// @brief Method <RegisterDebugUI>b__17_13, addr 0x65abc68, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_13();

  /// @brief Method <RegisterDebugUI>b__17_14, addr 0x65abc98, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_14();

  /// @brief Method <RegisterDebugUI>b__17_15, addr 0x65abcc8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_15();

  /// @brief Method <RegisterDebugUI>b__17_16, addr 0x65abcf8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_16();

  /// @brief Method <RegisterDebugUI>b__17_17, addr 0x65abd28, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_17();

  /// @brief Method <RegisterDebugUI>b__17_18, addr 0x65abd58, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_18();

  /// @brief Method <RegisterDebugUI>b__17_19, addr 0x65abd88, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_19();

  /// @brief Method <RegisterDebugUI>b__17_2, addr 0x65aba58, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_2();

  /// @brief Method <RegisterDebugUI>b__17_20, addr 0x65abdb8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_20();

  /// @brief Method <RegisterDebugUI>b__17_21, addr 0x65abde8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_21();

  /// @brief Method <RegisterDebugUI>b__17_3, addr 0x65aba88, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_3();

  /// @brief Method <RegisterDebugUI>b__17_4, addr 0x65abab8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_4();

  /// @brief Method <RegisterDebugUI>b__17_5, addr 0x65abae8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_5();

  /// @brief Method <RegisterDebugUI>b__17_6, addr 0x65abb18, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_6();

  /// @brief Method <RegisterDebugUI>b__17_7, addr 0x65abb48, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_7();

  /// @brief Method <RegisterDebugUI>b__17_8, addr 0x65abb78, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_8();

  /// @brief Method <RegisterDebugUI>b__17_9, addr 0x65abba8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebugUI_b__17_9();

  constexpr int32_t const& __cordl_internal_get__bottleneckHistorySize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__bottleneckHistorySize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__sampleHistorySize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__sampleHistorySize_k__BackingField();

  constexpr ::UnityEngine::Rendering::BottleneckHistory* const& __cordl_internal_get_m_BottleneckHistory() const;

  constexpr ::UnityEngine::Rendering::BottleneckHistory*& __cordl_internal_get_m_BottleneckHistory();

  constexpr ::UnityEngine::Rendering::FrameTimeSampleHistory* const& __cordl_internal_get_m_FrameHistory() const;

  constexpr ::UnityEngine::Rendering::FrameTimeSampleHistory*& __cordl_internal_get_m_FrameHistory();

  constexpr ::UnityEngine::Rendering::FrameTimeSample const& __cordl_internal_get_m_Sample() const;

  constexpr ::UnityEngine::Rendering::FrameTimeSample& __cordl_internal_get_m_Sample();

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> const& __cordl_internal_get_m_Timing() const;

  constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>& __cordl_internal_get_m_Timing();

  constexpr void __cordl_internal_set__bottleneckHistorySize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__sampleHistorySize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_BottleneckHistory(::UnityEngine::Rendering::BottleneckHistory* value);

  constexpr void __cordl_internal_set_m_FrameHistory(::UnityEngine::Rendering::FrameTimeSampleHistory* value);

  constexpr void __cordl_internal_set_m_Sample(::UnityEngine::Rendering::FrameTimeSample value);

  constexpr void __cordl_internal_set_m_Timing(::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> value);

  /// @brief Method .ctor, addr 0x65a98a4, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bottleneckHistorySize, addr 0x65a9884, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bottleneckHistorySize();

  /// @brief Method get_sampleHistorySize, addr 0x65a9894, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sampleHistorySize();

  /// @brief Method set_bottleneckHistorySize, addr 0x65a988c, size 0x8, virtual false, abstract: false, final false
  inline void set_bottleneckHistorySize(int32_t value);

  /// @brief Method set_sampleHistorySize, addr 0x65a989c, size 0x8, virtual false, abstract: false, final false
  inline void set_sampleHistorySize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugFrameTiming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugFrameTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugFrameTiming(DebugFrameTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugFrameTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugFrameTiming(DebugFrameTiming const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11951 };

  /// @brief Field k_FpsFormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FpsFormatString{ u"{0:F1}" };

  /// @brief Field k_MsFormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MsFormatString{ u"{0:F2}ms" };

  /// @brief Field k_RefreshRate offset 0xffffffff size 0x4
  static constexpr float_t k_RefreshRate{ static_cast<float_t>(0.2f) };

  /// @brief Field m_FrameHistory, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::FrameTimeSampleHistory* ___m_FrameHistory;

  /// @brief Field m_BottleneckHistory, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::BottleneckHistory* ___m_BottleneckHistory;

  /// @brief Field <bottleneckHistorySize>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____bottleneckHistorySize_k__BackingField;

  /// @brief Field <sampleHistorySize>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____sampleHistorySize_k__BackingField;

  /// @brief Field m_Timing, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> ___m_Timing;

  /// @brief Field m_Sample, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::Rendering::FrameTimeSample ___m_Sample;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ___m_FrameHistory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ___m_BottleneckHistory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ____bottleneckHistorySize_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ____sampleHistorySize_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ___m_Timing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugFrameTiming, ___m_Sample) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugFrameTiming, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugFrameTiming);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugFrameTiming*, "UnityEngine.Rendering", "DebugFrameTiming");

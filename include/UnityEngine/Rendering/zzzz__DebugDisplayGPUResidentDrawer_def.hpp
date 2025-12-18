#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayGPUResidentDrawer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplayGPUResidentDrawer)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass34_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass35_0;
}
namespace UnityEngine::Rendering {
struct DebugOccluderStats;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering {
struct InstanceCullerViewStats;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventStats;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering {
class Table_DebugUI_Row;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_SettingsPanel;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass34_0;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer___c__DisplayClass35_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering {
class SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0);
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/Strings
class CORDL_TYPE DebugDisplayGPUResidentDrawer_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field displayBatcherStats, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_displayBatcherStats, put = setStaticF_displayBatcherStats)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip displayBatcherStats;

  /// @brief Field occluderContextStats, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occluderContextStats, put = setStaticF_occluderContextStats)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occluderContextStats;

  /// @brief Field occluderDebugViewEnable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occluderDebugViewEnable, put = setStaticF_occluderDebugViewEnable)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occluderDebugViewEnable;

  /// @brief Field occluderDebugViewIndex, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occluderDebugViewIndex, put = setStaticF_occluderDebugViewIndex)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occluderDebugViewIndex;

  /// @brief Field occluderDebugViewRangeMax, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occluderDebugViewRangeMax, put = setStaticF_occluderDebugViewRangeMax)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occluderDebugViewRangeMax;

  /// @brief Field occluderDebugViewRangeMin, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occluderDebugViewRangeMin, put = setStaticF_occluderDebugViewRangeMin)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occluderDebugViewRangeMin;

  /// @brief Field occlusionTestOverlayCountVisible, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occlusionTestOverlayCountVisible,
                      put = setStaticF_occlusionTestOverlayCountVisible)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occlusionTestOverlayCountVisible;

  /// @brief Field occlusionTestOverlayEnable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_occlusionTestOverlayEnable, put = setStaticF_occlusionTestOverlayEnable)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip occlusionTestOverlayEnable;

  /// @brief Field overrideOcclusionTestToAlwaysPass, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_overrideOcclusionTestToAlwaysPass,
                      put = setStaticF_overrideOcclusionTestToAlwaysPass)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip overrideOcclusionTestToAlwaysPass;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_displayBatcherStats();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occluderContextStats();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewEnable();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewIndex();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewRangeMax();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occluderDebugViewRangeMin();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occlusionTestOverlayCountVisible();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_occlusionTestOverlayEnable();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_overrideOcclusionTestToAlwaysPass();

  static inline void setStaticF_displayBatcherStats(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occluderContextStats(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occluderDebugViewEnable(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occluderDebugViewIndex(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occluderDebugViewRangeMax(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occluderDebugViewRangeMin(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occlusionTestOverlayCountVisible(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_occlusionTestOverlayEnable(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_overrideOcclusionTestToAlwaysPass(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer_Strings(DebugDisplayGPUResidentDrawer_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer_Strings(DebugDisplayGPUResidentDrawer_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17566 };

  /// @brief Field drawerSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString drawerSettingsContainerName{ u"GPU Resident Drawer Settings" };

  /// @brief Field occlusionCullingTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString occlusionCullingTitle{ u"Occlusion Culling" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_1<::StringW>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Func_1<bool>* __9__4_1;

  /// @brief Field <>9__4_16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_16, put = setStaticF___9__4_16)) ::System::Func_1<int32_t>* __9__4_16;

  /// @brief Field <>9__4_17, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_17, put = setStaticF___9__4_17)) ::System::Func_1<int32_t>* __9__4_17;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2)) ::System::Func_1<bool>* __9__4_2;

  /// @brief Field <>9__4_24, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_24, put = setStaticF___9__4_24)) ::System::Func_1<bool>* __9__4_24;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::System::Func_1<::System::Object*>* __9__5_1;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1)) ::System::Func_1<::System::Object*>* __9__6_1;

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* New_ctor();

  /// @brief Method <AddInstanceCullingStatsWidget>b__5_1, addr 0x6657bd0, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullingStatsWidget_b__5_1();

  /// @brief Method <AddOcclusionContextStatsWidget>b__6_1, addr 0x6657bf8, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* _AddOcclusionContextStatsWidget_b__6_1();

  /// @brief Method <.ctor>b__4_0, addr 0x66576c8, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__4_0();

  /// @brief Method <.ctor>b__4_1, addr 0x6657a14, size 0x54, virtual false, abstract: false, final false
  inline bool __ctor_b__4_1();

  /// @brief Method <.ctor>b__4_16, addr 0x6657b10, size 0x8, virtual false, abstract: false, final false
  inline int32_t __ctor_b__4_16();

  /// @brief Method <.ctor>b__4_17, addr 0x6657b18, size 0x64, virtual false, abstract: false, final false
  inline int32_t __ctor_b__4_17();

  /// @brief Method <.ctor>b__4_2, addr 0x6657abc, size 0x54, virtual false, abstract: false, final false
  inline bool __ctor_b__4_2();

  /// @brief Method <.ctor>b__4_24, addr 0x6657b7c, size 0x54, virtual false, abstract: false, final false
  inline bool __ctor_b__4_24();

  /// @brief Method .ctor, addr 0x66576c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* getStaticF___9();

  static inline ::System::Func_1<::StringW>* getStaticF___9__4_0();

  static inline ::System::Func_1<bool>* getStaticF___9__4_1();

  static inline ::System::Func_1<int32_t>* getStaticF___9__4_16();

  static inline ::System::Func_1<int32_t>* getStaticF___9__4_17();

  static inline ::System::Func_1<bool>* getStaticF___9__4_2();

  static inline ::System::Func_1<bool>* getStaticF___9__4_24();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__5_1();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__6_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c* value);

  static inline void setStaticF___9__4_0(::System::Func_1<::StringW>* value);

  static inline void setStaticF___9__4_1(::System::Func_1<bool>* value);

  static inline void setStaticF___9__4_16(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__4_17(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__4_2(::System::Func_1<bool>* value);

  static inline void setStaticF___9__4_24(::System::Func_1<bool>* value);

  static inline void setStaticF___9__5_1(::System::Func_1<::System::Object*>* value);

  static inline void setStaticF___9__6_1(::System::Func_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplayGPUResidentDrawer___c(SettingsPanel_DebugDisplayGPUResidentDrawer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplayGPUResidentDrawer___c(SettingsPanel_DebugDisplayGPUResidentDrawer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass4_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data;

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0* New_ctor();

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value);

  /// @brief Method <.ctor>b__10, addr 0x6657d40, size 0x1c, virtual false, abstract: false, final false
  inline void __ctor_b__10(bool value);

  /// @brief Method <.ctor>b__11, addr 0x6657d5c, size 0x18, virtual false, abstract: false, final false
  inline bool __ctor_b__11();

  /// @brief Method <.ctor>b__12, addr 0x6657d74, size 0x1c, virtual false, abstract: false, final false
  inline void __ctor_b__12(bool value);

  /// @brief Method <.ctor>b__13, addr 0x6657d90, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__13();

  /// @brief Method <.ctor>b__14, addr 0x6657da8, size 0x18, virtual false, abstract: false, final false
  inline void __ctor_b__14(int32_t value);

  /// @brief Method <.ctor>b__15, addr 0x6657dc0, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__15();

  /// @brief Method <.ctor>b__18, addr 0x6657de0, size 0x18, virtual false, abstract: false, final false
  inline float_t __ctor_b__18();

  /// @brief Method <.ctor>b__19, addr 0x6657df8, size 0x18, virtual false, abstract: false, final false
  inline void __ctor_b__19(float_t value);

  /// @brief Method <.ctor>b__20, addr 0x6657e10, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__20();

  /// @brief Method <.ctor>b__21, addr 0x6657e30, size 0x18, virtual false, abstract: false, final false
  inline float_t __ctor_b__21();

  /// @brief Method <.ctor>b__22, addr 0x6657e48, size 0x18, virtual false, abstract: false, final false
  inline void __ctor_b__22(float_t value);

  /// @brief Method <.ctor>b__23, addr 0x6657e60, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__23();

  /// @brief Method <.ctor>b__25, addr 0x6657e80, size 0x2c, virtual false, abstract: false, final false
  inline bool __ctor_b__25();

  /// @brief Method <.ctor>b__26, addr 0x6657eac, size 0x2c, virtual false, abstract: false, final false
  inline void __ctor_b__26(bool value);

  /// @brief Method <.ctor>b__3, addr 0x6657c20, size 0x2c, virtual false, abstract: false, final false
  inline bool __ctor_b__3();

  /// @brief Method <.ctor>b__4, addr 0x6657c4c, size 0x2c, virtual false, abstract: false, final false
  inline void __ctor_b__4(bool value);

  /// @brief Method <.ctor>b__5, addr 0x6657c78, size 0x2c, virtual false, abstract: false, final false
  inline bool __ctor_b__5();

  /// @brief Method <.ctor>b__6, addr 0x6657ca4, size 0x2c, virtual false, abstract: false, final false
  inline void __ctor_b__6(bool value);

  /// @brief Method <.ctor>b__7, addr 0x6657cd0, size 0x2c, virtual false, abstract: false, final false
  inline bool __ctor_b__7();

  /// @brief Method <.ctor>b__8, addr 0x6657cfc, size 0x2c, virtual false, abstract: false, final false
  inline void __ctor_b__8(bool value);

  /// @brief Method <.ctor>b__9, addr 0x6657d28, size 0x18, virtual false, abstract: false, final false
  inline bool __ctor_b__9();

  /// @brief Method .ctor, addr 0x6656c40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17568 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass5_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data;

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0* New_ctor();

  /// @brief Method <AddInstanceCullingStatsWidget>b__0, addr 0x6657ed8, size 0x34, virtual false, abstract: false, final false
  inline bool _AddInstanceCullingStatsWidget_b__0();

  /// @brief Method <AddInstanceCullingStatsWidget>b__2, addr 0x6657f0c, size 0x34, virtual false, abstract: false, final false
  inline bool _AddInstanceCullingStatsWidget_b__2();

  /// @brief Method <AddInstanceCullingStatsWidget>b__3, addr 0x6657f40, size 0x34, virtual false, abstract: false, final false
  inline bool _AddInstanceCullingStatsWidget_b__3();

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value);

  /// @brief Method .ctor, addr 0x6657668, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17569 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass6_0
class CORDL_TYPE SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data;

  static inline ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0* New_ctor();

  /// @brief Method <AddOcclusionContextStatsWidget>b__0, addr 0x6657f74, size 0x20, virtual false, abstract: false, final false
  inline bool _AddOcclusionContextStatsWidget_b__0();

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value);

  /// @brief Method .ctor, addr 0x665766c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0(SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17570 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/SettingsPanel
class CORDL_TYPE DebugDisplayGPUResidentDrawer_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c;

  using __c__DisplayClass4_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0;

  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  __declspec(property(get = get_PanelName)) ::StringW PanelName;

  /// @brief Method AddInstanceCullingStatsWidget, addr 0x6657058, size 0x610, virtual false, abstract: false, final false
  inline void AddInstanceCullingStatsWidget(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data);

  /// @brief Method AddOcclusionContextStatsWidget, addr 0x6656c44, size 0x414, virtual false, abstract: false, final false
  inline void AddOcclusionContextStatsWidget(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data);

  static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel* New_ctor(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data);

  /// @brief Method .ctor, addr 0x665560c, size 0x136c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* data);

  /// @brief Method get_Flags, addr 0x6656c38, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

  /// @brief Method get_PanelName, addr 0x6656bf4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer_SettingsPanel(DebugDisplayGPUResidentDrawer_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer_SettingsPanel(DebugDisplayGPUResidentDrawer_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass29_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field viewIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_viewIndex, put = __cordl_internal_set_viewIndex)) int32_t viewIndex;

  static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0* New_ctor();

  /// @brief Method <AddInstanceCullerViewDataRow>b__0, addr 0x6657f94, size 0x1c, virtual false, abstract: false, final false
  inline bool _AddInstanceCullerViewDataRow_b__0();

  /// @brief Method <AddInstanceCullerViewDataRow>b__1, addr 0x6657fb0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullerViewDataRow_b__1();

  /// @brief Method <AddInstanceCullerViewDataRow>b__2, addr 0x665801c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullerViewDataRow_b__2();

  /// @brief Method <AddInstanceCullerViewDataRow>b__3, addr 0x6658054, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullerViewDataRow_b__3();

  /// @brief Method <AddInstanceCullerViewDataRow>b__4, addr 0x665808c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullerViewDataRow_b__4();

  /// @brief Method <AddInstanceCullerViewDataRow>b__5, addr 0x66580c4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceCullerViewDataRow_b__5();

  constexpr int32_t const& __cordl_internal_get_viewIndex() const;

  constexpr int32_t& __cordl_internal_get_viewIndex();

  constexpr void __cordl_internal_set_viewIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6654724, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer___c__DisplayClass29_0(DebugDisplayGPUResidentDrawer___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer___c__DisplayClass29_0(DebugDisplayGPUResidentDrawer___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17572 };

  /// @brief Field viewIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___viewIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0, ___viewIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass34_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eventIndex, put = __cordl_internal_set_eventIndex)) int32_t eventIndex;

  static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0* New_ctor();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__0, addr 0x66580fc, size 0x1c, virtual false, abstract: false, final false
  inline bool _AddInstanceOcclusionPassDataRow_b__0();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__1, addr 0x6658118, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__1();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__2, addr 0x6658150, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__2();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__3, addr 0x6658208, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__3();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__4, addr 0x6658230, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__4();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__5, addr 0x66582d4, size 0x94, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__5();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__6, addr 0x6658368, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__6();

  /// @brief Method <AddInstanceOcclusionPassDataRow>b__7, addr 0x6658390, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* _AddInstanceOcclusionPassDataRow_b__7();

  constexpr int32_t const& __cordl_internal_get_eventIndex() const;

  constexpr int32_t& __cordl_internal_get_eventIndex();

  constexpr void __cordl_internal_set_eventIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6655104, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer___c__DisplayClass34_0(DebugDisplayGPUResidentDrawer___c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer___c__DisplayClass34_0(DebugDisplayGPUResidentDrawer___c__DisplayClass34_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17573 };

  /// @brief Field eventIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___eventIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0, ___eventIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer/<>c__DisplayClass35_0
class CORDL_TYPE DebugDisplayGPUResidentDrawer___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0* New_ctor();

  /// @brief Method <AddOcclusionContextDataRow>b__0, addr 0x66583b8, size 0x1c, virtual false, abstract: false, final false
  inline bool _AddOcclusionContextDataRow_b__0();

  /// @brief Method <AddOcclusionContextDataRow>b__1, addr 0x66583d4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* _AddOcclusionContextDataRow_b__1();

  /// @brief Method <AddOcclusionContextDataRow>b__2, addr 0x6658400, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* _AddOcclusionContextDataRow_b__2();

  /// @brief Method <AddOcclusionContextDataRow>b__3, addr 0x665842c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Object* _AddOcclusionContextDataRow_b__3();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x6655574, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer___c__DisplayClass35_0(DebugDisplayGPUResidentDrawer___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer___c__DisplayClass35_0(DebugDisplayGPUResidentDrawer___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17574 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0, ___index) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayGPUResidentDrawer
class CORDL_TYPE DebugDisplayGPUResidentDrawer : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel;

  using Strings = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings;

  using __c__DisplayClass29_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0;

  using __c__DisplayClass34_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0;

  using __c__DisplayClass35_0 = ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  __declspec(property(get = get_displayBatcherStats, put = set_displayBatcherStats)) bool displayBatcherStats;

  /// @brief Field occluderContextStats, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_occluderContextStats, put = __cordl_internal_set_occluderContextStats)) bool occluderContextStats;

  /// @brief Field occluderDebugViewEnable, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_occluderDebugViewEnable, put = __cordl_internal_set_occluderDebugViewEnable)) bool occluderDebugViewEnable;

  /// @brief Field occluderDebugViewIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_occluderDebugViewIndex, put = __cordl_internal_set_occluderDebugViewIndex)) int32_t occluderDebugViewIndex;

  /// @brief Field occluderDebugViewRange, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get_occluderDebugViewRange, put = __cordl_internal_set_occluderDebugViewRange)) ::UnityEngine::Vector2 occluderDebugViewRange;

  __declspec(property(get = get_occlusionTestOverlayCountVisible, put = set_occlusionTestOverlayCountVisible)) bool occlusionTestOverlayCountVisible;

  __declspec(property(get = get_occlusionTestOverlayEnable, put = set_occlusionTestOverlayEnable)) bool occlusionTestOverlayEnable;

  __declspec(property(get = get_overrideOcclusionTestToAlwaysPass, put = set_overrideOcclusionTestToAlwaysPass)) bool overrideOcclusionTestToAlwaysPass;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method AddInstanceCullerViewDataRow, addr 0x66540f8, size 0x62c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddInstanceCullerViewDataRow(int32_t viewIndex);

  /// @brief Method AddInstanceOcclusionPassDataRow, addr 0x6654918, size 0x7ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddInstanceOcclusionPassDataRow(int32_t eventIndex);

  /// @brief Method AddOcclusionContextDataRow, addr 0x6655108, size 0x46c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddOcclusionContextDataRow(int32_t index);

  /// @brief Method CulledInstancesString, addr 0x66548a4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* CulledInstancesString(::ByRef<::UnityEngine::Rendering::InstanceOcclusionEventStats> stats);

  /// @brief Method GetInstanceCullerViewCount, addr 0x6654020, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetInstanceCullerViewCount();

  /// @brief Method GetInstanceCullerViewStats, addr 0x6653d24, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceCullerViewStats GetInstanceCullerViewStats(int32_t viewIndex);

  /// @brief Method GetInstanceOcclusionEventCount, addr 0x665408c, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetInstanceOcclusionEventCount();

  /// @brief Method GetInstanceOcclusionEventStats, addr 0x6653e08, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceOcclusionEventStats GetInstanceOcclusionEventStats(int32_t passIndex);

  /// @brief Method GetOccluderStats, addr 0x6653ef0, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugOccluderStats GetOccluderStats(int32_t occluderIndex);

  /// @brief Method GetOccluderViewInstanceID, addr 0x6653b78, size 0xec, virtual false, abstract: false, final false
  inline bool GetOccluderViewInstanceID(::ByRef<int32_t> viewInstanceID);

  /// @brief Method GetOcclusionContextsCounts, addr 0x6653fb4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetOcclusionContextsCounts();

  static inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* New_ctor();

  /// @brief Method OccluderVersionString, addr 0x6654728, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Object* OccluderVersionString(::ByRef<::UnityEngine::Rendering::InstanceOcclusionEventStats> stats);

  /// @brief Method OcclusionTestString, addr 0x66547a8, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Object* OcclusionTestString(::ByRef<::UnityEngine::Rendering::InstanceOcclusionEventStats> stats);

  /// @brief Method TryGetScreenClearColor, addr 0x66555a8, size 0x8, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color);

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x66555b0, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel();

  /// @brief Method VisibleInstancesString, addr 0x6654830, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* VisibleInstancesString(::ByRef<::UnityEngine::Rendering::InstanceOcclusionEventStats> stats);

  constexpr bool const& __cordl_internal_get_occluderContextStats() const;

  constexpr bool& __cordl_internal_get_occluderContextStats();

  constexpr bool const& __cordl_internal_get_occluderDebugViewEnable() const;

  constexpr bool& __cordl_internal_get_occluderDebugViewEnable();

  constexpr int32_t const& __cordl_internal_get_occluderDebugViewIndex() const;

  constexpr int32_t& __cordl_internal_get_occluderDebugViewIndex();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_occluderDebugViewRange() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_occluderDebugViewRange();

  constexpr void __cordl_internal_set_occluderContextStats(bool value);

  constexpr void __cordl_internal_set_occluderDebugViewEnable(bool value);

  constexpr void __cordl_internal_set_occluderDebugViewIndex(int32_t value);

  constexpr void __cordl_internal_set_occluderDebugViewRange(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x6656978, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x6655578, size 0x20, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x66555a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x6655598, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_displayBatcherStats, addr 0x6653ad0, size 0x20, virtual false, abstract: false, final false
  inline bool get_displayBatcherStats();

  /// @brief Method get_occlusionTestOverlayCountVisible, addr 0x6653ca4, size 0x20, virtual false, abstract: false, final false
  inline bool get_occlusionTestOverlayCountVisible();

  /// @brief Method get_occlusionTestOverlayEnable, addr 0x6653c64, size 0x20, virtual false, abstract: false, final false
  inline bool get_occlusionTestOverlayEnable();

  /// @brief Method get_overrideOcclusionTestToAlwaysPass, addr 0x6653ce4, size 0x20, virtual false, abstract: false, final false
  inline bool get_overrideOcclusionTestToAlwaysPass();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_displayBatcherStats, addr 0x6653b58, size 0x20, virtual false, abstract: false, final false
  inline void set_displayBatcherStats(bool value);

  /// @brief Method set_occlusionTestOverlayCountVisible, addr 0x6653cc4, size 0x20, virtual false, abstract: false, final false
  inline void set_occlusionTestOverlayCountVisible(bool value);

  /// @brief Method set_occlusionTestOverlayEnable, addr 0x6653c84, size 0x20, virtual false, abstract: false, final false
  inline void set_occlusionTestOverlayEnable(bool value);

  /// @brief Method set_overrideOcclusionTestToAlwaysPass, addr 0x6653d04, size 0x20, virtual false, abstract: false, final false
  inline void set_overrideOcclusionTestToAlwaysPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayGPUResidentDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayGPUResidentDrawer(DebugDisplayGPUResidentDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayGPUResidentDrawer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayGPUResidentDrawer(DebugDisplayGPUResidentDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17575 };

  /// @brief Field k_FormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString k_FormatString{ u"{0}" };

  /// @brief Field k_MaxContextCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxContextCount{ static_cast<int32_t>(0x10) };

  /// @brief Field k_MaxOcclusionPassCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxOcclusionPassCount{ static_cast<int32_t>(0x20) };

  /// @brief Field k_MaxViewCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxViewCount{ static_cast<int32_t>(0x20) };

  /// @brief Field k_RefreshRate offset 0xffffffff size 0x4
  static constexpr float_t k_RefreshRate{ static_cast<float_t>(0.2f) };

  /// @brief Field occluderDebugViewEnable, offset: 0x10, size: 0x1, def value: None
  bool ___occluderDebugViewEnable;

  /// @brief Field occluderContextStats, offset: 0x11, size: 0x1, def value: None
  bool ___occluderContextStats;

  /// @brief Field occluderDebugViewRange, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___occluderDebugViewRange;

  /// @brief Field occluderDebugViewIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___occluderDebugViewIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewEnable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderContextStats) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewRange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, ___occluderDebugViewIndex) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_SettingsPanel*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer_Strings*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass29_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass29_0");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass34_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass34_0");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer___c__DisplayClass35_0*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/<>c__DisplayClass35_0");
NEED_NO_BOX(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c*, "UnityEngine.Rendering", "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass4_0*, "UnityEngine.Rendering",
                       "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass4_0");
NEED_NO_BOX(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass5_0*, "UnityEngine.Rendering",
                       "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass5_0");
NEED_NO_BOX(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SettingsPanel_DebugDisplayGPUResidentDrawer___c__DisplayClass6_0*, "UnityEngine.Rendering",
                       "DebugDisplayGPUResidentDrawer/SettingsPanel/<>c__DisplayClass6_0");

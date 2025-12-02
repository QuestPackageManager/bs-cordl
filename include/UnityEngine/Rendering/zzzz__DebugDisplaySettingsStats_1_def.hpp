#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsStats_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsStats_1)
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplaySettingsStats_1_StatsPanel;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1;
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
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplaySettingsStats_1;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplaySettingsStats_1_StatsPanel;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsStats_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel);
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsStats`1/StatsPanel<TProfileId>
class CORDL_TYPE DebugDisplaySettingsStats_1_StatsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  /// @brief Field m_Data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* m_Data;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>* New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* displaySettingsStats);

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* const& __cordl_internal_get_m_Data() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>*& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* displaySettingsStats);

  /// @brief Method get_Flags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsStats_1_StatsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsStats_1_StatsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsStats_1_StatsPanel(DebugDisplaySettingsStats_1_StatsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsStats_1_StatsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsStats_1_StatsPanel(DebugDisplaySettingsStats_1_StatsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11924 };

  /// @brief Field m_Data, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsStats`1<TProfileId>
class CORDL_TYPE DebugDisplaySettingsStats_1 : public ::System::Object {
public:
  // Declarations
  using StatsPanel = ::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel<TProfileId>;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Field <debugDisplayStats>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__debugDisplayStats_k__BackingField,
                      put = __cordl_internal_set__debugDisplayStats_k__BackingField)) ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* _debugDisplayStats_k__BackingField;

  __declspec(property(get = get_debugDisplayStats)) ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* debugDisplayStats;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method CreatePanel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* CreatePanel();

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<TProfileId>* New_ctor(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* debugDisplayStats);

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const& __cordl_internal_get__debugDisplayStats_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& __cordl_internal_get__debugDisplayStats_k__BackingField();

  constexpr void __cordl_internal_set__debugDisplayStats_k__BackingField(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* debugDisplayStats);

  /// @brief Method get_AreAnySettingsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_debugDisplayStats, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* get_debugDisplayStats();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsStats_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsStats_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsStats_1(DebugDisplaySettingsStats_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsStats_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsStats_1(DebugDisplaySettingsStats_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11925 };

  /// @brief Field <debugDisplayStats>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* ____debugDisplayStats_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsStats_1, "UnityEngine.Rendering", "DebugDisplaySettingsStats`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsStats_1_StatsPanel, "UnityEngine.Rendering", "DebugDisplaySettingsStats`1/StatsPanel");

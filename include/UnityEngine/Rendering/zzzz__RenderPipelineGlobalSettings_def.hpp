#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGlobalSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipelineGlobalSettings)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGlobalSettings);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGlobalSettings
class CORDL_TYPE RenderPipelineGlobalSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field <settingsMap>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsMap_k__BackingField,
                      put = __cordl_internal_set__settingsMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* _settingsMap_k__BackingField;

  __declspec(property(get = get_settingsList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* settingsList;

  __declspec(property(get = get_settingsMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* settingsMap;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Contains, addr 0x6957cb8, size 0x90, virtual false, abstract: false, final false
  inline bool Contains(::System::Type* type);

  /// @brief Method GetSettingsImplementingInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSettingsInterfaceType> inline bool GetSettingsImplementingInterface(::ByRef<::System::Collections::Generic::List_1<TSettingsInterfaceType>*> settings);

  static inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x6957d4c, size 0x4, virtual true, abstract: false, final false
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x6957d48, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeSerialize();

  /// @brief Method RecreateSettingsMap, addr 0x6957a84, size 0x150, virtual false, abstract: false, final false
  inline void RecreateSettingsMap();

  /// @brief Method TryGet, addr 0x6957bd4, size 0xe4, virtual false, abstract: false, final false
  inline bool TryGet(::System::Type* type, ::ByRef<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> settings);

  /// @brief Method TryGetFirstSettingsImplementingInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSettingsInterfaceType> inline bool TryGetFirstSettingsImplementingInterface(::ByRef<TSettingsInterfaceType> settings);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* const& __cordl_internal_get__settingsMap_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*& __cordl_internal_get__settingsMap_k__BackingField();

  constexpr void __cordl_internal_set__settingsMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value);

  /// @brief Method .ctor, addr 0x6957d50, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settingsList, addr 0x6957830, size 0x24c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* get_settingsList();

  /// @brief Method get_settingsMap, addr 0x6957a7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* get_settingsMap();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGlobalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGlobalSettings(RenderPipelineGlobalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGlobalSettings(RenderPipelineGlobalSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10797 };

  /// @brief Field <settingsMap>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* ____settingsMap_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipelineGlobalSettings, ____settingsMap_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineGlobalSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineGlobalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineGlobalSettings*, "UnityEngine.Rendering", "RenderPipelineGlobalSettings");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(G_AdvancedData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Text {
class StringBuilder;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace UnityEngine::UI {
class Text;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Advanced::G_AdvancedData);
// Type: Tayx.Graphy.Advanced::G_AdvancedData
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Advanced {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15090))
// CS Name: ::Tayx.Graphy.Advanced::G_AdvancedData*
class CORDL_TYPE G_AdvancedData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_backgroundImages, offset 0x18, size 0x8
  __declspec(property(get = __get_m_backgroundImages, put = __set_m_backgroundImages))::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_backgroundImages;

  /// @brief Field m_graphicsDeviceVersionText, offset 0x20, size 0x8
  __declspec(property(get = __get_m_graphicsDeviceVersionText, put = __set_m_graphicsDeviceVersionText))::UnityEngine::UI::Text* m_graphicsDeviceVersionText;

  /// @brief Field m_processorTypeText, offset 0x28, size 0x8
  __declspec(property(get = __get_m_processorTypeText, put = __set_m_processorTypeText))::UnityEngine::UI::Text* m_processorTypeText;

  /// @brief Field m_operatingSystemText, offset 0x30, size 0x8
  __declspec(property(get = __get_m_operatingSystemText, put = __set_m_operatingSystemText))::UnityEngine::UI::Text* m_operatingSystemText;

  /// @brief Field m_systemMemoryText, offset 0x38, size 0x8
  __declspec(property(get = __get_m_systemMemoryText, put = __set_m_systemMemoryText))::UnityEngine::UI::Text* m_systemMemoryText;

  /// @brief Field m_graphicsDeviceNameText, offset 0x40, size 0x8
  __declspec(property(get = __get_m_graphicsDeviceNameText, put = __set_m_graphicsDeviceNameText))::UnityEngine::UI::Text* m_graphicsDeviceNameText;

  /// @brief Field m_graphicsMemorySizeText, offset 0x48, size 0x8
  __declspec(property(get = __get_m_graphicsMemorySizeText, put = __set_m_graphicsMemorySizeText))::UnityEngine::UI::Text* m_graphicsMemorySizeText;

  /// @brief Field m_screenResolutionText, offset 0x50, size 0x8
  __declspec(property(get = __get_m_screenResolutionText, put = __set_m_screenResolutionText))::UnityEngine::UI::Text* m_screenResolutionText;

  /// @brief Field m_gameWindowResolutionText, offset 0x58, size 0x8
  __declspec(property(get = __get_m_gameWindowResolutionText, put = __set_m_gameWindowResolutionText))::UnityEngine::UI::Text* m_gameWindowResolutionText;

  /// @brief Field m_updateRate, offset 0x60, size 0x4
  __declspec(property(get = __get_m_updateRate, put = __set_m_updateRate)) float_t m_updateRate;

  /// @brief Field m_graphyManager, offset 0x68, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_rectTransform, offset 0x70, size 0x8
  __declspec(property(get = __get_m_rectTransform, put = __set_m_rectTransform))::UnityEngine::RectTransform* m_rectTransform;

  /// @brief Field m_deltaTime, offset 0x78, size 0x4
  __declspec(property(get = __get_m_deltaTime, put = __set_m_deltaTime)) float_t m_deltaTime;

  /// @brief Field m_sb, offset 0x80, size 0x8
  __declspec(property(get = __get_m_sb, put = __set_m_sb))::System::Text::StringBuilder* m_sb;

  /// @brief Field m_previousModuleState, offset 0x88, size 0x4
  __declspec(property(get = __get_m_previousModuleState, put = __set_m_previousModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_previousModuleState;

  /// @brief Field m_currentModuleState, offset 0x8c, size 0x4
  __declspec(property(get = __get_m_currentModuleState, put = __set_m_currentModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_currentModuleState;

  /// @brief Field m_windowStrings, offset 0x90, size 0x8
  __declspec(property(get = __get_m_windowStrings, put = __set_m_windowStrings))::ArrayW<::StringW, ::Array<::StringW>*> m_windowStrings;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*& __get_m_backgroundImages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*> const& __get_m_backgroundImages() const;

  constexpr void __set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_graphicsDeviceVersionText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_graphicsDeviceVersionText() const;

  constexpr void __set_m_graphicsDeviceVersionText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_processorTypeText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_processorTypeText() const;

  constexpr void __set_m_processorTypeText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_operatingSystemText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_operatingSystemText() const;

  constexpr void __set_m_operatingSystemText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_systemMemoryText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_systemMemoryText() const;

  constexpr void __set_m_systemMemoryText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_graphicsDeviceNameText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_graphicsDeviceNameText() const;

  constexpr void __set_m_graphicsDeviceNameText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_graphicsMemorySizeText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_graphicsMemorySizeText() const;

  constexpr void __set_m_graphicsMemorySizeText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_screenResolutionText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_screenResolutionText() const;

  constexpr void __set_m_screenResolutionText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_gameWindowResolutionText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_gameWindowResolutionText() const;

  constexpr void __set_m_gameWindowResolutionText(::UnityEngine::UI::Text* value);

  constexpr float_t& __get_m_updateRate();

  constexpr float_t const& __get_m_updateRate() const;

  constexpr void __set_m_updateRate(float_t value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_rectTransform() const;

  constexpr void __set_m_rectTransform(::UnityEngine::RectTransform* value);

  constexpr float_t& __get_m_deltaTime();

  constexpr float_t const& __get_m_deltaTime() const;

  constexpr void __set_m_deltaTime(float_t value);

  constexpr ::System::Text::StringBuilder*& __get_m_sb();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_m_sb() const;

  constexpr void __set_m_sb(::System::Text::StringBuilder* value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_previousModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_previousModuleState() const;

  constexpr void __set_m_previousModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_currentModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_currentModuleState() const;

  constexpr void __set_m_currentModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_windowStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_windowStrings() const;

  constexpr void __set_m_windowStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method OnEnable addr 0x2a0a7d0 size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method Update addr 0x2a0a7d4 size 0x284 virtual false final false
  inline void Update();

  /// @brief Method SetPosition addr 0x2a020e4 size 0x660 virtual true final true
  inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition newModulePosition);

  /// @brief Method SetState addr 0x2a02044 size 0x78 virtual true final true
  inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState state, bool silentUpdate);

  /// @brief Method RestorePreviousState addr 0x2a03614 size 0xc virtual false final false
  inline void RestorePreviousState();

  /// @brief Method UpdateParameters addr 0x2a059d4 size 0x198 virtual false final false
  inline void UpdateParameters();

  /// @brief Method RefreshParameters addr 0x2a060b0 size 0x190 virtual false final false
  inline void RefreshParameters();

  /// @brief Method Init addr 0x2a04674 size 0xeb0 virtual false final false
  inline void Init();

  static inline ::Tayx::Graphy::Advanced::G_AdvancedData* New_ctor();

  /// @brief Method .ctor addr 0x2a0aa58 size 0x23c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AdvancedData(G_AdvancedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AdvancedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AdvancedData(G_AdvancedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AdvancedData();

public:
  /// @brief Field m_backgroundImages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* ___m_backgroundImages;

  /// @brief Field m_graphicsDeviceVersionText, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_graphicsDeviceVersionText;

  /// @brief Field m_processorTypeText, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_processorTypeText;

  /// @brief Field m_operatingSystemText, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_operatingSystemText;

  /// @brief Field m_systemMemoryText, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_systemMemoryText;

  /// @brief Field m_graphicsDeviceNameText, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_graphicsDeviceNameText;

  /// @brief Field m_graphicsMemorySizeText, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_graphicsMemorySizeText;

  /// @brief Field m_screenResolutionText, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_screenResolutionText;

  /// @brief Field m_gameWindowResolutionText, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_gameWindowResolutionText;

  /// @brief Field m_updateRate, offset: 0x60, size: 0x4, def value: None
  float_t ___m_updateRate;

  /// @brief Field m_graphyManager, offset: 0x68, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_rectTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_rectTransform;

  /// @brief Field m_deltaTime, offset: 0x78, size: 0x4, def value: None
  float_t ___m_deltaTime;

  /// @brief Field m_sb, offset: 0x80, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___m_sb;

  /// @brief Field m_previousModuleState, offset: 0x88, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x8c, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_currentModuleState;

  /// @brief Field m_windowStrings, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_windowStrings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Advanced::G_AdvancedData, 0x98>, "Size mismatch!");

} // namespace Tayx::Graphy::Advanced
NEED_NO_BOX(::Tayx::Graphy::Advanced::G_AdvancedData);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Advanced::G_AdvancedData*, "Tayx.Graphy.Advanced", "G_AdvancedData");

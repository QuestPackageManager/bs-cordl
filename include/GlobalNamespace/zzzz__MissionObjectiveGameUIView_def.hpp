#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveGameUIView)
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace UnityEngine {
class Sprite;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveGameUIView);
// Type: ::MissionObjectiveGameUIView
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5035))
// CS Name: ::MissionObjectiveGameUIView*
class CORDL_TYPE MissionObjectiveGameUIView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _notFailedIcon, offset 0x18, size 0x8
  __declspec(property(get = __get__notFailedIcon, put = __set__notFailedIcon))::UnityEngine::Sprite* _notFailedIcon;

  /// @brief Field _failedIcon, offset 0x20, size 0x8
  __declspec(property(get = __get__failedIcon, put = __set__failedIcon))::UnityEngine::Sprite* _failedIcon;

  /// @brief Field _notClearedIcon, offset 0x28, size 0x8
  __declspec(property(get = __get__notClearedIcon, put = __set__notClearedIcon))::UnityEngine::Sprite* _notClearedIcon;

  /// @brief Field _clearedIcon, offset 0x30, size 0x8
  __declspec(property(get = __get__clearedIcon, put = __set__clearedIcon))::UnityEngine::Sprite* _clearedIcon;

  /// @brief Field _resultIcon, offset 0x38, size 0x8
  __declspec(property(get = __get__resultIcon, put = __set__resultIcon))::UnityEngine::UI::Image* _resultIcon;

  /// @brief Field _finalClearIconColor, offset 0x40, size 0x10
  __declspec(property(get = __get__finalClearIconColor, put = __set__finalClearIconColor))::UnityEngine::Color _finalClearIconColor;

  /// @brief Field _finalFailIconColor, offset 0x50, size 0x10
  __declspec(property(get = __get__finalFailIconColor, put = __set__finalFailIconColor))::UnityEngine::Color _finalFailIconColor;

  /// @brief Field _nonFinalIconColor, offset 0x60, size 0x10
  __declspec(property(get = __get__nonFinalIconColor, put = __set__nonFinalIconColor))::UnityEngine::Color _nonFinalIconColor;

  /// @brief Field _clearedPS, offset 0x70, size 0x8
  __declspec(property(get = __get__clearedPS, put = __set__clearedPS))::UnityEngine::ParticleSystem* _clearedPS;

  /// @brief Field _numberOfParticles, offset 0x78, size 0x4
  __declspec(property(get = __get__numberOfParticles, put = __set__numberOfParticles)) int32_t _numberOfParticles;

  /// @brief Field _nameText, offset 0x80, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _valueText, offset 0x88, size 0x8
  __declspec(property(get = __get__valueText, put = __set__valueText))::TMPro::TextMeshProUGUI* _valueText;

  /// @brief Field _conditionText, offset 0x90, size 0x8
  __declspec(property(get = __get__conditionText, put = __set__conditionText))::TMPro::TextMeshProUGUI* _conditionText;

  /// @brief Field _missionObjectiveChecker, offset 0x98, size 0x8
  __declspec(property(get = __get__missionObjectiveChecker, put = __set__missionObjectiveChecker))::GlobalNamespace::MissionObjectiveChecker* _missionObjectiveChecker;

  constexpr ::UnityEngine::Sprite*& __get__notFailedIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__notFailedIcon() const;

  constexpr void __set__notFailedIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__failedIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__failedIcon() const;

  constexpr void __set__failedIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__notClearedIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__notClearedIcon() const;

  constexpr void __set__notClearedIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__clearedIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__clearedIcon() const;

  constexpr void __set__clearedIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::UI::Image*& __get__resultIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__resultIcon() const;

  constexpr void __set__resultIcon(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::Color& __get__finalClearIconColor();

  constexpr ::UnityEngine::Color const& __get__finalClearIconColor() const;

  constexpr void __set__finalClearIconColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__finalFailIconColor();

  constexpr ::UnityEngine::Color const& __get__finalFailIconColor() const;

  constexpr void __set__finalFailIconColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__nonFinalIconColor();

  constexpr ::UnityEngine::Color const& __get__nonFinalIconColor() const;

  constexpr void __set__nonFinalIconColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::ParticleSystem*& __get__clearedPS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__clearedPS() const;

  constexpr void __set__clearedPS(::UnityEngine::ParticleSystem* value);

  constexpr int32_t& __get__numberOfParticles();

  constexpr int32_t const& __get__numberOfParticles() const;

  constexpr void __set__numberOfParticles(int32_t value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__valueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__valueText() const;

  constexpr void __set__valueText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__conditionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__conditionText() const;

  constexpr void __set__conditionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::MissionObjectiveChecker*& __get__missionObjectiveChecker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveChecker*> const& __get__missionObjectiveChecker() const;

  constexpr void __set__missionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker* value);

  /// @brief Method SetMissionObjectiveChecker addr 0x23c1034 size 0x27c virtual false final false
  inline void SetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  /// @brief Method HandleMissionObjectiveStatusDidChange addr 0x23c140c size 0x4 virtual false final false
  inline void HandleMissionObjectiveStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  /// @brief Method HandleMissionObjectiveCheckedValueDidChange addr 0x23c1410 size 0x4 virtual false final false
  inline void HandleMissionObjectiveCheckedValueDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);

  /// @brief Method RefreshIcon addr 0x23c12b0 size 0x104 virtual false final false
  inline void RefreshIcon();

  /// @brief Method RefreshValue addr 0x23c13b4 size 0x58 virtual false final false
  inline void RefreshValue();

  static inline ::GlobalNamespace::MissionObjectiveGameUIView* New_ctor();

  /// @brief Method .ctor addr 0x23c1414 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveGameUIView(MissionObjectiveGameUIView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveGameUIView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveGameUIView(MissionObjectiveGameUIView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveGameUIView();

public:
  /// @brief Field _notFailedIcon, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____notFailedIcon;

  /// @brief Field _failedIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____failedIcon;

  /// @brief Field _notClearedIcon, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____notClearedIcon;

  /// @brief Field _clearedIcon, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____clearedIcon;

  /// @brief Field _resultIcon, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____resultIcon;

  /// @brief Field _finalClearIconColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____finalClearIconColor;

  /// @brief Field _finalFailIconColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____finalFailIconColor;

  /// @brief Field _nonFinalIconColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____nonFinalIconColor;

  /// @brief Field _clearedPS, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____clearedPS;

  /// @brief Field _numberOfParticles, offset: 0x78, size: 0x4, def value: None
  int32_t ____numberOfParticles;

  /// @brief Field _nameText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _valueText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____valueText;

  /// @brief Field _conditionText, offset: 0x90, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____conditionText;

  /// @brief Field _missionObjectiveChecker, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveChecker* ____missionObjectiveChecker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveGameUIView, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveGameUIView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveGameUIView*, "", "MissionObjectiveGameUIView");

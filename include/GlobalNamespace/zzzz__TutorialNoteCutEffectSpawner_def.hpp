#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialNoteCutEffectSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TutorialNoteCutEffectSpawner)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class FlyingTextSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoteCutEffectSpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TutorialNoteCutEffectSpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TutorialNoteCutEffectSpawner*, "", "TutorialNoteCutEffectSpawner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialNoteCutEffectSpawner
class CORDL_TYPE TutorialNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _failFlyingTextSpawner, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__failFlyingTextSpawner, put = __cordl_internal_set__failFlyingTextSpawner)) ::UnityW<::GlobalNamespace::FlyingTextSpawner> _failFlyingTextSpawner;

  /// @brief Method HandleNoteWasCut, addr 0x59f2134, size 0x278, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::TutorialNoteCutEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x59f209c, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x59f200c, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::FlyingTextSpawner> const& __cordl_internal_get__failFlyingTextSpawner() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingTextSpawner>& __cordl_internal_get__failFlyingTextSpawner();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__failFlyingTextSpawner(::UnityW<::GlobalNamespace::FlyingTextSpawner> value);

  /// @brief Method .ctor, addr 0x59f23ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialNoteCutEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialNoteCutEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialNoteCutEffectSpawner(TutorialNoteCutEffectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6256 };

  /// @brief Field kCutHarderFlyingTextLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCutHarderFlyingTextLocalizationKey{ u"CUT_HARDER_FLYING_TEXT" };

  /// @brief Field kDoNotCutFlyingTextLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDoNotCutFlyingTextLocalizationKey{ u"DO_NOT_CUT_FLYING_TEXT" };

  /// @brief Field kTooSoonFlyingTextLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTooSoonFlyingTextLocalizationKey{ u"TOO_SOON_FLYING_TEXT" };

  /// @brief Field kWrongColorFlyingTextLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kWrongColorFlyingTextLocalizationKey{ u"WRONG_COLOR_FLYING_TEXT" };

  /// @brief Field kWrongDirectionFlyingTextLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kWrongDirectionFlyingTextLocalizationKey{ u"WRONG_DIRECTION_FLYING_TEXT" };

  /// @brief Field _failFlyingTextSpawner, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingTextSpawner> ____failFlyingTextSpawner;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialNoteCutEffectSpawner, ____failFlyingTextSpawner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialNoteCutEffectSpawner, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TutorialNoteCutEffectSpawner) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace

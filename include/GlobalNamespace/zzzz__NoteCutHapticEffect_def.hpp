#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutHapticEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutHapticEffect)
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
struct NoteCutHapticEffect_Type;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct NoteCutHapticEffect_Type;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteCutHapticEffect_Type);
MARK_REF_PTR_T(::GlobalNamespace::NoteCutHapticEffect);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteCutHapticEffect/Type
struct CORDL_TYPE NoteCutHapticEffect_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteCutHapticEffect_Type_Unwrapped
  enum struct __NoteCutHapticEffect_Type_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_ChainHead = static_cast<int32_t>(0x1),
    __E_ChainLink = static_cast<int32_t>(0x2),
    __E_Bomb = static_cast<int32_t>(0x3),
    __E_BadCut = static_cast<int32_t>(0x4),
    __E_ArcHead = static_cast<int32_t>(0x5),
    __E_ArcTail = static_cast<int32_t>(0x6),
    __E_ArcHeadAndTail = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteCutHapticEffect_Type_Unwrapped() const noexcept {
    return static_cast<__NoteCutHapticEffect_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutHapticEffect_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteCutHapticEffect_Type(int32_t value__) noexcept;

  /// @brief Field ArcHead value: I32(5)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const ArcHead;

  /// @brief Field ArcHeadAndTail value: I32(7)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const ArcHeadAndTail;

  /// @brief Field ArcTail value: I32(6)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const ArcTail;

  /// @brief Field BadCut value: I32(4)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const BadCut;

  /// @brief Field Bomb value: I32(3)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const Bomb;

  /// @brief Field ChainHead value: I32(1)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const ChainHead;

  /// @brief Field ChainLink value: I32(2)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const ChainLink;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::NoteCutHapticEffect_Type const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4231 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutHapticEffect_Type, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutHapticEffect
class CORDL_TYPE NoteCutHapticEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Type = ::GlobalNamespace::NoteCutHapticEffect_Type;

  /// @brief Field _arcHeadAndTailPreset, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__arcHeadAndTailPreset, put = __cordl_internal_set__arcHeadAndTailPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _arcHeadAndTailPreset;

  /// @brief Field _arcHeadPreset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__arcHeadPreset, put = __cordl_internal_set__arcHeadPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _arcHeadPreset;

  /// @brief Field _arcTailPreset, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__arcTailPreset, put = __cordl_internal_set__arcTailPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _arcTailPreset;

  /// @brief Field _badCutPreset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__badCutPreset, put = __cordl_internal_set__badCutPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _badCutPreset;

  /// @brief Field _bombPreset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bombPreset, put = __cordl_internal_set__bombPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _bombPreset;

  /// @brief Field _chainHeadPreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__chainHeadPreset, put = __cordl_internal_set__chainHeadPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _chainHeadPreset;

  /// @brief Field _chainLinkPreset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__chainLinkPreset, put = __cordl_internal_set__chainLinkPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _chainLinkPreset;

  /// @brief Field _hapticFeedbackManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _normalPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalPreset, put = __cordl_internal_set__normalPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _normalPreset;

  /// @brief Method HitNote, addr 0x3b92128, size 0xa0, virtual false, abstract: false, final false
  inline void HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::NoteCutHapticEffect_Type type);

  static inline ::GlobalNamespace::NoteCutHapticEffect* New_ctor();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__arcHeadAndTailPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__arcHeadAndTailPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__arcHeadPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__arcHeadPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__arcTailPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__arcTailPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__badCutPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__badCutPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__bombPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__bombPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__chainHeadPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__chainHeadPreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__chainLinkPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__chainLinkPreset();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__normalPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__normalPreset();

  constexpr void __cordl_internal_set__arcHeadAndTailPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__arcHeadPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__arcTailPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__badCutPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__bombPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__chainHeadPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__chainLinkPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__normalPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  /// @brief Method .ctor, addr 0x3b921c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutHapticEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutHapticEffect(NoteCutHapticEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutHapticEffect(NoteCutHapticEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4232 };

  /// @brief Field _normalPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____normalPreset;

  /// @brief Field _chainHeadPreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____chainHeadPreset;

  /// @brief Field _chainLinkPreset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____chainLinkPreset;

  /// @brief Field _bombPreset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____bombPreset;

  /// @brief Field _badCutPreset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____badCutPreset;

  /// @brief Field _arcHeadPreset, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____arcHeadPreset;

  /// @brief Field _arcTailPreset, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____arcTailPreset;

  /// @brief Field _arcHeadAndTailPreset, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____arcHeadAndTailPreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____normalPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____chainHeadPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____chainLinkPreset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____bombPreset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____badCutPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____arcHeadPreset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____arcTailPreset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____arcHeadAndTailPreset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____hapticFeedbackManager) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutHapticEffect, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutHapticEffect_Type, "", "NoteCutHapticEffect/Type");
NEED_NO_BOX(::GlobalNamespace::NoteCutHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutHapticEffect*, "", "NoteCutHapticEffect");

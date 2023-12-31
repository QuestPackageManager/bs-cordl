#pragma once
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
struct SaberType;
}
namespace GlobalNamespace {
struct __NoteCutHapticEffect__Type;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteCutHapticEffect__Type;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteCutHapticEffect__Type);
MARK_REF_PTR_T(::GlobalNamespace::NoteCutHapticEffect);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4869))
// CS Name: ::NoteCutHapticEffect::Type
struct CORDL_TYPE __NoteCutHapticEffect__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteCutHapticEffect__Type_Unwrapped
  enum struct ____NoteCutHapticEffect__Type_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_ShortNormal = static_cast<int32_t>(0x1),
    __E_ShortWeak = static_cast<int32_t>(0x2),
    __E_Bomb = static_cast<int32_t>(0x3),
    __E_BadCut = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteCutHapticEffect__Type_Unwrapped() const noexcept {
    return static_cast<____NoteCutHapticEffect__Type_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteCutHapticEffect__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutHapticEffect__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteCutHapticEffect__Type const Normal;

  /// @brief Field ShortNormal value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteCutHapticEffect__Type const ShortNormal;

  /// @brief Field ShortWeak value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteCutHapticEffect__Type const ShortWeak;

  /// @brief Field Bomb value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NoteCutHapticEffect__Type const Bomb;

  /// @brief Field BadCut value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NoteCutHapticEffect__Type const BadCut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutHapticEffect__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutHapticEffect__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutHapticEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4870))
// CS Name: ::NoteCutHapticEffect*
class CORDL_TYPE NoteCutHapticEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Type = ::GlobalNamespace::__NoteCutHapticEffect__Type;

  /// @brief Field _normalPreset, offset 0x18, size 0x8
  __declspec(property(get = __get__normalPreset, put = __set__normalPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _normalPreset;

  /// @brief Field _shortNormalPreset, offset 0x20, size 0x8
  __declspec(property(get = __get__shortNormalPreset, put = __set__shortNormalPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _shortNormalPreset;

  /// @brief Field _shortWeakPreset, offset 0x28, size 0x8
  __declspec(property(get = __get__shortWeakPreset, put = __set__shortWeakPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _shortWeakPreset;

  /// @brief Field _bombPreset, offset 0x30, size 0x8
  __declspec(property(get = __get__bombPreset, put = __set__bombPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _bombPreset;

  /// @brief Field _badCutPreset, offset 0x38, size 0x8
  __declspec(property(get = __get__badCutPreset, put = __set__badCutPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _badCutPreset;

  /// @brief Field _hapticFeedbackManager, offset 0x40, size 0x8
  __declspec(property(get = __get__hapticFeedbackManager, put = __set__hapticFeedbackManager))::GlobalNamespace::HapticFeedbackManager* _hapticFeedbackManager;

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__normalPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__normalPreset() const;

  constexpr void __set__normalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__shortNormalPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__shortNormalPreset() const;

  constexpr void __set__shortNormalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__shortWeakPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__shortWeakPreset() const;

  constexpr void __set__shortWeakPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__bombPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__bombPreset() const;

  constexpr void __set__bombPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__badCutPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__badCutPreset() const;

  constexpr void __set__badCutPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::GlobalNamespace::HapticFeedbackManager*& __get__hapticFeedbackManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& __get__hapticFeedbackManager() const;

  constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value);

  /// @brief Method HitNote, addr 0x239a8cc, size 0x88, virtual false, abstract: false, final false
  inline void HitNote(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::__NoteCutHapticEffect__Type type);

  static inline ::GlobalNamespace::NoteCutHapticEffect* New_ctor();

  /// @brief Method .ctor, addr 0x239a954, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutHapticEffect(NoteCutHapticEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutHapticEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutHapticEffect(NoteCutHapticEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutHapticEffect();

public:
  /// @brief Field _normalPreset, offset: 0x18, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____normalPreset;

  /// @brief Field _shortNormalPreset, offset: 0x20, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____shortNormalPreset;

  /// @brief Field _shortWeakPreset, offset: 0x28, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____shortWeakPreset;

  /// @brief Field _bombPreset, offset: 0x30, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____bombPreset;

  /// @brief Field _badCutPreset, offset: 0x38, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____badCutPreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::HapticFeedbackManager* ____hapticFeedbackManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutHapticEffect, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____normalPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____shortNormalPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____shortWeakPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____bombPreset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____badCutPreset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutHapticEffect, ____hapticFeedbackManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutHapticEffect__Type, "", "NoteCutHapticEffect/Type");
NEED_NO_BOX(::GlobalNamespace::NoteCutHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutHapticEffect*, "", "NoteCutHapticEffect");

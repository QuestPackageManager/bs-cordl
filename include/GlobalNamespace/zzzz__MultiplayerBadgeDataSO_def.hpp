#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataSO);
// Type: ::MultiplayerBadgeDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5108))
// CS Name: ::MultiplayerBadgeDataSO*
class CORDL_TYPE MultiplayerBadgeDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _titleLocalizationKey, offset 0x18, size 0x8
  __declspec(property(get = __get__titleLocalizationKey, put = __set__titleLocalizationKey))::StringW _titleLocalizationKey;

  /// @brief Field _subtitleLocalizationKey, offset 0x20, size 0x8
  __declspec(property(get = __get__subtitleLocalizationKey, put = __set__subtitleLocalizationKey))::StringW _subtitleLocalizationKey;

  /// @brief Field _icon, offset 0x28, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::Sprite* _icon;

  __declspec(property(get = get_icon))::UnityEngine::Sprite* icon;

  __declspec(property(get = get_titleLocalizationKey))::StringW titleLocalizationKey;

  __declspec(property(get = get_subtitleLocalizationKey))::StringW subtitleLocalizationKey;

  constexpr ::StringW& __get__titleLocalizationKey();

  constexpr ::StringW const& __get__titleLocalizationKey() const;

  constexpr void __set__titleLocalizationKey(::StringW value);

  constexpr ::StringW& __get__subtitleLocalizationKey();

  constexpr ::StringW const& __get__subtitleLocalizationKey() const;

  constexpr void __set__subtitleLocalizationKey(::StringW value);

  constexpr ::UnityEngine::Sprite*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::Sprite* value);

  /// @brief Method get_icon, addr 0x23cf8fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_icon();

  /// @brief Method get_titleLocalizationKey, addr 0x23cf904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_titleLocalizationKey();

  /// @brief Method get_subtitleLocalizationKey, addr 0x23cf90c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_subtitleLocalizationKey();

  /// @brief Method CalculateBadgeData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                          ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                          float_t randomMultiplier);

  static inline ::GlobalNamespace::MultiplayerBadgeDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x23cdc6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataSO(MultiplayerBadgeDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataSO(MultiplayerBadgeDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataSO();

public:
  /// @brief Field _titleLocalizationKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ____titleLocalizationKey;

  /// @brief Field _subtitleLocalizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____subtitleLocalizationKey;

  /// @brief Field _icon, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____icon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____titleLocalizationKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____subtitleLocalizationKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataSO, ____icon) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataSO*, "", "MultiplayerBadgeDataSO");

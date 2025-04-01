#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgesProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgesProvider)
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider___c;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesProvider);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesProvider___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgesProvider/<>c
class CORDL_TYPE MultiplayerBadgesProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerBadgesProvider___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* __9__7_1;

  static inline ::GlobalNamespace::MultiplayerBadgesProvider___c* New_ctor();

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_0, addr 0x26d86f4, size 0x20, virtual false, abstract: false, final false
  inline bool _SelectBadgesAndPutThemIntoResults_b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_1, addr 0x26d8714, size 0x28, virtual false, abstract: false, final false
  inline int32_t _SelectBadgesAndPutThemIntoResults_b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData* p);

  /// @brief Method .ctor, addr 0x26d86ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerBadgesProvider___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* getStaticF___9__7_0();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* getStaticF___9__7_1();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerBadgesProvider___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgesProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgesProvider___c(MultiplayerBadgesProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgesProvider___c(MultiplayerBadgesProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesProvider___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgesProvider
class CORDL_TYPE MultiplayerBadgesProvider : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::MultiplayerBadgesProvider___c;

  /// @brief Field _beatmapKey, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _multiplayerBadgesModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBadgesModel, put = __cordl_internal_set__multiplayerBadgesModel)) ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>
      _multiplayerBadgesModel;

  /// @brief Field _playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  static inline ::GlobalNamespace::MultiplayerBadgesProvider* New_ctor();

  /// @brief Method SelectBadgesAndPutThemIntoResults, addr 0x26d71b0, size 0x14d8, virtual false, abstract: false, final false
  inline void SelectBadgesAndPutThemIntoResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* playerResults);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> const& __cordl_internal_get__multiplayerBadgesModel() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>& __cordl_internal_get__multiplayerBadgesModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__multiplayerBadgesModel(::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x26d8688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgesProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgesProvider(MultiplayerBadgesProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgesProvider(MultiplayerBadgesProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13086 };

  /// @brief Field kMaxRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMaxRandomMultiplierAmount{ static_cast<float_t>(1.2f) };

  /// @brief Field kMinRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMinRandomMultiplierAmount{ static_cast<float_t>(0.8f) };

  /// @brief Field kTargetNegativeBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetNegativeBadgesCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kTargetPositiveBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetPositiveBadgesCount{ static_cast<int32_t>(0x2) };

  /// @brief Field _playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatmapKey, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _multiplayerBadgesModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> ____multiplayerBadgesModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____playerDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____multiplayerBadgesModel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesProvider, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider*, "", "MultiplayerBadgesProvider");
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider___c*, "", "MultiplayerBadgesProvider/<>c");

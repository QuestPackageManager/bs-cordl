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
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class __MultiplayerBadgesProvider____c;
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
class __MultiplayerBadgesProvider____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesProvider);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerBadgesProvider____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerBadgesProvider::<>c*
class CORDL_TYPE __MultiplayerBadgesProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__MultiplayerBadgesProvider____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* __9__7_1;

  static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* New_ctor();

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_0, addr 0x2698ed4, size 0x20, virtual false, abstract: false, final false
  inline bool _SelectBadgesAndPutThemIntoResults_b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_1, addr 0x2698ef4, size 0x28, virtual false, abstract: false, final false
  inline int32_t _SelectBadgesAndPutThemIntoResults_b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData* p);

  /// @brief Method .ctor, addr 0x2698ecc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* getStaticF___9__7_0();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* getStaticF___9__7_1();

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerBadgesProvider____c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerBadgesProvider____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerBadgesProvider____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerBadgesProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerBadgesProvider*
class CORDL_TYPE MultiplayerBadgesProvider : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerBadgesProvider____c;

  /// @brief Field _beatmapKey, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _multiplayerBadgesModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerBadgesModel, put = __cordl_internal_set__multiplayerBadgesModel)) ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>
      _multiplayerBadgesModel;

  /// @brief Field _playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  static inline ::GlobalNamespace::MultiplayerBadgesProvider* New_ctor();

  /// @brief Method SelectBadgesAndPutThemIntoResults, addr 0x2697990, size 0x14d8, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2698e68, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatmapKey, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _multiplayerBadgesModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> ____multiplayerBadgesModel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13037 };

  /// @brief Field kMaxRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMaxRandomMultiplierAmount{ 1.2 };

  /// @brief Field kMinRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMinRandomMultiplierAmount{ 0.8 };

  /// @brief Field kTargetNegativeBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetNegativeBadgesCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kTargetPositiveBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetPositiveBadgesCount{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____playerDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____multiplayerBadgesModel) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider*, "", "MultiplayerBadgesProvider");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerBadgesProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerBadgesProvider____c*, "", "MultiplayerBadgesProvider/<>c");

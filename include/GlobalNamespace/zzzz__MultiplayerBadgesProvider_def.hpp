#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgesProvider)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5112))
// CS Name: ::MultiplayerBadgesProvider::<>c*
class CORDL_TYPE __MultiplayerBadgesProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerBadgesProvider____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* __9__7_1;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerBadgesProvider____c* value);

  static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* getStaticF___9__7_0();

  static inline void setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* value);

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* getStaticF___9__7_1();

  static inline ::GlobalNamespace::__MultiplayerBadgesProvider____c* New_ctor();

  /// @brief Method .ctor, addr 0x23d0f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_0, addr 0x23d0f70, size 0x20, virtual false, abstract: false, final false
  inline bool _SelectBadgesAndPutThemIntoResults_b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  /// @brief Method <SelectBadgesAndPutThemIntoResults>b__7_1, addr 0x23d0f90, size 0x28, virtual false, abstract: false, final false
  inline int32_t _SelectBadgesAndPutThemIntoResults_b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData* p);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerBadgesProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerBadgesProvider____c(__MultiplayerBadgesProvider____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerBadgesProvider____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerBadgesProvider____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerBadgesProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5113))
// CS Name: ::MultiplayerBadgesProvider*
class CORDL_TYPE MultiplayerBadgesProvider : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerBadgesProvider____c;

  /// @brief Field _playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _difficultyBeatmap, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _multiplayerBadgesModel, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerBadgesModel, put = __set__multiplayerBadgesModel))::GlobalNamespace::MultiplayerBadgesModelSO* _multiplayerBadgesModel;

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::MultiplayerBadgesModelSO*& __get__multiplayerBadgesModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesModelSO*> const& __get__multiplayerBadgesModel() const;

  constexpr void __set__multiplayerBadgesModel(::GlobalNamespace::MultiplayerBadgesModelSO* value);

  /// @brief Method SelectBadgesAndPutThemIntoResults, addr 0x23cfa58, size 0x14a4, virtual false, abstract: false, final false
  inline void SelectBadgesAndPutThemIntoResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* playerResults);

  static inline ::GlobalNamespace::MultiplayerBadgesProvider* New_ctor();

  /// @brief Method .ctor, addr 0x23d0efc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgesProvider(MultiplayerBadgesProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgesProvider(MultiplayerBadgesProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgesProvider();

public:
  /// @brief Field _playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _difficultyBeatmap, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _multiplayerBadgesModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgesModelSO* ____multiplayerBadgesModel;

  /// @brief Field kTargetPositiveBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetPositiveBadgesCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kTargetNegativeBadgesCount offset 0xffffffff size 0x4
  static constexpr int32_t kTargetNegativeBadgesCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kMinRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMinRandomMultiplierAmount{ 0.8 };

  /// @brief Field kMaxRandomMultiplierAmount offset 0xffffffff size 0x4
  static constexpr float_t kMaxRandomMultiplierAmount{ 1.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____playerDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____difficultyBeatmap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgesProvider, ____multiplayerBadgesModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider*, "", "MultiplayerBadgesProvider");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerBadgesProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerBadgesProvider____c*, "", "MultiplayerBadgesProvider/<>c");

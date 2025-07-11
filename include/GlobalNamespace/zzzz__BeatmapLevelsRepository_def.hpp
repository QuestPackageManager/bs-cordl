#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsRepository.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsRepository)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsRepository;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsRepository);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsRepository
class CORDL_TYPE BeatmapLevelsRepository : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelIdToBeatmapLevelPackId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelIdToBeatmapLevelPackId,
                      put = __cordl_internal_set__beatmapLevelIdToBeatmapLevelPackId)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _beatmapLevelIdToBeatmapLevelPackId;

  /// @brief Field _beatmapLevelPacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPacks,
                      put = __cordl_internal_set__beatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _beatmapLevelPacks;

  /// @brief Field _idToBeatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__idToBeatmapLevel,
                      put = __cordl_internal_set__idToBeatmapLevel)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* _idToBeatmapLevel;

  /// @brief Field _idToBeatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__idToBeatmapLevelPack,
                      put = __cordl_internal_set__idToBeatmapLevelPack)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* _idToBeatmapLevelPack;

  __declspec(property(get = get_beatmapLevelPacks)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks;

  /// @brief Method AddBeatmapLevel, addr 0x26cae68, size 0x98, virtual false, abstract: false, final false
  inline void AddBeatmapLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW songPackId);

  /// @brief Method GetBeatmapLevelById, addr 0x26cae10, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* GetBeatmapLevelById(::StringW levelId);

  /// @brief Method GetBeatmapLevelPackByBeatmapLevelId, addr 0x26cad8c, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetBeatmapLevelPackByBeatmapLevelId(::StringW levelId);

  /// @brief Method GetBeatmapLevelPackByPackId, addr 0x26cad34, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetBeatmapLevelPackByPackId(::StringW packId);

  static inline ::GlobalNamespace::BeatmapLevelsRepository* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method TryGetBeatmapLevelById, addr 0x26caf00, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetBeatmapLevelById(::StringW levelId, ::ByRef<::GlobalNamespace::BeatmapLevel*> beatmapLevel);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__beatmapLevelIdToBeatmapLevelPackId() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__beatmapLevelIdToBeatmapLevelPackId();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get__idToBeatmapLevel() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__idToBeatmapLevel();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get__idToBeatmapLevelPack() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__idToBeatmapLevelPack();

  constexpr void __cordl_internal_set__beatmapLevelIdToBeatmapLevelPackId(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__idToBeatmapLevel(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set__idToBeatmapLevelPack(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x26ca9f4, size 0x340, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method get_beatmapLevelPacks, addr 0x26ca9ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* get_beatmapLevelPacks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsRepository();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsRepository", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsRepository(BeatmapLevelsRepository&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsRepository", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsRepository(BeatmapLevelsRepository const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12963 };

  /// @brief Field _beatmapLevelPacks, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____beatmapLevelPacks;

  /// @brief Field _idToBeatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* ____idToBeatmapLevelPack;

  /// @brief Field _idToBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* ____idToBeatmapLevel;

  /// @brief Field _beatmapLevelIdToBeatmapLevelPackId, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____beatmapLevelIdToBeatmapLevelPackId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsRepository, ____beatmapLevelPacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsRepository, ____idToBeatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsRepository, ____idToBeatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsRepository, ____beatmapLevelIdToBeatmapLevelPackId) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsRepository, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsRepository);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsRepository*, "", "BeatmapLevelsRepository");

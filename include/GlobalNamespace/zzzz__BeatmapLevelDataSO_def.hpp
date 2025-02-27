#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO_DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO_DifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO___c__DisplayClass22_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class DifficultyBeatmapSet_BeatmapLevelDataSO___c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO_DifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO_DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO___c__DisplayClass22_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class DifficultyBeatmapSet_BeatmapLevelDataSO___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0);
MARK_REF_PTR_T(::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO/DifficultyBeatmapSet/<>c
class CORDL_TYPE DifficultyBeatmapSet_BeatmapLevelDataSO___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* __9__8_0;

  static inline ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* New_ctor();

  /// @brief Method <Add>b__8_0, addr 0x26cb6b4, size 0x90, virtual false, abstract: false, final false
  inline int32_t _Add_b__8_0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* a, ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* b);

  /// @brief Method .ctor, addr 0x26cb6ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* value);

  static inline void setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyBeatmapSet_BeatmapLevelDataSO___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet_BeatmapLevelDataSO___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyBeatmapSet_BeatmapLevelDataSO___c(DifficultyBeatmapSet_BeatmapLevelDataSO___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet_BeatmapLevelDataSO___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyBeatmapSet_BeatmapLevelDataSO___c(DifficultyBeatmapSet_BeatmapLevelDataSO___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO/DifficultyBeatmapSet
class CORDL_TYPE BeatmapLevelDataSO_DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c;

  /// @brief Field _beatmapCharacteristicSerializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSerializedName, put = __cordl_internal_set__beatmapCharacteristicSerializedName)) ::StringW _beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps,
                      put = __cordl_internal_set__difficultyBeatmaps)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristicSerializedName)) ::StringW beatmapCharacteristicSerializedName;

  __declspec(property(get = get_difficultyBeatmaps)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Method Add, addr 0x26cb4e4, size 0x16c, virtual false, abstract: false, final false
  inline void Add(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* difficultyBeatmap);

  static inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* New_ctor(::StringW beatmapCharacteristicSerializedName);

  static inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*
  New_ctor(::StringW beatmapCharacteristicSerializedName, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* difficultyBeatmaps);

  constexpr ::StringW const& __cordl_internal_get__beatmapCharacteristicSerializedName() const;

  constexpr ::StringW& __cordl_internal_get__beatmapCharacteristicSerializedName();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* const& __cordl_internal_get__difficultyBeatmaps() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*& __cordl_internal_get__difficultyBeatmaps();

  constexpr void __cordl_internal_set__beatmapCharacteristicSerializedName(::StringW value);

  constexpr void __cordl_internal_set__difficultyBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* value);

  /// @brief Method .ctor, addr 0x26cb45c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicSerializedName);

  /// @brief Method .ctor, addr 0x26cb3ec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicSerializedName, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method get_beatmapCharacteristicSerializedName, addr 0x26cb3dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicSerializedName();

  /// @brief Method get_difficultyBeatmaps, addr 0x26cb3e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* get_difficultyBeatmaps();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO_DifficultyBeatmapSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO_DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO_DifficultyBeatmapSet(BeatmapLevelDataSO_DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO_DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO_DifficultyBeatmapSet(BeatmapLevelDataSO_DifficultyBeatmapSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12950 };

  /// @brief Field _beatmapCharacteristicSerializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet, ____beatmapCharacteristicSerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO/DifficultyBeatmap
class CORDL_TYPE BeatmapLevelDataSO_DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapAsset, put = __cordl_internal_set__beatmapAsset)) ::UnityW<::UnityEngine::TextAsset> _beatmapAsset;

  /// @brief Field _difficulty, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _lightshowAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightshowAsset, put = __cordl_internal_set__lightshowAsset)) ::UnityW<::UnityEngine::TextAsset> _lightshowAsset;

  __declspec(property(get = get_beatmapAsset, put = set_beatmapAsset)) ::UnityW<::UnityEngine::TextAsset> beatmapAsset;

  __declspec(property(get = get_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_hasLightshowAsset)) bool hasLightshowAsset;

  __declspec(property(get = get_lightshowAsset, put = set_lightshowAsset)) ::UnityW<::UnityEngine::TextAsset> lightshowAsset;

  /// @brief Method GetBeatmapString, addr 0x26cb040, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString();

  /// @brief Method GetBeatmapStringAsync, addr 0x26caaf0, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync();

  /// @brief Method GetLightshowString, addr 0x26cb138, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString();

  /// @brief Method GetLightshowStringAsync, addr 0x26cac5c, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync();

  static inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset);

  static inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset,
                                                                                  ::UnityEngine::TextAsset* lightshowAsset);

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__beatmapAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__beatmapAsset();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__lightshowAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__lightshowAsset();

  constexpr void __cordl_internal_set__beatmapAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__lightshowAsset(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method .ctor, addr 0x26cb7cc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset);

  /// @brief Method .ctor, addr 0x26cb7fc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset, ::UnityEngine::TextAsset* lightshowAsset);

  /// @brief Method get_beatmapAsset, addr 0x26cb744, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_beatmapAsset();

  /// @brief Method get_difficulty, addr 0x26cb7c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_hasLightshowAsset, addr 0x26cb754, size 0x60, virtual false, abstract: false, final false
  inline bool get_hasLightshowAsset();

  /// @brief Method get_lightshowAsset, addr 0x26cb7b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_lightshowAsset();

  /// @brief Method set_beatmapAsset, addr 0x26cb74c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapAsset(::UnityEngine::TextAsset* value);

  /// @brief Method set_lightshowAsset, addr 0x26cb7bc, size 0x8, virtual false, abstract: false, final false
  inline void set_lightshowAsset(::UnityEngine::TextAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO_DifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO_DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO_DifficultyBeatmap(BeatmapLevelDataSO_DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO_DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO_DifficultyBeatmap(BeatmapLevelDataSO_DifficultyBeatmap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12951 };

  /// @brief Field _difficulty, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _beatmapAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____beatmapAsset;

  /// @brief Field _lightshowAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____lightshowAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap, ____beatmapAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap, ____lightshowAsset) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO/<>c__DisplayClass22_0
class CORDL_TYPE BeatmapLevelDataSO___c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  static inline ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0* New_ctor();

  /// @brief Method <GetDifficultyBeatmap>b__0, addr 0x26cb838, size 0x24, virtual false, abstract: false, final false
  inline bool _GetDifficultyBeatmap_b__0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* difficultyBeatmap);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method .ctor, addr 0x26cb26c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO___c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO___c__DisplayClass22_0(BeatmapLevelDataSO___c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO___c__DisplayClass22_0(BeatmapLevelDataSO___c__DisplayClass22_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12952 };

  /// @brief Field beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0, ___beatmapKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO/<>c__DisplayClass23_0
class CORDL_TYPE BeatmapLevelDataSO___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  static inline ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0* New_ctor();

  /// @brief Method <GetDifficultyBeatmapSet>b__0, addr 0x26cb85c, size 0x28, virtual false, abstract: false, final false
  inline bool _GetDifficultyBeatmapSet_b__0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* difficultyBeatmapSet);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  /// @brief Method .ctor, addr 0x26cb360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO___c__DisplayClass23_0(BeatmapLevelDataSO___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO___c__DisplayClass23_0(BeatmapLevelDataSO___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12953 };

  /// @brief Field beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0, ___beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IAssetSongAudioClipProvider, IBeatmapLevelData, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataSO
class CORDL_TYPE BeatmapLevelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DifficultyBeatmap = ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap;

  using DifficultyBeatmapSet = ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet;

  using __c__DisplayClass22_0 = ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0;

  using __c__DisplayClass23_0 = ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0;

  /// @brief Field _audioClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _audioDataAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioDataAsset, put = __cordl_internal_set__audioDataAsset)) ::UnityW<::UnityEngine::TextAsset> _audioDataAsset;

  /// @brief Field _difficultyBeatmapSets, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__difficultyBeatmapSets,
      put = __cordl_internal_set__difficultyBeatmapSets)) ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*>
      _difficultyBeatmapSets;

  /// @brief Field _version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  __declspec(property(get = get_audioDataAsset, put = set_audioDataAsset)) ::UnityW<::UnityEngine::TextAsset> audioDataAsset;

  __declspec(property(get = get_difficultyBeatmapSets)) ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*>
      difficultyBeatmapSets;

  __declspec(property(get = get_songAudioClip)) ::UnityW<::UnityEngine::AudioClip> songAudioClip;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Method ContainsBeatmapData, addr 0x26cb238, size 0x34, virtual false, abstract: false, final false
  inline bool ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetAudioDataString, addr 0x26cad9c, size 0x100, virtual true, abstract: false, final true
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0x26ca6f4, size 0x140, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapString, addr 0x26cb004, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0x26ca924, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetDifficultyBeatmap, addr 0x26ca9d4, size 0x11c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::BeatmapKey beatmapKey);

  /// @brief Method GetDifficultyBeatmapSet, addr 0x26cb274, size 0xec, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetLightshowString, addr 0x26cb0fc, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x26cabac, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.ContainsBeatmapData, addr 0x26cb3a8, size 0x34, virtual true, abstract: false, final true
  inline bool IBeatmapLevelData_ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapString, addr 0x26cb3a0, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapStringAsync, addr 0x26cb398, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowString, addr 0x26cb3a4, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowStringAsync, addr 0x26cb39c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.get_name, addr 0x26cb390, size 0x8, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_get_name();

  /// @brief Method IncrementVersion, addr 0x26cb368, size 0x10, virtual false, abstract: false, final false
  inline void IncrementVersion();

  static inline ::GlobalNamespace::BeatmapLevelDataSO* New_ctor();

  /// @brief Method SetAudioClip, addr 0x26cb378, size 0x8, virtual false, abstract: false, final false
  inline void SetAudioClip(::UnityEngine::AudioClip* audioClip);

  /// @brief Method SetDifficultyBeatmapSets, addr 0x26cb380, size 0x8, virtual false, abstract: false, final false
  inline void
  SetDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*> difficultyBeatmapSets);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__audioDataAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__audioDataAsset();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*> const&
  __cordl_internal_get__difficultyBeatmapSets() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*>& __cordl_internal_get__difficultyBeatmapSets();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__audioDataAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void
  __cordl_internal_set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*> value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x26cb388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioDataAsset, addr 0x26ca6e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_audioDataAsset();

  /// @brief Method get_difficultyBeatmapSets, addr 0x26ca6dc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*> get_difficultyBeatmapSets();

  /// @brief Method get_songAudioClip, addr 0x26ca6d4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AudioClip> get_songAudioClip();

  /// @brief Method get_version, addr 0x26ca6cc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  /// @brief Method set_audioDataAsset, addr 0x26ca6ec, size 0x8, virtual false, abstract: false, final false
  inline void set_audioDataAsset(::UnityEngine::TextAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO(BeatmapLevelDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO(BeatmapLevelDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12954 };

  /// @brief Field _version, offset: 0x18, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _audioClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  /// @brief Field _audioDataAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____audioDataAsset;

  /// @brief Field _difficultyBeatmapSets, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>*> ____difficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioDataAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____difficultyBeatmapSets) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO*, "", "BeatmapLevelDataSO");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*, "", "BeatmapLevelDataSO/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*, "", "BeatmapLevelDataSO/<>c__DisplayClass22_0");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*, "", "BeatmapLevelDataSO/<>c__DisplayClass23_0");
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet/<>c");

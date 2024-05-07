#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IAssetSongAudioClipProvider;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet____c;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO____c__DisplayClass27_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO____c__DisplayClass28_0;
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
class __BeatmapLevelDataSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet____c;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO____c__DisplayClass27_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO____c__DisplayClass28_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO::DifficultyBeatmapSet::<>c*
class CORDL_TYPE __BeatmapLevelDataSO__DifficultyBeatmapSet____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Comparison_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* __9__8_0;

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c* New_ctor();

  /// @brief Method <Add>b__8_0, addr 0x14bb764, size 0x90, virtual false, abstract: false, final false
  inline int32_t _Add_b__8_0(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* a, ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* b);

  /// @brief Method .ctor, addr 0x14bb75c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c* value);

  static inline void setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO__DifficultyBeatmapSet____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO__DifficultyBeatmapSet____c(__BeatmapLevelDataSO__DifficultyBeatmapSet____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO__DifficultyBeatmapSet____c(__BeatmapLevelDataSO__DifficultyBeatmapSet____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO::DifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelDataSO__DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c;

  /// @brief Field _beatmapCharacteristicSerializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSerializedName, put = __cordl_internal_set__beatmapCharacteristicSerializedName))::StringW _beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps,
                      put = __cordl_internal_set__difficultyBeatmaps))::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristicSerializedName))::StringW beatmapCharacteristicSerializedName;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Method Add, addr 0x14bb584, size 0x174, virtual false, abstract: false, final false
  inline void Add(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* difficultyBeatmap);

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* New_ctor(::StringW beatmapCharacteristicSerializedName);

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*
  New_ctor(::StringW beatmapCharacteristicSerializedName, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* difficultyBeatmaps);

  constexpr ::StringW const& __cordl_internal_get__beatmapCharacteristicSerializedName() const;

  constexpr ::StringW& __cordl_internal_get__beatmapCharacteristicSerializedName();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*& __cordl_internal_get__difficultyBeatmaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*> const&
  __cordl_internal_get__difficultyBeatmaps() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicSerializedName(::StringW value);

  constexpr void __cordl_internal_set__difficultyBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* value);

  /// @brief Method .ctor, addr 0x14bb4f4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicSerializedName);

  /// @brief Method .ctor, addr 0x14bb484, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicSerializedName, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method get_beatmapCharacteristicSerializedName, addr 0x14bb474, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicSerializedName();

  /// @brief Method get_difficultyBeatmaps, addr 0x14bb47c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* get_difficultyBeatmaps();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO__DifficultyBeatmapSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO__DifficultyBeatmapSet(__BeatmapLevelDataSO__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO__DifficultyBeatmapSet(__BeatmapLevelDataSO__DifficultyBeatmapSet const&) = delete;

  /// @brief Field _beatmapCharacteristicSerializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, ____beatmapCharacteristicSerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmap
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO::DifficultyBeatmap*
class CORDL_TYPE __BeatmapLevelDataSO__DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapAsset, put = __cordl_internal_set__beatmapAsset))::UnityW<::UnityEngine::TextAsset> _beatmapAsset;

  /// @brief Field _beatmapAssetChecksum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapAssetChecksum, put = __cordl_internal_set__beatmapAssetChecksum))::StringW _beatmapAssetChecksum;

  /// @brief Field _difficulty, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty))::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _lightshowAsset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightshowAsset, put = __cordl_internal_set__lightshowAsset))::UnityW<::UnityEngine::TextAsset> _lightshowAsset;

  /// @brief Field _lightshowAssetChecksum, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightshowAssetChecksum, put = __cordl_internal_set__lightshowAssetChecksum))::StringW _lightshowAssetChecksum;

  __declspec(property(get = get_beatmapAsset, put = set_beatmapAsset))::UnityW<::UnityEngine::TextAsset> beatmapAsset;

  __declspec(property(get = get_beatmapAssetChecksum, put = set_beatmapAssetChecksum))::StringW beatmapAssetChecksum;

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_hasLightshowAsset)) bool hasLightshowAsset;

  __declspec(property(get = get_lightshowAsset, put = set_lightshowAsset))::UnityW<::UnityEngine::TextAsset> lightshowAsset;

  __declspec(property(get = get_lightshowAssetChecksum, put = set_lightshowAssetChecksum))::StringW lightshowAssetChecksum;

  /// @brief Method GetBeatmapChecksum, addr 0x14bb90c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapChecksum();

  /// @brief Method GetBeatmapString, addr 0x14bb144, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString();

  /// @brief Method GetBeatmapStringAsync, addr 0x14babe8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync();

  /// @brief Method GetLightshowString, addr 0x14bb240, size 0x104, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString();

  /// @brief Method GetLightshowStringAsync, addr 0x14bad58, size 0x144, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync();

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset);

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset,
                                                                                     ::UnityEngine::TextAsset* lightshowAsset);

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__beatmapAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__beatmapAsset();

  constexpr ::StringW const& __cordl_internal_get__beatmapAssetChecksum() const;

  constexpr ::StringW& __cordl_internal_get__beatmapAssetChecksum();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__lightshowAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__lightshowAsset();

  constexpr ::StringW const& __cordl_internal_get__lightshowAssetChecksum() const;

  constexpr ::StringW& __cordl_internal_get__lightshowAssetChecksum();

  constexpr void __cordl_internal_set__beatmapAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__beatmapAssetChecksum(::StringW value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__lightshowAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__lightshowAssetChecksum(::StringW value);

  /// @brief Method .ctor, addr 0x14bb89c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset);

  /// @brief Method .ctor, addr 0x14bb8cc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset, ::UnityEngine::TextAsset* lightshowAsset);

  /// @brief Method get_beatmapAsset, addr 0x14bb804, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_beatmapAsset();

  /// @brief Method get_beatmapAssetChecksum, addr 0x14bb7f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapAssetChecksum();

  /// @brief Method get_difficulty, addr 0x14bb894, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_hasLightshowAsset, addr 0x14bb814, size 0x60, virtual false, abstract: false, final false
  inline bool get_hasLightshowAsset();

  /// @brief Method get_lightshowAsset, addr 0x14bb884, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_lightshowAsset();

  /// @brief Method get_lightshowAssetChecksum, addr 0x14bb874, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_lightshowAssetChecksum();

  /// @brief Method set_beatmapAsset, addr 0x14bb80c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapAsset(::UnityEngine::TextAsset* value);

  /// @brief Method set_beatmapAssetChecksum, addr 0x14bb7fc, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapAssetChecksum(::StringW value);

  /// @brief Method set_lightshowAsset, addr 0x14bb88c, size 0x8, virtual false, abstract: false, final false
  inline void set_lightshowAsset(::UnityEngine::TextAsset* value);

  /// @brief Method set_lightshowAssetChecksum, addr 0x14bb87c, size 0x8, virtual false, abstract: false, final false
  inline void set_lightshowAssetChecksum(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO__DifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO__DifficultyBeatmap(__BeatmapLevelDataSO__DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO__DifficultyBeatmap(__BeatmapLevelDataSO__DifficultyBeatmap const&) = delete;

  /// @brief Field _difficulty, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _beatmapAssetChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW ____beatmapAssetChecksum;

  /// @brief Field _beatmapAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____beatmapAsset;

  /// @brief Field _lightshowAssetChecksum, offset: 0x28, size: 0x8, def value: None
  ::StringW ____lightshowAssetChecksum;

  /// @brief Field _lightshowAsset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____lightshowAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, ____beatmapAssetChecksum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, ____beatmapAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, ____lightshowAssetChecksum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap, ____lightshowAsset) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO::<>c__DisplayClass27_0*
class CORDL_TYPE __BeatmapLevelDataSO____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  static inline ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0* New_ctor();

  /// @brief Method <GetDifficultyBeatmap>b__0, addr 0x14bb914, size 0x24, virtual false, abstract: false, final false
  inline bool _GetDifficultyBeatmap_b__0(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* difficultyBeatmap);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method .ctor, addr 0x14bb344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO____c__DisplayClass27_0(__BeatmapLevelDataSO____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO____c__DisplayClass27_0(__BeatmapLevelDataSO____c__DisplayClass27_0 const&) = delete;

  /// @brief Field beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0, ___beatmapKey) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass28_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO::<>c__DisplayClass28_0*
class CORDL_TYPE __BeatmapLevelDataSO____c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  static inline ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0* New_ctor();

  /// @brief Method <GetDifficultyBeatmapSet>b__0, addr 0x14bb938, size 0x28, virtual false, abstract: false, final false
  inline bool _GetDifficultyBeatmapSet_b__0(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  /// @brief Method .ctor, addr 0x14bb43c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO____c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO____c__DisplayClass28_0(__BeatmapLevelDataSO____c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO____c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO____c__DisplayClass28_0(__BeatmapLevelDataSO____c__DisplayClass28_0 const&) = delete;

  /// @brief Field beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0, ___beatmapCharacteristic) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataSO
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataSO*
class CORDL_TYPE BeatmapLevelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DifficultyBeatmap = ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap;

  using DifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet;

  using __c__DisplayClass27_0 = ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0;

  using __c__DisplayClass28_0 = ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0;

  /// @brief Field _audioClip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip))::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _audioClipChecksum, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipChecksum, put = __cordl_internal_set__audioClipChecksum))::StringW _audioClipChecksum;

  /// @brief Field _audioDataAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioDataAsset, put = __cordl_internal_set__audioDataAsset))::UnityW<::UnityEngine::TextAsset> _audioDataAsset;

  /// @brief Field _audioDataAssetChecksum, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioDataAssetChecksum, put = __cordl_internal_set__audioDataAssetChecksum))::StringW _audioDataAssetChecksum;

  /// @brief Field _difficultyBeatmapSets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmapSets,
                      put = __cordl_internal_set__difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*,
                                                                                  ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> _difficultyBeatmapSets;

  __declspec(property(get = get_audioDataAsset, put = set_audioDataAsset))::UnityW<::UnityEngine::TextAsset> audioDataAsset;

  __declspec(property(get = get_audioDataAssetChecksum, put = set_audioDataAssetChecksum))::StringW audioDataAssetChecksum;

  __declspec(property(get = get_difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*,
                                                                ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets;

  __declspec(property(get = get_hasAudioAsset)) bool hasAudioAsset;

  __declspec(property(get = get_songAudioClip))::UnityW<::UnityEngine::AudioClip> songAudioClip;

  __declspec(property(get = get_songAudioClipChecksum))::StringW songAudioClipChecksum;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Method GetAudioDataString, addr 0x14bae9c, size 0x104, virtual true, abstract: false, final true
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0x14ba8f0, size 0x144, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapString, addr 0x14bb108, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0x14baa34, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetDifficultyBeatmap, addr 0x14baae4, size 0x104, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::BeatmapKey beatmapKey);

  /// @brief Method GetDifficultyBeatmapSet, addr 0x14bb34c, size 0xf0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetLightshowString, addr 0x14bb204, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x14baca8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapString, addr 0x14bb46c, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapStringAsync, addr 0x14bb464, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowString, addr 0x14bb470, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowStringAsync, addr 0x14bb468, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.get_name, addr 0x14bb45c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_get_name();

  static inline ::GlobalNamespace::BeatmapLevelDataSO* New_ctor();

  /// @brief Method SetAudioClip, addr 0x14bb444, size 0x8, virtual false, abstract: false, final false
  inline void SetAudioClip(::UnityEngine::AudioClip* audioClip, ::StringW audioClipChecksum);

  /// @brief Method SetDifficultyBeatmapSets, addr 0x14bb44c, size 0x8, virtual false, abstract: false, final false
  inline void
  SetDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::StringW const& __cordl_internal_get__audioClipChecksum() const;

  constexpr ::StringW& __cordl_internal_get__audioClipChecksum();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__audioDataAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__audioDataAsset();

  constexpr ::StringW const& __cordl_internal_get__audioDataAssetChecksum() const;

  constexpr ::StringW& __cordl_internal_get__audioDataAssetChecksum();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
  __cordl_internal_get__difficultyBeatmapSets() const;

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>&
  __cordl_internal_get__difficultyBeatmapSets();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__audioClipChecksum(::StringW value);

  constexpr void __cordl_internal_set__audioDataAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__audioDataAssetChecksum(::StringW value);

  constexpr void
  __cordl_internal_set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value);

  /// @brief Method .ctor, addr 0x14bb454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioDataAsset, addr 0x14ba8d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_audioDataAsset();

  /// @brief Method get_audioDataAssetChecksum, addr 0x14ba8e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_audioDataAssetChecksum();

  /// @brief Method get_difficultyBeatmapSets, addr 0x14ba868, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> get_difficultyBeatmapSets();

  /// @brief Method get_hasAudioAsset, addr 0x14ba870, size 0x60, virtual false, abstract: false, final false
  inline bool get_hasAudioAsset();

  /// @brief Method get_songAudioClip, addr 0x14ba858, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AudioClip> get_songAudioClip();

  /// @brief Method get_songAudioClipChecksum, addr 0x14ba860, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songAudioClipChecksum();

  /// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  /// @brief Method set_audioDataAsset, addr 0x14ba8d8, size 0x8, virtual false, abstract: false, final false
  inline void set_audioDataAsset(::UnityEngine::TextAsset* value);

  /// @brief Method set_audioDataAssetChecksum, addr 0x14ba8e8, size 0x8, virtual false, abstract: false, final false
  inline void set_audioDataAssetChecksum(::StringW value);

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

  /// @brief Field _audioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  /// @brief Field _audioClipChecksum, offset: 0x20, size: 0x8, def value: None
  ::StringW ____audioClipChecksum;

  /// @brief Field _audioDataAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____audioDataAsset;

  /// @brief Field _audioDataAssetChecksum, offset: 0x30, size: 0x8, def value: None
  ::StringW ____audioDataAssetChecksum;

  /// @brief Field _difficultyBeatmapSets, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> ____difficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioClipChecksum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioDataAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioDataAssetChecksum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____difficultyBeatmapSets) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO*, "", "BeatmapLevelDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, "", "BeatmapLevelDataSO/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet____c*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass27_0*, "", "BeatmapLevelDataSO/<>c__DisplayClass27_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass28_0*, "", "BeatmapLevelDataSO/<>c__DisplayClass28_0");

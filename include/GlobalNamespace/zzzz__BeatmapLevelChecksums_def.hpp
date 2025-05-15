#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelChecksums.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeatmapLevelChecksums)
namespace GlobalNamespace {
struct BeatmapLevelChecksums_DifficultyBeatmapChecksums;
}
namespace GlobalNamespace {
class BeatmapLevelChecksums___c;
}
namespace GlobalNamespace {
class BeatmapLevelChecksums___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class BeatmapLevelChecksums___c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelChecksums___c;
}
namespace GlobalNamespace {
class BeatmapLevelChecksums___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class BeatmapLevelChecksums___c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct BeatmapLevelChecksums;
}
namespace GlobalNamespace {
struct BeatmapLevelChecksums_DifficultyBeatmapChecksums;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelChecksums___c);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelChecksums);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelChecksums/DifficultyBeatmapChecksums
struct CORDL_TYPE BeatmapLevelChecksums_DifficultyBeatmapChecksums {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26c5e7c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum, ::StringW lightshowAssetChecksum);

  /// @brief Method .ctor, addr 0x26c608c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums_DifficultyBeatmapChecksums();

  // Ctor Parameters [CppParam { name: "beatmapDifficulty", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "beatmapAssetChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lightshowAssetChecksum", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr BeatmapLevelChecksums_DifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum, ::StringW lightshowAssetChecksum) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12943 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field beatmapDifficulty, offset: 0x0, size: 0x8, def value: None
  ::StringW beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x8, size: 0x8, def value: None
  ::StringW beatmapCharacteristic;

  /// @brief Field beatmapAssetChecksum, offset: 0x10, size: 0x8, def value: None
  ::StringW beatmapAssetChecksum;

  /// @brief Field lightshowAssetChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW lightshowAssetChecksum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, beatmapDifficulty) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, beatmapCharacteristic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, beatmapAssetChecksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, lightshowAssetChecksum) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelChecksums/<>c
class CORDL_TYPE BeatmapLevelChecksums___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapLevelChecksums___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__6_0,
      put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* __9__6_0;

  static inline ::GlobalNamespace::BeatmapLevelChecksums___c* New_ctor();

  /// @brief Method <.ctor>b__6_0, addr 0x26c6114, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums __ctor_b__6_0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums d);

  /// @brief Method .ctor, addr 0x26c610c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevelChecksums___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapLevelChecksums___c* value);

  static inline void
  setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelChecksums___c(BeatmapLevelChecksums___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelChecksums___c(BeatmapLevelChecksums___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12944 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelChecksums/<>c__DisplayClass7_0
class CORDL_TYPE BeatmapLevelChecksums___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::StringW beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::StringW beatmapDifficulty;

  static inline ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0* New_ctor();

  /// @brief Method <GetOrAddDifficultyBeatmapChecksums>b__0, addr 0x26c6120, size 0x4c, virtual false, abstract: false, final false
  inline bool _GetOrAddDifficultyBeatmapChecksums_b__0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums difficultyBeatmapChecksums);

  constexpr ::StringW const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::StringW& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::StringW const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::StringW& __cordl_internal_get_beatmapDifficulty();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::StringW value);

  /// @brief Method .ctor, addr 0x26c5e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelChecksums___c__DisplayClass7_0(BeatmapLevelChecksums___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelChecksums___c__DisplayClass7_0(BeatmapLevelChecksums___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12945 };

  /// @brief Field beatmapDifficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x18, size: 0x8, def value: None
  ::StringW ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0, ___beatmapDifficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0, ___beatmapCharacteristic) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelChecksums/<>c__DisplayClass8_0
class CORDL_TYPE BeatmapLevelChecksums___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::StringW beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::StringW beatmapDifficulty;

  static inline ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0* New_ctor();

  /// @brief Method <SetDifficultyBeatmapChecksums>b__0, addr 0x26c616c, size 0x4c, virtual false, abstract: false, final false
  inline bool _SetDifficultyBeatmapChecksums_b__0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums d);

  constexpr ::StringW const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::StringW& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::StringW const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::StringW& __cordl_internal_get_beatmapDifficulty();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::StringW value);

  /// @brief Method .ctor, addr 0x26c6084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelChecksums___c__DisplayClass8_0(BeatmapLevelChecksums___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelChecksums___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelChecksums___c__DisplayClass8_0(BeatmapLevelChecksums___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12946 };

  /// @brief Field beatmapDifficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x18, size: 0x8, def value: None
  ::StringW ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0, ___beatmapDifficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0, ___beatmapCharacteristic) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelChecksums
struct CORDL_TYPE BeatmapLevelChecksums {
public:
  // Declarations
  using DifficultyBeatmapChecksums = ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums;

  using __c = ::GlobalNamespace::BeatmapLevelChecksums___c;

  using __c__DisplayClass7_0 = ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0;

  /// @brief Method GetOrAddDifficultyBeatmapChecksums, addr 0x26c5ba4, size 0x2d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums GetOrAddDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic);

  /// @brief Method SetDifficultyBeatmapChecksums, addr 0x26c5e88, size 0x1fc, virtual false, abstract: false, final false
  inline void SetDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum, ::StringW lightshowAssetChecksum);

  /// @brief Method .ctor, addr 0x26c5a54, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelChecksums other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums();

  // Ctor Parameters [CppParam { name: "beatmapLevelChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "coverImageChecksum", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "songAudioClipChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "audioDataAssetChecksum", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "difficultyBeatmapsChecksums", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*", modifiers: "", def_value: None
  // }]
  constexpr BeatmapLevelChecksums(::StringW beatmapLevelChecksum, ::StringW coverImageChecksum, ::StringW songAudioClipChecksum, ::StringW audioDataAssetChecksum,
                                  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field beatmapLevelChecksum, offset: 0x0, size: 0x8, def value: None
  ::StringW beatmapLevelChecksum;

  /// @brief Field coverImageChecksum, offset: 0x8, size: 0x8, def value: None
  ::StringW coverImageChecksum;

  /// @brief Field songAudioClipChecksum, offset: 0x10, size: 0x8, def value: None
  ::StringW songAudioClipChecksum;

  /// @brief Field audioDataAssetChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW audioDataAssetChecksum;

  /// @brief Field difficultyBeatmapsChecksums, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, beatmapLevelChecksum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, coverImageChecksum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, songAudioClipChecksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, audioDataAssetChecksum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, difficultyBeatmapsChecksums) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelChecksums___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums___c*, "", "BeatmapLevelChecksums/<>c");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*, "", "BeatmapLevelChecksums/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*, "", "BeatmapLevelChecksums/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums, "", "BeatmapLevelChecksums");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, "", "BeatmapLevelChecksums/DifficultyBeatmapChecksums");

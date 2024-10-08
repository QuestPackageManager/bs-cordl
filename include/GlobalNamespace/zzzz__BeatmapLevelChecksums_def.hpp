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
struct __BeatmapLevelChecksums__DifficultyBeatmapChecksums;
}
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c;
}
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c;
}
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __BeatmapLevelChecksums____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct BeatmapLevelChecksums;
}
namespace GlobalNamespace {
struct __BeatmapLevelChecksums__DifficultyBeatmapChecksums;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelChecksums____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelChecksums);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums);
// Type: ::DifficultyBeatmapChecksums
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelChecksums::DifficultyBeatmapChecksums
struct CORDL_TYPE __BeatmapLevelChecksums__DifficultyBeatmapChecksums {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26830d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum, ::StringW lightshowAssetChecksum);

  /// @brief Method .ctor, addr 0x26832e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelChecksums__DifficultyBeatmapChecksums();

  // Ctor Parameters [CppParam { name: "beatmapDifficulty", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "beatmapAssetChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lightshowAssetChecksum", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelChecksums__DifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum,
                                                                ::StringW lightshowAssetChecksum) noexcept;

  /// @brief Field beatmapDifficulty, offset: 0x0, size: 0x8, def value: None
  ::StringW beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x8, size: 0x8, def value: None
  ::StringW beatmapCharacteristic;

  /// @brief Field beatmapAssetChecksum, offset: 0x10, size: 0x8, def value: None
  ::StringW beatmapAssetChecksum;

  /// @brief Field lightshowAssetChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW lightshowAssetChecksum;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, beatmapDifficulty) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, beatmapCharacteristic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, beatmapAssetChecksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, lightshowAssetChecksum) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelChecksums::<>c*
class CORDL_TYPE __BeatmapLevelChecksums____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__BeatmapLevelChecksums____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums,
                                                                                                     ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* __9__6_0;

  static inline ::GlobalNamespace::__BeatmapLevelChecksums____c* New_ctor();

  /// @brief Method <.ctor>b__6_0, addr 0x2683368, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums __ctor_b__6_0(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums d);

  /// @brief Method .ctor, addr 0x2683360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapLevelChecksums____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelChecksums____c* value);

  static inline void
  setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelChecksums____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelChecksums____c(__BeatmapLevelChecksums____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelChecksums____c(__BeatmapLevelChecksums____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelChecksums____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelChecksums::<>c__DisplayClass7_0*
class CORDL_TYPE __BeatmapLevelChecksums____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::StringW beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::StringW beatmapDifficulty;

  static inline ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0* New_ctor();

  /// @brief Method <GetOrAddDifficultyBeatmapChecksums>b__0, addr 0x2683374, size 0x4c, virtual false, abstract: false, final false
  inline bool _GetOrAddDifficultyBeatmapChecksums_b__0(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums difficultyBeatmapChecksums);

  constexpr ::StringW const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::StringW& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::StringW const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::StringW& __cordl_internal_get_beatmapDifficulty();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::StringW value);

  /// @brief Method .ctor, addr 0x26830c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelChecksums____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelChecksums____c__DisplayClass7_0(__BeatmapLevelChecksums____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelChecksums____c__DisplayClass7_0(__BeatmapLevelChecksums____c__DisplayClass7_0 const&) = delete;

  /// @brief Field beatmapDifficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x18, size: 0x8, def value: None
  ::StringW ___beatmapCharacteristic;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0, ___beatmapDifficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0, ___beatmapCharacteristic) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelChecksums::<>c__DisplayClass8_0*
class CORDL_TYPE __BeatmapLevelChecksums____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::StringW beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::StringW beatmapDifficulty;

  static inline ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0* New_ctor();

  /// @brief Method <SetDifficultyBeatmapChecksums>b__0, addr 0x26833c0, size 0x4c, virtual false, abstract: false, final false
  inline bool _SetDifficultyBeatmapChecksums_b__0(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums d);

  constexpr ::StringW const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::StringW& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::StringW const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::StringW& __cordl_internal_get_beatmapDifficulty();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::StringW value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::StringW value);

  /// @brief Method .ctor, addr 0x26832d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelChecksums____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelChecksums____c__DisplayClass8_0(__BeatmapLevelChecksums____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelChecksums____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelChecksums____c__DisplayClass8_0(__BeatmapLevelChecksums____c__DisplayClass8_0 const&) = delete;

  /// @brief Field beatmapDifficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x18, size: 0x8, def value: None
  ::StringW ___beatmapCharacteristic;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0, ___beatmapDifficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0, ___beatmapCharacteristic) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelChecksums
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelChecksums
struct CORDL_TYPE BeatmapLevelChecksums {
public:
  // Declarations
  using DifficultyBeatmapChecksums = ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums;

  using __c = ::GlobalNamespace::__BeatmapLevelChecksums____c;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0;

  /// @brief Method GetOrAddDifficultyBeatmapChecksums, addr 0x2682df8, size 0x2d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums GetOrAddDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic);

  /// @brief Method SetDifficultyBeatmapChecksums, addr 0x26830dc, size 0x1fc, virtual false, abstract: false, final false
  inline void SetDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum, ::StringW lightshowAssetChecksum);

  /// @brief Method .ctor, addr 0x2682ca8, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelChecksums other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelChecksums();

  // Ctor Parameters [CppParam { name: "beatmapLevelChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "coverImageChecksum", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "songAudioClipChecksum", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "audioDataAssetChecksum", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "difficultyBeatmapsChecksums", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*", modifiers: "", def_value:
  // None }]
  constexpr BeatmapLevelChecksums(::StringW beatmapLevelChecksum, ::StringW coverImageChecksum, ::StringW songAudioClipChecksum, ::StringW audioDataAssetChecksum,
                                  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums) noexcept;

  /// @brief Field beatmapLevelChecksum, offset: 0x0, size: 0x8, def value: None
  ::StringW beatmapLevelChecksum;

  /// @brief Field coverImageChecksum, offset: 0x8, size: 0x8, def value: None
  ::StringW coverImageChecksum;

  /// @brief Field songAudioClipChecksum, offset: 0x10, size: 0x8, def value: None
  ::StringW songAudioClipChecksum;

  /// @brief Field audioDataAssetChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW audioDataAssetChecksum;

  /// @brief Field difficultyBeatmapsChecksums, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelChecksums, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, beatmapLevelChecksum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, coverImageChecksum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, songAudioClipChecksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, audioDataAssetChecksum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelChecksums, difficultyBeatmapsChecksums) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelChecksums____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelChecksums____c*, "", "BeatmapLevelChecksums/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*, "", "BeatmapLevelChecksums/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*, "", "BeatmapLevelChecksums/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelChecksums, "", "BeatmapLevelChecksums");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, "", "BeatmapLevelChecksums/DifficultyBeatmapChecksums");

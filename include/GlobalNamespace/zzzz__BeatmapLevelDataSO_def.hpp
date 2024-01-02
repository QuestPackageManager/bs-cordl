#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelDataSO)
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__DifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet);
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4348))
// CS Name: ::BeatmapLevelDataSO::DifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelDataSO__DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicSerializedName, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicSerializedName, put = __set__beatmapCharacteristicSerializedName))::StringW _beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(
      get = __get__difficultyBeatmaps,
      put = __set__difficultyBeatmaps))::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristicSerializedName))::StringW beatmapCharacteristicSerializedName;

  __declspec(
      property(get = get_difficultyBeatmaps))::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps;

  constexpr ::StringW& __get__beatmapCharacteristicSerializedName();

  constexpr ::StringW const& __get__beatmapCharacteristicSerializedName() const;

  constexpr void __set__beatmapCharacteristicSerializedName(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>& __get__difficultyBeatmaps();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> const& __get__difficultyBeatmaps() const;

  constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> value);

  /// @brief Method get_beatmapCharacteristicSerializedName, addr 0x2342064, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicSerializedName();

  /// @brief Method get_difficultyBeatmaps, addr 0x234206c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> get_difficultyBeatmaps();

  static inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*
  New_ctor(::StringW beatmapCharacteristicSerializedName,
           ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method .ctor, addr 0x2342074, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicSerializedName,
                    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataSO__DifficultyBeatmapSet(__BeatmapLevelDataSO__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataSO__DifficultyBeatmapSet(__BeatmapLevelDataSO__DifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataSO__DifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristicSerializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicSerializedName;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, ____beatmapCharacteristicSerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4349))
// CS Name: ::BeatmapLevelDataSO*
class CORDL_TYPE BeatmapLevelDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using DifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet;

  /// @brief Field _audioClip, offset 0x18, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _difficultyBeatmapSets, offset 0x20, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets, put = __set__difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*,
                                                                                                       ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> _difficultyBeatmapSets;

  /// @brief Field _no360MovementDifficultyBeatmapSets, offset 0x28, size 0x8
  __declspec(property(get = __get__no360MovementDifficultyBeatmapSets,
                      put = __set__no360MovementDifficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*,
                                                                                ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> _no360MovementDifficultyBeatmapSets;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*,
                                                                ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets;

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>& __get__difficultyBeatmapSets();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
  __get__difficultyBeatmapSets() const;

  constexpr void __set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>&
  __get__no360MovementDifficultyBeatmapSets();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
  __get__no360MovementDifficultyBeatmapSets() const;

  constexpr void
  __set__no360MovementDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value);

  /// @brief Method get_audioClip, addr 0x234204c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets, addr 0x2342054, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::BeatmapLevelDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x234205c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataSO(BeatmapLevelDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataSO(BeatmapLevelDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataSO();

public:
  /// @brief Field _audioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _difficultyBeatmapSets, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> ____difficultyBeatmapSets;

  /// @brief Field _no360MovementDifficultyBeatmapSets, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> ____no360MovementDifficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____audioClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____difficultyBeatmapSets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataSO, ____no360MovementDifficultyBeatmapSets) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO*, "", "BeatmapLevelDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");

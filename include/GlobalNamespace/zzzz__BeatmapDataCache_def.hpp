#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCache)
namespace GlobalNamespace {
struct BeatmapDataCache_CacheKey;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct BeatmapDataCache_CacheKey;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataCache*);
MARK_VAL_T(::GlobalNamespace::BeatmapDataCache_CacheKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataCache*, "", "BeatmapDataCache");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataCache_CacheKey, "", "BeatmapDataCache/CacheKey");
// Dependencies BeatmapKey, BeatmapLevelDataVersion, EnvironmentEffectsFilterPreset
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataCache/CacheKey
struct CORDL_TYPE BeatmapDataCache_CacheKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>*();

  /// @brief Method Equals, addr 0x3711208, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x37110f8, size 0xc4, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapDataCache_CacheKey other);

  /// @brief Method GetHashCode, addr 0x371129c, size 0x18c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x37111bc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, bool screenDisplacementEffects);

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapDataCache_CacheKey>* i___System__IEquatable_1___GlobalNamespace__BeatmapDataCache_CacheKey_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCache_CacheKey();

  // Ctor Parameters [CppParam { name: "_beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "_environmentInfo", ty:
  // "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None }, CppParam { name: "_gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None },
  // CppParam { name: "_leftHanded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_effectsFilterPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "",
  // def_value: None }, CppParam { name: "_screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevelDataVersion", ty:
  // "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }]
  constexpr BeatmapDataCache_CacheKey(::GlobalNamespace::BeatmapKey _beatmapKey, ::GlobalNamespace::IEnvironmentInfo* _environmentInfo, ::GlobalNamespace::GameplayModifiers* _gameplayModifiers,
                                      bool _leftHanded, ::GlobalNamespace::EnvironmentEffectsFilterPreset _effectsFilterPreset, bool _screenDisplacementEffects,
                                      ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14889 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field _beatmapKey, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _environmentInfo, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* _environmentInfo;

  /// @brief Field _gameplayModifiers, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _leftHanded, offset: 0x20, size: 0x1, def value: None
  bool _leftHanded;

  /// @brief Field _effectsFilterPreset, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPreset _effectsFilterPreset;

  /// @brief Field _screenDisplacementEffects, offset: 0x28, size: 0x1, def value: None
  bool _screenDisplacementEffects;

  /// @brief Field _beatmapLevelDataVersion, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _beatmapKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _environmentInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _gameplayModifiers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _leftHanded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _effectsFilterPreset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _screenDisplacementEffects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache_CacheKey, _beatmapLevelDataVersion) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataCache_CacheKey) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDataCache::CacheKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataCache
class CORDL_TYPE BeatmapDataCache : public ::System::Object {
public:
  // Declarations
  using CacheKey = ::GlobalNamespace::BeatmapDataCache_CacheKey;

  /// @brief Field _key, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) ::GlobalNamespace::BeatmapDataCache_CacheKey _key;

  /// @brief Field transformedBeatmapDataTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transformedBeatmapDataTask,
                      put = __cordl_internal_set_transformedBeatmapDataTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* transformedBeatmapDataTask;

  /// @brief Method AreSameBeatmapDataCached, addr 0x37110c4, size 0x34, virtual false, abstract: false, final false
  inline bool AreSameBeatmapDataCached(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key);

  static inline ::GlobalNamespace::BeatmapDataCache* New_ctor(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key,
                                                              ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* transformedBeatmapDataTask);

  constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey const& __cordl_internal_get__key() const;

  constexpr ::GlobalNamespace::BeatmapDataCache_CacheKey& __cordl_internal_get__key();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* const& __cordl_internal_get_transformedBeatmapDataTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*& __cordl_internal_get_transformedBeatmapDataTask();

  constexpr void __cordl_internal_set__key(::GlobalNamespace::BeatmapDataCache_CacheKey value);

  constexpr void __cordl_internal_set_transformedBeatmapDataTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* value);

  /// @brief Method .ctor, addr 0x37110a8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::GlobalNamespace::BeatmapDataCache_CacheKey> key, ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* transformedBeatmapDataTask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataCache(BeatmapDataCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataCache(BeatmapDataCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14890 };

  /// @brief Field transformedBeatmapDataTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* ___transformedBeatmapDataTask;

  /// @brief Field _key, offset: 0x18, size: 0x30, def value: None
  ::GlobalNamespace::BeatmapDataCache_CacheKey ____key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ___transformedBeatmapDataTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCache, ____key) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataCache) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace

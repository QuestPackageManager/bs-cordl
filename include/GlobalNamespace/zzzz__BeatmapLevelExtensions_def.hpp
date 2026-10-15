#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelExtensions)
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
class BeatmapLevelExtensions__WithBeatSaberContent_d__1;
}
namespace GlobalNamespace {
class BeatmapLevelExtensions___c;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelSO_ColorScheme;
}
namespace GlobalNamespace {
class BeatmapLevelSO_PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct EnvironmentName;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelExtensions;
}
namespace GlobalNamespace {
class BeatmapLevelExtensions__WithBeatSaberContent_d__1;
}
namespace GlobalNamespace {
class BeatmapLevelExtensions___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapLevelExtensions*);
MARK_REF_T(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1*);
MARK_REF_T(::GlobalNamespace::BeatmapLevelExtensions___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelExtensions*, "", "BeatmapLevelExtensions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1*, "", "BeatmapLevelExtensions/<WithBeatSaberContent>d__1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelExtensions___c*, "", "BeatmapLevelExtensions/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelExtensions/<>c
class CORDL_TYPE BeatmapLevelExtensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapLevelExtensions___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::StringW, ::StringW>* __9__5_0;

  static inline ::GlobalNamespace::BeatmapLevelExtensions___c* New_ctor();

  /// @brief Method <ToRuntime>b__5_0, addr 0x39d53c4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ToRuntime_b__5_0(::StringW l);

  /// @brief Method .ctor, addr 0x39d53c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevelExtensions___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__5_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapLevelExtensions___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelExtensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelExtensions___c(BeatmapLevelExtensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelExtensions___c(BeatmapLevelExtensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapLevelExtensions___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelExtensions/<WithBeatSaberContent>d__1
class CORDL_TYPE BeatmapLevelExtensions__WithBeatSaberContent_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_BeatmapLevel__get_Current)) ::GlobalNamespace::BeatmapLevel* System_Collections_Generic_IEnumerator_BeatmapLevel__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapLevel* __2__current;

  /// @brief Field <>3__beatmapLevels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__beatmapLevels,
                      put = __cordl_internal_set___3__beatmapLevels)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* __3__beatmapLevels;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field beatmapLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevels,
                      put = __cordl_internal_set_beatmapLevels)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39d53f8, size 0x298, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapLevel>.GetEnumerator, addr 0x39d578c, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* System_Collections_Generic_IEnumerable_BeatmapLevel__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapLevel>.get_Current, addr 0x39d5744, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevel* System_Collections_Generic_IEnumerator_BeatmapLevel__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x39d5824, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39d574c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39d5784, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x39d53dc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get___3__beatmapLevels() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get___3__beatmapLevels();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_beatmapLevels() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_beatmapLevels();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set___3__beatmapLevels(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_beatmapLevels(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method <>m__Finally1, addr 0x39d5690, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x39d3580, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapLevel__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapLevel__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelExtensions__WithBeatSaberContent_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions__WithBeatSaberContent_d__1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelExtensions__WithBeatSaberContent_d__1(BeatmapLevelExtensions__WithBeatSaberContent_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions__WithBeatSaberContent_d__1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelExtensions__WithBeatSaberContent_d__1(BeatmapLevelExtensions__WithBeatSaberContent_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14438 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field beatmapLevels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* ___beatmapLevels;

  /// @brief Field <>3__beatmapLevels, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* _____3__beatmapLevels;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, ___beatmapLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, _____3__beatmapLevels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelExtensions
class CORDL_TYPE BeatmapLevelExtensions : public ::System::Object {
public:
  // Declarations
  using _WithBeatSaberContent_d__1 = ::GlobalNamespace::BeatmapLevelExtensions__WithBeatSaberContent_d__1;

  using __c = ::GlobalNamespace::BeatmapLevelExtensions___c;

  /// @brief Method CompareLevelNames, addr 0x39d364c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t CompareLevelNames(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo1, ::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo2);

  /// @brief Method CreateBeatmapBasicData, addr 0x39d4ce4, size 0x1b0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapBasicData* CreateBeatmapBasicData(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                            ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* difficultyBeatmap,
                                                                            ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* environmentNames,
                                                                            bool hasEnvironmentNamesList);

  /// @brief Method CreateCensoredBeatmapBasicData, addr 0x39d3f8c, size 0x194, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapBasicData* CreateCensoredBeatmapBasicData(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method CreateColorScheme, addr 0x39d50e4, size 0x288, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorScheme* CreateColorScheme(int32_t idx, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* colorSchemes);

  /// [Extension]
  /// @brief Method HasBeatSaberContent, addr 0x39d34e4, size 0x2c, virtual false, abstract: false, final false
  static inline bool HasBeatSaberContent(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// [Extension]
  /// @brief Method HasBeatSaberContent, addr 0x39d35a0, size 0xac, virtual false, abstract: false, final false
  static inline bool HasBeatSaberContent(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method ResolveEnvironmentName, addr 0x39d4e9c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentName ResolveEnvironmentName(int32_t environmentNameIdx, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                          ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* environmentNames,
                                                                          bool hasEnvironmentNamesList);

  /// [Extension]
  /// @brief Method ToCensoredRuntime, addr 0x39d36a8, size 0x7e0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevel* ToCensoredRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo, ::UnityEngine::Sprite* coverSprite, ::StringW censoredLocalizedSongName);

  /// [Extension]
  /// @brief Method ToRuntime, addr 0x39d4120, size 0xb20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevel* ToRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo);

  /// [IteratorStateMachine(typeof(BeatmapLevelExtensions::<WithBeatSaberContent>d__1))]
  /// [Extension]
  /// @brief Method WithBeatSaberContent, addr 0x39d3510, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*
  WithBeatSaberContent(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelExtensions(BeatmapLevelExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelExtensions(BeatmapLevelExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapLevelExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

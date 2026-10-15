#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayTypeFilterExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayTypeFilterExtensions)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1;
}
namespace GlobalNamespace {
class GameplayTypeFilterExtensions__PacksWithGameplayType_d__0;
}
namespace GlobalNamespace {
struct GameplayType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayTypeFilterExtensions;
}
namespace GlobalNamespace {
class GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1;
}
namespace GlobalNamespace {
class GameplayTypeFilterExtensions__PacksWithGameplayType_d__0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayTypeFilterExtensions*);
MARK_REF_T(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1*);
MARK_REF_T(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayTypeFilterExtensions*, "", "GameplayTypeFilterExtensions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1*, "", "GameplayTypeFilterExtensions/<LevelsWithGameplayType>d__1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0*, "", "GameplayTypeFilterExtensions/<PacksWithGameplayType>d__0");
// [CompilerGenerated]
// Dependencies GameplayType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayTypeFilterExtensions/<LevelsWithGameplayType>d__1
class CORDL_TYPE GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_BeatmapLevel__get_Current)) ::GlobalNamespace::BeatmapLevel* System_Collections_Generic_IEnumerator_BeatmapLevel__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapLevel* __2__current;

  /// @brief Field <>3__gameplayType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__gameplayType, put = __cordl_internal_set___3__gameplayType)) ::GlobalNamespace::GameplayType __3__gameplayType;

  /// @brief Field <>3__levels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__levels, put = __cordl_internal_set___3__levels)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* __3__levels;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field gameplayType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType)) ::GlobalNamespace::GameplayType gameplayType;

  /// @brief Field levels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_levels, put = __cordl_internal_set_levels)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* levels;

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

  /// @brief Method MoveNext, addr 0x39d9ed0, size 0x2b4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapLevel>.GetEnumerator, addr 0x39da280, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* System_Collections_Generic_IEnumerable_BeatmapLevel__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapLevel>.get_Current, addr 0x39da238, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevel* System_Collections_Generic_IEnumerator_BeatmapLevel__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x39da320, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39da240, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39da278, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x39d9eb4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get___3__gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get___3__gameplayType();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get___3__levels() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get___3__levels();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get_gameplayType();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_levels() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_levels();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set___3__gameplayType(::GlobalNamespace::GameplayType value);

  constexpr void __cordl_internal_set___3__levels(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value);

  constexpr void __cordl_internal_set_levels(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method <>m__Finally1, addr 0x39da184, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x39d9dd0, size 0x20, virtual false, abstract: false, final false
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
  constexpr GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1(GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1(GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14457 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field levels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* ___levels;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field <>3__levels, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* _____3__levels;

  /// @brief Field gameplayType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType ___gameplayType;

  /// @brief Field <>3__gameplayType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType _____3__gameplayType;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, ___levels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____3__levels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, ___gameplayType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____3__gameplayType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies GameplayType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayTypeFilterExtensions/<PacksWithGameplayType>d__0
class CORDL_TYPE GameplayTypeFilterExtensions__PacksWithGameplayType_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapLevelPack__get_Current)) ::GlobalNamespace::BeatmapLevelPack* System_Collections_Generic_IEnumerator_BeatmapLevelPack__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapLevelPack* __2__current;

  /// @brief Field <>3__gameplayType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__gameplayType, put = __cordl_internal_set___3__gameplayType)) ::GlobalNamespace::GameplayType __3__gameplayType;

  /// @brief Field <>3__packs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packs, put = __cordl_internal_set___3__packs)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* __3__packs;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field gameplayType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType)) ::GlobalNamespace::GameplayType gameplayType;

  /// @brief Field packs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packs, put = __cordl_internal_set_packs)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* packs;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39da340, size 0x2a0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapLevelPack>.GetEnumerator, addr 0x39da6dc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* System_Collections_Generic_IEnumerable_BeatmapLevelPack__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapLevelPack>.get_Current, addr 0x39da694, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevelPack* System_Collections_Generic_IEnumerator_BeatmapLevelPack__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x39da77c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39da69c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39da6d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x39da324, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get___3__gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get___3__gameplayType();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get___3__packs() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get___3__packs();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get_gameplayType();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_packs() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_packs();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set___3__gameplayType(::GlobalNamespace::GameplayType value);

  constexpr void __cordl_internal_set___3__packs(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value);

  constexpr void __cordl_internal_set_packs(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method <>m__Finally1, addr 0x39da5e0, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x39d9d34, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapLevelPack__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapLevelPack__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayTypeFilterExtensions__PacksWithGameplayType_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions__PacksWithGameplayType_d__0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayTypeFilterExtensions__PacksWithGameplayType_d__0(GameplayTypeFilterExtensions__PacksWithGameplayType_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions__PacksWithGameplayType_d__0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayTypeFilterExtensions__PacksWithGameplayType_d__0(GameplayTypeFilterExtensions__PacksWithGameplayType_d__0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14458 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field packs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* ___packs;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field <>3__packs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* _____3__packs;

  /// @brief Field gameplayType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType ___gameplayType;

  /// @brief Field <>3__gameplayType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType _____3__gameplayType;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, ___packs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____3__packs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, ___gameplayType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____3__gameplayType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayTypeFilterExtensions
class CORDL_TYPE GameplayTypeFilterExtensions : public ::System::Object {
public:
  // Declarations
  using _LevelsWithGameplayType_d__1 = ::GlobalNamespace::GameplayTypeFilterExtensions__LevelsWithGameplayType_d__1;

  using _PacksWithGameplayType_d__0 = ::GlobalNamespace::GameplayTypeFilterExtensions__PacksWithGameplayType_d__0;

  /// [Extension]
  /// @brief Method ContainsGameplayType, addr 0x39d9df0, size 0xc4, virtual false, abstract: false, final false
  static inline bool ContainsGameplayType(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::GameplayType gameplayType);

  /// [IteratorStateMachine(typeof(GameplayTypeFilterExtensions::<LevelsWithGameplayType>d__1))]
  /// [Extension]
  /// @brief Method LevelsWithGameplayType, addr 0x39d9d54, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*
  LevelsWithGameplayType(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* levels, ::GlobalNamespace::GameplayType gameplayType);

  /// [IteratorStateMachine(typeof(GameplayTypeFilterExtensions::<PacksWithGameplayType>d__0))]
  /// [Extension]
  /// @brief Method PacksWithGameplayType, addr 0x39d9cb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*
  PacksWithGameplayType(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* packs, ::GlobalNamespace::GameplayType gameplayType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayTypeFilterExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayTypeFilterExtensions(GameplayTypeFilterExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeFilterExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayTypeFilterExtensions(GameplayTypeFilterExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameplayTypeFilterExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

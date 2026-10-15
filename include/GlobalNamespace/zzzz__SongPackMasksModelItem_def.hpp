#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMasksModelItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackDataType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackMasksModelItem)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModelItem__SelectBeatSaberPackIds_d__10;
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
class SongPackMasksModelItem;
}
namespace GlobalNamespace {
class SongPackMasksModelItem__SelectBeatSaberPackIds_d__10;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SongPackMasksModelItem*);
MARK_REF_T(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SongPackMasksModelItem*, "", "SongPackMasksModelItem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10*, "", "SongPackMasksModelItem/<SelectBeatSaberPackIds>d__10");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModelItem/<SelectBeatSaberPackIds>d__10
class CORDL_TYPE SongPackMasksModelItem__SelectBeatSaberPackIds_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::StringW __2__current;

  /// @brief Field <>3__beatmapLevelsModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__beatmapLevelsModel, put = __cordl_internal_set___3__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* __3__beatmapLevelsModel;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::SongPackMasksModelItem* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field beatmapLevelsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelsModel, put = __cordl_internal_set_beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39eee28, size 0x31c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x39ef240, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x39ef1f8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x39ef2e0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39ef200, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39ef238, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x39eee0c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get___3__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get___3__beatmapLevelsModel();

  constexpr ::GlobalNamespace::SongPackMasksModelItem* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::SongPackMasksModelItem*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get_beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get_beatmapLevelsModel();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___3__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::SongPackMasksModelItem* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  /// @brief Method <>m__Finally1, addr 0x39ef144, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x39eede8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelItem__SelectBeatSaberPackIds_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem__SelectBeatSaberPackIds_d__10", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelItem__SelectBeatSaberPackIds_d__10(SongPackMasksModelItem__SelectBeatSaberPackIds_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem__SelectBeatSaberPackIds_d__10", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelItem__SelectBeatSaberPackIds_d__10(SongPackMasksModelItem__SelectBeatSaberPackIds_d__10 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14584 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field beatmapLevelsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ___beatmapLevelsModel;

  /// @brief Field <>3__beatmapLevelsModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* _____3__beatmapLevelsModel;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModelItem* _____4__this;

  /// [Nullable(new[] { 0, 1 })]
  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, ___beatmapLevelsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____3__beatmapLevelsModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackDefinitionSO::Tags, SongPackDataType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModelItem
class CORDL_TYPE SongPackMasksModelItem : public ::System::Object {
public:
  // Declarations
  using _SelectBeatSaberPackIds_d__10 = ::GlobalNamespace::SongPackMasksModelItem__SelectBeatSaberPackIds_d__10;

  /// @brief Field _beatmapLevelPackId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPackId, put = __cordl_internal_set__beatmapLevelPackId)) ::StringW _beatmapLevelPackId;

  /// @brief Field _excludeTags, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__excludeTags, put = __cordl_internal_set__excludeTags)) ::GlobalNamespace::PackDefinitionSO_Tags _excludeTags;

  /// @brief Field _includeTags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__includeTags, put = __cordl_internal_set__includeTags)) ::GlobalNamespace::PackDefinitionSO_Tags _includeTags;

  /// @brief Field _serializedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName)) ::StringW _serializedName;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::GlobalNamespace::SongPackDataType _type;

  __declspec(property(get = get_containsMultiplePacks)) bool containsMultiplePacks;

  __declspec(property(get = get_serializedName)) ::StringW serializedName;

  /// @brief Method GetSongPackMask, addr 0x39eea18, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask GetSongPackMask(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  static inline ::GlobalNamespace::SongPackMasksModelItem* New_ctor();

  /// [IteratorStateMachine(typeof(SongPackMasksModelItem::<SelectBeatSaberPackIds>d__10))]
  /// @brief Method SelectBeatSaberPackIds, addr 0x39eed70, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* SelectBeatSaberPackIds(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  constexpr ::StringW const& __cordl_internal_get__beatmapLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__beatmapLevelPackId();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get__excludeTags() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get__excludeTags();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get__includeTags() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get__includeTags();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr ::GlobalNamespace::SongPackDataType const& __cordl_internal_get__type() const;

  constexpr ::GlobalNamespace::SongPackDataType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__beatmapLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__excludeTags(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set__includeTags(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr void __cordl_internal_set__type(::GlobalNamespace::SongPackDataType value);

  /// @brief Method .ctor, addr 0x39eee08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_containsMultiplePacks, addr 0x39eea94, size 0x10, virtual false, abstract: false, final false
  inline bool get_containsMultiplePacks();

  /// @brief Method get_serializedName, addr 0x39ee9fc, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_serializedName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelItem(SongPackMasksModelItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelItem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelItem(SongPackMasksModelItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14585 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongPackDataType ____type;

  /// [SerializeField]
  /// [LocalizationKey]
  /// [NullAllowed((NullAllowedContext)0)]
  /// @brief Field _serializedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// [SerializeField]
  /// [DrawIf("_type", (SongPackDataType)0, (DrawIfAttribute::DisablingType)1)]
  /// [NullAllowed((NullAllowedContext)0)]
  /// @brief Field _beatmapLevelPackId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____beatmapLevelPackId;

  /// [SerializeField]
  /// [DrawIf("_type", (SongPackDataType)1, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _includeTags, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ____includeTags;

  /// [SerializeField]
  /// [DrawIf("_type", (SongPackDataType)1, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _excludeTags, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ____excludeTags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____serializedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____beatmapLevelPackId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____includeTags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelItem, ____excludeTags) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SongPackMasksModelItem) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace

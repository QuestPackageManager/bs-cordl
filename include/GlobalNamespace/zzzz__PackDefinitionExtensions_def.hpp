#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PackDefinitionExtensions)
namespace GlobalNamespace {
class LeaderboardIdsSO;
}
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
namespace GlobalNamespace {
class PS4LevelProductPacksSO;
}
namespace GlobalNamespace {
class PS5LevelProductPacksSO;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsSO;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6;
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
class PackDefinitionExtensions;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2;
}
namespace GlobalNamespace {
class __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6);
// Type: ::<GetOculusLevelProductPacks>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetOculusLevelProductPacks>d__5*
class CORDL_TYPE __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_OculusLevelProductPacksSO__get_Current)) ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>
      System_Collections_Generic_IEnumerator_OculusLevelProductPacksSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2699c74, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<OculusLevelProductPacksSO>.GetEnumerator, addr 0x269a070, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* System_Collections_Generic_IEnumerable_OculusLevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<OculusLevelProductPacksSO>.get_Current, addr 0x269a028, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> System_Collections_Generic_IEnumerator_OculusLevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269a10c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269a030, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269a068, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2699c58, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x2699f78, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699994, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__OculusLevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__OculusLevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5(__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetOculusLevelProductPacks_d__5(__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12956 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPS4LeaderboardIds>d__3
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetPS4LeaderboardIds>d__3*
class CORDL_TYPE __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__get_Current)) ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>
      System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269a12c, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<SonyLeaderboardIdsSO>.GetEnumerator, addr 0x269a528, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_SonyLeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<SonyLeaderboardIdsSO>.get_Current, addr 0x269a4e0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269a5c4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269a4e8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269a520, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269a110, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269a430, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x269984c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__SonyLeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__SonyLeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3(__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetPS4LeaderboardIds_d__3(__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPS4LevelProductPacks>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetPS4LevelProductPacks>d__7*
class CORDL_TYPE __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_PS4LevelProductPacksSO__get_Current)) ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>
      System_Collections_Generic_IEnumerator_PS4LevelProductPacksSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269a5e4, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PS4LevelProductPacksSO>.GetEnumerator, addr 0x269a9e0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>* System_Collections_Generic_IEnumerable_PS4LevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PS4LevelProductPacksSO>.get_Current, addr 0x269a998, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> System_Collections_Generic_IEnumerator_PS4LevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269aa7c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269a9a0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269a9d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269a5c8, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269a8e8, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699adc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PS4LevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PS4LevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7(__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetPS4LevelProductPacks_d__7(__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12958 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPS5LeaderboardIds>d__4
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetPS5LeaderboardIds>d__4*
class CORDL_TYPE __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__get_Current)) ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>
      System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269aa9c, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<SonyLeaderboardIdsSO>.GetEnumerator, addr 0x269ae98, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_SonyLeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<SonyLeaderboardIdsSO>.get_Current, addr 0x269ae50, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> System_Collections_Generic_IEnumerator_SonyLeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269af34, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269ae58, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269ae90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269aa80, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269ada0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x26998f0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__SonyLeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__SonyLeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4(__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetPS5LeaderboardIds_d__4(__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPS5LevelProductPacks>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetPS5LevelProductPacks>d__8*
class CORDL_TYPE __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_PS5LevelProductPacksSO__get_Current)) ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>
      System_Collections_Generic_IEnumerator_PS5LevelProductPacksSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269af54, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PS5LevelProductPacksSO>.GetEnumerator, addr 0x269b350, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>* System_Collections_Generic_IEnumerable_PS5LevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PS5LevelProductPacksSO>.get_Current, addr 0x269b308, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> System_Collections_Generic_IEnumerator_PS5LevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269b3ec, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269b310, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269b348, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269af38, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269b258, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699b80, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PS5LevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PS5LevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8(__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetPS5LevelProductPacks_d__8(__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPerceivedLoudnessSOs>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetPerceivedLoudnessSOs>d__9*
class CORDL_TYPE __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_PerceivedLoudnessSO__get_Current)) ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>
      System_Collections_Generic_IEnumerator_PerceivedLoudnessSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269b40c, size 0x2e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PerceivedLoudnessSO>.GetEnumerator, addr 0x269b7e4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* System_Collections_Generic_IEnumerable_PerceivedLoudnessSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PerceivedLoudnessSO>.get_Current, addr 0x269b79c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> System_Collections_Generic_IEnumerator_PerceivedLoudnessSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269b880, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269b7a4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269b7dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269b3f0, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PerceivedLoudnessSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269b6ec, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699c24, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PerceivedLoudnessSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PerceivedLoudnessSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9(__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9(__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetQuestLeaderboardIds>d__0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetQuestLeaderboardIds>d__0*
class CORDL_TYPE __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO>
      System_Collections_Generic_IEnumerator_LeaderboardIdsSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269b8a0, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x269bc9c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x269bc54, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269bd38, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269bc5c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269bc94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269b884, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269bba4, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699660, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0(__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetQuestLeaderboardIds_d__0(__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12962 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRiftLeaderboardIds>d__1
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetRiftLeaderboardIds>d__1*
class CORDL_TYPE __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO>
      System_Collections_Generic_IEnumerator_LeaderboardIdsSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269bd58, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x269c154, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x269c10c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269c1f0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269c114, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269c14c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269bd3c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269c05c, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699704, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1(__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetRiftLeaderboardIds_d__1(__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12963 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetSteamLeaderboardIds>d__2
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetSteamLeaderboardIds>d__2*
class CORDL_TYPE __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO>
      System_Collections_Generic_IEnumerator_LeaderboardIdsSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269c210, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x269c60c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x269c5c4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269c6a8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269c5cc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269c604, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269c1f4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269c514, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x26997a8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__LeaderboardIdsSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2(__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetSteamLeaderboardIds_d__2(__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12964 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetSteamLevelProductPacks>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions::<GetSteamLevelProductPacks>d__6*
class CORDL_TYPE __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_SteamLevelProductPacksSO__get_Current)) ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>
      System_Collections_Generic_IEnumerator_SteamLevelProductPacksSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> __2__current;

  /// @brief Field <>3__packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__packDefinitions,
                      put = __cordl_internal_set___3__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __3__packDefinitions;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field packDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_packDefinitions,
                      put = __cordl_internal_set_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x269c6c8, size 0x304, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<SteamLevelProductPacksSO>.GetEnumerator, addr 0x269cac4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* System_Collections_Generic_IEnumerable_SteamLevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<SteamLevelProductPacksSO>.get_Current, addr 0x269ca7c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> System_Collections_Generic_IEnumerator_SteamLevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x269cb60, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x269ca84, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x269cabc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x269c6ac, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get_packDefinitions() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x269c9cc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2699a38, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__SteamLevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__SteamLevelProductPacksSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6(__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionExtensions___GetSteamLevelProductPacks_d__6(__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field packDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ___packDefinitions;

  /// @brief Field <>3__packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____3__packDefinitions;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _____7__wrap1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12965 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PackDefinitionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionExtensions*
class CORDL_TYPE PackDefinitionExtensions : public ::System::Object {
public:
  // Declarations
  using _GetOculusLevelProductPacks_d__5 = ::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5;

  using _GetPS4LeaderboardIds_d__3 = ::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3;

  using _GetPS4LevelProductPacks_d__7 = ::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7;

  using _GetPS5LeaderboardIds_d__4 = ::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4;

  using _GetPS5LevelProductPacks_d__8 = ::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8;

  using _GetPerceivedLoudnessSOs_d__9 = ::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9;

  using _GetQuestLeaderboardIds_d__0 = ::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0;

  using _GetRiftLeaderboardIds_d__1 = ::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1;

  using _GetSteamLeaderboardIds_d__2 = ::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2;

  using _GetSteamLevelProductPacks_d__6 = ::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6;

  /// @brief Method GetOculusLevelProductPacks, addr 0x2699924, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*
  GetOculusLevelProductPacks(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPS4LeaderboardIds, addr 0x26997dc, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  GetPS4LeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPS4LevelProductPacks, addr 0x2699a6c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>>*
  GetPS4LevelProductPacks(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPS5LeaderboardIds, addr 0x2699880, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>>*
  GetPS5LeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPS5LevelProductPacks, addr 0x2699b10, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>>*
  GetPS5LevelProductPacks(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPerceivedLoudnessSOs, addr 0x2699bb4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*
  GetPerceivedLoudnessSOs(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetQuestLeaderboardIds, addr 0x26995f0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetQuestLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetRiftLeaderboardIds, addr 0x2699694, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetRiftLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetSteamLeaderboardIds, addr 0x2699738, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetSteamLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetSteamLevelProductPacks, addr 0x26999c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*
  GetSteamLevelProductPacks(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions(PackDefinitionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions(PackDefinitionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions*, "", "PackDefinitionExtensions");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetOculusLevelProductPacks_d__5*, "", "PackDefinitionExtensions/<GetOculusLevelProductPacks>d__5");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LeaderboardIds_d__3*, "", "PackDefinitionExtensions/<GetPS4LeaderboardIds>d__3");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetPS4LevelProductPacks_d__7*, "", "PackDefinitionExtensions/<GetPS4LevelProductPacks>d__7");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LeaderboardIds_d__4*, "", "PackDefinitionExtensions/<GetPS5LeaderboardIds>d__4");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetPS5LevelProductPacks_d__8*, "", "PackDefinitionExtensions/<GetPS5LevelProductPacks>d__8");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetPerceivedLoudnessSOs_d__9*, "", "PackDefinitionExtensions/<GetPerceivedLoudnessSOs>d__9");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetQuestLeaderboardIds_d__0*, "", "PackDefinitionExtensions/<GetQuestLeaderboardIds>d__0");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetRiftLeaderboardIds_d__1*, "", "PackDefinitionExtensions/<GetRiftLeaderboardIds>d__1");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLeaderboardIds_d__2*, "", "PackDefinitionExtensions/<GetSteamLeaderboardIds>d__2");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionExtensions___GetSteamLevelProductPacks_d__6*, "", "PackDefinitionExtensions/<GetSteamLevelProductPacks>d__6");

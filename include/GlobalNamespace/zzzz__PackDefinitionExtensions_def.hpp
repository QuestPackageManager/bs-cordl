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
class PackDefinitionExtensions__GetOculusLevelProductPacks_d__3;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetQuestLeaderboardIds_d__0;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetRiftLeaderboardIds_d__1;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetSteamLeaderboardIds_d__2;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetSteamLevelProductPacks_d__4;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
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
class PackDefinitionExtensions__GetOculusLevelProductPacks_d__3;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetQuestLeaderboardIds_d__0;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetRiftLeaderboardIds_d__1;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetSteamLeaderboardIds_d__2;
}
namespace GlobalNamespace {
class PackDefinitionExtensions__GetSteamLevelProductPacks_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetOculusLevelProductPacks>d__3
class CORDL_TYPE PackDefinitionExtensions__GetOculusLevelProductPacks_d__3 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3603454, size 0x2f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<OculusLevelProductPacksSO>.GetEnumerator, addr 0x3603840, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* System_Collections_Generic_IEnumerable_OculusLevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<OculusLevelProductPacksSO>.get_Current, addr 0x36037f8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> System_Collections_Generic_IEnumerator_OculusLevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x36038d8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3603800, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3603838, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3603438, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x3603744, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3603338, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetOculusLevelProductPacks_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetOculusLevelProductPacks_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetOculusLevelProductPacks_d__3(PackDefinitionExtensions__GetOculusLevelProductPacks_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetOculusLevelProductPacks_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetOculusLevelProductPacks_d__3(PackDefinitionExtensions__GetOculusLevelProductPacks_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14968 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetPerceivedLoudnessSOs>d__5
class CORDL_TYPE PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3603918, size 0x2e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PerceivedLoudnessSO>.GetEnumerator, addr 0x3603cf8, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* System_Collections_Generic_IEnumerable_PerceivedLoudnessSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PerceivedLoudnessSO>.get_Current, addr 0x3603cb0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> System_Collections_Generic_IEnumerator_PerceivedLoudnessSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3603d90, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3603cb8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3603cf0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x36038fc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PerceivedLoudnessSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x3603bfc, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x36038dc, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5(PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5(PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14969 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetQuestLeaderboardIds>d__0
class CORDL_TYPE PackDefinitionExtensions__GetQuestLeaderboardIds_d__0 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3603dd0, size 0x2f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x36041bc, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x3604174, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3604254, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x360417c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x36041b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3603db4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x36040c0, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3603d94, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetQuestLeaderboardIds_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetQuestLeaderboardIds_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetQuestLeaderboardIds_d__0(PackDefinitionExtensions__GetQuestLeaderboardIds_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetQuestLeaderboardIds_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetQuestLeaderboardIds_d__0(PackDefinitionExtensions__GetQuestLeaderboardIds_d__0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14970 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetRiftLeaderboardIds>d__1
class CORDL_TYPE PackDefinitionExtensions__GetRiftLeaderboardIds_d__1 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3604294, size 0x2f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x3604680, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x3604638, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3604718, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3604640, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3604678, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3604278, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x3604584, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3604258, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetRiftLeaderboardIds_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetRiftLeaderboardIds_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetRiftLeaderboardIds_d__1(PackDefinitionExtensions__GetRiftLeaderboardIds_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetRiftLeaderboardIds_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetRiftLeaderboardIds_d__1(PackDefinitionExtensions__GetRiftLeaderboardIds_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14971 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetSteamLeaderboardIds>d__2
class CORDL_TYPE PackDefinitionExtensions__GetSteamLeaderboardIds_d__2 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3604758, size 0x2f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<LeaderboardIdsSO>.GetEnumerator, addr 0x3604b44, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* System_Collections_Generic_IEnumerable_LeaderboardIdsSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<LeaderboardIdsSO>.get_Current, addr 0x3604afc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> System_Collections_Generic_IEnumerator_LeaderboardIdsSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3604bdc, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3604b04, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3604b3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x360473c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x3604a48, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x360471c, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetSteamLeaderboardIds_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetSteamLeaderboardIds_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetSteamLeaderboardIds_d__2(PackDefinitionExtensions__GetSteamLeaderboardIds_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetSteamLeaderboardIds_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetSteamLeaderboardIds_d__2(PackDefinitionExtensions__GetSteamLeaderboardIds_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14972 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions/<GetSteamLevelProductPacks>d__4
class CORDL_TYPE PackDefinitionExtensions__GetSteamLevelProductPacks_d__4 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3604c1c, size 0x2f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<SteamLevelProductPacksSO>.GetEnumerator, addr 0x3605008, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* System_Collections_Generic_IEnumerable_SteamLevelProductPacksSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<SteamLevelProductPacksSO>.get_Current, addr 0x3604fc0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> System_Collections_Generic_IEnumerator_SteamLevelProductPacksSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x36050a0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3604fc8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3605000, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3604c00, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___3__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___3__packDefinitions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get_packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get_packDefinitions();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value);

  constexpr void __cordl_internal_set___3__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method <>m__Finally1, addr 0x3604f0c, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3604be0, size 0x20, virtual false, abstract: false, final false
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
  constexpr PackDefinitionExtensions__GetSteamLevelProductPacks_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetSteamLevelProductPacks_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionExtensions__GetSteamLevelProductPacks_d__4(PackDefinitionExtensions__GetSteamLevelProductPacks_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionExtensions__GetSteamLevelProductPacks_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionExtensions__GetSteamLevelProductPacks_d__4(PackDefinitionExtensions__GetSteamLevelProductPacks_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14973 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, ___packDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, _____3__packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionExtensions
class CORDL_TYPE PackDefinitionExtensions : public ::System::Object {
public:
  // Declarations
  using _GetOculusLevelProductPacks_d__3 = ::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3;

  using _GetPerceivedLoudnessSOs_d__5 = ::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5;

  using _GetQuestLeaderboardIds_d__0 = ::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0;

  using _GetRiftLeaderboardIds_d__1 = ::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1;

  using _GetSteamLeaderboardIds_d__2 = ::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2;

  using _GetSteamLevelProductPacks_d__4 = ::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4;

  /// @brief Method GetOculusLevelProductPacks, addr 0x36032c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*
  GetOculusLevelProductPacks(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetPerceivedLoudnessSOs, addr 0x36033c8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*
  GetPerceivedLoudnessSOs(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetQuestLeaderboardIds, addr 0x3603178, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetQuestLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetRiftLeaderboardIds, addr 0x36031e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetRiftLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetSteamLeaderboardIds, addr 0x3603258, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*
  GetSteamLeaderboardIds(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method GetSteamLevelProductPacks, addr 0x3603358, size 0x70, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions*, "", "PackDefinitionExtensions");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetOculusLevelProductPacks_d__3*, "", "PackDefinitionExtensions/<GetOculusLevelProductPacks>d__3");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetPerceivedLoudnessSOs_d__5*, "", "PackDefinitionExtensions/<GetPerceivedLoudnessSOs>d__5");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetQuestLeaderboardIds_d__0*, "", "PackDefinitionExtensions/<GetQuestLeaderboardIds>d__0");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetRiftLeaderboardIds_d__1*, "", "PackDefinitionExtensions/<GetRiftLeaderboardIds>d__1");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetSteamLeaderboardIds_d__2*, "", "PackDefinitionExtensions/<GetSteamLeaderboardIds>d__2");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionExtensions__GetSteamLevelProductPacks_d__4*, "", "PackDefinitionExtensions/<GetSteamLevelProductPacks>d__4");

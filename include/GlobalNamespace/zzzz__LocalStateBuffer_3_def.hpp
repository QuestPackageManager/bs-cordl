#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalStateBuffer_3)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class LocalStateBuffer_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LocalStateBuffer_3);
// Type: ::LocalStateBuffer`3
// SizeInfo { instance_size: 120, native_size: 113, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12982)), TypeDefinitionIndex(TypeDefinitionIndex(12985)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst:
// 3833 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12982), inst: 3833 }), TypeDefinitionIndex(TypeDefinitionIndex(12988))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12986)) CS Name: ::LocalStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE LocalStateBuffer_3 : public ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
public:
  // Declarations
  /// @brief Field _current, offset 0x30, size 0x18
  __declspec(property(get = __get__current, put = __set__current))::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> _current;

  /// @brief Field _fullStateUpdateFrequency, offset 0x48, size 0x8
  __declspec(property(get = __get__fullStateUpdateFrequency, put = __set__fullStateUpdateFrequency)) int64_t _fullStateUpdateFrequency;

  /// @brief Field _deltaUpdateFrequency, offset 0x50, size 0x8
  __declspec(property(get = __get__deltaUpdateFrequency, put = __set__deltaUpdateFrequency)) int64_t _deltaUpdateFrequency;

  /// @brief Field _sentStateIndex, offset 0x58, size 0x4
  __declspec(property(get = __get__sentStateIndex, put = __set__sentStateIndex)) int32_t _sentStateIndex;

  /// @brief Field _sentDeltaIndex, offset 0x5c, size 0x4
  __declspec(property(get = __get__sentDeltaIndex, put = __set__sentDeltaIndex)) int32_t _sentDeltaIndex;

  /// @brief Field _sentStates, offset 0x60, size 0x8
  __declspec(property(get = __get__sentStates, put = __set__sentStates))::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                                                                                 ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> _sentStates;

  /// @brief Field _sentDeltas, offset 0x68, size 0x8
  __declspec(property(get = __get__sentDeltas, put = __set__sentDeltas))::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                                                                                 ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> _sentDeltas;

  /// @brief Field _lastSentSyncStateId, offset 0x70, size 0x1
  __declspec(property(get = __get__lastSentSyncStateId, put = __set__lastSentSyncStateId))::GlobalNamespace::SyncStateId _lastSentSyncStateId;

  constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>& __get__current();

  constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> const& __get__current() const;

  constexpr void __set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> value);

  constexpr int64_t& __get__fullStateUpdateFrequency();

  constexpr int64_t const& __get__fullStateUpdateFrequency() const;

  constexpr void __set__fullStateUpdateFrequency(int64_t value);

  constexpr int64_t& __get__deltaUpdateFrequency();

  constexpr int64_t const& __get__deltaUpdateFrequency() const;

  constexpr void __set__deltaUpdateFrequency(int64_t value);

  constexpr int32_t& __get__sentStateIndex();

  constexpr int32_t const& __get__sentStateIndex() const;

  constexpr void __set__sentStateIndex(int32_t value);

  constexpr int32_t& __get__sentDeltaIndex();

  constexpr int32_t const& __get__sentDeltaIndex() const;

  constexpr void __set__sentDeltaIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
  __get__sentStates();

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __get__sentStates() const;

  constexpr void __set__sentStates(
      ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
          value);

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
  __get__sentDeltas();

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __get__sentDeltas() const;

  constexpr void __set__sentDeltas(
      ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
          value);

  constexpr ::GlobalNamespace::SyncStateId& __get__lastSentSyncStateId();

  constexpr ::GlobalNamespace::SyncStateId const& __get__lastSentSyncStateId() const;

  constexpr void __set__lastSentSyncStateId(::GlobalNamespace::SyncStateId value);

  static inline ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* New_ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                                                                                            ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                            ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
  inline void _ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother = nullptr);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method MarkDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MarkDirty();

  /// @brief Method TryGetSerializedState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetSerializedState(ByRef<TStateTable> state, ByRef<int64_t> time, ByRef<::GlobalNamespace::SyncStateId> id);

  /// @brief Method TryGetSerializedStateDelta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetSerializedStateDelta(ByRef<TStateTable> delta, ByRef<int32_t> timeOffset, ByRef<::GlobalNamespace::SyncStateId> baseId);

  /// @brief Method SetTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetTime(int64_t time);

  /// @brief Method SetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetState(TType type, TState state);

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState GetState(TType type);

  // Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalStateBuffer_3(LocalStateBuffer_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalStateBuffer_3(LocalStateBuffer_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalStateBuffer_3();

public:
  /// @brief Field _current, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> ____current;

  /// @brief Field _fullStateUpdateFrequency, offset: 0x48, size: 0x8, def value: None
  int64_t ____fullStateUpdateFrequency;

  /// @brief Field _deltaUpdateFrequency, offset: 0x50, size: 0x8, def value: None
  int64_t ____deltaUpdateFrequency;

  /// @brief Field _sentStateIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ____sentStateIndex;

  /// @brief Field _sentDeltaIndex, offset: 0x5c, size: 0x4, def value: None
  int32_t ____sentDeltaIndex;

  /// @brief Field _sentStates, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
      ____sentStates;

  /// @brief Field _sentDeltas, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
      ____sentDeltas;

  /// @brief Field _lastSentSyncStateId, offset: 0x70, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____lastSentSyncStateId;

  /// @brief Field kMaxSentStates offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSentStates{ static_cast<int32_t>(0x4) };

  /// @brief Field kMaxSentDeltas offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSentDeltas{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");

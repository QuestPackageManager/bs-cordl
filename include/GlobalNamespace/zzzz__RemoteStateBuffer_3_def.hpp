#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStateBuffer_3)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class RemoteStateBuffer_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteStateBuffer_3);
// Type: ::RemoteStateBuffer`3
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12906)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12906), inst: 3745 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12908))
// CS Name: ::RemoteStateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE RemoteStateBuffer_3 : public ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
public:
  // Declarations
  /// @brief Field _receivedStates, offset 0x30, size 0x8
  __declspec(property(get = __get__receivedStates,
                      put = __set__receivedStates))::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                                                            ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> _receivedStates;

  /// @brief Field _receivedDeltas, offset 0x38, size 0x8
  __declspec(property(get = __get__receivedDeltas,
                      put = __set__receivedDeltas))::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                                                            ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> _receivedDeltas;

  /// @brief Field _receivedStateIndex, offset 0x40, size 0x4
  __declspec(property(get = __get__receivedStateIndex, put = __set__receivedStateIndex)) int32_t _receivedStateIndex;

  /// @brief Field _receivedStateCount, offset 0x44, size 0x4
  __declspec(property(get = __get__receivedStateCount, put = __set__receivedStateCount)) int32_t _receivedStateCount;

  /// @brief Field _receivedDeltaIndex, offset 0x48, size 0x4
  __declspec(property(get = __get__receivedDeltaIndex, put = __set__receivedDeltaIndex)) int32_t _receivedDeltaIndex;

  /// @brief Field _receivedDeltaCount, offset 0x4c, size 0x4
  __declspec(property(get = __get__receivedDeltaCount, put = __set__receivedDeltaCount)) int32_t _receivedDeltaCount;

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
  __get__receivedStates();

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __get__receivedStates() const;

  constexpr void __set__receivedStates(
      ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
          value);

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
  __get__receivedDeltas();

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __get__receivedDeltas() const;

  constexpr void __set__receivedDeltas(
      ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
          value);

  constexpr int32_t& __get__receivedStateIndex();

  constexpr int32_t const& __get__receivedStateIndex() const;

  constexpr void __set__receivedStateIndex(int32_t value);

  constexpr int32_t& __get__receivedStateCount();

  constexpr int32_t const& __get__receivedStateCount() const;

  constexpr void __set__receivedStateCount(int32_t value);

  constexpr int32_t& __get__receivedDeltaIndex();

  constexpr int32_t const& __get__receivedDeltaIndex() const;

  constexpr void __set__receivedDeltaIndex(int32_t value);

  constexpr int32_t& __get__receivedDeltaCount();

  constexpr int32_t const& __get__receivedDeltaCount() const;

  constexpr void __set__receivedDeltaCount(int32_t value);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Clear();

  /// @brief Method PushState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PushState(::GlobalNamespace::SyncStateId id, TStateTable state, float_t time);

  /// @brief Method PushDelta addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PushDelta(::GlobalNamespace::SyncStateId baseId, TStateTable delta, float_t timeOffset);

  /// @brief Method ProcessQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ProcessQueue();

  static inline ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* New_ctor(int32_t size,
                                                                                             ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                             ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  // Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteStateBuffer_3(RemoteStateBuffer_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteStateBuffer_3(RemoteStateBuffer_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteStateBuffer_3();

public:
  /// @brief Field _receivedStates, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
      ____receivedStates;

  /// @brief Field _receivedDeltas, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
      ____receivedDeltas;

  /// @brief Field _receivedStateIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____receivedStateIndex;

  /// @brief Field _receivedStateCount, offset: 0x44, size: 0x4, def value: None
  int32_t ____receivedStateCount;

  /// @brief Field _receivedDeltaIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ____receivedDeltaIndex;

  /// @brief Field _receivedDeltaCount, offset: 0x4c, size: 0x4, def value: None
  int32_t ____receivedDeltaCount;

  /// @brief Field kMaxStateQueueSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxStateQueueSize{ static_cast<int32_t>(0x4) };

  /// @brief Field kMaxDeltaQueueSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxDeltaQueueSize{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteStateBuffer_3, "", "RemoteStateBuffer`3");

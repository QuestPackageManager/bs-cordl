#pragma once
// IWYU pragma private; include "GlobalNamespace/StateBuffer_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateBuffer_3)
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3_InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3_SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct StateBuffer_3_TimestampedStateTable;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3_InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3_SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct StateBuffer_3_TimestampedStateTable;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::StateBuffer_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::StateBuffer_3_InterpolationDelegate);
MARK_GEN_REF_PTR_T(::GlobalNamespace::StateBuffer_3_SmoothingDelegate);
MARK_GEN_VAL_T(::GlobalNamespace::StateBuffer_3_TimestampedStateTable);
// Dependencies SyncStateId
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: true
// CS Name: StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>
struct CORDL_TYPE StateBuffer_3_TimestampedStateTable {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable,TType,TState>>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> other);

  /// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool
  IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(::ByRef<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int64_t time, TStateTable state);

  /// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable,TType,TState>>"
  constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*
  i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__StateBuffer_3_TimestampedStateTable_TStateTable_TType_TState__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StateBuffer_3_TimestampedStateTable();

  // Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam
  // { name: "time", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "TStateTable", modifiers: "", def_value: None }]
  constexpr StateBuffer_3_TimestampedStateTable(bool isValid, ::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
  bool isValid;

  /// @brief Field id, offset: 0x1, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId id;

  /// @brief Field time, offset: 0x8, size: 0x8, def value: None
  int64_t time;

  /// @brief Field state, offset: 0x10, size: 0x8, def value: None
  TStateTable state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// CS Name: StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState>
class CORDL_TYPE StateBuffer_3_InterpolationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState Invoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time);

  static inline ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateBuffer_3_InterpolationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3_InterpolationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateBuffer_3_InterpolationDelegate(StateBuffer_3_InterpolationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3_InterpolationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateBuffer_3_InterpolationDelegate(StateBuffer_3_InterpolationDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// CS Name: StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState>
class CORDL_TYPE StateBuffer_3_SmoothingDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(TState a, TState b, float_t smooth, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TState Invoke(TState a, TState b, float_t smooth);

  static inline ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateBuffer_3_SmoothingDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3_SmoothingDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateBuffer_3_SmoothingDelegate(StateBuffer_3_SmoothingDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3_SmoothingDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateBuffer_3_SmoothingDelegate(StateBuffer_3_SmoothingDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// CS Name: StateBuffer`3<TStateTable,TType,TState>
class CORDL_TYPE StateBuffer_3 : public ::System::Object {
public:
  // Declarations
  using InterpolationDelegate = ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>;

  using SmoothingDelegate = ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>;

  using TimestampedStateTable = ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>,
                                                                                                        ::Array<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*>
      _buffer;

  /// @brief Field _currentIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__currentIndex, put = __cordl_internal_set__currentIndex)) int32_t _currentIndex;

  /// @brief Field _interpolator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__interpolator,
                      put = __cordl_internal_set__interpolator)) ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* _interpolator;

  /// @brief Field _smoother, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__smoother, put = __cordl_internal_set__smoother)) ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* _smoother;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetLatestState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState GetLatestState(TType type);

  /// @brief Method GetLatestTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int64_t GetLatestTime();

  /// @brief Method GetPreviousIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetPreviousIndex(int32_t offset);

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TState GetState(TType type, int64_t time);

  /// @brief Method InsertState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertState(::ByRef<TStateTable> state, int64_t time);

  static inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* New_ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                       ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother);

  constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*>&
  __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__currentIndex() const;

  constexpr int32_t& __cordl_internal_get__currentIndex();

  constexpr ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* const& __cordl_internal_get__interpolator() const;

  constexpr ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*& __cordl_internal_get__interpolator();

  constexpr ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* const& __cordl_internal_get__smoother() const;

  constexpr ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*& __cordl_internal_get__smoother();

  constexpr void __cordl_internal_set__buffer(
      ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*> value);

  constexpr void __cordl_internal_set__currentIndex(int32_t value);

  constexpr void __cordl_internal_set__interpolator(::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* value);

  constexpr void __cordl_internal_set__smoother(::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateBuffer_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateBuffer_3(StateBuffer_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateBuffer_3(StateBuffer_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18250 };

  /// @brief Field _currentIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentIndex;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*> ____buffer;

  /// @brief Field _interpolator, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* ____interpolator;

  /// @brief Field _smoother, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* ____smoother;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::StateBuffer_3, "", "StateBuffer`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::StateBuffer_3_InterpolationDelegate, "", "StateBuffer`3/InterpolationDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::StateBuffer_3_SmoothingDelegate, "", "StateBuffer`3/SmoothingDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::StateBuffer_3_TimestampedStateTable, "", "StateBuffer`3/TimestampedStateTable");

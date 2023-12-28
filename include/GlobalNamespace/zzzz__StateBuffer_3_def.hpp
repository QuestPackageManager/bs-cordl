#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateBuffer_3)
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class StateBuffer_3;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> struct __StateBuffer_3__TimestampedStateTable;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::StateBuffer_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate);
MARK_GEN_VAL_T(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable);
// Type: ::TimestampedStateTable
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12982))
// CS Name: ::StateBuffer`3::TimestampedStateTable<TStateTable,TType,TState>
struct CORDL_TYPE __StateBuffer_3__TimestampedStateTable {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*();

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>> other);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int64_t time, TStateTable state);

  /// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool
  IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>> other);

  // Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam
  // { name: "time", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "TStateTable", modifiers: "", def_value: None }]
  constexpr __StateBuffer_3__TimestampedStateTable(bool isValid, ::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StateBuffer_3__TimestampedStateTable();

  /// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
  bool isValid;

  /// @brief Field id, offset: 0x1, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId id;

  /// @brief Field time, offset: 0x8, size: 0x8, def value: None
  int64_t time;

  /// @brief Field state, offset: 0x10, size: 0x8, def value: None
  TStateTable state;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::InterpolationDelegate
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12983))
// CS Name: ::StateBuffer`3::InterpolationDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__InterpolationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState Invoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time);

  /// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StateBuffer_3__InterpolationDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SmoothingDelegate
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12984))
// CS Name: ::StateBuffer`3::SmoothingDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__SmoothingDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState Invoke(TState a, TState b, float_t smooth);

  /// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(TState a, TState b, float_t smooth, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TState EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StateBuffer_3__SmoothingDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::StateBuffer`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TStateTable, typename TType, typename TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12985))
// CS Name: ::StateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE StateBuffer_3 : public ::System::Object {
public:
  // Declarations
  using SmoothingDelegate = ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>;

  using InterpolationDelegate = ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>;

  using TimestampedStateTable = ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>;

  /// @brief Field _currentIndex, offset 0x10, size 0x4
  __declspec(property(get = __get__currentIndex, put = __set__currentIndex)) int32_t _currentIndex;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                                                                         ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> _buffer;

  /// @brief Field _interpolator, offset 0x20, size 0x8
  __declspec(property(get = __get__interpolator, put = __set__interpolator))::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* _interpolator;

  /// @brief Field _smoother, offset 0x28, size 0x8
  __declspec(property(get = __get__smoother, put = __set__smoother))::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* _smoother;

  constexpr int32_t& __get__currentIndex();

  constexpr int32_t const& __get__currentIndex() const;

  constexpr void __set__currentIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
  __get__buffer();

  constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                     ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
  __get__buffer() const;

  constexpr void __set__buffer(
      ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
          value);

  constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*& __get__interpolator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*> const& __get__interpolator() const;

  constexpr void __set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* value);

  constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*& __get__smoother();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*> const& __get__smoother() const;

  constexpr void __set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* value);

  static inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* New_ctor(int32_t size,
                                                                                       ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                       ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother);

  /// @brief Method GetPreviousIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t GetPreviousIndex(int32_t offset);

  /// @brief Method InsertState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void InsertState(ByRef<TStateTable> state, int64_t time);

  /// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TState GetState(TType type, int64_t time);

  /// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TState GetLatestState(TType type);

  /// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int64_t GetLatestTime();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateBuffer_3(StateBuffer_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateBuffer_3(StateBuffer_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateBuffer_3();

public:
  /// @brief Field _currentIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentIndex;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
      ____buffer;

  /// @brief Field _interpolator, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* ____interpolator;

  /// @brief Field _smoother, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* ____smoother;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::StateBuffer_3, "", "StateBuffer`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate, "", "StateBuffer`3/InterpolationDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate, "", "StateBuffer`3/SmoothingDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable, "", "StateBuffer`3/TimestampedStateTable");

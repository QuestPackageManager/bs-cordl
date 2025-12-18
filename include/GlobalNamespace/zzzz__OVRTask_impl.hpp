#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "System/zzzz__ValueTuple_4_impl.hpp"
#include "System/zzzz__ValueTuple_5_impl.hpp"
#include "System/zzzz__ValueTuple_6_impl.hpp"
#include "System/zzzz__ValueTuple_7_impl.hpp"
#include "System/zzzz__ValueTuple_8_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__ValueTuple_6_def.hpp"
#include "System/zzzz__ValueTuple_7_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTask_Builder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTask_Builder::*)(::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(
    &::GlobalNamespace::OVRTask_Builder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d42ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask_Builder.ToTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRTask_Builder::*)()>(
    &::GlobalNamespace::OVRTask_Builder::ToTask)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d4317c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToTask",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTask_Builder::_ctor(::GlobalNamespace::OVRPlugin_Result synchronousResult, ::System::Guid taskId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, synchronousResult, taskId);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToTask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>, false>(this, ___internal_method);
}
template <typename TStatus> inline ::GlobalNamespace::OVRTask_1<TStatus> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToTask",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TStatus>, false>(this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask_Builder::ToTask(TResult failureValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToTask",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(this, ___internal_method, failureValue);
}
template <typename TStatus> inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>> GlobalNamespace::OVRTask_Builder::ToResultTask() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToResultTask",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>>, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "ToTask",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>, false>(this, ___internal_method);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_Builder::CastResult() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_Builder>::get(), "CastResult",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_synchronousResult", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_taskId", ty: "::System::Guid",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTask_Builder::OVRTask_Builder(::GlobalNamespace::OVRPlugin_Result _synchronousResult, ::System::Guid _taskId) noexcept {
  this->_synchronousResult = _synchronousResult;
  this->_taskId = _taskId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTask_Builder::OVRTask_Builder() {}
template <typename T> constexpr ::GlobalNamespace::OVRTask_1<T>& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_CombinedTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CombinedTask;
}
template <typename T> constexpr ::GlobalNamespace::OVRTask_1<T> const& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_CombinedTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CombinedTask;
}
template <typename T> constexpr void GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_set_CombinedTask(::GlobalNamespace::OVRTask_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CombinedTask = value;
}
template <typename T> constexpr T& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
template <typename T> constexpr T const& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
template <typename T> constexpr void GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_set_Result(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Result, value);
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_Remaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Remaining;
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* const& GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_get_Remaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Remaining;
}
template <typename T> constexpr void GlobalNamespace::OVRTask_MultiTaskData_1<T>::__cordl_internal_set_Remaining(::System::Collections::Generic::HashSet_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Remaining, value);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OVRObjectPool_IPoolObject_OnGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>::get(),
                                                                             "OVRObjectPool.IPoolObject.OnGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OVRObjectPool_IPoolObject_OnReturn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>::get(), "OVRObjectPool.IPoolObject.OnReturn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::AddTask(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>::get(), "AddTask", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OnResult(::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>::get(), "OnResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, taskId);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OVRTask_MultiTaskData_1<T>* GlobalNamespace::OVRTask_MultiTaskData_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename T> constexpr GlobalNamespace::OVRTask_MultiTaskData_1<T>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTask_MultiTaskData_1<T>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_1<T>::OVRTask_MultiTaskData_1() {}
template <typename T1, typename T2> inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::setStaticF___9(::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(value));
}
template <typename T1, typename T2> inline ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>* GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>::get>();
}
template <typename T1, typename T2> inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2>
inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::__cctor_b__4_0(T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>::get(), "<.cctor>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2>
inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::__cctor_b__4_1(T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>::get(), "<.cctor>b__4_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2> inline ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>* GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>());
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::MultiTaskData_2_OVRTask___c() {}
template <typename T1, typename T2>
inline void
GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::setStaticF__onResult1(::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*>(value));
}
template <typename T1, typename T2>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get>();
}
template <typename T1, typename T2>
inline void
GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::setStaticF__onResult2(::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*>(value));
}
template <typename T1, typename T2>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get>();
}
template <typename T1, typename T2>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>> GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::Get(::GlobalNamespace::OVRTask_1<T1> task1,
                                                                                                                          ::GlobalNamespace::OVRTask_1<T2> task2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>>, false>(nullptr, ___internal_method, task1, task2);
}
template <typename T1, typename T2> inline void GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>());
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::OVRTask_MultiTaskData_2() {}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::setStaticF___9(::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(value));
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get>();
}
template <typename T1, typename T2, typename T3> inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_0(T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get(), "<.cctor>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_1(T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get(), "<.cctor>b__5_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_2(T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>::get(), "<.cctor>b__5_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::MultiTaskData_3_OVRTask___c() {}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>();
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>();
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get>();
}
template <typename T1, typename T2, typename T3>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>, false>(nullptr, ___internal_method, task1, task2, task3);
}
template <typename T1, typename T2, typename T3> inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>* GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::OVRTask_MultiTaskData_3() {}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::setStaticF___9(::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4> inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_0(T1 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get(), "<.cctor>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_1(T2 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get(), "<.cctor>b__6_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_2(T3 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get(), "<.cctor>b__6_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_3(T4 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>::get(), "<.cctor>b__6_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::MultiTaskData_4_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                              ::GlobalNamespace::OVRTask_1<T4> task4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>, false>(nullptr, ___internal_method, task1, task2, task3, task4);
}
template <typename T1, typename T2, typename T3, typename T4> inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4> inline ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>* GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::OVRTask_MultiTaskData_4() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::setStaticF___9(::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_0(T1 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), "<.cctor>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_1(T2 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), "<.cctor>b__7_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_2(T3 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), "<.cctor>b__7_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_3(T4 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), "<.cctor>b__7_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_4(T5 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>::get(), "<.cctor>b__7_4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5> constexpr ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::MultiTaskData_5_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                  ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>* GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::OVRTask_MultiTaskData_5() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::setStaticF___9(::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline void GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_0(T1 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_1(T2 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_2(T3 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_3(T4 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_4(T5 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_4",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_5(T6 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>::get(), "<.cctor>b__8_5",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
constexpr ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::MultiTaskData_6_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                      ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5,
                                                                                                                                  task6);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>* GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::OVRTask_MultiTaskData_6() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::setStaticF___9(::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_0(
    T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_1(
    T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_2(
    T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_3(
    T4 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_4(
    T5 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_4",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_5(
    T6 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_5",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_6(
    T7 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>::get(), "<.cctor>b__9_6",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T7>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::MultiTaskData_7_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult7(
    ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult7",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>(
      std::forward<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult7() {
  return ::cordl_internals::getStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult7",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                          ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6,
                                                                          ::GlobalNamespace::OVRTask_1<T7> task7) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T7>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5,
                                                                                                                                      task6, task7);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::OVRTask_MultiTaskData_7() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF___9(::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_0(
    T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_1(
    T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_2(
    T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_3(
    T4 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_4(
    T5 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_4",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_5(
    T6 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_5",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_6(
    T7 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_6",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T7>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_7(
    T8 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "<.cctor>b__10_7",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T8>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
constexpr ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::MultiTaskData_8_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult7(
    ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult7",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult7() {
  return ::cordl_internals::getStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult7",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult8(
    ::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult8",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>(
      std::forward<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult8() {
  return ::cordl_internals::getStaticField<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult8",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                              ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6,
                                                                              ::GlobalNamespace::OVRTask_1<T7> task7, ::GlobalNamespace::OVRTask_1<T8> task8) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T7>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T8>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>, false>(
      nullptr, ___internal_method, task1, task2, task3, task4, task5, task6, task7, task8);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
constexpr ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::OVRTask_MultiTaskData_8() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_Builder (*)(bool, uint64_t)>(&::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d42e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_Builder (*)(::GlobalNamespace::OVRPlugin_Result, uint64_t)>(
    &::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d42f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_Builder (*)(::GlobalNamespace::OVRPlugin_Result, uint64_t, ::GlobalNamespace::OVRPlugin_EventType)>(&::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d42f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(uint64_t, uint64_t)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d43030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(uint64_t, ::GlobalNamespace::OVRPlugin_EventType)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d42fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(uint64_t)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d42e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::Guid)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d43090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetIdParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<uint64_t, uint64_t> (*)(::System::Guid)>(&::GlobalNamespace::OVRTask::GetIdParts)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d43094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetIdParts", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>
GlobalNamespace::OVRTask::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<TResult, ::Array<TResult>*>>, false>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>
GlobalNamespace::OVRTask::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks, ::System::Collections::Generic::List_1<TResult>* results) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>, false>(nullptr, ___internal_method, tasks, results);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromGuid(::System::Guid id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "FromGuid",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromRequest(uint64_t id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "FromRequest",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromRequest(uint64_t id, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "FromRequest",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id, eventType);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(bool success, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder, false>(nullptr, ___internal_method, success, requestId);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(::GlobalNamespace::OVRPlugin_Result result, uint64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder, false>(nullptr, ___internal_method, result, requestId);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(::GlobalNamespace::OVRPlugin_Result result, uint64_t requestId, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder, false>(nullptr, ___internal_method, result, requestId, eventType);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromResult(TResult result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "FromResult",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, result);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::GetExisting(::System::Guid id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetExisting",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask::TryGetPendingTask(::System::Guid id, ::ByRef<::GlobalNamespace::OVRTask_1<TResult>> task) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "TryGetPendingTask",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTask_1<TResult>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id, task);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::GetExisting(uint64_t id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetExisting",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask::TryGetPendingTask(uint64_t id, ::ByRef<::GlobalNamespace::OVRTask_1<TResult>> task) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "TryGetPendingTask",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTask_1<TResult>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id, task);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::SetResult(::System::Guid id, TResult result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "SetResult",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id, result);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::SetResult(uint64_t id, TResult result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "SetResult",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id, result);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::Get(::System::Guid id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Get",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::Create(::System::Guid taskId) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "Create",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>, false>(nullptr, ___internal_method, taskId);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t part1, uint64_t part2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, part1, part2);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t handle, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, handle, eventType);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, value);
}
inline uint64_t GlobalNamespace::OVRTask::GetId(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
inline ::System::ValueTuple_2<uint64_t, uint64_t> GlobalNamespace::OVRTask::GetIdParts(::System::Guid id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "GetIdParts", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint64_t, uint64_t>, false>(nullptr, ___internal_method, id);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::RegisterType() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "RegisterType",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T1, typename T2>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>>, false>(nullptr, ___internal_method, task1, task2);
}
template <typename T1, typename T2, typename T3>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                          ::GlobalNamespace::OVRTask_1<T3> task3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>, false>(nullptr, ___internal_method, task1, task2, task3);
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                              ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>, false>(nullptr, ___internal_method, task1, task2, task3, task4);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                                  ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                                                                                                  ::GlobalNamespace::OVRTask_1<T5> task5) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                                      ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                                                                                                      ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get() },
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5,
                                                                                                                                  task6);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>
GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                  ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6, ::GlobalNamespace::OVRTask_1<T7> task7) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T7>::get() },
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T7>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T7>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>, false>(nullptr, ___internal_method, task1, task2, task3, task4, task5,
                                                                                                                                      task6, task7);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>
GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                  ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6, ::GlobalNamespace::OVRTask_1<T7> task7, ::GlobalNamespace::OVRTask_1<T8> task8) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTask*>::get(), "WhenAll",
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T8>::get() },
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T1>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T5>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T6>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T7>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<T8>>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T8>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>, false>(
      nullptr, ___internal_method, task1, task2, task3, task4, task5, task6, task7, task8);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTask::OVRTask() {}

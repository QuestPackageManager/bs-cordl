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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTask_Builder::*)(::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(&::GlobalNamespace::OVRTask_Builder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5eef184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask_Builder.ToTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRTask_Builder::*)()>(
    &::GlobalNamespace::OVRTask_Builder::ToTask)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5eef410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToTask", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTask_Builder::_ctor(::GlobalNamespace::OVRPlugin_Result synchronousResult, ::System::Guid taskId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronousResult, taskId);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(*this, ___internal_method);
}
template <typename TStatus> inline ::GlobalNamespace::OVRTask_1<TStatus> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToTask", { ::i2c::class_of<TStatus>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStatus>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TStatus>>(*this, ___internal_method);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask_Builder::ToTask(TResult failureValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToTask", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(*this, ___internal_method, failureValue);
}
template <typename TStatus> inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>> GlobalNamespace::OVRTask_Builder::ToResultTask() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToResultTask", { ::i2c::class_of<TStatus>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStatus>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>>>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>> GlobalNamespace::OVRTask_Builder::ToTask() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "ToTask", { ::i2c::class_of<TValue>(), ::i2c::class_of<TStatus>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TStatus>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>>(*this, ___internal_method);
}
template <typename TResult> inline TResult GlobalNamespace::OVRTask_Builder::CastResult() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(), { "CastResult", { ::i2c::class_of<TResult>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
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
  this->___Result = value;
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
  this->___Remaining = value;
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OVRObjectPool_IPoolObject_OnGet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>(), { "OVRObjectPool.IPoolObject.OnGet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OVRObjectPool_IPoolObject_OnReturn() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>(), { "OVRObjectPool.IPoolObject.OnReturn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::AddTask(::System::Guid id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>(), { "AddTask", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::OnResult(::System::Guid taskId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>(), { "OnResult", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taskId);
}
template <typename T> inline void GlobalNamespace::OVRTask_MultiTaskData_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OVRTask_MultiTaskData_1<T>* GlobalNamespace::OVRTask_MultiTaskData_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_1<T>*>());
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
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*, "<>9", ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(
      std::forward<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(value));
}
template <typename T1, typename T2> inline ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>* GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*, "<>9", ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>();
}
template <typename T1, typename T2> inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2>
inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::__cctor_b__4_0(T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(),
                          { "<.cctor>b__4_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2>
inline void GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::__cctor_b__4_1(T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>(),
                          { "<.cctor>b__4_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2> inline ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>* GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>*>());
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::GlobalNamespace::MultiTaskData_2_OVRTask___c<T1, T2>::MultiTaskData_2_OVRTask___c() {}
template <typename T1, typename T2>
inline void
GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::setStaticF__onResult1(::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*>(value));
}
template <typename T1, typename T2>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>();
}
template <typename T1, typename T2>
inline void
GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::setStaticF__onResult2(::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*>(value));
}
template <typename T1, typename T2>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>();
}
template <typename T1, typename T2>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>> GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::Get(::GlobalNamespace::OVRTask_1<T1> task1,
                                                                                                                          ::GlobalNamespace::OVRTask_1<T2> task2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>(),
                                                           { "Get", {}, { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>>>(nullptr, ___internal_method, task1, task2);
}
template <typename T1, typename T2> inline void GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>* GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>*>());
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_2<T1, T2>::OVRTask_MultiTaskData_2() {}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::setStaticF___9(::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*, "<>9", ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(
      std::forward<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(value));
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*, "<>9", ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>();
}
template <typename T1, typename T2, typename T3> inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_0(T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(),
                          { "<.cctor>b__5_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_1(T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(),
                          { "<.cctor>b__5_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::__cctor_b__5_2(T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>(),
                          { "<.cctor>b__5_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>* GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::GlobalNamespace::MultiTaskData_3_OVRTask___c<T1, T2, T3>::MultiTaskData_3_OVRTask___c() {}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>();
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>();
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*>(value));
}
template <typename T1, typename T2, typename T3>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>();
}
template <typename T1, typename T2, typename T3>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>
GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>(),
                       { "Get", {}, { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>>(nullptr, ___internal_method, task1, task2, task3);
}
template <typename T1, typename T2, typename T3> inline void GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>* GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_3<T1, T2, T3>::OVRTask_MultiTaskData_3() {}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::setStaticF___9(::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*, "<>9", ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(
      std::forward<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*, "<>9", ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>();
}
template <typename T1, typename T2, typename T3, typename T4> inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_0(T1 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(),
                          { "<.cctor>b__6_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_1(T2 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(),
                          { "<.cctor>b__6_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_2(T3 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(),
                          { "<.cctor>b__6_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::__cctor_b__6_3(T4 result,
                                                                                         ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>(),
                          { "<.cctor>b__6_3", {}, { ::i2c::type_of<T4>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>* GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::GlobalNamespace::MultiTaskData_4_OVRTask___c<T1, T2, T3, T4>::MultiTaskData_4_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult4",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>>*, "_onResult4",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>();
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>
GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                              ::GlobalNamespace::OVRTask_1<T4> task4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(),
                                                           { "Get",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>>(nullptr, ___internal_method, task1, task2, task3, task4);
}
template <typename T1, typename T2, typename T3, typename T4> inline void GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4> inline ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>* GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_4<T1, T2, T3, T4>::OVRTask_MultiTaskData_4() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::setStaticF___9(::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*, "<>9", ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(
      std::forward<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*, "<>9", ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_0(T1 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(),
                       { "<.cctor>b__7_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_1(T2 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(),
                       { "<.cctor>b__7_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_2(T3 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(),
                       { "<.cctor>b__7_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_3(T4 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(),
                       { "<.cctor>b__7_3", {}, { ::i2c::type_of<T4>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void
GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::__cctor_b__7_4(T5 result,
                                                                                 ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>(),
                       { "<.cctor>b__7_4", {}, { ::i2c::type_of<T5>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>* GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5> constexpr ::GlobalNamespace::MultiTaskData_5_OVRTask___c<T1, T2, T3, T4, T5>::MultiTaskData_5_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult4",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult4",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult5",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>>*, "_onResult5",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>
GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                  ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(),
                                       { "Get",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5> inline void GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>* GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_5<T1, T2, T3, T4, T5>::OVRTask_MultiTaskData_5() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::setStaticF___9(::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*, "<>9", ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*, "<>9", ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline void GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_0(T1 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_1(T2 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_2(T3 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_3(T4 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_3", {}, { ::i2c::type_of<T4>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_4(T5 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_4", {}, { ::i2c::type_of<T5>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void
GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::__cctor_b__8_5(T6 result,
                                                                                     ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>(),
          { "<.cctor>b__8_5", {}, { ::i2c::type_of<T6>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>* GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
constexpr ::GlobalNamespace::MultiTaskData_6_OVRTask___c<T1, T2, T3, T4, T5, T6>::MultiTaskData_6_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult4",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult4",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult5",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult5",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult6",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>>*, "_onResult6",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>
GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                      ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(),
                          { "Get",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                              ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5, task6);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline void GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>* GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> constexpr ::GlobalNamespace::OVRTask_MultiTaskData_6<T1, T2, T3, T4, T5, T6>::OVRTask_MultiTaskData_6() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::setStaticF___9(::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*, "<>9", ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*, "<>9",
                                           ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_0(
    T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_1(
    T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_2(
    T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_3(
    T4 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_3", {}, { ::i2c::type_of<T4>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_4(
    T5 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_4", {}, { ::i2c::type_of<T5>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_5(
    T6 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_5", {}, { ::i2c::type_of<T6>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::__cctor_b__9_6(
    T7 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>(),
          { "<.cctor>b__9_6", {}, { ::i2c::type_of<T7>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::GlobalNamespace::MultiTaskData_7_OVRTask___c<T1, T2, T3, T4, T5, T6, T7>::MultiTaskData_7_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult4",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult4",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult5",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult5",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult6",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult6",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::setStaticF__onResult7(
    ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult7",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(
      std::forward<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::getStaticF__onResult7() {
  return ::cordl_internals::getStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>>*, "_onResult7",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>
GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                          ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6,
                                                                          ::GlobalNamespace::OVRTask_1<T7> task7) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(),
                                       { "Get",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T7>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5, task6,
                                                                                                                               task7);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> inline void GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>* GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
constexpr ::GlobalNamespace::OVRTask_MultiTaskData_7<T1, T2, T3, T4, T5, T6, T7>::OVRTask_MultiTaskData_7() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF___9(::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*, "<>9",
                                    ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*, "<>9",
                                           ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_0(
    T1 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_0", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_1(
    T2 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_1", {}, { ::i2c::type_of<T2>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_2(
    T3 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_2", {}, { ::i2c::type_of<T3>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_3(
    T4 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_3", {}, { ::i2c::type_of<T4>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_4(
    T5 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_4", {}, { ::i2c::type_of<T5>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_5(
    T6 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_5", {}, { ::i2c::type_of<T6>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_6(
    T7 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_6", {}, { ::i2c::type_of<T7>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::__cctor_b__10_7(
    T8 result, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
          { "<.cctor>b__10_7", {}, { ::i2c::type_of<T8>(), ::i2c::type_of<::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
constexpr ::GlobalNamespace::MultiTaskData_8_OVRTask___c<T1, T2, T3, T4, T5, T6, T7, T8>::MultiTaskData_8_OVRTask___c() {}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult1(
    ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult1",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult1() {
  return ::cordl_internals::getStaticField<::System::Action_2<T1, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult1",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult2(
    ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult2",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult2() {
  return ::cordl_internals::getStaticField<::System::Action_2<T2, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult2",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult3(
    ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult3",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult3() {
  return ::cordl_internals::getStaticField<::System::Action_2<T3, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult3",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult4(
    ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult4",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult4() {
  return ::cordl_internals::getStaticField<::System::Action_2<T4, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult4",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult5(
    ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult5",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult5() {
  return ::cordl_internals::getStaticField<::System::Action_2<T5, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult5",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult6(
    ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult6",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult6() {
  return ::cordl_internals::getStaticField<::System::Action_2<T6, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult6",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult7(
    ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult7",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult7() {
  return ::cordl_internals::getStaticField<::System::Action_2<T7, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult7",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::setStaticF__onResult8(
    ::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult8",
                                    ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(
      std::forward<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*>(value));
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::getStaticF__onResult8() {
  return ::cordl_internals::getStaticField<::System::Action_2<T8, ::System::ValueTuple_2<::System::Guid, ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>>*, "_onResult8",
                                           ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>();
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>
GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::Get(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3,
                                                                              ::GlobalNamespace::OVRTask_1<T4> task4, ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6,
                                                                              ::GlobalNamespace::OVRTask_1<T7> task7, ::GlobalNamespace::OVRTask_1<T8> task8) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(),
                                       { "Get",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T7>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T8>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>>(nullptr, ___internal_method, task1, task2,
                                                                                                                                                           task3, task4, task5, task6, task7, task8);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline void GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>* GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>*>());
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
constexpr ::GlobalNamespace::OVRTask_MultiTaskData_8<T1, T2, T3, T4, T5, T6, T7, T8>::OVRTask_MultiTaskData_8() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_Builder (*)(bool, uint64_t)>(&::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5eef0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Build", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_Builder (*)(::GlobalNamespace::OVRPlugin_Result, uint64_t)>(&::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5eef194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Build", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_Builder (*)(::GlobalNamespace::OVRPlugin_Result, uint64_t, ::GlobalNamespace::OVRPlugin_EventType)>(
    &::GlobalNamespace::OVRTask::Build)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5eef1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                            { "Build", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(uint64_t, uint64_t)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5eef2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(uint64_t, ::GlobalNamespace::OVRPlugin_EventType)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eef268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(uint64_t)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eef12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Guid)>(&::GlobalNamespace::OVRTask::GetId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eef324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask.GetIdParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint64_t, uint64_t> (*)(::System::Guid)>(&::GlobalNamespace::OVRTask::GetIdParts)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5eef328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetIdParts", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::ArrayW<TResult>> GlobalNamespace::OVRTask::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                                       { "WhenAll", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>(nullptr, ___internal_method, tasks);
}
template <typename TResult>
inline ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>
GlobalNamespace::OVRTask::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>* tasks, ::System::Collections::Generic::List_1<TResult>* results) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "WhenAll",
                                                                                         { ::i2c::class_of<TResult>() },
                                                                                         { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(),
                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<TResult>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>>(nullptr, ___internal_method, tasks, results);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromGuid(::System::Guid id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "FromGuid", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromRequest(uint64_t id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "FromRequest", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromRequest(uint64_t id, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                                              { "FromRequest", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_EventType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id, eventType);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(bool success, uint64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Build", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder>(nullptr, ___internal_method, success, requestId);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(::GlobalNamespace::OVRPlugin_Result result, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Build", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder>(nullptr, ___internal_method, result, requestId);
}
inline ::GlobalNamespace::OVRTask_Builder GlobalNamespace::OVRTask::Build(::GlobalNamespace::OVRPlugin_Result result, uint64_t requestId, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                          { "Build", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_Builder>(nullptr, ___internal_method, result, requestId, eventType);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::FromResult(TResult result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "FromResult", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, result);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::GetExisting(::System::Guid id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetExisting", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask::TryGetPendingTask(::System::Guid id, ::by_ref<::GlobalNamespace::OVRTask_1<TResult>> task) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                          { "TryGetPendingTask", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTask_1<TResult>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, task);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::GetExisting(uint64_t id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetExisting", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline bool GlobalNamespace::OVRTask::TryGetPendingTask(uint64_t id, ::by_ref<::GlobalNamespace::OVRTask_1<TResult>> task) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                                       { "TryGetPendingTask", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTask_1<TResult>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, task);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::SetResult(::System::Guid id, TResult result) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "SetResult", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, result);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::SetResult(uint64_t id, TResult result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "SetResult", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, result);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::Get(::System::Guid id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Get", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask::Create(::System::Guid taskId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "Create", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Guid>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(nullptr, ___internal_method, taskId);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t part1, uint64_t part2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, part1, part2);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t handle, ::GlobalNamespace::OVRPlugin_EventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, handle, eventType);
}
inline ::System::Guid GlobalNamespace::OVRTask::GetId(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, value);
}
inline uint64_t GlobalNamespace::OVRTask::GetId(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetId", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline ::System::ValueTuple_2<uint64_t, uint64_t> GlobalNamespace::OVRTask::GetIdParts(::System::Guid id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "GetIdParts", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint64_t, uint64_t>>(nullptr, ___internal_method, id);
}
template <typename TResult> inline void GlobalNamespace::OVRTask::RegisterType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "RegisterType", { ::i2c::class_of<TResult>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T1, typename T2>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                       { "WhenAll", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<T1, T2>>>(nullptr, ___internal_method, task1, task2);
}
template <typename T1, typename T2, typename T3>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                          ::GlobalNamespace::OVRTask_1<T3> task3) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                          { "WhenAll",
                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                            { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_3<T1, T2, T3>>>(nullptr, ___internal_method, task1, task2, task3);
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                              ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(), { "WhenAll",
                                                                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                                            { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(),
                                                                              ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_4<T1, T2, T3, T4>>>(nullptr, ___internal_method, task1, task2, task3, task4);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                                  ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                                                                                                  ::GlobalNamespace::OVRTask_1<T5> task5) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                                       { "WhenAll",
                                         { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>() },
                                         { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_5<T1, T2, T3, T4, T5>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>> GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2,
                                                                                                                      ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                                                                                                      ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                          { "WhenAll",
                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() },
                            { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                              ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                                                                                     ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_6<T1, T2, T3, T4, T5, T6>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5, task6);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>
GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                  ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6, ::GlobalNamespace::OVRTask_1<T7> task7) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                          { "WhenAll",
                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() },
                            { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                              ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>(),
                              ::i2c::type_of<::GlobalNamespace::OVRTask_1<T7>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                                                                                       ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_7<T1, T2, T3, T4, T5, T6, T7>>>(nullptr, ___internal_method, task1, task2, task3, task4, task5, task6,
                                                                                                                               task7);
}
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>
GlobalNamespace::OVRTask::WhenAll(::GlobalNamespace::OVRTask_1<T1> task1, ::GlobalNamespace::OVRTask_1<T2> task2, ::GlobalNamespace::OVRTask_1<T3> task3, ::GlobalNamespace::OVRTask_1<T4> task4,
                                  ::GlobalNamespace::OVRTask_1<T5> task5, ::GlobalNamespace::OVRTask_1<T6> task6, ::GlobalNamespace::OVRTask_1<T7> task7, ::GlobalNamespace::OVRTask_1<T8> task8) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTask*>(),
                                       { "WhenAll",
                                         { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(),
                                           ::i2c::class_of<T7>(), ::i2c::class_of<T8>() },
                                         { ::i2c::type_of<::GlobalNamespace::OVRTask_1<T1>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T2>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T3>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T4>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T5>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T6>>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRTask_1<T7>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<T8>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                                                                                       ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_8<T1, T2, T3, T4, T5, T6, T7, ::System::ValueTuple_1<T8>>>>(nullptr, ___internal_method, task1, task2,
                                                                                                                                                           task3, task4, task5, task6, task7, task8);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTask::OVRTask() {}

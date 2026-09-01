#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncSceneContextLoadersQueue.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContextLoadersQueue_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ConcurrentAsyncLoaders_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue.get_loadersQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* (
    ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::get_loadersQueue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*>(), { "get_loadersQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3309e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>*&
BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::__cordl_internal_get__loadersQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadersQueue;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* const&
BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::__cordl_internal_get__loadersQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadersQueue;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::__cordl_internal_set__loadersQueue(
    ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadersQueue = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::get_loadersQueue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*>(), { "get_loadersQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>*>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue* BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContextLoadersQueue::AsyncSceneContextLoadersQueue() {}

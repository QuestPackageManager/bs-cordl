#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\ConcurrentAsyncLoaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ConcurrentAsyncLoaders_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders.get_asyncLoaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* (
    ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::*)()>(&::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::get_asyncLoaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>(), { "get_asyncLoaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::*)()>(&::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3309e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>*&
BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::__cordl_internal_get__asyncLoaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncLoaders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* const&
BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::__cordl_internal_get__asyncLoaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncLoaders;
}
constexpr void
BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::__cordl_internal_set__asyncLoaders(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncLoaders = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>* BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::get_asyncLoaders() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>(), { "get_asyncLoaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>>*>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders* BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders::ConcurrentAsyncLoaders() {}

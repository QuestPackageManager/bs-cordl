#pragma once
// IWYU pragma private; include "System\Threading\IThreadPoolWorkItem.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: ::System::Threading::IThreadPoolWorkItem.ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::IThreadPoolWorkItem::*)()>(&::System::Threading::IThreadPoolWorkItem::ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), { ::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::IThreadPoolWorkItem.MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::IThreadPoolWorkItem::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::IThreadPoolWorkItem::MarkAborted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), { ::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Threading::IThreadPoolWorkItem::ExecuteWorkItem() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::IThreadPoolWorkItem::MarkAborted(::System::Threading::ThreadAbortException* tae) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::IThreadPoolWorkItem*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tae);
}

#pragma once
// IWYU pragma private; include "Unity\Collections\UnsafeQueueBlockPool.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPool_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.GetQueueBlockPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::UnsafeQueueBlockPoolData* (*)()>(&::Unity::Collections::UnsafeQueueBlockPool::GetQueueBlockPool)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x64c9288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { "GetQueueBlockPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.AppDomainOnDomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Collections::UnsafeQueueBlockPool::AppDomainOnDomainUnload)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64c93b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { "AppDomainOnDomainUnload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.OnDomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::EventArgs*)>(&::Unity::Collections::UnsafeQueueBlockPool::OnDomainUnload)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64c9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(),
                                                                                           { "OnDomainUnload", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::UnsafeQueueBlockPool::*)()>(&::Unity::Collections::UnsafeQueueBlockPool::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c9538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::UnsafeQueueBlockPool::setStaticF_Data(::Unity::Burst::SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "Data", ::Unity::Collections::UnsafeQueueBlockPool*>(
      std::forward<::Unity::Burst::SharedStatic_1<::System::IntPtr>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> Unity::Collections::UnsafeQueueBlockPool::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "Data", ::Unity::Collections::UnsafeQueueBlockPool*>();
}
inline ::Unity::Collections::UnsafeQueueBlockPoolData* Unity::Collections::UnsafeQueueBlockPool::GetQueueBlockPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { "GetQueueBlockPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockPoolData*>(nullptr, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPool::AppDomainOnDomainUnload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { "AppDomainOnDomainUnload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPool::OnDomainUnload(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(),
                                                                                         { "OnDomainUnload", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sender, e);
}
inline void Unity::Collections::UnsafeQueueBlockPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::UnsafeQueueBlockPool* Unity::Collections::UnsafeQueueBlockPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::UnsafeQueueBlockPool*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueBlockPool::UnsafeQueueBlockPool() {}

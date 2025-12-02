#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockPool.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPool_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.GetQueueBlockPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::UnsafeQueueBlockPoolData* (*)()>(
    &::Unity::Collections::UnsafeQueueBlockPool::GetQueueBlockPool)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x62ab080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(),
                                                                               "GetQueueBlockPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.AppDomainOnDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Collections::UnsafeQueueBlockPool::AppDomainOnDomainUnload)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62ab1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(),
                                                                               "AppDomainOnDomainUnload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool.OnDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::EventArgs*)>(&::Unity::Collections::UnsafeQueueBlockPool::OnDomainUnload)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62ab240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(), "OnDomainUnload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::UnsafeQueueBlockPool::*)()>(&::Unity::Collections::UnsafeQueueBlockPool::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62ab330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::UnsafeQueueBlockPool::setStaticF_Data(::Unity::Burst::SharedStatic_1<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "Data", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get>(
      std::forward<::Unity::Burst::SharedStatic_1<::System::IntPtr>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::System::IntPtr> Unity::Collections::UnsafeQueueBlockPool::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::System::IntPtr>, "Data",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get>();
}
inline ::Unity::Collections::UnsafeQueueBlockPoolData* Unity::Collections::UnsafeQueueBlockPool::GetQueueBlockPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(),
                                                                             "GetQueueBlockPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockPoolData*, false>(nullptr, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPool::AppDomainOnDomainUnload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(),
                                                                             "AppDomainOnDomainUnload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPool::OnDomainUnload(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(), "OnDomainUnload", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
inline void Unity::Collections::UnsafeQueueBlockPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::UnsafeQueueBlockPool* Unity::Collections::UnsafeQueueBlockPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::UnsafeQueueBlockPool*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueBlockPool::UnsafeQueueBlockPool() {}

#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.GetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::SmallBufferPool::*)(int32_t)>(
    &::GlobalNamespace::SmallBufferPool::GetBuffer)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xdd1cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), "GetBuffer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xdd1ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), "ReleaseBuffer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)()>(&::GlobalNamespace::SmallBufferPool::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdd20b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& GlobalNamespace::SmallBufferPool::__get__cacheSmall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheSmall;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& GlobalNamespace::SmallBufferPool::__get__cacheSmall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheSmall;
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheSmall)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& GlobalNamespace::SmallBufferPool::__get__cacheMedium() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMedium;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& GlobalNamespace::SmallBufferPool::__get__cacheMedium() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMedium;
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheMedium)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& GlobalNamespace::SmallBufferPool::__get__cacheLarge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLarge;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& GlobalNamespace::SmallBufferPool::__get__cacheLarge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLarge;
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheLarge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& GlobalNamespace::SmallBufferPool::__get__cacheMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMax;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& GlobalNamespace::SmallBufferPool::__get__cacheMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMax;
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheMax)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::SmallBufferPool::GetBuffer(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), "GetBuffer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, length);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), "ReleaseBuffer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmallBufferPool*>());
}
inline void GlobalNamespace::SmallBufferPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmallBufferPool::SmallBufferPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

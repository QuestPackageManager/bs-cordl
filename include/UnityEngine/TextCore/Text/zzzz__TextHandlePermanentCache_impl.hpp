#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandlePermanentCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandlePermanentCache_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.AddTextInfoToCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::AddTextInfoToCache)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6a45198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache.RemoveTextInfoFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)(::UnityEngine::TextCore::Text::TextHandle*)>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveTextInfoFromCache)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6a453cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(), "RemoveTextInfoFromCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandlePermanentCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextHandlePermanentCache::*)()>(
    &::UnityEngine::TextCore::Text::TextHandlePermanentCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a454f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>*& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_TextInfoPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* const&
UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_s_TextInfoPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_TextInfoPool;
}
constexpr void
UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_set_s_TextInfoPool(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_TextInfoPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr ::System::Object* const& UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_get_syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncRoot;
}
constexpr void UnityEngine::TextCore::Text::TextHandlePermanentCache::__cordl_internal_set_syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::AddTextInfoToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::RemoveTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(), "RemoveTextInfoFromCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textHandle);
}
inline void UnityEngine::TextCore::Text::TextHandlePermanentCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* UnityEngine::TextCore::Text::TextHandlePermanentCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandlePermanentCache::TextHandlePermanentCache() {}

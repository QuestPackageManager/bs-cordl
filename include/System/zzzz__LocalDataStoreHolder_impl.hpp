#pragma once
// IWYU pragma private; include "System/LocalDataStoreHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)(::System::LocalDataStore*)>(&::System::LocalDataStoreHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e218fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e21924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.get_Store
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStore* (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::get_Store)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e219dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), "get_Store",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::LocalDataStore*& System::LocalDataStoreHolder::__cordl_internal_get_m_Store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Store;
}
constexpr ::System::LocalDataStore* const& System::LocalDataStoreHolder::__cordl_internal_get_m_Store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Store;
}
constexpr void System::LocalDataStoreHolder::__cordl_internal_set_m_Store(::System::LocalDataStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::LocalDataStoreHolder::_ctor(::System::LocalDataStore* store) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store);
}
inline void System::LocalDataStoreHolder::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::LocalDataStore* System::LocalDataStoreHolder::get_Store() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), "get_Store",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore*, false>(this, ___internal_method);
}
inline ::System::LocalDataStoreHolder* System::LocalDataStoreHolder::New_ctor(::System::LocalDataStore* store) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::LocalDataStoreHolder*>(store));
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreHolder::LocalDataStoreHolder() {}

#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)(::System::LocalDataStore*)>(&::System::LocalDataStoreHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25d7b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25d7b44;

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
  constexpr static std::size_t addrs = 0x25d7bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), "get_Store",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::LocalDataStore*& System::LocalDataStoreHolder::__get_m_Store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Store;
}
constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStore*> const& System::LocalDataStoreHolder::__get_m_Store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Store;
}
constexpr void System::LocalDataStoreHolder::__set_m_Store(::System::LocalDataStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::LocalDataStoreHolder* System::LocalDataStoreHolder::New_ctor(::System::LocalDataStore* store) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::LocalDataStoreHolder*>(store));
}
inline void System::LocalDataStoreHolder::_ctor(::System::LocalDataStore* store) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store);
}
inline void System::LocalDataStoreHolder::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::LocalDataStore* System::LocalDataStoreHolder::get_Store() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder*>::get(), "get_Store",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreHolder::LocalDataStoreHolder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

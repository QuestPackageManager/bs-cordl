#pragma once
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__InternalStringComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::InternalStringComparer::*)(::StringW)>(
    &::System::Collections::Generic::InternalStringComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x258c090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::InternalStringComparer::*)(::StringW, ::StringW)>(
    &::System::Collections::Generic::InternalStringComparer::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x258c0b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::InternalStringComparer::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW, int32_t, int32_t)>(&::System::Collections::Generic::InternalStringComparer::IndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x258c0e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::InternalStringComparer::*)()>(
    &::System::Collections::Generic::InternalStringComparer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x258c14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline int32_t System::Collections::Generic::InternalStringComparer::GetHashCode(::StringW obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline bool System::Collections::Generic::InternalStringComparer::Equals(::StringW x, ::StringW y) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t System::Collections::Generic::InternalStringComparer::IndexOf(::ArrayW<::StringW, ::Array<::StringW>*> array, ::StringW value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, value, startIndex, count);
}
inline ::System::Collections::Generic::InternalStringComparer* System::Collections::Generic::InternalStringComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::InternalStringComparer*>());
}
inline void System::Collections::Generic::InternalStringComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::InternalStringComparer*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::InternalStringComparer::InternalStringComparer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

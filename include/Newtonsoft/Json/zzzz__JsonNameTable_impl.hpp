#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonNameTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonNameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonNameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::JsonNameTable::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonNameTable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonNameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonNameTable::*)()>(&::Newtonsoft::Json::JsonNameTable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2465c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonNameTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::JsonNameTable::Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonNameTable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, start, length);
}
inline void Newtonsoft::Json::JsonNameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonNameTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonNameTable* Newtonsoft::Json::JsonNameTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonNameTable*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonNameTable::JsonNameTable() {}

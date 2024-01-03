#pragma once
#include "System/zzzz__ConsoleKey_impl.hpp"
#include "System/zzzz__ConsoleModifiers_impl.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__ConsoleModifiers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ConsoleKey_def.hpp"
//  Writing Method size for method: ::System::ConsoleKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ConsoleKeyInfo::*)(char16_t, ::System::ConsoleKey, bool, bool, bool)>(
    &::System::ConsoleKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25cfd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.get_KeyChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::get_KeyChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cfdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "get_KeyChar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKey (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cfdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "get_Key",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ConsoleKeyInfo::*)(::System::Object*)>(&::System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25cfdd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ConsoleKeyInfo::*)(::System::ConsoleKeyInfo)>(&::System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25cfe70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleKeyInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleKeyInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ConsoleKeyInfo::*)()>(&::System::ConsoleKeyInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25cfea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), 2));
    return ___internal_method;
  }
};
inline void System::ConsoleKeyInfo::_ctor(char16_t keyChar, ::System::ConsoleKey key, bool shift, bool alt, bool control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleKey>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyChar, key, shift, alt, control);
}
inline char16_t System::ConsoleKeyInfo::get_KeyChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "get_KeyChar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::ConsoleKey System::ConsoleKeyInfo::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKey, false>(this, ___internal_method);
}
inline bool System::ConsoleKeyInfo::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool System::ConsoleKeyInfo::Equals(::System::ConsoleKeyInfo obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ConsoleKeyInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ConsoleKeyInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleKeyInfo>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_key", ty: "::System::ConsoleKey", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_mods", ty: "::System::ConsoleModifiers", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleKeyInfo::ConsoleKeyInfo(char16_t _keyChar, ::System::ConsoleKey _key, ::System::ConsoleModifiers _mods) noexcept {
  this->_keyChar = _keyChar;
  this->_key = _key;
  this->_mods = _mods;
}
// Ctor Parameters []
constexpr ::System::ConsoleKeyInfo::ConsoleKeyInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

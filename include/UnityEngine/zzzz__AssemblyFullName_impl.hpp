#pragma once
// IWYU pragma private; include "UnityEngine/AssemblyFullName.hpp"
#include "UnityEngine/zzzz__AssemblyVersion_impl.hpp"
#include "UnityEngine/zzzz__AssemblyFullName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AssemblyFullName::*)(::System::Object*)>(&::UnityEngine::AssemblyFullName::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48a97d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AssemblyFullName::*)()>(&::UnityEngine::AssemblyFullName::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48a98b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AssemblyFullName::*)()>(&::UnityEngine::AssemblyFullName::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x48a9938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 3));
    return ___internal_method;
  }
};
inline bool UnityEngine::AssemblyFullName::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::AssemblyFullName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::AssemblyFullName::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssemblyFullName>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "::UnityEngine::AssemblyVersion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "PublicKeyToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Culture", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AssemblyFullName::AssemblyFullName(::StringW Name, ::UnityEngine::AssemblyVersion Version, ::StringW PublicKeyToken, ::StringW Culture) noexcept {
  this->Name = Name;
  this->Version = Version;
  this->PublicKeyToken = PublicKeyToken;
  this->Culture = Culture;
}
// Ctor Parameters []
constexpr ::UnityEngine::AssemblyFullName::AssemblyFullName() {}

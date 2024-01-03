#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AssetObjectListSO_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssetObjectListSO.get_objects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> (::GlobalNamespace::AssetObjectListSO::*)()>(
    &::GlobalNamespace::AssetObjectListSO::get_objects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(), "get_objects",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssetObjectListSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AssetObjectListSO::*)()>(&::GlobalNamespace::AssetObjectListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>& GlobalNamespace::AssetObjectListSO::__get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> const& GlobalNamespace::AssetObjectListSO::__get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void GlobalNamespace::AssetObjectListSO::__set__objects(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> GlobalNamespace::AssetObjectListSO::get_objects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(), "get_objects",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AssetObjectListSO* GlobalNamespace::AssetObjectListSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AssetObjectListSO*>());
}
inline void GlobalNamespace::AssetObjectListSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssetObjectListSO::AssetObjectListSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

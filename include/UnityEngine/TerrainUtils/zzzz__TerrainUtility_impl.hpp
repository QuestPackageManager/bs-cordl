#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainUtility_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainUtility_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::*)()>(
    &::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1ffd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::__get_onlyAutoConnectedTerrains() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyAutoConnectedTerrains;
}
constexpr bool const& UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::__get_onlyAutoConnectedTerrains() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyAutoConnectedTerrains;
}
constexpr void UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::__set_onlyAutoConnectedTerrains(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onlyAutoConnectedTerrains = value;
}
inline ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0* UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*>());
}
inline void UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0::__TerrainUtility____c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::*)()>(
    &::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1ffd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1._CollectTerrains_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::_CollectTerrains_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d20368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*>::get(), "<CollectTerrains>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Terrain*& UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> const& UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__set_t(::UnityEngine::Terrain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*& UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0*> const&
UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__set_CS$__8__locals1(::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1* UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*>());
}
inline void UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::_CollectTerrains_b__0(::UnityEngine::Terrain* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1*>::get(), "<CollectTerrains>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::__TerrainUtility____c__DisplayClass2_1::__TerrainUtility____c__DisplayClass2_1() {}
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.ValidTerrainsExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d1fb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(),
                                                                               "ValidTerrainsExist", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.ClearConnectivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d1fbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(),
                                                                               "ClearConnectivity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.CollectTerrains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>* (*)(bool)>(
    &::UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2d1fcac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(), "CollectTerrains",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainUtils::TerrainUtility.AutoConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TerrainUtils::TerrainUtility::AutoConnect)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2d1ffe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(),
                                                                               "AutoConnect", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(),
                                                                             "ValidTerrainsExist", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(),
                                                                             "ClearConnectivity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param onlyAutoConnectedTerrains: bool (default: true)
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>* UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains(bool onlyAutoConnectedTerrains) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(), "CollectTerrains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>*, false>(nullptr, ___internal_method,
                                                                                                                                                      onlyAutoConnectedTerrains);
}
inline void UnityEngine::TerrainUtils::TerrainUtility::AutoConnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainUtils::TerrainUtility*>::get(), "AutoConnect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainUtils::TerrainUtility::TerrainUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReloadAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReloadAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReloadAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReloadAttribute_Package::ReloadAttribute_Package(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReloadAttribute_Package::ReloadAttribute_Package() {}
constexpr ::UnityEngine::Rendering::ReloadAttribute_Package UnityEngine::Rendering::ReloadAttribute_Package::Builtin{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReloadAttribute_Package UnityEngine::Rendering::ReloadAttribute_Package::Root{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReloadAttribute_Package UnityEngine::Rendering::ReloadAttribute_Package::BuiltinExtra{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::UnityEngine::Rendering::ReloadAttribute_Package)>(&::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653a588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(::StringW, ::UnityEngine::Rendering::ReloadAttribute_Package)>(
    &::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x653a58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(
    ::StringW, int32_t, int32_t, ::UnityEngine::Rendering::ReloadAttribute_Package)>(&::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x653a5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths, ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paths, package);
}
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::StringW path, ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, package);
}
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReloadAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ReloadAttribute_Package>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pathFormat, rangeMin, rangeMax, package);
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths,
                                                                                                    ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ReloadAttribute*>(paths, package));
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::StringW path, ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ReloadAttribute*>(path, package));
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax,
                                                                                                    ::UnityEngine::Rendering::ReloadAttribute_Package package) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ReloadAttribute*>(pathFormat, rangeMin, rangeMax, package));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReloadAttribute::ReloadAttribute() {}

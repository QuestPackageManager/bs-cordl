#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ExampleInstanceCustomAttribute_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute.InstancerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::*)()>(
    &::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::InstancerCallback)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x22ada0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(),
                                                                               "InstancerCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute.LogAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_OutputAttribute*)>(
    &::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogAttr)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22addb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(), "LogAttr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_OutputAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::*)()>(
    &::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22adf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HEU_ExampleInstanceCustomAttribute::InstancerCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(),
                                                                             "InstancerCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogArray(::StringW name, ::ArrayW<T, ::Array<T>*> arr, int32_t tupleSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(), "LogArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, arr, tupleSize);
}
inline void GlobalNamespace::HEU_ExampleInstanceCustomAttribute::LogAttr(::HoudiniEngineUnity::HEU_OutputAttribute* outAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(), "LogAttr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_OutputAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, outAttr);
}
inline ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute* GlobalNamespace::HEU_ExampleInstanceCustomAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>());
}
inline void GlobalNamespace::HEU_ExampleInstanceCustomAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute::HEU_ExampleInstanceCustomAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

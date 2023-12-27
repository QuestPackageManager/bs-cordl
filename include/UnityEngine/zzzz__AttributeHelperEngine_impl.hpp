#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AttributeHelperEngine_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__RequireComponent_def.hpp"
#include "UnityEngine/zzzz__DisallowMultipleComponent_def.hpp"
#include "UnityEngine/zzzz__ExecuteInEditMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(
    &::UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2ccd310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetParentTypeDisallowingMultipleInclusion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetRequiredComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (*)(::System::Type*)>(
    &::UnityEngine::AttributeHelperEngine::GetRequiredComponents)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2ccd410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetRequiredComponents",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetExecuteMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetExecuteMode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ccd84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetExecuteMode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.CheckIsEditorScript
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::CheckIsEditorScript)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2ccd960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "CheckIsEditorScript",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ccda40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetDefaultExecutionOrderFor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::AttributeHelperEngine::setStaticF__disallowMultipleComponentArray(::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*>, "_disallowMultipleComponentArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*>>(value));
}
inline ::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*> UnityEngine::AttributeHelperEngine::getStaticF__disallowMultipleComponentArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*>, "_disallowMultipleComponentArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>();
}
inline void UnityEngine::AttributeHelperEngine::setStaticF__executeInEditModeArray(::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*>, "_executeInEditModeArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*>>(value));
}
inline ::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*> UnityEngine::AttributeHelperEngine::getStaticF__executeInEditModeArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*>, "_executeInEditModeArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>();
}
inline void UnityEngine::AttributeHelperEngine::setStaticF__requireComponentArray(::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*>, "_requireComponentArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*>>(value));
}
inline ::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*> UnityEngine::AttributeHelperEngine::getStaticF__requireComponentArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*>, "_requireComponentArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get>();
}
inline ::System::Type* UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetParentTypeDisallowingMultipleInclusion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> UnityEngine::AttributeHelperEngine::GetRequiredComponents(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetRequiredComponents",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::GetExecuteMode(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetExecuteMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::CheckIsEditorScript(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "CheckIsEditorScript", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetDefaultExecutionOrderFor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, klass);
}
template <typename T> inline T UnityEngine::AttributeHelperEngine::GetCustomAttributeOfType(::System::Type* klass) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AttributeHelperEngine*>::get(), "GetCustomAttributeOfType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, klass);
}
// Ctor Parameters []
constexpr ::UnityEngine::AttributeHelperEngine::AttributeHelperEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataAccess.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutBaselineFunction_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutComputedData_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfigDataType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfigData_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureFunction_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeDataType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeData_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutStyleData_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutDataAccess::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b340e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(),
                                                                               "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    int32_t, ::UnityEngine::UIElements::Layout::LayoutDataStore, ::UnityEngine::UIElements::Layout::LayoutDataStore)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b3372c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDataStore>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDataStore>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::Layout::LayoutNodeData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetNodeData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b3750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetNodeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetStyleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::Layout::LayoutStyleData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetStyleData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b3756c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetStyleData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetComputedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::Layout::LayoutComputedData> (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetComputedData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b375d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetComputedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetConfigData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::UIElements::Layout::LayoutConfigData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetConfigData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b37634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetConfigData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetMeasureFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Layout::LayoutMeasureFunction* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetMeasureFunction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b37694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetMeasureFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.SetMeasureFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction*)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::SetMeasureFunction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b3770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "SetMeasureFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetOwner)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b3778c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetOwner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.SetOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::SetOwner)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b37804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "SetOwner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetBaselineFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Layout::LayoutBaselineFunction* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetBaselineFunction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b37884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetBaselineFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::Layout::LayoutDataAccess::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(),
                                                                             "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::_ctor(int32_t manager, ::UnityEngine::UIElements::Layout::LayoutDataStore nodes,
                                                                     ::UnityEngine::UIElements::Layout::LayoutDataStore configs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDataStore>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutDataStore>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, nodes, configs);
}
template <typename T>
inline ::ByRef<T> UnityEngine::UIElements::Layout::LayoutDataAccess::GetTypedNodeDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                         ::UnityEngine::UIElements::Layout::LayoutNodeDataType type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetTypedNodeDataRef",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNodeDataType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, handle, type);
}
template <typename T>
inline ::ByRef<T> UnityEngine::UIElements::Layout::LayoutDataAccess::GetTypedConfigDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                           ::UnityEngine::UIElements::Layout::LayoutConfigDataType type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetTypedConfigDataRef",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutConfigDataType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, handle, type);
}
inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutNodeData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetNodeData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetNodeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::Layout::LayoutNodeData>, false>(this, ___internal_method, handle);
}
inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutStyleData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetStyleData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetStyleData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::Layout::LayoutStyleData>, false>(this, ___internal_method, handle);
}
inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutComputedData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetComputedData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetComputedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::Layout::LayoutComputedData>, false>(this, ___internal_method, handle);
}
inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutConfigData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetConfigData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetConfigData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::UIElements::Layout::LayoutConfigData>, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* UnityEngine::UIElements::Layout::LayoutDataAccess::GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetMeasureFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*, false>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                  ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "SetMeasureFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Layout::LayoutDataAccess::GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetOwner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "SetOwner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* UnityEngine::UIElements::Layout::LayoutDataAccess::GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDataAccess>::get(), "GetBaselineFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*, false>(this, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "m_Manager", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Nodes", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Configs", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataAccess::LayoutDataAccess(int32_t m_Manager, ::UnityEngine::UIElements::Layout::LayoutDataStore m_Nodes,
                                                                                ::UnityEngine::UIElements::Layout::LayoutDataStore m_Configs) noexcept {
  this->m_Manager = m_Manager;
  this->m_Nodes = m_Nodes;
  this->m_Configs = m_Configs;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataAccess::LayoutDataAccess() {}

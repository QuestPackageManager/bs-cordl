#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\LayoutDataAccess.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6cff9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    int32_t, ::UnityEngine::UIElements::Layout::LayoutDataStore, ::UnityEngine::UIElements::Layout::LayoutDataStore)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cfefec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetNodeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::Layout::LayoutNodeData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetNodeData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d02dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetNodeData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetStyleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::Layout::LayoutStyleData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetStyleData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d02e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetStyleData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetComputedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::Layout::LayoutComputedData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetComputedData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d02e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetComputedData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetConfigData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::Layout::LayoutConfigData> (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetConfigData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d02ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetConfigData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetMeasureFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutMeasureFunction* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetMeasureFunction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d02f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.SetMeasureFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction*)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::SetMeasureFunction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d02fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
            { "SetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetOwner)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d0304c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.SetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(
    ::UnityEngine::UIElements::Layout::LayoutHandle, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::SetOwner)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d030c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                         { "SetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataAccess.GetBaselineFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutBaselineFunction* (
    ::UnityEngine::UIElements::Layout::LayoutDataAccess::*)(::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutDataAccess::GetBaselineFunction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d03144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                           { "GetBaselineFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::Layout::LayoutDataAccess::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::_ctor(int32_t manager, ::UnityEngine::UIElements::Layout::LayoutDataStore nodes,
                                                                     ::UnityEngine::UIElements::Layout::LayoutDataStore configs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, manager, nodes, configs);
}
template <typename T>
inline ::by_ref<T> UnityEngine::UIElements::Layout::LayoutDataAccess::GetTypedNodeDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                          ::UnityEngine::UIElements::Layout::LayoutNodeDataType type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                              { "GetTypedNodeDataRef",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNodeDataType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, handle, type);
}
template <typename T>
inline ::by_ref<T> UnityEngine::UIElements::Layout::LayoutDataAccess::GetTypedConfigDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                            ::UnityEngine::UIElements::Layout::LayoutConfigDataType type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                              { "GetTypedConfigDataRef",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutConfigDataType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, handle, type);
}
inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutNodeData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetNodeData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetNodeData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::Layout::LayoutNodeData>>(*this, ___internal_method, handle);
}
inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutStyleData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetStyleData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetStyleData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::Layout::LayoutStyleData>>(*this, ___internal_method, handle);
}
inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutComputedData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetComputedData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetComputedData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::Layout::LayoutComputedData>>(*this, ___internal_method, handle);
}
inline ::by_ref<::UnityEngine::UIElements::Layout::LayoutConfigData> UnityEngine::UIElements::Layout::LayoutDataAccess::GetConfigData(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetConfigData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::Layout::LayoutConfigData>>(*this, ___internal_method, handle);
}
inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* UnityEngine::UIElements::Layout::LayoutDataAccess::GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>(*this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle,
                                                                                  ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
          { "SetMeasureFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Layout::LayoutDataAccess::GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(*this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataAccess::SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                              { "SetOwner", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, value);
}
inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* UnityEngine::UIElements::Layout::LayoutDataAccess::GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(),
                                                                                         { "GetBaselineFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>(*this, ___internal_method, handle);
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

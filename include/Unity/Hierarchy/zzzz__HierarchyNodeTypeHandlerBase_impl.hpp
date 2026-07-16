#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyCommandList_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b343a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* handler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::HierarchyNodeTypeHandlerBase_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Ptr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b343bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(), { "set_Ptr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Hierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Hierarchy::Hierarchy*)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b34430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                                                                                           { "set_Hierarchy", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_CommandList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Hierarchy::HierarchyCommandList*)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b344b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                                                                                           { "set_CommandList", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::*)(
    ::System::IntPtr, ::Unity::Hierarchy::Hierarchy*, ::Unity::Hierarchy::HierarchyCommandList*)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b33668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b34538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Ptr(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "m_Ptr", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Ptr() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "m_Ptr", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(
      std::forward<::Unity::Hierarchy::Hierarchy*>(value));
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Hierarchy() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(
      std::forward<::Unity::Hierarchy::HierarchyCommandList*>(value));
}
inline ::Unity::Hierarchy::HierarchyCommandList* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_CommandList() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(), { "set_Ptr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                                                                                         { "set_Hierarchy", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                                                                                         { "set_CommandList", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy,
                                                                                   ::Unity::Hierarchy::HierarchyCommandList* cmdList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyCommandList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativePtr, hierarchy, cmdList);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::HierarchyNodeTypeHandlerBase_ConstructorScope() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b32dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(bool)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b32dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetNodeTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b32dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetDefaultNodeFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(
    ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b32f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b3305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b33144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b3322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::FromIntPtr)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b332fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Internal_SearchBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Internal_SearchBegin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b333a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                                                           { "Internal_SearchBegin", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.CreateNodeTypeHandlerFromType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*, ::System::IntPtr, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::CreateNodeTypeHandlerFromType)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6b333ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                         { "CreateNodeTypeHandlerFromType",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.TryGetStaticNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<int32_t>)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::TryGetStaticNodeType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6b337b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                             { "TryGetStaticNodeType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeInitialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b33938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeInitialize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeDispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6b33a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeDispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeGetNodeTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetNodeTypeName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b33b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeGetNodeTypeName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeGetDefaultNodeFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (*)(
    ::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetDefaultNodeFlags)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b33c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                            { "InvokeGetDefaultNodeFlags",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeChangesPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeChangesPending)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b33d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeChangesPending", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeIntegrateChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeIntegrateChanges)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b33df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                             { "InvokeIntegrateChanges", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeSearchMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchMatch)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b33f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                             { "InvokeSearchMatch", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeSearchEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchEnd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b34054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeSearchEnd", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.ChangesPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b34134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.IntegrateChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchyCommandList*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b34204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetNodeTypeName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b32f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                { "GetNodeTypeName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetDefaultNodeFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (*)(
    ::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b33008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                            { "GetDefaultNodeFlags_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchBegin_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b33100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                { "SearchBegin_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchMatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b331e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                             { "SearchMatch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchEnd_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b332c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "SearchEnd_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.ChangesPending_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b341c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "ChangesPending_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.IntegrateChanges_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b342b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                             { "IntegrateChanges_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Hierarchy::Hierarchy*& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Hierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr ::Unity::Hierarchy::Hierarchy* const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Hierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hierarchy = value;
}
constexpr ::Unity::Hierarchy::HierarchyCommandList*& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_CommandList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandList;
}
constexpr ::Unity::Hierarchy::HierarchyCommandList* const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_CommandList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandList;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommandList = value;
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::setStaticF_s_NodeTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "s_NodeTypes", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* Unity::Hierarchy::HierarchyNodeTypeHandlerBase::getStaticF_s_NodeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "s_NodeTypes", ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::StringW Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags(::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                  ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags>(this, ___internal_method, node, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* Unity::Hierarchy::HierarchyNodeTypeHandlerBase::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(nullptr, ___internal_method, handlePtr);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Internal_SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                                                         { "Internal_SearchBegin", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase::CreateNodeTypeHandlerFromType(::System::IntPtr nativePtr, ::System::Type* handlerType, ::System::IntPtr hierarchyPtr,
                                                                                                      ::System::IntPtr cmdListPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
          { "CreateNodeTypeHandlerFromType", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nativePtr, handlerType, hierarchyPtr, cmdListPtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::TryGetStaticNodeType(::System::Type* handlerType, ::by_ref<int32_t> nodeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                                                         { "TryGetStaticNodeType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handlerType, nodeType);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeInitialize(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeInitialize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeDispose(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeDispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr);
}
inline ::StringW Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetNodeTypeName(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeGetNodeTypeName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, handlePtr);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetDefaultNodeFlags(::System::IntPtr handlePtr, ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                        ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                          { "InvokeGetDefaultNodeFlags",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags>(nullptr, ___internal_method, handlePtr, node, defaultFlags);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeChangesPending(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeChangesPending", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeIntegrateChanges(::System::IntPtr handlePtr, ::System::IntPtr cmdListPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                           { "InvokeIntegrateChanges", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handlePtr, cmdListPtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchMatch(::System::IntPtr handlePtr, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                           { "InvokeSearchMatch", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handlePtr, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchEnd(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "InvokeSearchEnd", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges(::Unity::Hierarchy::HierarchyCommandList* cmdList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmdList);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                              { "GetNodeTypeName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags_Injected(::System::IntPtr _unity_self,
                                                                                                                           ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                           ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                          { "GetDefaultNodeFlags_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags>(nullptr, ___internal_method, _unity_self, node, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin_Injected(::System::IntPtr _unity_self, ::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                              { "SearchBegin_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, query);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                           { "SearchMatch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "SearchEnd_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(), { "ChangesPending_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges_Injected(::System::IntPtr _unity_self, ::System::IntPtr cmdList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(),
                                                           { "IntegrateChanges_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, cmdList);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::HierarchyNodeTypeHandlerBase() {}

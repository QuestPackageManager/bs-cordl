#pragma once
// IWYU pragma private; include "Unity/Hierarchy/Hierarchy.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyUnmanaged_1_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::Hierarchy*)>(&::Unity::Hierarchy::Hierarchy_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b35fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::Hierarchy_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hierarchy);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::Hierarchy_BindingsMarshaller::Hierarchy_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b35010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.get_Root
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::get_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b35020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_Root", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.get_UpdateNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::get_UpdateNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b35028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_UpdateNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::get_Version)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b350b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b350c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b3518c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b3519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { ::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b35238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)(bool)>(&::Unity::Hierarchy::Hierarchy::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b351e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.EnumerateNodeTypeHandlersBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable (::Unity::Hierarchy::Hierarchy::*)()>(
    &::Unity::Hierarchy::Hierarchy::EnumerateNodeTypeHandlersBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b352dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateNodeTypeHandlersBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::Hierarchy::Exists)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b352e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Exists", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNode (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b3537c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Add", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::SetParent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b353f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                         { "SetParent", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNode (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::GetParent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b354ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetParent", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::GetChildren)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b35570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.EnumerateChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeChildren (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::EnumerateChildren)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b3571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetChildrenCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::Hierarchy::GetChildrenCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b357a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildrenCount", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetSortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, int32_t)>(&::Unity::Hierarchy::Hierarchy::SetSortIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b35844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "SetSortIndex", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SortChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, bool)>(&::Unity::Hierarchy::Hierarchy::SortChildren)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b35900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "SortChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b359bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::Hierarchy* (*)(::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::FromIntPtr)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b35a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>)>(&::Unity::Hierarchy::Hierarchy::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b35138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b352a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetNodeTypeHandlersBaseCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::Hierarchy::*)()>(&::Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b34880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetNodeTypeHandlersBaseSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::Hierarchy::*)(::System::Span_1<::System::IntPtr>)>(&::Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseSpan)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b348d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseSpan", {}, { ::i2c::type_of<::System::Span_1<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.AddNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNode (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::AddNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b35380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "AddNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.EnumerateChildrenPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::EnumerateChildrenPtr)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b35750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateChildrenPtr", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetOrCreateProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyPropertyId (::Unity::Hierarchy::Hierarchy::*)(
    ::StringW, ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>)>(&::Unity::Hierarchy::Hierarchy::GetOrCreateProperty)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b35be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                { "GetOrCreateProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetPropertyRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyPropertyId>, ::by_ref<::Unity::Hierarchy::HierarchyNode>, void*,
                                                                                               int32_t)>(&::Unity::Hierarchy::Hierarchy::SetPropertyRaw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b35db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                             { "SetPropertyRaw",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                 ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetPropertyRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Unity::Hierarchy::Hierarchy::*)(::by_ref<::Unity::Hierarchy::HierarchyPropertyId>, ::by_ref<::Unity::Hierarchy::HierarchyNode>,
                                                                                                ::by_ref<int32_t>)>(&::Unity::Hierarchy::Hierarchy::GetPropertyRaw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b35ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetPropertyRaw",
                                                                                 {},
                                                                                 { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                                                   ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.CreateHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::CreateHierarchy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b35f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                { "CreateHierarchy", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.get_UpdateNeeded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::get_UpdateNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b35078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Exists_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::Hierarchy::Exists_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b35338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                             { "Exists_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetParent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::SetParent_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b35458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "SetParent_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetParent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::GetParent_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b3551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "GetParent_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetChildren_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::Unity::Hierarchy::Hierarchy::GetChildren_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b356c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildren_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetChildrenCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::Hierarchy::GetChildrenCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b35800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                { "GetChildrenCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetSortIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, int32_t)>(&::Unity::Hierarchy::Hierarchy::SetSortIndex_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b358ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "SetSortIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SortChildren_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, bool)>(&::Unity::Hierarchy::Hierarchy::SortChildren_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b35968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "SortChildren_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.Update_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::Update_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b35a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetNodeTypeHandlersBaseCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b35ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetNodeTypeHandlersBaseSpan_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseSpan_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b35b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "GetNodeTypeHandlersBaseSpan_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.AddNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::AddNode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b35b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                            { "AddNode_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.EnumerateChildrenPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::Hierarchy::EnumerateChildrenPtr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b35ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                { "EnumerateChildrenPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetOrCreateProperty_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>,
                                                                ::by_ref<::Unity::Hierarchy::HierarchyPropertyId>)>(&::Unity::Hierarchy::Hierarchy::GetOrCreateProperty_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b35d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                         { "GetOrCreateProperty_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.SetPropertyRaw_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId>, ::by_ref<::Unity::Hierarchy::HierarchyNode>, void*, int32_t)>(
    &::Unity::Hierarchy::Hierarchy::SetPropertyRaw_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b35e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                             { "SetPropertyRaw_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::Hierarchy.GetPropertyRaw_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId>, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::by_ref<int32_t>)>(
    &::Unity::Hierarchy::Hierarchy::GetPropertyRaw_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b35f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetPropertyRaw_Injected",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                                                   ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::Hierarchy::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::System::IntPtr& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_RootPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootPtr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_RootPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootPtr;
}
constexpr void Unity::Hierarchy::Hierarchy::__cordl_internal_set_m_RootPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootPtr = value;
}
constexpr ::System::IntPtr& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_VersionPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionPtr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_VersionPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionPtr;
}
constexpr void Unity::Hierarchy::Hierarchy::__cordl_internal_set_m_VersionPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VersionPtr = value;
}
constexpr bool& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_IsOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr bool const& Unity::Hierarchy::Hierarchy::__cordl_internal_get_m_IsOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr void Unity::Hierarchy::Hierarchy::__cordl_internal_set_m_IsOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOwner = value;
}
inline bool Unity::Hierarchy::Hierarchy::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::Hierarchy::get_Root() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_Root", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(this, ___internal_method);
}
inline bool Unity::Hierarchy::Hierarchy::get_UpdateNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_UpdateNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::Hierarchy::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Hierarchy::Hierarchy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::Hierarchy::_ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePtr, rootPtr, versionPtr);
}
inline void Unity::Hierarchy::Hierarchy::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::Hierarchy::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::Hierarchy::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable Unity::Hierarchy::Hierarchy::EnumerateNodeTypeHandlersBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateNodeTypeHandlersBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(this, ___internal_method);
}
inline bool Unity::Hierarchy::Hierarchy::Exists(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Exists", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Unity::Hierarchy::HierarchyNode Unity::Hierarchy::Hierarchy::Add(::by_ref<::Unity::Hierarchy::HierarchyNode> parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Add", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode>(this, ___internal_method, parent);
}
inline bool Unity::Hierarchy::Hierarchy::SetParent(::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                              { "SetParent", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, parent);
}
inline ::Unity::Hierarchy::HierarchyNode Unity::Hierarchy::Hierarchy::GetParent(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetParent", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode>(this, ___internal_method, node);
}
inline ::ArrayW<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::Hierarchy::GetChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Hierarchy::HierarchyNode>>(this, ___internal_method, node);
}
inline ::Unity::Hierarchy::HierarchyNodeChildren Unity::Hierarchy::Hierarchy::EnumerateChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeChildren>(this, ___internal_method, node);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetChildrenCount(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildrenCount", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::Hierarchy::SetSortIndex(::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "SetSortIndex", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, sortIndex);
}
inline void Unity::Hierarchy::Hierarchy::SortChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "SortChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, recurse);
}
template <typename T>
inline ::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> Unity::Hierarchy::Hierarchy::GetOrCreatePropertyUnmanaged(::StringW name, ::Unity::Hierarchy::HierarchyPropertyStorageType type) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                          { "GetOrCreatePropertyUnmanaged", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyPropertyStorageType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>(this, ___internal_method, name, type);
}
inline void Unity::Hierarchy::Hierarchy::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::Hierarchy::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::Hierarchy*>(nullptr, ___internal_method, handlePtr);
}
inline ::System::IntPtr Unity::Hierarchy::Hierarchy::Create(::System::IntPtr handlePtr, ::by_ref<::System::IntPtr> rootPtr, ::by_ref<::System::IntPtr> versionPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handlePtr, rootPtr, versionPtr);
}
inline void Unity::Hierarchy::Hierarchy::Destroy(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativePtr);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseSpan(::System::Span_1<::System::IntPtr> outHandlers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseSpan", {}, { ::i2c::type_of<::System::Span_1<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outHandlers);
}
inline ::Unity::Hierarchy::HierarchyNode Unity::Hierarchy::Hierarchy::AddNode(::by_ref<::Unity::Hierarchy::HierarchyNode> parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "AddNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode>(this, ___internal_method, parent);
}
inline ::System::IntPtr Unity::Hierarchy::Hierarchy::EnumerateChildrenPtr(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "EnumerateChildrenPtr", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, node);
}
inline ::Unity::Hierarchy::HierarchyPropertyId Unity::Hierarchy::Hierarchy::GetOrCreateProperty(::StringW name, ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                              { "GetOrCreateProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyPropertyId>(this, ___internal_method, name, descriptor);
}
inline void Unity::Hierarchy::Hierarchy::SetPropertyRaw(::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                           { "SetPropertyRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                               ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, node, ptr, size);
}
inline void* Unity::Hierarchy::Hierarchy::GetPropertyRaw(::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<int32_t> size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetPropertyRaw",
                                                                                            {},
                                                                                            { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                                                              ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, property, node, size);
}
inline ::System::IntPtr Unity::Hierarchy::Hierarchy::CreateHierarchy(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                           { "CreateHierarchy", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nativePtr, rootPtr, versionPtr);
}
inline bool Unity::Hierarchy::Hierarchy::get_UpdateNeeded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool Unity::Hierarchy::Hierarchy::Exists_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                           { "Exists_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node);
}
inline bool Unity::Hierarchy::Hierarchy::SetParent_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "SetParent_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node, parent);
}
inline void Unity::Hierarchy::Hierarchy::GetParent_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetParent_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, ret);
}
inline void Unity::Hierarchy::Hierarchy::GetChildren_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                              ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetChildren_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                                                     ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, ret);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetChildrenCount_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                              { "GetChildrenCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::Hierarchy::SetSortIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                          { "SetSortIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, sortIndex);
}
inline void Unity::Hierarchy::Hierarchy::SortChildren_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                          { "SortChildren_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, recurse);
}
inline void Unity::Hierarchy::Hierarchy::Update_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetNodeTypeHandlersBaseCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t Unity::Hierarchy::Hierarchy::GetNodeTypeHandlersBaseSpan_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> outHandlers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                          { "GetNodeTypeHandlersBaseSpan_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, outHandlers);
}
inline void Unity::Hierarchy::Hierarchy::AddNode_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> parent, ::by_ref<::Unity::Hierarchy::HierarchyNode> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "AddNode_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, parent, ret);
}
inline ::System::IntPtr Unity::Hierarchy::Hierarchy::EnumerateChildrenPtr_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                              { "EnumerateChildrenPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::Hierarchy::GetOrCreateProperty_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                      ::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor> descriptor, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                       { "GetOrCreateProperty_Injected",
                                         {},
                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyDescriptor>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, descriptor, ret);
}
inline void Unity::Hierarchy::Hierarchy::SetPropertyRaw_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property,
                                                                 ::by_ref<::Unity::Hierarchy::HierarchyNode> node, void* ptr, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(),
                                                           { "SetPropertyRaw_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, property, node, ptr, size);
}
inline void* Unity::Hierarchy::Hierarchy::GetPropertyRaw_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyPropertyId> property,
                                                                  ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::by_ref<int32_t> size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::Hierarchy*>(), { "GetPropertyRaw_Injected",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyPropertyId>>(),
                                                                                              ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, _unity_self, property, node, size);
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::Hierarchy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::Hierarchy*>());
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::Hierarchy::New_ctor(::System::IntPtr nativePtr, ::System::IntPtr rootPtr, ::System::IntPtr versionPtr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::Hierarchy*>(nativePtr, rootPtr, versionPtr));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::Hierarchy::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::Hierarchy::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::Hierarchy::Hierarchy() {}

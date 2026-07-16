#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattened.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyFlattened*)>(&::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b36a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hierarchyFlattened);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattened_BindingsMarshaller::HierarchyFlattened_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened_Enumerator::*)(::Unity::Hierarchy::HierarchyFlattened*)>(
    &::Unity::Hierarchy::HierarchyFlattened_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b36768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> (::Unity::Hierarchy::HierarchyFlattened_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattened_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b36a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattened_Enumerator::*)()>(&::Unity::Hierarchy::HierarchyFlattened_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b36ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattened_Enumerator::_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyFlattened);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> Unity::Hierarchy::HierarchyFlattened_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattened_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NodesPtr", ty:
// "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyFlattened_Enumerator::HierarchyFlattened_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                                                           ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr, int32_t m_NodesCount, int32_t m_Version,
                                                                                           int32_t m_Index) noexcept {
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_NodesPtr = m_NodesPtr;
  this->m_NodesCount = m_NodesCount;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattened_Enumerator::HierarchyFlattened_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b36234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b36244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_UpdateNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::get_UpdateNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b3624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_UpdateNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_Hierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::Hierarchy* (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::get_Hierarchy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b362d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Hierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_NodesPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyFlattenedNode* (::Unity::Hierarchy::HierarchyFlattened::*)()>(
    &::Unity::Hierarchy::HierarchyFlattened::get_NodesPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b34e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_NodesPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b362e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)(::Unity::Hierarchy::Hierarchy*)>(&::Unity::Hierarchy::HierarchyFlattened::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b362e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)(::System::IntPtr, ::Unity::Hierarchy::Hierarchy*, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyFlattened::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b36404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b36418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b364b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)(bool)>(&::Unity::Hierarchy::HierarchyFlattened::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b36460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> (::Unity::Hierarchy::HierarchyFlattened::*)(int32_t)>(
    &::Unity::Hierarchy::HierarchyFlattened::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b36558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattened::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyFlattened::IndexOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b32a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattened::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyFlattened::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b32638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Contains", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.EnumerateChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyFlattenedNodeChildren (::Unity::Hierarchy::HierarchyFlattened::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyFlattened::EnumerateChildren)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b36650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "EnumerateChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.GetChildrenCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattened::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyFlattened::GetChildrenCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b32690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "GetChildrenCount", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattened::*)()>(&::Unity::Hierarchy::HierarchyFlattened::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b366ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyFlattened_Enumerator (::Unity::Hierarchy::HierarchyFlattened::*)()>(
    &::Unity::Hierarchy::HierarchyFlattened::GetEnumerator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b36738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyFlattened* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyFlattened::FromIntPtr)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b36794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Unity::Hierarchy::Hierarchy*, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Hierarchy::HierarchyFlattened::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b3638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyFlattened::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.CreateHierarchyFlattened
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyFlattened::CreateHierarchyFlattened)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b36888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                            { "CreateHierarchyFlattened",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.UpdateHierarchyFlattened
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t)>(&::Unity::Hierarchy::HierarchyFlattened::UpdateHierarchyFlattened)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b3697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                            { "UpdateHierarchyFlattened", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.get_UpdateNeeded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyFlattened::get_UpdateNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3629c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.IndexOf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyFlattened::IndexOf_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b365c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                             { "IndexOf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Contains_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyFlattened::Contains_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b3660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                             { "Contains_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.GetChildrenCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyFlattened::GetChildrenCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b36668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                { "GetChildrenCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Update_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyFlattened::Update_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b366fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattened.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Hierarchy::HierarchyFlattened::Create_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b3681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                             { "Create_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Hierarchy::Hierarchy*& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Hierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr ::Unity::Hierarchy::Hierarchy* const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Hierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hierarchy = value;
}
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_NodesPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesPtr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_NodesPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesPtr;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_NodesPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesPtr = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_NodesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCount;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_NodesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCount;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_NodesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesCount = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_IsOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr bool const& Unity::Hierarchy::HierarchyFlattened::__cordl_internal_get_m_IsOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr void Unity::Hierarchy::HierarchyFlattened::__cordl_internal_set_m_IsOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOwner = value;
}
inline bool Unity::Hierarchy::HierarchyFlattened::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattened::get_UpdateNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_UpdateNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::HierarchyFlattened::get_Hierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Hierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::Hierarchy*>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyFlattenedNode* Unity::Hierarchy::HierarchyFlattened::get_NodesPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_NodesPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattenedNode*>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattened::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hierarchy);
}
inline void Unity::Hierarchy::HierarchyFlattened::_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { ".ctor",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(),
                                                                                                       ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePtr, hierarchy, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyFlattened::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattened::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattened::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> Unity::Hierarchy::HierarchyFlattened::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(this, ___internal_method, index);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::IndexOf(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
inline bool Unity::Hierarchy::HierarchyFlattened::Contains(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Contains", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Unity::Hierarchy::HierarchyFlattenedNodeChildren Unity::Hierarchy::HierarchyFlattened::EnumerateChildren(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "EnumerateChildren", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>(this, ___internal_method, node);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::GetChildrenCount(::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "GetChildrenCount", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::HierarchyFlattened::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyFlattened_Enumerator Unity::Hierarchy::HierarchyFlattened::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattened_Enumerator>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyFlattened* Unity::Hierarchy::HierarchyFlattened::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattened*>(nullptr, ___internal_method, handlePtr);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyFlattened::Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::by_ref<::System::IntPtr> nodesPtr,
                                                                     ::by_ref<int32_t> nodesCount, ::by_ref<int32_t> version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handlePtr, hierarchy, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyFlattened::Destroy(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativePtr);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyFlattened::CreateHierarchyFlattened(::System::IntPtr nativePtr, ::System::IntPtr hierarchyPtr, ::System::IntPtr nodesPtr, int32_t nodesCount,
                                                                                       int32_t version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                          { "CreateHierarchyFlattened",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nativePtr, hierarchyPtr, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyFlattened::UpdateHierarchyFlattened(::System::IntPtr handlePtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                          { "UpdateHierarchyFlattened", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr, nodesPtr, nodesCount, version);
}
inline bool Unity::Hierarchy::HierarchyFlattened::get_UpdateNeeded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::IndexOf_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                           { "IndexOf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, node);
}
inline bool Unity::Hierarchy::HierarchyFlattened::Contains_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                           { "Contains_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node);
}
inline int32_t Unity::Hierarchy::HierarchyFlattened::GetChildrenCount_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                              { "GetChildrenCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::HierarchyFlattened::Update_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyFlattened::Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchy, ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount,
                                                                              ::by_ref<int32_t> version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                           { "Create_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handlePtr, hierarchy, nodesPtr, nodesCount, version);
}
inline ::Unity::Hierarchy::HierarchyFlattened* Unity::Hierarchy::HierarchyFlattened::New_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyFlattened*>(hierarchy));
}
inline ::Unity::Hierarchy::HierarchyFlattened* Unity::Hierarchy::HierarchyFlattened::New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodesPtr,
                                                                                              int32_t nodesCount, int32_t version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyFlattened*>(nativePtr, hierarchy, nodesPtr, nodesCount, version));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyFlattened::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyFlattened::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattened::HierarchyFlattened() {}

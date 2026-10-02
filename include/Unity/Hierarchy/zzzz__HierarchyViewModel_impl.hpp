#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyTraversalDirection_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModelNodesEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchySearchQueryParser_def.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller.ConvertToUnmanaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyViewModel*)>(&::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::ConvertToUnmanaged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9ae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*>(),
                                                                                           { "ConvertToUnmanaged", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::ConvertToUnmanaged(::Unity::Hierarchy::HierarchyViewModel* viewModel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*>(),
                                                                                         { "ConvertToUnmanaged", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, viewModel);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::HierarchyViewModel_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f9aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::*)(::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f9af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(),
                                                                                          { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::Invoke(::Unity::Hierarchy::HierarchyNodeFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler::HierarchyViewModel_FlagsChangedEventHandler() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)(::Unity::Hierarchy::HierarchyViewModel*)>(
    &::Unity::Hierarchy::HierarchyViewModel_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f9a644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6f9af30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)()>(&::Unity::Hierarchy::HierarchyViewModel_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x6f9b038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModel_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewModel* hierarchyViewModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyViewModel);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewModel_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewModel_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Nodes", ty:
// "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_ViewModel,
                                                                                           ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> m_Nodes, int32_t m_Version,
                                                                                           int32_t m_Index) noexcept {
  this->m_ViewModel = m_ViewModel;
  this->m_Nodes = m_Nodes;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f99aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_Count)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f99afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_UpdateNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f99b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_UpdateNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_FlattenedNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::get_FlattenedNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f99bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_FlattenedNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f99bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.set_QueryParser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::IHierarchySearchQueryParser*)>(
    &::Unity::Hierarchy::HierarchyViewModel::set_QueryParser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f99be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                                                           { "set_QueryParser", {}, { ::i2c::type_of<::Unity::Hierarchy::IHierarchySearchQueryParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Query
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchySearchQueryDescriptor* (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::get_Query)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f99be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Query", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::HierarchyFlattened*, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6f99c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::System::IntPtr, ::Unity::Hierarchy::HierarchyFlattened*, ::System::IntPtr, int32_t,
                                                                                                        ::System::IntPtr, int32_t, int32_t)>(&::Unity::Hierarchy::HierarchyViewModel::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6f99e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6f99f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f99fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(bool)>(&::Unity::Hierarchy::HierarchyViewModel::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f99f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewModel::*)(int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6f9a084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::IndexOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Contains", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::SetFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SetFlags", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::SetFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { "SetFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyTraversalDirection)>(
        &::Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "SetFlagsRecursive",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::HasAllFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { "HasAllFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::ClearFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { "ClearFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyTraversalDirection)>(
        &::Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f9a47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "ClearFlagsRecursive",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.EnumerateNodesWithAllFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::EnumerateNodesWithAllFlags)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6f9a4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                                                           { "EnumerateNodesWithAllFlags", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f9a58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyViewModel_Enumerator (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::GetEnumerator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6f9a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyViewModel* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::FromIntPtr)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f9a66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchyFlattened*, ::Unity::Hierarchy::HierarchyNodeFlags,
                                                                            ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Hierarchy::HierarchyViewModel::Create)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f99dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { "Create",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                    ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9a048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::SetFlagsAll)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f9a26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SetFlagsAll", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::SetFlagsNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f9a2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                { "SetFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsRecursiveNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyTraversalDirection)>(
        &::Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursiveNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f9a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "SetFlagsRecursiveNode",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlagsNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f9a3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                         { "HasAllFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f9a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                         { "ClearFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsRecursiveNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyTraversalDirection)>(
        &::Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursiveNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f9a480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "ClearFlagsRecursiveNode",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.CreateHierarchyViewModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::CreateHierarchyViewModel)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6f9a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "CreateHierarchyViewModel",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.UpdateHierarchyViewModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::UpdateHierarchyViewModel)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6f9aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                                                           { "UpdateHierarchyViewModel",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.InvokeFlagsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::InvokeFlagsChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6f9ab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "InvokeFlagsChanged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SearchBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::SearchBegin)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6f9ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SearchBegin", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_UpdateNeeded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f99b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Query_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchySearchQueryDescriptor* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::get_Query_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f99c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Query_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.IndexOf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyViewModel::IndexOf_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9a188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "IndexOf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Contains_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyViewModel::Contains_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "Contains_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Update_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::Update_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f9a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::Unity::Hierarchy::HierarchyNodeFlags, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>,
                                                                            ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Hierarchy::HierarchyViewModel::Create_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f9a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "Create_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::SetFlagsAll_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f9a780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "SetFlagsAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::SetFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f9a7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                            { "SetFlagsNode_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsRecursiveNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags,
                                                                ::Unity::Hierarchy::HierarchyTraversalDirection)>(&::Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursiveNode_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f9a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "SetFlagsRecursiveNode_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f9a874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                            { "HasAllFlagsNode_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f9a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                            { "ClearFlagsNode_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsRecursiveNode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags,
                                                                ::Unity::Hierarchy::HierarchyTraversalDirection)>(&::Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursiveNode_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f9a91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                             { "ClearFlagsRecursiveNode_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Hierarchy::Hierarchy*& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Hierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr ::Unity::Hierarchy::Hierarchy* const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Hierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hierarchy = value;
}
constexpr ::Unity::Hierarchy::HierarchyFlattened*& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_HierarchyFlattened() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HierarchyFlattened;
}
constexpr ::Unity::Hierarchy::HierarchyFlattened* const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_HierarchyFlattened() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HierarchyFlattened;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_HierarchyFlattened(::Unity::Hierarchy::HierarchyFlattened* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HierarchyFlattened = value;
}
constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_FlattenedNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedNodes;
}
constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_FlattenedNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedNodes;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_FlattenedNodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FlattenedNodes = value;
}
constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode>& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_Nodes(::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nodes = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_IsOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr bool const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_IsOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOwner;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_IsOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOwner = value;
}
constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler*& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_FlagsChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FlagsChanged;
}
constexpr ::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_FlagsChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FlagsChanged;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_FlagsChanged(::Unity::Hierarchy::HierarchyViewModel_FlagsChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FlagsChanged = value;
}
constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser*& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get__QueryParser_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueryParser_k__BackingField;
}
constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get__QueryParser_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueryParser_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set__QueryParser_k__BackingField(::Unity::Hierarchy::IHierarchySearchQueryParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____QueryParser_k__BackingField = value;
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_UpdateNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> Unity::Hierarchy::HierarchyViewModel::get_FlattenedNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_FlattenedNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::set_QueryParser(::Unity::Hierarchy::IHierarchySearchQueryParser* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "set_QueryParser", {}, { ::i2c::type_of<::Unity::Hierarchy::IHierarchySearchQueryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchyViewModel::get_Query() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Query", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hierarchyFlattened, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyViewModel::_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr flattenedNodesPtr,
                                                        int32_t flattenedNodesCount, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePtr, hierarchyFlattened, flattenedNodesPtr, flattenedNodesCount, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewModel::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(this, ___internal_method, index);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::IndexOf(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
inline bool Unity::Hierarchy::HierarchyViewModel::Contains(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Contains", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlags(::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SetFlags", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "SetFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursive(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                    ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "SetFlagsRecursive",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags, direction);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "HasAllFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlags(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "ClearFlags", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursive(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                      ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "ClearFlagsRecursive",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags, direction);
}
inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable Unity::Hierarchy::HierarchyViewModel::EnumerateNodesWithAllFlags(::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                                                         { "EnumerateNodesWithAllFlags", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>(this, ___internal_method, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyViewModel_Enumerator Unity::Hierarchy::HierarchyViewModel::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModel_Enumerator>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModel*>(nullptr, ___internal_method, handlePtr);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                     ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags, ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount,
                                                                     ::by_ref<::System::IntPtr> indicesPtr, ::by_ref<int32_t> indicesCount, ::by_ref<int32_t> version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "Create",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(),
                                                  ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handlePtr, hierarchyFlattened, defaultFlags, nodesPtr, nodesCount, indicesPtr, indicesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::Destroy(::System::IntPtr nativePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativePtr);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsAll(::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SetFlagsAll", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "SetFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursiveNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                        ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "SetFlagsRecursiveNode",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags, direction);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "HasAllFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                              { "ClearFlagsNode", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursiveNode(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                          ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "ClearFlagsRecursiveNode",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, flags, direction);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::CreateHierarchyViewModel(::System::IntPtr nativePtr, ::System::IntPtr flattenedPtr, ::System::IntPtr flattenedNodesPtr,
                                                                                       int32_t flattenedNodesCount, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "CreateHierarchyViewModel",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nativePtr, flattenedPtr, flattenedNodesPtr, flattenedNodesCount, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::UpdateHierarchyViewModel(::System::IntPtr handlePtr, ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, ::System::IntPtr nodesPtr,
                                                                           int32_t nodesCount, int32_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                                                         { "UpdateHierarchyViewModel",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr, flattenedNodesPtr, flattenedNodesCount, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::InvokeFlagsChanged(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "InvokeFlagsChanged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SearchBegin(::System::IntPtr handlePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "SearchBegin", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_UpdateNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchyViewModel::get_Query_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "get_Query_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(nullptr, ___internal_method, _unity_self);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::IndexOf_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "IndexOf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, node);
}
inline bool Unity::Hierarchy::HierarchyViewModel::Contains_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "Contains_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::HierarchyViewModel::Update_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(), { "Update_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                                                              ::by_ref<::System::IntPtr> nodesPtr, ::by_ref<int32_t> nodesCount, ::by_ref<::System::IntPtr> indicesPtr,
                                                                              ::by_ref<int32_t> indicesCount, ::by_ref<int32_t> version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "Create_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handlePtr, hierarchyFlattened, defaultFlags, nodesPtr, nodesCount, indicesPtr, indicesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsAll_Injected(::System::IntPtr _unity_self, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "SetFlagsAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                        ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                          { "SetFlagsNode_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsRecursiveNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                                 ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "SetFlagsRecursiveNode_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, flags, direction);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                           ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                          { "HasAllFlagsNode_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                          ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                          { "ClearFlagsNode_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsRecursiveNode_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node,
                                                                                   ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyTraversalDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModel*>(),
                                                           { "ClearFlagsRecursiveNode_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyTraversalDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, node, flags, direction);
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::New_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                                              ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewModel*>(hierarchyFlattened, defaultFlags));
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                                              ::System::IntPtr flattenedNodesPtr, int32_t flattenedNodesCount, ::System::IntPtr nodesPtr,
                                                                                              int32_t nodesCount, int32_t version) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewModel*>(nativePtr, hierarchyFlattened, flattenedNodesPtr, flattenedNodesCount, nodesPtr, nodesCount, version));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyViewModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyViewModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel::HierarchyViewModel() {}

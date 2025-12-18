#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "Unity/Hierarchy/zzzz__IHierarchySearchQueryParser_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyViewModel*)>(
    &::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6971318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::HierarchyViewModel* viewModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, viewModel);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel_BindingsMarshaller::HierarchyViewModel_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)(::Unity::Hierarchy::HierarchyViewModel*)>(
    &::Unity::Hierarchy::HierarchyViewModel_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6970ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x697132c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x697140c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModel_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewModel* hierarchyViewModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchyViewModel);
}
inline ::ByRef<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewModel_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Hierarchy::HierarchyNode>, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewModel_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel_Enumerator>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HierarchyFlattened", ty:
// "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NodesPtr", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_NodesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_ViewModel,
                                                                                           ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, int32_t* m_NodesPtr, int32_t m_NodesCount,
                                                                                           int32_t m_Version, int32_t m_Index) noexcept {
  this->m_ViewModel = m_ViewModel;
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_NodesPtr = m_NodesPtr;
  this->m_NodesCount = m_NodesCount;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModel_Enumerator::HierarchyViewModel_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_IsCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69703d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_IsCreated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69703e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_UpdateNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69703f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                               "get_UpdateNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_HierarchyFlattened
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyFlattened* (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::get_HierarchyFlattened)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x697047c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                               "get_HierarchyFlattened", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6970484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.set_QueryParser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::IHierarchySearchQueryParser*)>(
    &::Unity::Hierarchy::HierarchyViewModel::set_QueryParser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x697048c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "set_QueryParser", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::IHierarchySearchQueryParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchySearchQueryDescriptor* (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::get_Query)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6970494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Query",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(::Unity::Hierarchy::HierarchyFlattened*, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6970520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::System::IntPtr, ::Unity::Hierarchy::HierarchyFlattened*, ::System::IntPtr, int32_t, int32_t)>(&::Unity::Hierarchy::HierarchyViewModel::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69706a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6970740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69707dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(bool)>(&::Unity::Hierarchy::HierarchyViewModel::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6970788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewModel::*)(int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::get_Item)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6970880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)(::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::IndexOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6970954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69709f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.GetChildrenCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Hierarchy::HierarchyViewModel::*)(::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::GetChildrenCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6970a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetChildrenCount", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(&::Unity::Hierarchy::HierarchyViewModel::SetFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6970b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::HasAllFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6970b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(&::Unity::Hierarchy::HierarchyViewModel::ClearFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6970c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.EnumerateNodesWithAllFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyViewNodesEnumerable (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::EnumerateNodesWithAllFlags)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6970c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "EnumerateNodesWithAllFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)()>(&::Unity::Hierarchy::HierarchyViewModel::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6970d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyViewModel_Enumerator (::Unity::Hierarchy::HierarchyViewModel::*)()>(
    &::Unity::Hierarchy::HierarchyViewModel::GetEnumerator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6970da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.FromIntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyViewModel* (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::FromIntPtr)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6970e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "FromIntPtr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchyFlattened*, ::Unity::Hierarchy::HierarchyNodeFlags, ::ByRef<::System::IntPtr>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
        &::Unity::Hierarchy::HierarchyViewModel::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6970624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6970844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(&::Unity::Hierarchy::HierarchyViewModel::SetFlagsNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6970b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlagsNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6970ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewModel::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(&::Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6970c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.CreateHierarchyViewModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::CreateHierarchyViewModel)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6971010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "CreateHierarchyViewModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.UpdateHierarchyViewModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t)>(
    &::Unity::Hierarchy::HierarchyViewModel::UpdateHierarchyViewModel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6971114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "UpdateHierarchyViewModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SearchBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::SearchBegin)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x69711b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SearchBegin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_UpdateNeeded_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6970440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_UpdateNeeded_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.get_Query_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchySearchQueryDescriptor* (*)(::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyViewModel::get_Query_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69704e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Query_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.IndexOf_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::IndexOf_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69709ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "IndexOf_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Contains_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::Contains_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6970a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Contains_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.GetChildrenCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyViewModel::GetChildrenCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6970ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetChildrenCount_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Update_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyViewModel::Update_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6970d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Update_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.Create_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::Unity::Hierarchy::HierarchyNodeFlags, ::ByRef<::System::IntPtr>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
        &::Unity::Hierarchy::HierarchyViewModel::Create_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6970e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.SetFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(
    &::Unity::Hierarchy::HierarchyViewModel::SetFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6970f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.HasAllFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(
    &::Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6970f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModel.ClearFlagsNode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags, bool)>(
    &::Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6970fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Hierarchy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HierarchyFlattened)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_NodesPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesPtr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_NodesPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesPtr;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_NodesPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesPtr = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_NodesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCount;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyViewModel::__cordl_internal_get_m_NodesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCount;
}
constexpr void Unity::Hierarchy::HierarchyViewModel::__cordl_internal_set_m_NodesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesCount = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____QueryParser_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_IsCreated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_UpdateNeeded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyFlattened* Unity::Hierarchy::HierarchyViewModel::get_HierarchyFlattened() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                             "get_HierarchyFlattened", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattened*, false>(this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::set_QueryParser(::Unity::Hierarchy::IHierarchySearchQueryParser* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "set_QueryParser", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::IHierarchySearchQueryParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchyViewModel::get_Query() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Query",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchyFlattened, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyViewModel::_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::System::IntPtr nodesPtr, int32_t nodesCount,
                                                        int32_t version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativePtr, hierarchyFlattened, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModel::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::ByRef<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewModel::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Hierarchy::HierarchyNode>, false>(this, ___internal_method, index);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::IndexOf(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, node);
}
inline bool Unity::Hierarchy::HierarchyViewModel::Contains(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::GetChildrenCount(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetChildrenCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, flags, recurse);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, flags, recurse);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable Unity::Hierarchy::HierarchyViewModel::EnumerateNodesWithAllFlags(::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "EnumerateNodesWithAllFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewNodesEnumerable, false>(this, ___internal_method, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyViewModel_Enumerator Unity::Hierarchy::HierarchyViewModel::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModel_Enumerator, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "FromIntPtr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModel*, false>(nullptr, ___internal_method, handlePtr);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::Create(::System::IntPtr handlePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                     ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags, ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount,
                                                                     ::ByRef<int32_t> version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handlePtr, hierarchyFlattened, defaultFlags, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::Destroy(::System::IntPtr nativePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativePtr);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, flags, recurse);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags, bool recurse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlagsNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, flags, recurse);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::CreateHierarchyViewModel(::System::IntPtr nativePtr, ::System::IntPtr flattenedPtr, ::System::IntPtr nodesPtr, int32_t nodesCount,
                                                                                       int32_t version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "CreateHierarchyViewModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, nativePtr, flattenedPtr, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::UpdateHierarchyViewModel(::System::IntPtr handlePtr, ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "UpdateHierarchyViewModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handlePtr, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::SearchBegin(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SearchBegin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyViewModel::get_UpdateNeeded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_UpdateNeeded_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchyViewModel::get_Query_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "get_Query_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, false>(nullptr, ___internal_method, _unity_self);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::IndexOf_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "IndexOf_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self, node);
}
inline bool Unity::Hierarchy::HierarchyViewModel::Contains_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Contains_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, node);
}
inline int32_t Unity::Hierarchy::HierarchyViewModel::GetChildrenCount_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "GetChildrenCount_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::HierarchyViewModel::Update_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Update_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyViewModel::Create_Injected(::System::IntPtr handlePtr, ::System::IntPtr hierarchyFlattened, ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags,
                                                                              ::ByRef<::System::IntPtr> nodesPtr, ::ByRef<int32_t> nodesCount, ::ByRef<int32_t> version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handlePtr, hierarchyFlattened, defaultFlags, nodesPtr, nodesCount, version);
}
inline void Unity::Hierarchy::HierarchyViewModel::SetFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                        bool recurse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "SetFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, node, flags, recurse);
}
inline bool Unity::Hierarchy::HierarchyViewModel::HasAllFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                           ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "HasAllFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, node, flags);
}
inline void Unity::Hierarchy::HierarchyViewModel::ClearFlagsNode_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                          bool recurse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewModel*>::get(), "ClearFlagsNode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, node, flags, recurse);
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::New_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                                              ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Hierarchy::HierarchyViewModel*>(hierarchyFlattened, defaultFlags));
}
inline ::Unity::Hierarchy::HierarchyViewModel* Unity::Hierarchy::HierarchyViewModel::New_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                                              ::System::IntPtr nodesPtr, int32_t nodesCount, int32_t version) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Hierarchy::HierarchyViewModel*>(nativePtr, hierarchyFlattened, nodesPtr, nodesCount, version));
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

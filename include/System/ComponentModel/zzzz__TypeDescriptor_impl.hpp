#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
#include "System/Collections/zzzz__IComparer_impl.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__RefreshEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4478094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4478008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                   ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filter);
}
inline ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*
System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(filter, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::TypeDescriptor_AttributeFilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x44780d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(&::System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x44780c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get__filterService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService* const& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get__filterService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr void System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                          ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filterService, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filterService);
}
inline ::System::ComponentModel::TypeDescriptor_FilterCacheItem*
System::ComponentModel::TypeDescriptor_FilterCacheItem::New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(filterService, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_FilterCacheItem::TypeDescriptor_FilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4478600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)()>(
    &::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::setStaticF_Instance(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get>(
      std::forward<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(value));
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get>();
}
inline int32_t System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, left, right);
}
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::TypeDescriptor_MemberDescriptorComparer() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(
    ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4476668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4478780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4478890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x44789a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4478ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4478bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4478cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x4478e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4478fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x44790d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4479200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4479318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4479448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__primary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__primary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__secondary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__secondary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secondary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
inline ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(primary, secondary));
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::TypeDescriptor_MergedTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4479804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x4479aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x4479d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4479fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x447a1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x447a458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x447a65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::System::Type*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x447a860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x447aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x447add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x447b0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x447b354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x447b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::_ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node,
                                                                                                            ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, instance);
}
inline ::System::ComponentModel::AttributeCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(
    ::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_instance", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, ::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4479a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x447b81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x447bab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x447bce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x447beec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x447c18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x447c390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::System::Type*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x447c594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x447c830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x447cad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x447cd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x447d018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x447d2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::_ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, ::System::Type* objectType,
                                                                                                    ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, objectType, instance);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_objectType", ty:
// "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node, ::System::Type* _objectType, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_objectType = _objectType;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(
    ::System::ComponentModel::TypeDescriptionProvider*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4471930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
        &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4479578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x44796f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x447975c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x447980c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4479878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4479950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* const& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_set_Next(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider* const& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType,
                                                                                                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>, false>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(provider));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::TypeDescriptor_TypeDescriptionNode() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::TypeDescriptor_TypeDescriptorComObject() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::TypeDescriptor_TypeDescriptorInterface() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x44710a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_ComObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_InterfaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4471114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_InterfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_MetadataVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4471180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_MetadataVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x44711d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x4471f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x4472584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IServiceProvider*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.FilterMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ArrayList* (*)(::System::Collections::IList*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x4472898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAssociation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x4461b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "GetAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x44658e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x446eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x4472d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x446a9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4476580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4472c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4473178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4473380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x446edf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x446ed94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x4476694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtenderCollisionSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ComponentModel::MemberDescriptor*)>(
    &::System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x44771dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x44774f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x446efa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x446ef50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x44775c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4477c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4477cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetPropertiesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetPropertiesImpl)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x4477634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProviderRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4477d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4477dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4472840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x4471444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4476528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x4477ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Object*,
                                                        ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x4476b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x1898;
  constexpr static std::size_t addrs = 0x447457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x4475e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineMerge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  constexpr static std::size_t size = 0x1144;
  constexpr static std::size_t addrs = 0x4473438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x44780fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x4471958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ShouldHideMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*)>(
    &::System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4472bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.SortDescriptorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*)>(&::System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x44781a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTypeTable(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTypeTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_providerTypeTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__defaultProviders(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__defaultProviders() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_defaultProviders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__associationTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__metadataVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__metadataVersion() {
  return ::cordl_internals::getStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__collisionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__collisionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::TypeDescriptor::getStaticF_TraceDescriptor() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineInitializeKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineInitializeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineInitializeKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineMergeKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineMergeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineMergeKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineFilterKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineFilterKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineAttributeFilterKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineAttributeFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineAttributeFilterKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__internalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::getStaticF__internalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::RefreshEventHandler*>(value));
}
inline ::System::ComponentModel::RefreshEventHandler* System::ComponentModel::TypeDescriptor::getStaticF_Refreshed() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_ComObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_ComObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_InterfaceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_InterfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_MetadataVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType,
                                                                                ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                                                ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IServiceProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::ArrayList* System::ComponentModel::TypeDescriptor::FilterMembers(::System::Collections::IList* members,
                                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method, members, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetAssociation(::System::Type* type, ::System::Object* primary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAssociation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, primary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor::GetCache(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Type* type, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, type, typeName);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, member);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetNodeForBaseType(::System::Type* searchType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, searchType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component,
                                                                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::System::Object* component,
                                                                                                                         ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                                                         bool noCustomTypeDesc, bool noAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProviderRecursive(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, false>(nullptr, ___internal_method, type, createDelegator);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, false>(nullptr, ___internal_method, instance, createDelegator);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                           ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                                           ::System::Object* instance, ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                                                  ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                      ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary,
                                                                                                 ::System::Collections::ICollection* secondary, ::System::Object* instance,
                                                                                                 ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline bool System::ComponentModel::TypeDescriptor::ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member, attribute);
}
inline void System::ComponentModel::TypeDescriptor::SortDescriptorArray(::System::Collections::IList* infos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor::TypeDescriptor() {}

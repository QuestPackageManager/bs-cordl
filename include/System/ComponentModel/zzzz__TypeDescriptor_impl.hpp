#pragma once
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/ComponentModel/zzzz__RefreshEventHandler_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Collections::ICollection*)>(&::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27b576c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27b56f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*
System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                             ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>(filter, filteredMembers));
}
inline void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                      ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter, filteredMembers);
}
inline bool System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__TypeDescriptor__AttributeFilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__FilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*)>(&::System::ComponentModel::__TypeDescriptor__FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27b57a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__FilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__TypeDescriptor__FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(&::System::ComponentModel::__TypeDescriptor__FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27b5798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__get__filterService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::ITypeDescriptorFilterService*> const&
System::ComponentModel::__TypeDescriptor__FilterCacheItem::__get__filterService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr void System::ComponentModel::__TypeDescriptor__FilterCacheItem::__set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::__TypeDescriptor__FilterCacheItem::__set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__FilterCacheItem*
System::ComponentModel::__TypeDescriptor__FilterCacheItem::New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                    ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>(filterService, filteredMembers));
}
inline void System::ComponentModel::__TypeDescriptor__FilterCacheItem::_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                             ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filterService, filteredMembers);
}
inline bool System::ComponentModel::__TypeDescriptor__FilterCacheItem::IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filterService);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__FilterCacheItem::__TypeDescriptor__FilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::*)(
    ::System::Object*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27b5c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b5de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline void System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::setStaticF_Instance(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get>(
      std::forward<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>(value));
}
inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get>();
}
inline int32_t System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::Compare(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, left, right);
}
inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>());
}
inline void System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::__TypeDescriptor__MemberDescriptorComparer() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(
    ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27b3eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27b5e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b5f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b607c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b6194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b62ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b63c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x27b64dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(&::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b6690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27b67a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27b68d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27b69f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27b6b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__get__primary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__get__primary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__set__primary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__get__secondary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__get__secondary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secondary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>(primary, secondary));
}
inline void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                  ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__TypeDescriptor__MergedTypeDescriptor() {}
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, ::System::Object*)>(&::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b6d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x27b7038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x27b7314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27b7558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27b7764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27b7a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27b7c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::System::Type*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27b7e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x27b80cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x27b83ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27b8694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x27b893c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x1228;
  constexpr static std::size_t addrs = 0x27b8bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node,
                                                                                                         ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, instance);
}
inline ::System::ComponentModel::AttributeCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_instance", ty:
// "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor() {}
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, ::System::Type*, ::System::Object*)>(&::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27b9e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27b9e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x27ba0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27ba304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27ba514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27ba7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27ba9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::System::Type*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27babe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27bae8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27bb138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27bb3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27bb698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x27bb94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Type* objectType,
                                                                                                 ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, objectType, instance);
}
inline ::System::ComponentModel::AttributeCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_objectType", ty:
// "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Type* _objectType, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_objectType = _objectType;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(
    ::System::ComponentModel::TypeDescriptionProvider*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27af3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27b6c50;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27b6cc0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27b6d74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27b6de4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x27b6ec0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*& System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*> const&
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__set_Next(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__set_Provider(::System::ComponentModel::TypeDescriptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>(provider));
}
inline void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
inline ::System::Collections::IDictionary* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetCache(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), "GetCache",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), "GetExtendedTypeDescriptor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), "GetExtenderProviders",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>, false>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), "GetReflectionType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), "GetTypeDescriptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__TypeDescriptor__TypeDescriptionNode() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::__TypeDescriptor__TypeDescriptorComObject() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::__TypeDescriptor__TypeDescriptorInterface() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27aead8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_ComObjectType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_InterfaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27aeb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_InterfaceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_MetadataVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27aebb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_MetadataVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x27aec08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x27af9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.FilterMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ArrayList* (*)(::System::Collections::IList*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x27b0000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAssociation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x27a05f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAssociation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27a4404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27ad13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x27b04dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27a8ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27b3d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27b03e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x27b08fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27b0b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x27ad398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27ad33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x27b3ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
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
  constexpr static std::size_t addrs = 0x27b4a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27b4d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x27ad554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27ad4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27b4e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279c4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
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
  constexpr static std::size_t addrs = 0x27b54c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
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
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x27b4e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
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
  constexpr static std::size_t addrs = 0x27b5530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x279ee34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27b3e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Type*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x27aee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27b3d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27b5588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Object*,
                                                        ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x27b43c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x18fc;
  constexpr static std::size_t addrs = 0x27b1d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x27b360c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
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
  constexpr static std::size_t addrs = 0x27b0bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27b57d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x27af3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ShouldHideMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*)>(
    &::System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27b0358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.SortDescriptorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*)>(&::System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27b5884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
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
                                                                             "get_ComObjectType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_InterfaceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_InterfaceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_MetadataVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::ArrayList* System::ComponentModel::TypeDescriptor::FilterMembers(::System::Collections::IList* members,
                                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method, members, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetAssociation(::System::Type* type, ::System::Object* primary) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAssociation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, primary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor::GetCache(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Type* type, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, type, typeName);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, member);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetNodeForBaseType(::System::Type* searchType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, searchType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component,
                                                                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::System::Object* component,
                                                                                                                         ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                                                         bool noCustomTypeDesc, bool noAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProviderRecursive(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, type, createDelegator);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, instance, createDelegator);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                           ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                                           ::System::Object* instance, ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                                                  ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                      ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary,
                                                                                                 ::System::Collections::ICollection* secondary, ::System::Object* instance,
                                                                                                 ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline bool System::ComponentModel::TypeDescriptor::ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member, attribute);
}
inline void System::ComponentModel::TypeDescriptor::SortDescriptorArray(::System::Collections::IList* infos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor::TypeDescriptor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

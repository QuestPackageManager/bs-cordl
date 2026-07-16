#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
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
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*>, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63df3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x63df370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                                                                                           { "IsValid", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_set__filter(::ArrayW<::System::Attribute*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filter = value;
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
  this->___FilteredMembers = value;
}
inline void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor(::ArrayW<::System::Attribute*> filter, ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid(::ArrayW<::System::Attribute*> filter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                                                                                         { "IsValid", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filter);
}
inline ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*
System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::New_ctor(::ArrayW<::System::Attribute*> filter, ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(filter, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::TypeDescriptor_AttributeFilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63df3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(
    &::System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63df3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                                                                                           { "IsValid", {}, { ::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>() } })));
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
  this->____filterService = value;
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
  this->___FilteredMembers = value;
}
inline void System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                          ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterService, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                                                                                         { "IsValid", {}, { ::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filterService);
}
inline ::System::ComponentModel::TypeDescriptor_FilterCacheItem*
System::ComponentModel::TypeDescriptor_FilterCacheItem::New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(filterService, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_FilterCacheItem::TypeDescriptor_FilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63df8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)()>(
    &::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63df9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::setStaticF_Instance(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance", ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(
      std::forward<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(value));
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance", ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>();
}
inline int32_t System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, left, right);
}
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(
    ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ddafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63dfa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63dfb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63dfc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63dfd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63dfea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63dffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x63e00d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63e026c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
        &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x63e0388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x63e04bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
        &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x63e05d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x63e070c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
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
  this->____primary = value;
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
  this->____secondary = value;
}
inline void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                                              { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*
System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(primary, secondary));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e0a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x63e0cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x63e0fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63e11e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x63e13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x63e1678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x63e187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x63e1a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x63e1cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x63e1fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x63e22b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x63e2544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x63e27ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::_ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node,
                                                                                                            ::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, instance);
}
inline ::System::ComponentModel::AttributeCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(*this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(*this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(*this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(*this, ___internal_method);
}
inline ::System::Object*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(*this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(*this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(*this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(*this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(
    ::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor>(),
                                              { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, pd);
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, ::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63e0cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
            { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x63e2a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x63e2ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63e2ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x63e30cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63e3360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63e3560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x63e3760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x63e39d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x63e3c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)()>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x63e3f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x63e41b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x63e4460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::_ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, ::System::Type* objectType,
                                                                                                    ::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, objectType, instance);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(*this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(*this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(*this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(*this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(*this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(*this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                                                         { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(*this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                                           { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(*this, ___internal_method, attributes);
}
inline ::System::Object*
System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor>(),
                                              { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, pd);
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::ComponentModel::TypeDescriptionProvider*)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63d8f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::IServiceProvider*, ::System::Type*,
                                                                                                                                           ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x63e0840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63e0978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63e09e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63e0aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetReflectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63e0b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x63e0bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 9 }));
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
  this->___Next = value;
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
  this->___Provider = value;
}
inline void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType,
                                                                                                    ::ArrayW<::System::Type*> argTypes, ::ArrayW<::System::Object*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(provider));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::TypeDescriptor_TypeDescriptionNode() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::TypeDescriptor_TypeDescriptorComObject() {}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::TypeDescriptor_TypeDescriptorInterface() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63d8794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_ComObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_InterfaceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63d87f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_InterfaceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_MetadataVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d8854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_MetadataVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x63d88b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "AddProvider", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x63d94f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "CheckDefaultProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(
    &::System::ComponentModel::TypeDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x63d9ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                           { "CreateInstance",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IServiceProvider*>(), ::i2c::type_of<::System::Type*>(),
                                                                                               ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.FilterMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::IList*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x63d9dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "FilterMembers", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAssociation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x63ca1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                           { "GetAssociation", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x63cdcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d6bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x63da298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63d2b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetCache", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63dda08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(&::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x63da1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetDescriptor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x63da6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetDescriptor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x63da8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetExtendedDescriptor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x63d6e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63d6db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x63ddb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "GetEvents", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtenderCollisionSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ComponentModel::MemberDescriptor*)>(&::System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x63de650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                           { "GetExtenderCollisionSuffix", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63de994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetNodeForBaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x63d6fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d6f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63dea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63c5f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x63df148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetPropertiesImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetPropertiesImpl)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x63dead0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                            { "GetPropertiesImpl", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProviderRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63df1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProviderRecursive", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63c8910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetReflectionType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*, bool)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x63d8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63dd9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x63df218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::ArrayW<::System::Attribute*>, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x63ddff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "PipelineAttributeFilter",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
    &::System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x17f0;
  constexpr static std::size_t addrs = 0x63dba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                           { "PipelineFilter",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(
    &::System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x63dd280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                         { "PipelineInitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineMerge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*,
                                                                                               ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  constexpr static std::size_t size = 0x10e4;
  constexpr static std::size_t addrs = 0x63da9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                { "PipelineMerge",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63df404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "RaiseRefresh", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x63d8f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "Refresh", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ShouldHideMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*)>(&::System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63da13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                             { "ShouldHideMember", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::System::Attribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.SortDescriptorArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*)>(&::System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63df4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "SortDescriptorArray", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::System::ComponentModel::TypeDescriptor*>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTypeTable(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTypeTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__defaultProviders(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__defaultProviders() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable", ::System::ComponentModel::TypeDescriptor*>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__associationTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__metadataVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_metadataVersion", ::System::ComponentModel::TypeDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__metadataVersion() {
  return ::cordl_internals::getStaticField<int32_t, "_metadataVersion", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__collisionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_collisionIndex", ::System::ComponentModel::TypeDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__collisionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_collisionIndex", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::TypeDescriptor::getStaticF_TraceDescriptor() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineInitializeKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineInitializeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineInitializeKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineMergeKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineMergeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineMergeKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineFilterKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineFilterKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineAttributeFilterKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineAttributeFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineAttributeFilterKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__internalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::getStaticF__internalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed", ::System::ComponentModel::TypeDescriptor*>(
      std::forward<::System::ComponentModel::RefreshEventHandler*>(value));
}
inline ::System::ComponentModel::RefreshEventHandler* System::ComponentModel::TypeDescriptor::getStaticF_Refreshed() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed", ::System::ComponentModel::TypeDescriptor*>();
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_ComObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_ComObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_InterfaceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_InterfaceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "get_MetadataVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "AddProvider", {}, { ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "CheckDefaultProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes,
                                                                                ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                         { "CreateInstance",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IServiceProvider*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::ArrayList* System::ComponentModel::TypeDescriptor::FilterMembers(::System::Collections::IList* members, ::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "FilterMembers", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method, members, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetAssociation(::System::Type* type, ::System::Object* primary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                         { "GetAssociation", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, primary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor::GetCache(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetCache", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Type* type, ::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetDescriptor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, type, typeName);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetDescriptor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetExtendedDescriptor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*> attributes,
                                                                                                              bool noCustomTypeDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "GetEvents", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                         { "GetExtenderCollisionSuffix", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, member);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetNodeForBaseType(::System::Type* searchType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetNodeForBaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, searchType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type* componentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*> attributes,
                                                                                                                     bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                              { "GetProperties", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::System::Object* component, ::ArrayW<::System::Attribute*> attributes,
                                                                                                                         bool noCustomTypeDesc, bool noAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                          { "GetPropertiesImpl", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProviderRecursive(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetProviderRecursive", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "GetReflectionType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, type, createDelegator);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "NodeFor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, instance, createDelegator);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                           ::ArrayW<::System::Attribute*> filter, ::System::Object* instance,
                                                                                                           ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "PipelineAttributeFilter",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                                                  ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                                                         { "PipelineFilter",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                      ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                          { "PipelineInitialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary,
                                                                                                 ::System::Collections::ICollection* secondary, ::System::Object* instance,
                                                                                                 ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "PipelineMerge",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "RaiseRefresh", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "Refresh", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline bool System::ComponentModel::TypeDescriptor::ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                                                           { "ShouldHideMember", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::System::Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, attribute);
}
inline void System::ComponentModel::TypeDescriptor::SortDescriptorArray(::System::Collections::IList* infos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(), { "SortDescriptorArray", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor::TypeDescriptor() {}

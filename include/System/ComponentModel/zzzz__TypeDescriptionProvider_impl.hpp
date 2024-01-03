#pragma once
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x291904c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*>());
}
inline void System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor::__TypeDescriptionProvider__EmptyCustomTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptionProvider::*)()>(
    &::System::ComponentModel::TypeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2918f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetCache)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2918fa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2918fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> (
    ::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptionProvider::GetExtenderProviders)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2919054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2919148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetReflectionType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2919158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2919174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetTypeDescriptor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2919184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetTypeDescriptor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2919210;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::TypeDescriptionProvider::__get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& System::ComponentModel::TypeDescriptionProvider::__get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void System::ComponentModel::TypeDescriptionProvider::__set__parent(::System::ComponentModel::TypeDescriptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*& System::ComponentModel::TypeDescriptionProvider::__get__emptyDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDescriptor;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*> const&
System::ComponentModel::TypeDescriptionProvider::__get__emptyDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDescriptor;
}
constexpr void System::ComponentModel::TypeDescriptionProvider::__set__emptyDescriptor(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyDescriptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptionProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::TypeDescriptionProvider*>());
}
inline void System::ComponentModel::TypeDescriptionProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptionProvider::GetCache(::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
System::ComponentModel::TypeDescriptionProvider::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>, false>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::TypeDescriptionProvider::GetReflectionType(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetReflectionType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType);
}
inline ::System::Type* System::ComponentModel::TypeDescriptionProvider::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetTypeDescriptor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), "GetTypeDescriptor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProvider*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionProvider::TypeDescriptionProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

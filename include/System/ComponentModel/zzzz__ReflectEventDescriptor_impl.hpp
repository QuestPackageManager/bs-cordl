#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectEventDescriptor.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectEventDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::System::Reflection::EventInfo*)>(
    &::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4459bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Collections::IList*)>(
    &::System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4459d50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillEventInfoAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(
    ::System::Reflection::EventInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x445a1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), "FillEventInfoAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillMethods
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)()>(
    &::System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x4459db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                                                                               "FillMethods", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillSingleMethodAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(
    ::System::Reflection::MethodInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x445a524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), "FillSingleMethodAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentClass;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentClass;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__componentClass(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____componentClass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__addMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____addMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__removeMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____removeMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::EventInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____realEvent;
}
constexpr ::System::Reflection::EventInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____realEvent;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__realEvent(::System::Reflection::EventInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____realEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filledMethods;
}
constexpr bool const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filledMethods;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__filledMethods(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filledMethods = value;
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentClass, eventInfo);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillAttributes(::System::Collections::IList* attributes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(::System::Reflection::EventInfo* realEventInfo, ::System::Collections::IList* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), "FillEventInfoAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, realEventInfo, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillMethods() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                                                                             "FillMethods", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(::System::Reflection::MethodInfo* realMethodInfo, ::System::Collections::IList* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(), "FillSingleMethodAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, realMethodInfo, attributes);
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ReflectEventDescriptor*>(componentClass, eventInfo));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectEventDescriptor::ReflectEventDescriptor() {}

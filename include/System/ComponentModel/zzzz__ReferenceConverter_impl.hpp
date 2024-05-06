#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__ReferenceConverter__ReferenceComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__ReferenceConverter__ReferenceComparer::*)(
    ::System::ComponentModel::ReferenceConverter*)>(&::System::ComponentModel::__ReferenceConverter__ReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f46540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ReferenceConverter__ReferenceComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__ReferenceConverter__ReferenceComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::__ReferenceConverter__ReferenceComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::__ReferenceConverter__ReferenceComparer::Compare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f46690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ReferenceConverter__ReferenceComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::__ReferenceConverter__ReferenceComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::__ReferenceConverter__ReferenceComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
constexpr ::System::ComponentModel::ReferenceConverter*& System::ComponentModel::__ReferenceConverter__ReferenceComparer::__cordl_internal_get__converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReferenceConverter*> const&
System::ComponentModel::__ReferenceConverter__ReferenceComparer::__cordl_internal_get__converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr void System::ComponentModel::__ReferenceConverter__ReferenceComparer::__cordl_internal_set__converter(::System::ComponentModel::ReferenceConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____converter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__ReferenceConverter__ReferenceComparer*
System::ComponentModel::__ReferenceConverter__ReferenceComparer::New_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__ReferenceConverter__ReferenceComparer*>(converter));
}
inline void System::ComponentModel::__ReferenceConverter__ReferenceComparer::_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ReferenceConverter__ReferenceComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converter);
}
inline int32_t System::ComponentModel::__ReferenceConverter__ReferenceComparer::Compare(::System::Object* item1, ::System::Object* item2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ReferenceConverter__ReferenceComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item1, item2);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__ReferenceConverter__ReferenceComparer::__ReferenceConverter__ReferenceComparer() {}
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReferenceConverter::*)(::System::Type*)>(
    &::System::ComponentModel::ReferenceConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f451c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::ReferenceConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f451f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::ReferenceConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2f45328;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ReferenceConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x2f456cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeConverter__StandardValuesCollection* (
    ::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::ReferenceConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x2f45d50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f46618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ReferenceConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f46620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.IsValueAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*)>(&::System::ComponentModel::ReferenceConverter::IsValueAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f46628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 16));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::ReferenceConverter::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::ComponentModel::ReferenceConverter::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ComponentModel::ReferenceConverter::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::ReferenceConverter::setStaticF_s_none(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_none", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::ComponentModel::ReferenceConverter::getStaticF_s_none() {
  return ::cordl_internals::getStaticField<::StringW, "s_none", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get>();
}
inline ::System::ComponentModel::ReferenceConverter* System::ComponentModel::ReferenceConverter::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ReferenceConverter*>(type));
}
inline void System::ComponentModel::ReferenceConverter::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool System::ComponentModel::ReferenceConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::ComponentModel::ReferenceConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                 ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::ReferenceConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                               ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* System::ComponentModel::ReferenceConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeConverter__StandardValuesCollection*, false>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReferenceConverter::ReferenceConverter() {}

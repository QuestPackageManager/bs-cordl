#pragma once
// IWYU pragma private; include "System/ComponentModel/ReferenceConverter.hpp"
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
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter_ReferenceComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReferenceConverter_ReferenceComparer::*)(
    ::System::ComponentModel::ReferenceConverter*)>(&::System::ComponentModel::ReferenceConverter_ReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6211dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter_ReferenceComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::ReferenceConverter_ReferenceComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::ReferenceConverter_ReferenceComparer::Compare)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6211e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ReferenceConverter*& System::ComponentModel::ReferenceConverter_ReferenceComparer::__cordl_internal_get__converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr ::System::ComponentModel::ReferenceConverter* const& System::ComponentModel::ReferenceConverter_ReferenceComparer::__cordl_internal_get__converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr void System::ComponentModel::ReferenceConverter_ReferenceComparer::__cordl_internal_set__converter(::System::ComponentModel::ReferenceConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____converter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::ReferenceConverter_ReferenceComparer::_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converter);
}
inline int32_t System::ComponentModel::ReferenceConverter_ReferenceComparer::Compare(::System::Object* item1, ::System::Object* item2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item1, item2);
}
inline ::System::ComponentModel::ReferenceConverter_ReferenceComparer* System::ComponentModel::ReferenceConverter_ReferenceComparer::New_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(converter));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::ReferenceConverter_ReferenceComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::ReferenceConverter_ReferenceComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReferenceConverter_ReferenceComparer::ReferenceConverter_ReferenceComparer() {}
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReferenceConverter::*)(::System::Type*)>(
    &::System::ComponentModel::ReferenceConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6210e5c;

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
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6210e64;

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
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6210ee8;

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
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6211228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::ReferenceConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x621163c;

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
  constexpr static std::size_t addrs = 0x6211e04;

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
  constexpr static std::size_t addrs = 0x6211e0c;

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
  constexpr static std::size_t addrs = 0x6211e14;

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
constexpr ::System::Type* const& System::ComponentModel::ReferenceConverter::__cordl_internal_get__type() const {
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
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::ReferenceConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*, false>(this, ___internal_method, context);
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
inline ::System::ComponentModel::ReferenceConverter* System::ComponentModel::ReferenceConverter::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ReferenceConverter*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReferenceConverter::ReferenceConverter() {}

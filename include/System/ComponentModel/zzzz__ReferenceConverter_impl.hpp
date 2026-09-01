#pragma once
// IWYU pragma private; include "System\ComponentModel\ReferenceConverter.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReferenceConverter_ReferenceComparer::*)(::System::ComponentModel::ReferenceConverter*)>(
    &::System::ComponentModel::ReferenceConverter_ReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c78f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::ReferenceConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter_ReferenceComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ReferenceConverter_ReferenceComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::ReferenceConverter_ReferenceComparer::Compare)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63c797c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
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
  this->____converter = value;
}
inline void System::ComponentModel::ReferenceConverter_ReferenceComparer::_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::ReferenceConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, converter);
}
inline int32_t System::ComponentModel::ReferenceConverter_ReferenceComparer::Compare(::System::Object* item1, ::System::Object* item2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item1, item2);
}
inline ::System::ComponentModel::ReferenceConverter_ReferenceComparer* System::ComponentModel::ReferenceConverter_ReferenceComparer::New_ctor(::System::ComponentModel::ReferenceConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReferenceConverter_ReferenceComparer*>(converter));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReferenceConverter::*)(::System::Type*)>(&::System::ComponentModel::ReferenceConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c6954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::ReferenceConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63c695c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::ReferenceConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x63c69e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                           ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ReferenceConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x63c6d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::ReferenceConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x63c7134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c78fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ReferenceConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c7904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.IsValueAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*)>(
    &::System::ComponentModel::ReferenceConverter::IsValueAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 16 }));
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
  this->____type = value;
}
inline void System::ComponentModel::ReferenceConverter::setStaticF_s_none(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_none", ::System::ComponentModel::ReferenceConverter*>(std::forward<::StringW>(value));
}
inline ::StringW System::ComponentModel::ReferenceConverter::getStaticF_s_none() {
  return ::cordl_internals::getStaticField<::StringW, "s_none", ::System::ComponentModel::ReferenceConverter*>();
}
inline void System::ComponentModel::ReferenceConverter::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::ComponentModel::ReferenceConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::ComponentModel::ReferenceConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                 ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::ReferenceConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                               ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::ReferenceConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::ComponentModel::ReferenceConverter::IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReferenceConverter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, value);
}
inline ::System::ComponentModel::ReferenceConverter* System::ComponentModel::ReferenceConverter::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReferenceConverter*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReferenceConverter::ReferenceConverter() {}

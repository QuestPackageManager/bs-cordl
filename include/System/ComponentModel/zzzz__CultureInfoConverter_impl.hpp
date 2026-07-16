#pragma once
// IWYU pragma private; include "System/ComponentModel/CultureInfoConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__CultureInfoConverter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__CultureInfoConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter_CultureComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CultureInfoConverter_CultureComparer::*)(::System::ComponentModel::CultureInfoConverter*)>(
    &::System::ComponentModel::CultureInfoConverter_CultureComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b2e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureComparer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::CultureInfoConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter_CultureComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::CultureInfoConverter_CultureComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::CultureInfoConverter_CultureComparer::Compare)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x63b2eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::CultureInfoConverter*& System::ComponentModel::CultureInfoConverter_CultureComparer::__cordl_internal_get__converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr ::System::ComponentModel::CultureInfoConverter* const& System::ComponentModel::CultureInfoConverter_CultureComparer::__cordl_internal_get__converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr void System::ComponentModel::CultureInfoConverter_CultureComparer::__cordl_internal_set__converter(::System::ComponentModel::CultureInfoConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____converter = value;
}
inline void System::ComponentModel::CultureInfoConverter_CultureComparer::_ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureComparer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::CultureInfoConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cultureConverter);
}
inline int32_t System::ComponentModel::CultureInfoConverter_CultureComparer::Compare(::System::Object* item1, ::System::Object* item2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item1, item2);
}
inline ::System::ComponentModel::CultureInfoConverter_CultureComparer*
System::ComponentModel::CultureInfoConverter_CultureComparer::New_ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CultureInfoConverter_CultureComparer*>(cultureConverter));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::CultureInfoConverter_CultureComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::CultureInfoConverter_CultureComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CultureInfoConverter_CultureComparer::CultureInfoConverter_CultureComparer() {}
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter_CultureInfoMapper.CreateMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)()>(
    &::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::CreateMap)> {
  constexpr static std::size_t size = 0x5a8c;
  constexpr static std::size_t addrs = 0x63b3024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>(), { "CreateMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter_CultureInfoMapper.GetCultureInfoName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::GetCultureInfoName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63b27a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>(), { "GetCultureInfoName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::CultureInfoConverter_CultureInfoMapper::setStaticF_s_cultureInfoNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_cultureInfoNameMap", ::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::ComponentModel::CultureInfoConverter_CultureInfoMapper::getStaticF_s_cultureInfoNameMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_cultureInfoNameMap",
                                           ::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::ComponentModel::CultureInfoConverter_CultureInfoMapper::CreateMap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>(), { "CreateMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(nullptr, ___internal_method);
}
inline ::StringW System::ComponentModel::CultureInfoConverter_CultureInfoMapper::GetCultureInfoName(::StringW cultureInfoDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter_CultureInfoMapper*>(), { "GetCultureInfoName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cultureInfoDisplayName);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CultureInfoConverter_CultureInfoMapper::CultureInfoConverter_CultureInfoMapper() {}
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.get_DefaultCultureString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CultureInfoConverter::*)()>(&::System::ComponentModel::CultureInfoConverter::get_DefaultCultureString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63b1d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { "get_DefaultCultureString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.GetCultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CultureInfoConverter::*)(::System::Globalization::CultureInfo*)>(
    &::System::ComponentModel::CultureInfoConverter::GetCultureName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63b1d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::CultureInfoConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63b1dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::CultureInfoConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63b1e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::CultureInfoConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x8d4;
  constexpr static std::size_t addrs = 0x63b1ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::CultureInfoConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x63b284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::CultureInfoConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x63b2cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::CultureInfoConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b2ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CultureInfoConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::CultureInfoConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b2ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CultureInfoConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CultureInfoConverter::*)()>(&::System::ComponentModel::CultureInfoConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b2eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& System::ComponentModel::CultureInfoConverter::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& System::ComponentModel::CultureInfoConverter::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::ComponentModel::CultureInfoConverter::__cordl_internal_set__values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline ::StringW System::ComponentModel::CultureInfoConverter::get_DefaultCultureString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { "get_DefaultCultureString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::CultureInfoConverter::GetCultureName(::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture);
}
inline bool System::ComponentModel::CultureInfoConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::CultureInfoConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::CultureInfoConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                   ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::CultureInfoConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                 ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::CultureInfoConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(this, ___internal_method, context);
}
inline bool System::ComponentModel::CultureInfoConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::ComponentModel::CultureInfoConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void System::ComponentModel::CultureInfoConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CultureInfoConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::CultureInfoConverter* System::ComponentModel::CultureInfoConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CultureInfoConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CultureInfoConverter::CultureInfoConverter() {}

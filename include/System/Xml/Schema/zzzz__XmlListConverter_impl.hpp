#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlListConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlListConverter::*)(::System::Xml::Schema::XmlBaseConverter*)>(&::System::Xml::Schema::XmlListConverter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62604a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlListConverter::*)(::System::Xml::Schema::XmlBaseConverter*, ::System::Type*)>(
    &::System::Xml::Schema::XmlListConverter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6257308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlListConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlListConverter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62571f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlValueConverter*)>(&::System::Xml::Schema::XmlListConverter::Create)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6260894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlListConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlListConverter::ChangeType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6260a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.ChangeListType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlListConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlListConverter::ChangeListType)> {
  constexpr static std::size_t size = 0xcdc;
  constexpr static std::size_t addrs = 0x625c734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.IsListType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlListConverter::*)(::System::Type*)>(&::System::Xml::Schema::XmlListConverter::IsListType)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6260b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "IsListType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.ToList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::System::Xml::Schema::XmlListConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlListConverter::ToList)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x6261314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                             { "ToList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.StringAsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Xml::Schema::XmlListConverter::*)(::StringW)>(
    &::System::Xml::Schema::XmlListConverter::StringAsList)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6261260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "StringAsList", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.ListAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlListConverter::*)(::System::Collections::IEnumerable*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlListConverter::ListAsString)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x6260edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                { "ListAsString", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlListConverter.CreateInvalidClrMappingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::XmlListConverter::*)(::System::Type*, ::System::Type*)>(
    &::System::Xml::Schema::XmlListConverter::CreateInvalidClrMappingException)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6260c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                             { "CreateInvalidClrMappingException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlValueConverter*& System::Xml::Schema::XmlListConverter::__cordl_internal_get_atomicConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicConverter;
}
constexpr ::System::Xml::Schema::XmlValueConverter* const& System::Xml::Schema::XmlListConverter::__cordl_internal_get_atomicConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicConverter;
}
constexpr void System::Xml::Schema::XmlListConverter::__cordl_internal_set_atomicConverter(::System::Xml::Schema::XmlValueConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atomicConverter = value;
}
inline void System::Xml::Schema::XmlListConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atomicConverter);
}
inline void System::Xml::Schema::XmlListConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atomicConverter, clrTypeDefault);
}
inline void System::Xml::Schema::XmlListConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlListConverter::Create(::System::Xml::Schema::XmlValueConverter* atomicConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "Create", {}, { ::i2c::type_of<::System::Xml::Schema::XmlValueConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(nullptr, ___internal_method, atomicConverter);
}
inline ::System::Object* System::Xml::Schema::XmlListConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlListConverter::ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline bool System::Xml::Schema::XmlListConverter::IsListType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "IsListType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
template <typename T> inline ::ArrayW<T> System::Xml::Schema::XmlListConverter::ToArray(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                           { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, list, nsResolver);
}
inline ::System::Collections::IList* System::Xml::Schema::XmlListConverter::ToList(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                           { "ToList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, list, nsResolver);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Xml::Schema::XmlListConverter::StringAsList(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(), { "StringAsList", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlListConverter::ListAsString(::System::Collections::IEnumerable* list, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                              { "ListAsString", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Xml::IXmlNamespaceResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, list, nsResolver);
}
inline ::System::Exception* System::Xml::Schema::XmlListConverter::CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlListConverter*>(),
                                                           { "CreateInvalidClrMappingException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, sourceType, destinationType);
}
inline ::System::Xml::Schema::XmlListConverter* System::Xml::Schema::XmlListConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlListConverter*>(atomicConverter));
}
inline ::System::Xml::Schema::XmlListConverter* System::Xml::Schema::XmlListConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlListConverter*>(atomicConverter, clrTypeDefault));
}
inline ::System::Xml::Schema::XmlListConverter* System::Xml::Schema::XmlListConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlListConverter*>(schemaType));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlListConverter::XmlListConverter() {}

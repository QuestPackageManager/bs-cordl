#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlReflectionImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionImporter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Serialization/zzzz__ReflectionHelper_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributes_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionImporter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter___c::*)()>(&::System::Xml::Serialization::XmlReflectionImporter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62fce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter___c._ImportClassMapping_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlReflectionImporter___c::*)(
    ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlReflectionMember*)>(&::System::Xml::Serialization::XmlReflectionImporter___c::_ImportClassMapping_b__28_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62fce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter___c*>(),
            { "<ImportClassMapping>b__28_0", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlReflectionImporter___c::setStaticF___9(::System::Xml::Serialization::XmlReflectionImporter___c* value) {
  ::cordl_internals::setStaticField<::System::Xml::Serialization::XmlReflectionImporter___c*, "<>9", ::System::Xml::Serialization::XmlReflectionImporter___c*>(
      std::forward<::System::Xml::Serialization::XmlReflectionImporter___c*>(value));
}
inline ::System::Xml::Serialization::XmlReflectionImporter___c* System::Xml::Serialization::XmlReflectionImporter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Xml::Serialization::XmlReflectionImporter___c*, "<>9", ::System::Xml::Serialization::XmlReflectionImporter___c*>();
}
inline void System::Xml::Serialization::XmlReflectionImporter___c::setStaticF___9__28_0(::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*, "<>9__28_0", ::System::Xml::Serialization::XmlReflectionImporter___c*>(
      std::forward<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*>(value));
}
inline ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* System::Xml::Serialization::XmlReflectionImporter___c::getStaticF___9__28_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*, "<>9__28_0", ::System::Xml::Serialization::XmlReflectionImporter___c*>();
}
inline void System::Xml::Serialization::XmlReflectionImporter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::XmlReflectionImporter___c::_ImportClassMapping_b__28_0(::System::Xml::Serialization::XmlReflectionMember* m1,
                                                                                                  ::System::Xml::Serialization::XmlReflectionMember* m2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter___c*>(),
          { "<ImportClassMapping>b__28_0", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, m1, m2);
}
inline ::System::Xml::Serialization::XmlReflectionImporter___c* System::Xml::Serialization::XmlReflectionImporter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlReflectionImporter___c*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlReflectionImporter___c::XmlReflectionImporter___c() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::XmlAttributeOverrides*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62f64f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f65e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                                                           { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
        &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x62f65f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x62f67a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportTypeMapping",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CreateTypeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CreateTypeMapping)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x62f8fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "CreateTypeMapping",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportClassMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62f93fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportClassMapping",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportClassMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping)> {
  constexpr static std::size_t size = 0xe24;
  constexpr static std::size_t addrs = 0x62f6c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "ImportClassMapping",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.RegisterDerivedMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlReflectionImporter::RegisterDerivedMap)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62fabc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "RegisterDerivedMap", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(&::System::Xml::Serialization::XmlReflectionImporter::GetTypeNamespace)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x62f9490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "GetTypeNamespace",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportListMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::System::Xml::Serialization::XmlAttributes*, int32_t)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62fadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "ImportListMapping",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportListMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW,
                                                            ::System::Xml::Serialization::XmlAttributes*, int32_t)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping)> {
  constexpr static std::size_t size = 0xc4c;
  constexpr static std::size_t addrs = 0x62f7a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "ImportListMapping",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportXmlNodeMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportXmlNodeMapping)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x62f8670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportXmlNodeMapping",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportPrimitiveMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportPrimitiveMapping)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62f87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportPrimitiveMapping",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportEnumMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportEnumMapping)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x62f88ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportEnumMapping",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportXmlSerializableMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportXmlSerializableMapping)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x62f8e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "ImportXmlSerializableMapping",
                              {},
                              { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportIncludedTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportIncludedTypes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x62faca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                                                           { "ImportIncludedTypes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetReflectionMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(&::System::Xml::Serialization::XmlReflectionImporter::GetReflectionMembers)> {
  constexpr static std::size_t size = 0xca4;
  constexpr static std::size_t addrs = 0x62f95bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "GetReflectionMembers", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CreateMapMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapMember* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlReflectionMember*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CreateMapMember)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x62fa2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                            { "CreateMapMember", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportElementInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW, ::StringW, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*,
                                                            ::System::Xml::Serialization::XmlAttributes*)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportElementInfo)> {
  constexpr static std::size_t size = 0xef0;
  constexpr static std::size_t addrs = 0x62fb490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                { "ImportElementInfo",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportAnyElementInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::StringW, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlTypeMapMemberElement*,
                                                            ::System::Xml::Serialization::XmlAttributes*)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportAnyElementInfo)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x62fae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                { "ImportAnyElementInfo",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(),
                                                    ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTextElementInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTextElementInfo)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x62fc544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "ImportTextElementInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(),
                                                                 ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CanBeNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CanBeNull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62f9394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "CanBeNull", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.IncludeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::IncludeType)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x62fc8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "IncludeType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::GetDefaultValue)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x62fc380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                             { "GetDefaultValue", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_initialDefaultNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialDefaultNamespace;
}
constexpr ::StringW const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_initialDefaultNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialDefaultNamespace;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_initialDefaultNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialDefaultNamespace = value;
}
constexpr ::System::Xml::Serialization::XmlAttributeOverrides*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_attributeOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverrides;
}
constexpr ::System::Xml::Serialization::XmlAttributeOverrides* const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_attributeOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverrides;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_attributeOverrides(::System::Xml::Serialization::XmlAttributeOverrides* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeOverrides = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_includedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_includedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_includedTypes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includedTypes = value;
}
constexpr ::System::Xml::Serialization::ReflectionHelper*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Xml::Serialization::ReflectionHelper* const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_helper(::System::Xml::Serialization::ReflectionHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
constexpr int32_t& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_arrayChoiceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayChoiceCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_arrayChoiceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayChoiceCount;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_arrayChoiceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayChoiceCount = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_relatedMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_relatedMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_relatedMaps(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relatedMaps = value;
}
constexpr bool& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_allowPrivateTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrivateTypes;
}
constexpr bool const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_allowPrivateTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrivateTypes;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_allowPrivateTypes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowPrivateTypes = value;
}
inline void System::Xml::Serialization::XmlReflectionImporter::setStaticF_errSimple(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "errSimple", ::System::Xml::Serialization::XmlReflectionImporter*>(std::forward<::StringW>(value));
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::getStaticF_errSimple() {
  return ::cordl_internals::getStaticField<::StringW, "errSimple", ::System::Xml::Serialization::XmlReflectionImporter*>();
}
inline void System::Xml::Serialization::XmlReflectionImporter::setStaticF_errSimple2(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "errSimple2", ::System::Xml::Serialization::XmlReflectionImporter*>(std::forward<::StringW>(value));
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::getStaticF_errSimple2() {
  return ::cordl_internals::getStaticField<::StringW, "errSimple2", ::System::Xml::Serialization::XmlReflectionImporter*>();
}
inline void System::Xml::Serialization::XmlReflectionImporter::_ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW defaultNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeOverrides, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                                                         { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
          { "ImportTypeMapping", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::CreateTypeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultXmlType, ::StringW defaultNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "CreateTypeMapping",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultXmlType, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                           ::StringW defaultNamespace, bool isBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "ImportClassMapping",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type, root, defaultNamespace, isBaseType);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                           ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                           ::StringW defaultNamespace, bool isBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "ImportClassMapping",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace, isBaseType);
}
inline void System::Xml::Serialization::XmlReflectionImporter::RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Xml::Serialization::XmlTypeMapping* derivedMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "RegisterDerivedMap", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, derivedMap);
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::GetTypeNamespace(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
          { "GetTypeNamespace", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                                                          int32_t nestingLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "ImportListMapping",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type, root, defaultNamespace, atts, nestingLevel);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                                                          int32_t nestingLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "ImportListMapping",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace, atts, nestingLevel);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                             ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                             ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "ImportXmlNodeMapping",
                            {},
                            { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                               ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                               ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "ImportPrimitiveMapping",
                            {},
                            { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportEnumMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
          { "ImportEnumMapping", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                                     ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "ImportXmlSerializableMapping",
                            {},
                            { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline void System::Xml::Serialization::XmlReflectionImporter::ImportIncludedTypes(::System::Type* type, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                                                         { "ImportIncludedTypes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, defaultNamespace);
}
inline ::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* System::Xml::Serialization::XmlReflectionImporter::GetReflectionMembers(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "GetReflectionMembers", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>*>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlTypeMapMember*
System::Xml::Serialization::XmlReflectionImporter::CreateMapMember(::System::Type* declaringType, ::System::Xml::Serialization::XmlReflectionMember* rmember, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                          { "CreateMapMember", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMember*>(this, ___internal_method, declaringType, rmember, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlReflectionImporter::ImportElementInfo(::System::Type* cls, ::StringW defaultName,
                                                                                                                                     ::StringW defaultNamespace, ::System::Type* defaultType,
                                                                                                                                     ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                                                                                                                     ::System::Xml::Serialization::XmlAttributes* atts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                              { "ImportElementInfo",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(this, ___internal_method, cls, defaultName, defaultNamespace, defaultType, member, atts);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlReflectionImporter::ImportAnyElementInfo(::StringW defaultNamespace,
                                                                                                                                        ::System::Xml::Serialization::XmlReflectionMember* rmember,
                                                                                                                                        ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                                                                                                                        ::System::Xml::Serialization::XmlAttributes* atts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                              { "ImportAnyElementInfo",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::XmlReflectionMember*>(),
                                                  ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(this, ___internal_method, defaultNamespace, rmember, member, atts);
}
inline void System::Xml::Serialization::XmlReflectionImporter::ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* list, ::System::Type* defaultType,
                                                                                     ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "ImportTextElementInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMemberElement*>(), ::i2c::type_of<::System::Xml::Serialization::XmlAttributes*>(),
                                                               ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, defaultType, member, atts, defaultNamespace);
}
inline bool System::Xml::Serialization::XmlReflectionImporter::CanBeNull(::System::Xml::Serialization::TypeData* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "CanBeNull", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline void System::Xml::Serialization::XmlReflectionImporter::IncludeType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(), { "IncludeType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlReflectionImporter::GetDefaultValue(::System::Xml::Serialization::TypeData* typeData, ::System::Object* defaultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlReflectionImporter*>(),
                                                           { "GetDefaultValue", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeData, defaultValue);
}
inline ::System::Xml::Serialization::XmlReflectionImporter* System::Xml::Serialization::XmlReflectionImporter::New_ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides,
                                                                                                                        ::StringW defaultNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlReflectionImporter*>(attributeOverrides, defaultNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlReflectionImporter::XmlReflectionImporter() {}

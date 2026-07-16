#pragma once
// IWYU pragma private; include "System/Data/XDRSchema.hpp"
#include "System/Data/zzzz__XMLSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XDRSchema_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__XDRSchema_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::XDRSchema_NameType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema_NameType::*)(::StringW, ::System::Type*)>(&::System::Data::XDRSchema_NameType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6050cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema_NameType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema_NameType.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::XDRSchema_NameType::*)(::System::Object*)>(&::System::Data::XDRSchema_NameType::CompareTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6050cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema_NameType*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XDRSchema_NameType::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Data::XDRSchema_NameType::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Data::XDRSchema_NameType::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Type*& System::Data::XDRSchema_NameType::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Data::XDRSchema_NameType::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Data::XDRSchema_NameType::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Data::XDRSchema_NameType::_ctor(::StringW n, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema_NameType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, t);
}
inline int32_t System::Data::XDRSchema_NameType::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema_NameType*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Data::XDRSchema_NameType* System::Data::XDRSchema_NameType::New_ctor(::StringW n, ::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XDRSchema_NameType*>(n, t));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::XDRSchema_NameType::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::XDRSchema_NameType::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::XDRSchema_NameType::XDRSchema_NameType() {}
//  Writing Method size for method: ::System::Data::XDRSchema._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Data::DataSet*, bool)>(&::System::Data::XDRSchema::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x604d588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataSet*)>(&::System::Data::XDRSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x604d5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.FindTypeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::FindTypeNode)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x604d9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.IsTextOnlyContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::IsTextOnlyContent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x604dd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "IsTextOnlyContent", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.IsXDRField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::IsXDRField)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x604df00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "IsXDRField", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::HandleTable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x604d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "HandleTable", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.FindNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::XDRSchema_NameType* (*)(::StringW)>(&::System::Data::XDRSchema::FindNameType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x604e928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "FindNameType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.ParseDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::XDRSchema::*)(::StringW, ::StringW)>(&::System::Data::XDRSchema::ParseDataType)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x604ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "ParseDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetInstanceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::GetInstanceName)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x604eb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "GetInstanceName", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*)>(&::System::Data::XDRSchema::HandleColumn)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x604ecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "HandleColumn", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Data::XDRSchema::GetMinMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x604e050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                                                { "GetMinMax", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, bool, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Data::XDRSchema::GetMinMax)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x604f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                            { "GetMinMax", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleTypeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*, ::System::Collections::ArrayList*)>(
    &::System::Data::XDRSchema::HandleTypeNode)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x604fde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::XDRSchema*>(),
            { "HandleTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.InstantiateTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::InstantiateTable)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x604e29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                            { "InstantiateTable", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.InstantiateSimpleTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::InstantiateSimpleTable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x604e060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                                                             { "InstantiateSimpleTable", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XDRSchema::__cordl_internal_get__schemaName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr ::StringW const& System::Data::XDRSchema::__cordl_internal_get__schemaName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaName = value;
}
constexpr ::StringW& System::Data::XDRSchema::__cordl_internal_get__schemaUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaUri;
}
constexpr ::StringW const& System::Data::XDRSchema::__cordl_internal_get__schemaUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaUri;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaUri = value;
}
constexpr ::System::Xml::XmlElement*& System::Data::XDRSchema::__cordl_internal_get__schemaRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaRoot;
}
constexpr ::System::Xml::XmlElement* const& System::Data::XDRSchema::__cordl_internal_get__schemaRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaRoot;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaRoot(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaRoot = value;
}
constexpr ::System::Data::DataSet*& System::Data::XDRSchema::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::System::Data::DataSet* const& System::Data::XDRSchema::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ds = value;
}
inline void System::Data::XDRSchema::setStaticF_s_colonArray(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_colonArray", ::System::Data::XDRSchema*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Data::XDRSchema::getStaticF_s_colonArray() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_colonArray", ::System::Data::XDRSchema*>();
}
inline void System::Data::XDRSchema::setStaticF_s_mapNameTypeXdr(::ArrayW<::System::Data::XDRSchema_NameType*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::XDRSchema_NameType*>, "s_mapNameTypeXdr", ::System::Data::XDRSchema*>(std::forward<::ArrayW<::System::Data::XDRSchema_NameType*>>(value));
}
inline ::ArrayW<::System::Data::XDRSchema_NameType*> System::Data::XDRSchema::getStaticF_s_mapNameTypeXdr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::XDRSchema_NameType*>, "s_mapNameTypeXdr", ::System::Data::XDRSchema*>();
}
inline void System::Data::XDRSchema::setStaticF_s_enumerationNameType(::System::Data::XDRSchema_NameType* value) {
  ::cordl_internals::setStaticField<::System::Data::XDRSchema_NameType*, "s_enumerationNameType", ::System::Data::XDRSchema*>(std::forward<::System::Data::XDRSchema_NameType*>(value));
}
inline ::System::Data::XDRSchema_NameType* System::Data::XDRSchema::getStaticF_s_enumerationNameType() {
  return ::cordl_internals::getStaticField<::System::Data::XDRSchema_NameType*, "s_enumerationNameType", ::System::Data::XDRSchema*>();
}
inline void System::Data::XDRSchema::_ctor(::System::Data::DataSet* ds, bool fInline) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ds, fInline);
}
inline void System::Data::XDRSchema::LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "LoadSchema", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaRoot, ds);
}
inline ::System::Xml::XmlElement* System::Data::XDRSchema::FindTypeNode(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "FindTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, node);
}
inline bool System::Data::XDRSchema::IsTextOnlyContent(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "IsTextOnlyContent", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool System::Data::XDRSchema::IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "IsXDRField", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, typeNode);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::HandleTable(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "HandleTable", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, node);
}
inline ::System::Data::XDRSchema_NameType* System::Data::XDRSchema::FindNameType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "FindNameType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::XDRSchema_NameType*>(nullptr, ___internal_method, name);
}
inline ::System::Type* System::Data::XDRSchema::ParseDataType(::StringW dt, ::StringW dtValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "ParseDataType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, dt, dtValues);
}
inline ::StringW System::Data::XDRSchema::GetInstanceName(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "GetInstanceName", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node);
}
inline void System::Data::XDRSchema::HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(), { "HandleColumn", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, table);
}
inline void System::Data::XDRSchema::GetMinMax(::System::Xml::XmlElement* elNode, ::by_ref<int32_t> minOccurs, ::by_ref<int32_t> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                                              { "GetMinMax", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elNode, minOccurs, maxOccurs);
}
inline void System::Data::XDRSchema::GetMinMax(::System::Xml::XmlElement* elNode, bool isAttribute, ::by_ref<int32_t> minOccurs, ::by_ref<int32_t> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                          { "GetMinMax", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elNode, isAttribute, minOccurs, maxOccurs);
}
inline void System::Data::XDRSchema::HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::XDRSchema*>(),
                       { "HandleTypeNode", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeNode, table, tableChildren);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                          { "InstantiateTable", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, dataSet, node, typeNode);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::XDRSchema*>(),
                                                           { "InstantiateSimpleTable", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, dataSet, node);
}
inline ::System::Data::XDRSchema* System::Data::XDRSchema::New_ctor(::System::Data::DataSet* ds, bool fInline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::XDRSchema*>(ds, fInline));
}
// Ctor Parameters []
constexpr ::System::Data::XDRSchema::XDRSchema() {}

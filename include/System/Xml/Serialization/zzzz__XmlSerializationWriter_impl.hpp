#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriter.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriteCallback_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerNamespaces_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::*)()>(
    &::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6304cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::System::Type* const& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_TypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_TypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeName;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_set_TypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TypeName = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_TypeNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeNs;
}
constexpr ::StringW const& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_TypeNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeNs;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_set_TypeNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TypeNs = value;
}
constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback*& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback* const& System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_get_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::__cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationWriteCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Callback = value;
}
inline void System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo* System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo::XmlSerializationWriter_WriteCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6301878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlSerializerNamespaces*)>(&::System::Xml::Serialization::XmlSerializationWriter::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x63018dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializerNamespaces*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.get_Writer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (::System::Xml::Serialization::XmlSerializationWriter::*)()>(
    &::System::Xml::Serialization::XmlSerializationWriter::get_Writer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63019fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "get_Writer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.AddWriteCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::System::Type*, ::StringW, ::StringW, ::System::Xml::Serialization::XmlSerializationWriteCallback*)>(&::System::Xml::Serialization::XmlSerializationWriter::AddWriteCallback)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6301a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "AddWriteCallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Xml::Serialization::XmlSerializationWriteCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.CreateUnknownAnyElementException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownAnyElementException)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6301adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "CreateUnknownAnyElementException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.CreateUnknownTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6301bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.CreateUnknownTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6301bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.FromXmlQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::FromXmlQualifiedName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6301ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "FromXmlQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::GetId)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6301e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "GetId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.AlreadyQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::AlreadyQueued)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6301f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "AlreadyQueued", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.GetNamespacePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::GetNamespacePrefix)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6301f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "GetNamespacePrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.GetQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::GetQualifiedName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6301d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "GetQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.InitCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::InitCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.TopLevelElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::TopLevelElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6302148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "TopLevelElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteAttribute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6302154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63020dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                { "WriteAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteXmlNode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6302168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::XmlNode*, ::StringW, ::StringW, bool, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteElementEncoded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6302214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
            { "WriteElementEncoded", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::XmlNode*, ::StringW, ::StringW, bool, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteElementLiteral)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6302414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
            { "WriteElementLiteral", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6302610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                         { "WriteElementQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::StringW, ::StringW, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6302618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                            { "WriteElementQualifiedName",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteElementString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630281c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteElementString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteElementString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW, ::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteElementString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6302824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                         { "WriteElementString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6302800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x630297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteEndElement", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNamespaceDeclarations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::Serialization::XmlSerializerNamespaces*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNamespaceDeclarations)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x63029bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteNamespaceDeclarations", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializerNamespaces*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullableQualifiedNameEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::StringW, ::StringW, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameEncoded)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6302dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                            { "WriteNullableQualifiedNameEncoded",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullableQualifiedNameLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameLiteral)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6302e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                            { "WriteNullableQualifiedNameLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullableStringEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW, ::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringEncoded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6302f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
            { "WriteNullableStringEncoded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullableStringLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringLiteral)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6302f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteNullableStringLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullTagEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNullTagEncoded)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6302308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteNullTagEncoded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteNullTagLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteNullTagLiteral)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6302508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteNullTagLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WritePotentiallyReferencingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Object*, ::System::Type*, bool, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WritePotentiallyReferencingElement)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x6302f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WritePotentiallyReferencingElement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteReferencedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteReferencedElements)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x630356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteReferencedElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.IsPrimitiveArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::IsPrimitiveArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63034bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "IsPrimitiveArray", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Object*, ::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteArray)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x63037cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteArray", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteReferencingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteReferencingElement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6303b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                            { "WriteReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.CheckReferenceQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::CheckReferenceQueue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x630343c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CheckReferenceQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::Serialization::IXmlSerializable*, ::StringW, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6303cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
            { "WriteSerializable", {}, { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::System::Xml::Serialization::IXmlSerializable*, ::StringW, ::StringW, bool, bool)>(&::System::Xml::Serialization::XmlSerializationWriter::WriteSerializable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6303cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteSerializable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)()>(&::System::Xml::Serialization::XmlSerializationWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6303ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteStartDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6303f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6303f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                         { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(
    ::StringW, ::StringW, ::System::Object*, bool, ::System::Collections::ICollection*)>(&::System::Xml::Serialization::XmlSerializationWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x6303f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteStartElement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteTypedPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteTypedPrimitive)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6304778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                         { "WriteTypedPrimitive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW)>(&::System::Xml::Serialization::XmlSerializationWriter::WriteValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6304a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::System::Xml::XmlNode*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteXmlAttribute)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6304a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                             { "WriteXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriter.WriteXsiType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializationWriter::WriteXsiType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x630274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                           { "WriteXsiType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_idGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idGenerator;
}
constexpr ::System::Runtime::Serialization::ObjectIDGenerator* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_idGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idGenerator;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idGenerator = value;
}
constexpr int32_t& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_qnameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_qnameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameCount;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_qnameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnameCount = value;
}
constexpr bool& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_topLevelElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElement;
}
constexpr bool const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_topLevelElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElement;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_topLevelElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLevelElement = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_namespaces(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
constexpr ::System::Xml::XmlWriter*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlWriter* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_writer(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
constexpr ::System::Collections::Queue*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_referencedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedElements;
}
constexpr ::System::Collections::Queue* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_referencedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedElements;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_referencedElements(::System::Collections::Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referencedElements = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbacks;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbacks;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_callbacks(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callbacks = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_serializedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedObjects;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_get_serializedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedObjects;
}
constexpr void System::Xml::Serialization::XmlSerializationWriter::__cordl_internal_set_serializedObjects(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedObjects = value;
}
inline void System::Xml::Serialization::XmlSerializationWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::Initialize(::System::Xml::XmlWriter* writer, ::System::Xml::Serialization::XmlSerializerNamespaces* nss) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                              { "Initialize", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlSerializerNamespaces*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, nss);
}
inline ::System::Xml::XmlWriter* System::Xml::Serialization::XmlSerializationWriter::get_Writer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "get_Writer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::AddWriteCallback(::System::Type* type, ::StringW typeName, ::StringW typeNs,
                                                                                 ::System::Xml::Serialization::XmlSerializationWriteCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "AddWriteCallback",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Xml::Serialization::XmlSerializationWriteCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, typeName, typeNs, callback);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationWriter::CreateUnknownAnyElementException(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "CreateUnknownAnyElementException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, name, ns);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, o);
}
inline ::System::Exception* System::Xml::Serialization::XmlSerializationWriter::CreateUnknownTypeException(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CreateUnknownTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, type);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriter::FromXmlQualifiedName(::System::Xml::XmlQualifiedName* xmlQualifiedName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "FromXmlQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, xmlQualifiedName);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriter::GetId(::System::Object* o, bool addToReferencesList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "GetId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, o, addToReferencesList);
}
inline bool System::Xml::Serialization::XmlSerializationWriter::AlreadyQueued(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "AlreadyQueued", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ob);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriter::GetNamespacePrefix(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "GetNamespacePrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriter::GetQualifiedName(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "GetQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, ns);
}
inline void System::Xml::Serialization::XmlSerializationWriter::InitCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::TopLevelElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "TopLevelElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteAttribute(::StringW localName, ::StringW ns, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteAttribute(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                              { "WriteAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteXmlNode(::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementEncoded(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
          { "WriteElementEncoded", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, name, ns, isNullable, any);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementLiteral(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
          { "WriteElementLiteral", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, name, ns, isNullable, any);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                              { "WriteElementQualifiedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value,
                                                                                          ::System::Xml::XmlQualifiedName* xsiType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                          { "WriteElementQualifiedName",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns, value, xsiType);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementString(::StringW localName, ::StringW ns, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteElementString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteElementString(::StringW localName, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                       { "WriteElementString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns, value, xsiType);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteEndElement(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteEndElement", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces* xmlns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteNamespaceDeclarations", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializerNamespaces*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlns);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameEncoded(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value,
                                                                                                  ::System::Xml::XmlQualifiedName* xsiType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                          { "WriteNullableQualifiedNameEncoded",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, value, xsiType);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullableQualifiedNameLiteral(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                       { "WriteNullableQualifiedNameLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringEncoded(::StringW name, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
          { "WriteNullableStringEncoded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, value, xsiType);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullableStringLiteral(::StringW name, ::StringW ns, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteNullableStringLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullTagEncoded(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteNullTagEncoded", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteNullTagLiteral(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteNullTagLiteral", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WritePotentiallyReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, ::System::Type* ambientType, bool suppressReference,
                                                                                                   bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WritePotentiallyReferencingElement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, ns, o, ambientType, suppressReference, isNullable);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteReferencedElements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteReferencedElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlSerializationWriter::IsPrimitiveArray(::System::Xml::Serialization::TypeData* td) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "IsPrimitiveArray", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, td);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteArray(::System::Object* o, ::System::Xml::Serialization::TypeData* td) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteArray", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, td);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                       { "WriteReferencingElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, ns, o, isNullable);
}
inline void System::Xml::Serialization::XmlSerializationWriter::CheckReferenceQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "CheckReferenceQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
          { "WriteSerializable", {}, { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializable, name, ns, isNullable);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable,
                                                                                  bool wrapped) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteSerializable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::Serialization::IXmlSerializable*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializable, name, ns, isNullable, wrapped);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteStartDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(::StringW name, ::StringW ns, bool writePrefixed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, writePrefixed);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, o);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                              { "WriteStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, o, writePrefixed);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed,
                                                                                  ::System::Collections::ICollection* namespaces) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteStartElement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, o, writePrefixed, namespaces);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteTypedPrimitive(::StringW name, ::StringW ns, ::System::Object* o, bool xsiType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                       { "WriteTypedPrimitive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns, o, xsiType);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(), { "WriteValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteXmlAttribute(::System::Xml::XmlNode* node, ::System::Object* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                           { "WriteXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, container);
}
inline void System::Xml::Serialization::XmlSerializationWriter::WriteXsiType(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationWriter*>(),
                                                                                         { "WriteXsiType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ns);
}
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializationWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationWriter::XmlSerializationWriter() {}

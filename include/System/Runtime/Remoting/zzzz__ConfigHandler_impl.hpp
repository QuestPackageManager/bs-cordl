#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\ConfigHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ConfigHandler_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(bool)>(&::System::Runtime::Remoting::ConfigHandler::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b22abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ValidatePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::ArrayW<::StringW>)>(
    &::System::Runtime::Remoting::ConfigHandler::ValidatePath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b24e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                           { "ValidatePath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.CheckPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&::System::Runtime::Remoting::ConfigHandler::CheckPath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b24f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "CheckPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnStartParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(
    &::System::Runtime::Remoting::ConfigHandler::OnStartParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b25040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnStartParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b25044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                           { "OnProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnIgnorableWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&::System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b25048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnIgnorableWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::OnStartElement)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b2504c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "OnStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ParseElement)> {
  constexpr static std::size_t size = 0xdb4;
  constexpr static std::size_t addrs = 0x5b2520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "ParseElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&::System::Runtime::Remoting::ConfigHandler::OnEndElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b279a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnEndElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadCustomProviderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5b25fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "ReadCustomProviderData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadLifetine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadLifetine)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5b26330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadLifetine", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ParseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&::System::Runtime::Remoting::ConfigHandler::ParseTime)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5b27a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ParseTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadChannel)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5b268a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "ReadChannel", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ProviderData* (
    ::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(&::System::Runtime::Remoting::ConfigHandler::ReadProvider)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5b26c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                { "ReadProvider", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadClientActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadClientActivated)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b27368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadClientActivated", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadServiceActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadServiceActivated)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b274b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                           { "ReadServiceActivated", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadClientWellKnown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b27080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadClientWellKnown", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadServiceWellKnown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b2717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                           { "ReadServiceWellKnown", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadInteropXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadInteropXml)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b27574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "ReadInteropXml", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadPreload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadPreload)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5b27720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadPreload", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.GetNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, ::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::GetNotNull)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b27dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                             { "GetNotNull", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ExtractAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ConfigHandler::*)(::by_ref<::StringW>)>(&::System::Runtime::Remoting::ConfigHandler::ExtractAssembly)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b27f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ExtractAssembly", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(&::System::Runtime::Remoting::ConfigHandler::OnChars)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnChars", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnEndParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(&::System::Runtime::Remoting::ConfigHandler::OnEndParsing)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b28010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnEndParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_typeEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeEntries;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_typeEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeEntries;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_typeEntries(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeEntries = value;
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_channelInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelInstances;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_channelInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelInstances;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_channelInstances(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channelInstances = value;
}
constexpr ::System::Runtime::Remoting::ChannelData*& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChannel;
}
constexpr ::System::Runtime::Remoting::ChannelData* const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChannel;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_currentChannel(::System::Runtime::Remoting::ChannelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentChannel = value;
}
constexpr ::System::Collections::Stack*& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentProviderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentProviderData;
}
constexpr ::System::Collections::Stack* const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentProviderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentProviderData;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_currentProviderData(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentProviderData = value;
}
constexpr ::StringW& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentClientUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentClientUrl;
}
constexpr ::StringW const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentClientUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentClientUrl;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_currentClientUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentClientUrl = value;
}
constexpr ::StringW& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_appName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appName;
}
constexpr ::StringW const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_appName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appName;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_appName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appName = value;
}
constexpr ::StringW& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentXmlPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentXmlPath;
}
constexpr ::StringW const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_currentXmlPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentXmlPath;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_currentXmlPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentXmlPath = value;
}
constexpr bool& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_onlyDelayedChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyDelayedChannels;
}
constexpr bool const& System::Runtime::Remoting::ConfigHandler::__cordl_internal_get_onlyDelayedChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlyDelayedChannels;
}
constexpr void System::Runtime::Remoting::ConfigHandler::__cordl_internal_set_onlyDelayedChannels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onlyDelayedChannels = value;
}
inline void System::Runtime::Remoting::ConfigHandler::_ctor(bool onlyDelayedChannels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyDelayedChannels);
}
inline void System::Runtime::Remoting::ConfigHandler::ValidatePath(::StringW element, ::ArrayW<::StringW> paths) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                         { "ValidatePath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, paths);
}
inline bool System::Runtime::Remoting::ConfigHandler::CheckPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "CheckPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline void System::Runtime::Remoting::ConfigHandler::OnStartParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnStartParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline void System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction(::StringW name, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                         { "OnProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnIgnorableWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::ConfigHandler::OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "OnStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ParseElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "ParseElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::OnEndElement(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnEndElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "ReadCustomProviderData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadLifetine(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadLifetine", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline ::System::TimeSpan System::Runtime::Remoting::ConfigHandler::ParseTime(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ParseTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadChannel(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                                                         { "ReadChannel", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs, isTemplate);
}
inline ::System::Runtime::Remoting::ProviderData* System::Runtime::Remoting::ConfigHandler::ReadProvider(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "ReadProvider", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ProviderData*>(this, ___internal_method, name, attrs, isTemplate);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadClientActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadClientActivated", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadServiceActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadServiceActivated", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadClientWellKnown", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadServiceWellKnown", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadInteropXml(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "ReadInteropXml", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs, isElement);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadPreload(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ReadPreload", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs);
}
inline ::StringW System::Runtime::Remoting::ConfigHandler::GetNotNull(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(),
                                                           { "GetNotNull", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser_IAttrList*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, attrs, name);
}
inline ::StringW System::Runtime::Remoting::ConfigHandler::ExtractAssembly(::by_ref<::StringW> type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "ExtractAssembly", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline void System::Runtime::Remoting::ConfigHandler::OnChars(::StringW ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnChars", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Runtime::Remoting::ConfigHandler::OnEndParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ConfigHandler*>(), { "OnEndParsing", {}, { ::i2c::type_of<::Mono::Xml::SmallXmlParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline ::System::Runtime::Remoting::ConfigHandler* System::Runtime::Remoting::ConfigHandler::New_ctor(bool onlyDelayedChannels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ConfigHandler*>(onlyDelayedChannels));
}
/// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IContentHandler"
constexpr System::Runtime::Remoting::ConfigHandler::operator ::Mono::Xml::SmallXmlParser_IContentHandler*() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IContentHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::Xml::SmallXmlParser_IContentHandler"
constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* System::Runtime::Remoting::ConfigHandler::i___Mono__Xml__SmallXmlParser_IContentHandler() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IContentHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ConfigHandler::ConfigHandler() {}

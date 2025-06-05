#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ConfigHandler.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(bool)>(&::System::Runtime::Remoting::ConfigHandler::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3cc8e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ValidatePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Runtime::Remoting::ConfigHandler::ValidatePath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3ccb2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ValidatePath", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.CheckPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::CheckPath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3ccb384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "CheckPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnStartParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(
    &::System::Runtime::Remoting::ConfigHandler::OnStartParsing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccb464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnStartParsing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccb468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnProcessingInstruction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnIgnorableWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccb46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnIgnorableWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::OnStartElement)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3ccb470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ParseElement)> {
  constexpr static std::size_t size = 0xe70;
  constexpr static std::size_t addrs = 0x3ccb624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::OnEndElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3ccddf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnEndElement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadCustomProviderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x3ccc494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadCustomProviderData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadLifetine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadLifetine)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x3ccc7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadLifetine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ParseTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::ParseTime)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x3ccde78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadChannel)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3cccd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadChannel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ProviderData* (
    ::System::Runtime::Remoting::ConfigHandler::*)(::StringW, ::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(&::System::Runtime::Remoting::ConfigHandler::ReadProvider)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x3ccd100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadProvider", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadClientActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadClientActivated)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3ccd7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadClientActivated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadServiceActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadServiceActivated)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3ccd910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadServiceActivated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadClientWellKnown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3ccd4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadClientWellKnown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadServiceWellKnown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3ccd5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadServiceWellKnown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadInteropXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, bool)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadInteropXml)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3ccd9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadInteropXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ReadPreload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*)>(
    &::System::Runtime::Remoting::ConfigHandler::ReadPreload)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3ccdb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadPreload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.GetNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser_IAttrList*, ::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::GetNotNull)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3cce254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "GetNotNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.ExtractAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ConfigHandler::*)(::ByRef<::StringW>)>(
    &::System::Runtime::Remoting::ConfigHandler::ExtractAssembly)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3cce388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ExtractAssembly",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::StringW)>(
    &::System::Runtime::Remoting::ConfigHandler::OnChars)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3cce448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnChars", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ConfigHandler.OnEndParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ConfigHandler::*)(::Mono::Xml::SmallXmlParser*)>(
    &::System::Runtime::Remoting::ConfigHandler::OnEndParsing)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3cce44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnEndParsing", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___channelInstances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentChannel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentProviderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentClientUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentXmlPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlyDelayedChannels);
}
inline void System::Runtime::Remoting::ConfigHandler::ValidatePath(::StringW element, ::ArrayW<::StringW, ::Array<::StringW>*> paths) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ValidatePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element, paths);
}
inline bool System::Runtime::Remoting::ConfigHandler::CheckPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "CheckPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
inline void System::Runtime::Remoting::ConfigHandler::OnStartParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnStartParsing", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline void System::Runtime::Remoting::ConfigHandler::OnProcessingInstruction(::StringW name, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnProcessingInstruction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void System::Runtime::Remoting::ConfigHandler::OnIgnorableWhitespace(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnIgnorableWhitespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::ConfigHandler::OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnStartElement", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ParseElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::OnEndElement(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnEndElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadCustomProviderData(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadCustomProviderData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadLifetine(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadLifetine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline ::System::TimeSpan System::Runtime::Remoting::ConfigHandler::ParseTime(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, s);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadChannel(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadChannel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs, isTemplate);
}
inline ::System::Runtime::Remoting::ProviderData* System::Runtime::Remoting::ConfigHandler::ReadProvider(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ProviderData*, false>(this, ___internal_method, name, attrs, isTemplate);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadClientActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadClientActivated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadServiceActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadServiceActivated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadClientWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadClientWellKnown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadServiceWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadServiceWellKnown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadInteropXml(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isElement) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadInteropXml", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs, isElement);
}
inline void System::Runtime::Remoting::ConfigHandler::ReadPreload(::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ReadPreload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs);
}
inline ::StringW System::Runtime::Remoting::ConfigHandler::GetNotNull(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "GetNotNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IAttrList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, attrs, name);
}
inline ::StringW System::Runtime::Remoting::ConfigHandler::ExtractAssembly(::ByRef<::StringW> type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "ExtractAssembly",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, type);
}
inline void System::Runtime::Remoting::ConfigHandler::OnChars(::StringW ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnChars", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Runtime::Remoting::ConfigHandler::OnEndParsing(::Mono::Xml::SmallXmlParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ConfigHandler*>::get(), "OnEndParsing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline ::System::Runtime::Remoting::ConfigHandler* System::Runtime::Remoting::ConfigHandler::New_ctor(bool onlyDelayedChannels) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::ConfigHandler*>(onlyDelayedChannels));
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

#pragma once
// IWYU pragma private; include "System/Xml/XmlEventCache.hpp"
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_impl.hpp"
#include "System/Xml/zzzz__XmlRawWriter_impl.hpp"
#include "System/Xml/zzzz__XmlEventCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlEventCache_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlEventCache_XmlEventType::XmlEventCache_XmlEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlEventCache_XmlEventType::XmlEventCache_XmlEventType() {}
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::DocType{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::StartElem{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::StartAttr{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::EndAttr{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::CData{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Comment{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::PI{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Whitespace{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::String{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Raw{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::EntRef{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::CharEnt{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::SurrCharEnt{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Base64{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::BinHex{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::XmlDecl1{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::XmlDecl2{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::StartContent{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::EndElem{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::FullEndElem{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Nmsp{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::EndBase64{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Close{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Flush{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEventType::Dispose{ static_cast<int32_t>(0x19) };
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(::System::Xml::XmlEventCache_XmlEventType)>(
    &::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW)>(
    &::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4314740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(
    ::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW, ::StringW, ::System::Object*)>(&::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4314750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.InitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache_XmlEvent::*)(::System::Xml::XmlEventCache_XmlEventType, ::System::Object*)>(
    &::System::Xml::XmlEventCache_XmlEvent::InitEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.get_EventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEventCache_XmlEventType (::System::Xml::XmlEventCache_XmlEvent::*)()>(
    &::System::Xml::XmlEventCache_XmlEvent::get_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4314774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_EventType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.get_String1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlEventCache_XmlEvent::*)()>(&::System::Xml::XmlEventCache_XmlEvent::get_String1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431477c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.get_String2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlEventCache_XmlEvent::*)()>(&::System::Xml::XmlEventCache_XmlEvent::get_String2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4314784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.get_String3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlEventCache_XmlEvent::*)()>(&::System::Xml::XmlEventCache_XmlEvent::get_String3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431478c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache_XmlEvent.get_Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XmlEventCache_XmlEvent::*)()>(&::System::Xml::XmlEventCache_XmlEvent::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4314794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_Object",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType);
}
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1);
}
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2);
}
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2, s3);
}
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2, s3, o);
}
inline void System::Xml::XmlEventCache_XmlEvent::InitEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "InitEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, o);
}
inline ::System::Xml::XmlEventCache_XmlEventType System::Xml::XmlEventCache_XmlEvent::get_EventType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_EventType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEventCache_XmlEventType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEventCache_XmlEvent::get_String1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEventCache_XmlEvent::get_String2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlEventCache_XmlEvent::get_String3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_String3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlEventCache_XmlEvent::get_Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache_XmlEvent>::get(), "get_Object",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "eventType", ty: "::System::Xml::XmlEventCache_XmlEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "s1", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "o", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlEventCache_XmlEvent::XmlEventCache_XmlEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o) noexcept {
  this->eventType = eventType;
  this->s1 = s1;
  this->s2 = s2;
  this->s3 = s3;
  this->o = o;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlEventCache_XmlEvent::XmlEventCache_XmlEvent() {}
//  Writing Method size for method: ::System::Xml::XmlEventCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, bool)>(&::System::Xml::XmlEventCache::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x430f498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.EndEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::EndEvents)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x430ffa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "EndEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.EventsToWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlEventCache::EventsToWriter)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x430ffb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "EventsToWriter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteDocType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4313ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4313f30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4313fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4313fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteCData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4313fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteComment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x431402c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteWhitespace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43140a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlEventCache::WriteChars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x43140c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlEventCache::WriteRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x43140f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteEntityRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4314134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(char16_t)>(&::System::Xml::XmlEventCache::WriteCharEntity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4314140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(char16_t, char16_t)>(
    &::System::Xml::XmlEventCache::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x43141fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlEventCache::WriteBase64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4314288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlEventCache::WriteBinHex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4314368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4314394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::Flush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431439c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43143a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(bool)>(&::System::Xml::XmlEventCache::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x43143b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlStandalone)>(
    &::System::Xml::XmlEventCache::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4314464;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW)>(&::System::Xml::XmlEventCache::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43144d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.StartElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::StartElementContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43144dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteEndElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43144e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43144f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x431450c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.WriteEndBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::WriteEndBase64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431451c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType)>(
    &::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4313e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW)>(
    &::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4313fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x431403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4313f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType, ::StringW, ::StringW, ::StringW, ::System::Object*)>(&::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4313ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.AddEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlEventCache::*)(::System::Xml::XmlEventCache_XmlEventType, ::System::Object*)>(
    &::System::Xml::XmlEventCache::AddEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x43141ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.NewEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlEventCache::*)()>(&::System::Xml::XmlEventCache::NewEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4314524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "NewEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlEventCache.ToBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlEventCache::ToBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x43142b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "ToBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*>>*&
System::Xml::XmlEventCache::__cordl_internal_get_pages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pages;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*>>* const&
System::Xml::XmlEventCache::__cordl_internal_get_pages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pages;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_pages(
    ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*>& System::Xml::XmlEventCache::__cordl_internal_get_pageCurr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageCurr;
}
constexpr ::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*> const& System::Xml::XmlEventCache::__cordl_internal_get_pageCurr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageCurr;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_pageCurr(::ArrayW<::System::Xml::XmlEventCache_XmlEvent, ::Array<::System::Xml::XmlEventCache_XmlEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pageCurr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlEventCache::__cordl_internal_get_pageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageSize;
}
constexpr int32_t const& System::Xml::XmlEventCache::__cordl_internal_get_pageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageSize;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_pageSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pageSize = value;
}
constexpr bool& System::Xml::XmlEventCache::__cordl_internal_get_hasRootNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRootNode;
}
constexpr bool const& System::Xml::XmlEventCache::__cordl_internal_get_hasRootNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRootNode;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_hasRootNode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasRootNode = value;
}
constexpr ::System::Xml::Xsl::Runtime::StringConcat& System::Xml::XmlEventCache::__cordl_internal_get_singleText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleText;
}
constexpr ::System::Xml::Xsl::Runtime::StringConcat const& System::Xml::XmlEventCache::__cordl_internal_get_singleText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleText;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_singleText(::System::Xml::Xsl::Runtime::StringConcat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleText = value;
}
constexpr ::StringW& System::Xml::XmlEventCache::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::StringW const& System::Xml::XmlEventCache::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::XmlEventCache::__cordl_internal_set_baseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlEventCache::_ctor(::StringW baseUri, bool hasRootNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, hasRootNode);
}
inline void System::Xml::XmlEventCache::EndEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "EndEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::EventsToWriter(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "EventsToWriter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlEventCache::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::XmlEventCache::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEventCache::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEventCache::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlEventCache::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlEventCache::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void System::Xml::XmlEventCache::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void System::Xml::XmlEventCache::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::XmlEventCache::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEventCache::WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEventCache::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Xml::XmlEventCache::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlEventCache::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlEventCache::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::XmlEventCache::WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEventCache::WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlEventCache::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlEventCache::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Xml::XmlEventCache::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::XmlEventCache::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmldecl);
}
inline void System::Xml::XmlEventCache::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEventCache::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::XmlEventCache::WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlEventCache::WriteEndBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2, s3);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, s1, s2, s3, o);
}
inline void System::Xml::XmlEventCache::AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "AddEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEventCache_XmlEventType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, o);
}
inline int32_t System::Xml::XmlEventCache::NewEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "NewEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlEventCache::ToBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlEventCache*>::get(), "ToBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, buffer, index, count);
}
inline ::System::Xml::XmlEventCache* System::Xml::XmlEventCache::New_ctor(::StringW baseUri, bool hasRootNode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlEventCache*>(baseUri, hasRootNode));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlEventCache::XmlEventCache() {}

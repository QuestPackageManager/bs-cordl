#pragma once
// IWYU pragma private; include "System\Xml\Linq\XObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "System/Xml/Linq/zzzz__SaveOptions_def.hpp"
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "System/Xml/Linq/zzzz__XElement_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.get_BaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::get_BaseUri)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61a7ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_BaseUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::get_NodeType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { ::i2c::class_of<::System::Xml::Linq::XObject*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.get_Parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XElement* (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::get_Parent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61ab6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_Parent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.AddAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XObject::*)(::System::Object*)>(&::System::Xml::Linq::XObject::AddAnnotation)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x61a99e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "AddAnnotation", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.AnnotationForSealedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Linq::XObject::*)(::System::Type*)>(&::System::Xml::Linq::XObject::AnnotationForSealedType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x61ab774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "AnnotationForSealedType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.System_Xml_IXmlLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61ab8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.System_Xml_IXmlLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61ab8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.System_Xml_IXmlLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61ab950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.get_HasBaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::get_HasBaseUri)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61a7b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_HasBaseUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.NotifyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XObject::*)(::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*)>(
    &::System::Xml::Linq::XObject::NotifyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61a3b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(),
                                                             { "NotifyChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Linq::XObjectChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.NotifyChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XObject::*)(::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*)>(
    &::System::Xml::Linq::XObject::NotifyChanging)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61a3a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(),
                                                             { "NotifyChanging", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Linq::XObjectChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.SetBaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XObject::*)(::StringW)>(&::System::Xml::Linq::XObject::SetBaseUri)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61a7a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SetBaseUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.SetLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::XObject::*)(int32_t, int32_t)>(&::System::Xml::Linq::XObject::SetLineInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61a7a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SetLineInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.SkipNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::SkipNotify)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61a4ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SkipNotify", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::XObject.GetSaveOptionsFromAnnotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::SaveOptions (::System::Xml::Linq::XObject::*)()>(&::System::Xml::Linq::XObject::GetSaveOptionsFromAnnotations)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61ab244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "GetSaveOptionsFromAnnotations", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XContainer*& System::Xml::Linq::XObject::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::System::Xml::Linq::XContainer* const& System::Xml::Linq::XObject::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void System::Xml::Linq::XObject::__cordl_internal_set_parent(::System::Xml::Linq::XContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::System::Object*& System::Xml::Linq::XObject::__cordl_internal_get_annotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotations;
}
constexpr ::System::Object* const& System::Xml::Linq::XObject::__cordl_internal_get_annotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotations;
}
constexpr void System::Xml::Linq::XObject::__cordl_internal_set_annotations(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___annotations = value;
}
inline void System::Xml::Linq::XObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Linq::XObject::get_BaseUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_BaseUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::Linq::XObject::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Linq::XObject*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::Linq::XElement* System::Xml::Linq::XObject::get_Parent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_Parent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XElement*>(this, ___internal_method);
}
inline void System::Xml::Linq::XObject::AddAnnotation(::System::Object* annotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "AddAnnotation", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotation);
}
inline ::System::Object* System::Xml::Linq::XObject::AnnotationForSealedType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "AnnotationForSealedType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
template <typename T> inline T System::Xml::Linq::XObject::Annotation() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "Annotation", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline bool System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::Linq::XObject::System_Xml_IXmlLineInfo_get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "System.Xml.IXmlLineInfo.get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Linq::XObject::get_HasBaseUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "get_HasBaseUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Linq::XObject::NotifyChanged(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(),
                                                           { "NotifyChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Linq::XObjectChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, e);
}
inline bool System::Xml::Linq::XObject::NotifyChanging(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(),
                                                           { "NotifyChanging", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Linq::XObjectChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, e);
}
inline void System::Xml::Linq::XObject::SetBaseUri(::StringW baseUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SetBaseUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri);
}
inline void System::Xml::Linq::XObject::SetLineInfo(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SetLineInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineNumber, linePosition);
}
inline bool System::Xml::Linq::XObject::SkipNotify() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "SkipNotify", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Linq::SaveOptions System::Xml::Linq::XObject::GetSaveOptionsFromAnnotations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::XObject*>(), { "GetSaveOptionsFromAnnotations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::SaveOptions>(this, ___internal_method);
}
inline ::System::Xml::Linq::XObject* System::Xml::Linq::XObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::XObject*>());
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::Linq::XObject::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::Linq::XObject::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XObject::XObject() {}

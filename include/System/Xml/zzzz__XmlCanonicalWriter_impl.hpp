#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_def.hpp"
#include "System/Xml/zzzz__XmlUTF8NodeWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter_AttributeSorter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter_AttributeSorter::*)(::System::Xml::XmlCanonicalWriter*)>(
    &::System::Xml::XmlCanonicalWriter_AttributeSorter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f66408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlCanonicalWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter_AttributeSorter.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter_AttributeSorter::*)()>(
    &::System::Xml::XmlCanonicalWriter_AttributeSorter::Sort)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f66410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(),
                                                                               "Sort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter_AttributeSorter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlCanonicalWriter_AttributeSorter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::XmlCanonicalWriter_AttributeSorter::Compare)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f66958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(),
                                                                               "Compare", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlCanonicalWriter*& System::Xml::XmlCanonicalWriter_AttributeSorter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlCanonicalWriter* const& System::Xml::XmlCanonicalWriter_AttributeSorter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlCanonicalWriter_AttributeSorter::__cordl_internal_set_writer(::System::Xml::XmlCanonicalWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlCanonicalWriter_AttributeSorter::_ctor(::System::Xml::XmlCanonicalWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlCanonicalWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlCanonicalWriter_AttributeSorter::Sort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(), "Sort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlCanonicalWriter_AttributeSorter::Compare(::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter_AttributeSorter*>::get(),
                                                                             "Compare", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj1, obj2);
}
inline ::System::Xml::XmlCanonicalWriter_AttributeSorter* System::Xml::XmlCanonicalWriter_AttributeSorter::New_ctor(::System::Xml::XmlCanonicalWriter* writer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlCanonicalWriter_AttributeSorter*>(writer));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Xml::XmlCanonicalWriter_AttributeSorter::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Xml::XmlCanonicalWriter_AttributeSorter::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter_AttributeSorter::XmlCanonicalWriter_AttributeSorter() {}
// Ctor Parameters [CppParam { name: "xmlnsAttributeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlnsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Xml::XmlCanonicalWriter_Scope::XmlCanonicalWriter_Scope(int32_t xmlnsAttributeCount, int32_t xmlnsOffset) noexcept {
  this->xmlnsAttributeCount = xmlnsAttributeCount;
  this->xmlnsOffset = xmlnsOffset;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter_Scope::XmlCanonicalWriter_Scope() {}
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlCanonicalWriter_Element::XmlCanonicalWriter_Element(int32_t prefixOffset, int32_t prefixLength, int32_t localNameOffset, int32_t localNameLength) noexcept {
  this->prefixOffset = prefixOffset;
  this->prefixLength = prefixLength;
  this->localNameOffset = localNameOffset;
  this->localNameLength = localNameLength;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter_Element::XmlCanonicalWriter_Element() {}
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "nsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlCanonicalWriter_Attribute::XmlCanonicalWriter_Attribute(int32_t prefixOffset, int32_t prefixLength, int32_t localNameOffset, int32_t localNameLength, int32_t nsOffset,
                                                                                    int32_t nsLength, int32_t offset, int32_t length) noexcept {
  this->prefixOffset = prefixOffset;
  this->prefixLength = prefixLength;
  this->localNameOffset = localNameOffset;
  this->localNameLength = localNameLength;
  this->nsOffset = nsOffset;
  this->nsLength = nsLength;
  this->offset = offset;
  this->length = length;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter_Attribute::XmlCanonicalWriter_Attribute() {}
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "nsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "referred",
// ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlCanonicalWriter_XmlnsAttribute::XmlCanonicalWriter_XmlnsAttribute(int32_t prefixOffset, int32_t prefixLength, int32_t nsOffset, int32_t nsLength, bool referred) noexcept {
  this->prefixOffset = prefixOffset;
  this->prefixLength = prefixLength;
  this->nsOffset = nsOffset;
  this->nsLength = nsLength;
  this->referred = referred;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter_XmlnsAttribute::XmlCanonicalWriter_XmlnsAttribute() {}
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f64684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f646bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::WriteDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f64768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteDeclaration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW)>(&::System::Xml::XmlCanonicalWriter::WriteComment)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f6476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteComment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.StartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::StartElement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f647d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "StartElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.EndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::EndElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f648d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "EndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlCanonicalWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f64918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.IsInclusivePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlCanonicalWriter::*)(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>)>(
    &::System::Xml::XmlCanonicalWriter::IsInclusivePrefix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f64ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "IsInclusivePrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEndStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(bool)>(&::System::Xml::XmlCanonicalWriter::WriteEndStartElement)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5f64df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndStartElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlCanonicalWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f653c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.EnsureXmlnsBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(int32_t)>(&::System::Xml::XmlCanonicalWriter::EnsureXmlnsBuffer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f65438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "EnsureXmlnsBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlCanonicalWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f65540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlCanonicalWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f65758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteStartAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f65880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndAttribute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(int32_t)>(&::System::Xml::XmlCanonicalWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f65a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteCharEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW)>(&::System::Xml::XmlCanonicalWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f65b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlCanonicalWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5f65bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteEscapedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlCanonicalWriter::WriteEscapedText)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f65abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(int32_t)>(&::System::Xml::XmlCanonicalWriter::WriteText)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f65b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlCanonicalWriter::WriteText)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f65e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::StringW)>(&::System::Xml::XmlCanonicalWriter::WriteText)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f6605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlCanonicalWriter::WriteText)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f660f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.ThrowIfClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::ThrowIfClosed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f646a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ThrowIfClosed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.ThrowClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::ThrowClosed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f6632c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ThrowClosed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.WriteXmlnsAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>)>(
    &::System::Xml::XmlCanonicalWriter::WriteXmlnsAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f651d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.SortAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::SortAttributes)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f65218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "SortAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>)>(
    &::System::Xml::XmlCanonicalWriter::AddAttribute)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f65900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.AddXmlnsAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>)>(
    &::System::Xml::XmlCanonicalWriter::AddXmlnsAttribute)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f64bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "AddXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.ResolvePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(int32_t, int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Xml::XmlCanonicalWriter::ResolvePrefix)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f66608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.ResolvePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>)>(
    &::System::Xml::XmlCanonicalWriter::ResolvePrefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f66734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.ResolvePrefixes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlCanonicalWriter::*)()>(&::System::Xml::XmlCanonicalWriter::ResolvePrefixes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f650a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefixes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlCanonicalWriter::*)(
    ::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>, ::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>)>(&::System::Xml::XmlCanonicalWriter::Compare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f665dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlCanonicalWriter::*)(
    ::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>, ::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>)>(&::System::Xml::XmlCanonicalWriter::Compare)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f66390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlCanonicalWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::XmlCanonicalWriter::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f66750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlCanonicalWriter::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Xml::XmlCanonicalWriter::Compare)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f66770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlCanonicalWriter.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlCanonicalWriter::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Xml::XmlCanonicalWriter::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f65134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlUTF8NodeWriter*& System::Xml::XmlCanonicalWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlUTF8NodeWriter* const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_writer(::System::Xml::XmlUTF8NodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementStream;
}
constexpr ::System::IO::MemoryStream* const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementStream;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_elementStream(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementBuffer;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_elementBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlUTF8NodeWriter*& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementWriter;
}
constexpr ::System::Xml::XmlUTF8NodeWriter* const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_elementWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementWriter;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_elementWriter(::System::Xml::XmlUTF8NodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlCanonicalWriter::__cordl_internal_get_inStartElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStartElement;
}
constexpr bool const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_inStartElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStartElement;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_inStartElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inStartElement = value;
}
constexpr int32_t& System::Xml::XmlCanonicalWriter::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*>& System::Xml::XmlCanonicalWriter::__cordl_internal_get_scopes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopes;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*> const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_scopes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopes;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_scopes(::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scopes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsAttributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsAttributeCount;
}
constexpr int32_t const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsAttributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsAttributeCount;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_xmlnsAttributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlnsAttributeCount = value;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*>&
System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsAttributes;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*> const&
System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsAttributes;
}
constexpr void
System::Xml::XmlCanonicalWriter::__cordl_internal_set_xmlnsAttributes(::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlnsAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*>& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*> const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_attributes(::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlCanonicalWriter_Attribute& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::System::Xml::XmlCanonicalWriter_Attribute const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_attribute(::System::Xml::XmlCanonicalWriter_Attribute value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attribute = value;
}
constexpr ::System::Xml::XmlCanonicalWriter_Element& System::Xml::XmlCanonicalWriter::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::System::Xml::XmlCanonicalWriter_Element const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_element(::System::Xml::XmlCanonicalWriter_Element value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___element = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsBuffer;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_xmlnsBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlnsBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsOffset;
}
constexpr int32_t const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_xmlnsOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlnsOffset;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_xmlnsOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlnsOffset = value;
}
constexpr bool& System::Xml::XmlCanonicalWriter::__cordl_internal_get_includeComments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeComments;
}
constexpr bool const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_includeComments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeComments;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_includeComments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeComments = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Xml::XmlCanonicalWriter::__cordl_internal_get_inclusivePrefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inclusivePrefixes;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Xml::XmlCanonicalWriter::__cordl_internal_get_inclusivePrefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inclusivePrefixes;
}
constexpr void System::Xml::XmlCanonicalWriter::__cordl_internal_set_inclusivePrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inclusivePrefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlCanonicalWriter::setStaticF_isEscapedAttributeChar(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "isEscapedAttributeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get>(
      std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> System::Xml::XmlCanonicalWriter::getStaticF_isEscapedAttributeChar() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "isEscapedAttributeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get>();
}
inline void System::Xml::XmlCanonicalWriter::setStaticF_isEscapedElementChar(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "isEscapedElementChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get>(
      std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> System::Xml::XmlCanonicalWriter::getStaticF_isEscapedElementChar() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "isEscapedElementChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get>();
}
inline void System::Xml::XmlCanonicalWriter::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::WriteDeclaration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteDeclaration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::WriteComment(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteComment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlCanonicalWriter::StartElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "StartElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::EndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "EndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::WriteStartElement(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName);
}
inline bool System::Xml::XmlCanonicalWriter::IsInclusivePrefix(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "IsInclusivePrefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlnsAttribute);
}
inline void System::Xml::XmlCanonicalWriter::WriteEndStartElement(bool isEmpty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndStartElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEmpty);
}
inline void System::Xml::XmlCanonicalWriter::WriteEndElement(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlCanonicalWriter::EnsureXmlnsBuffer(int32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "EnsureXmlnsBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, byteCount);
}
inline void System::Xml::XmlCanonicalWriter::WriteXmlnsAttribute(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::XmlCanonicalWriter::WriteStartAttribute(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteStartAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName);
}
inline void System::Xml::XmlCanonicalWriter::WriteEndAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEndAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::WriteCharEntity(int32_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteCharEntity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlCanonicalWriter::WriteEscapedText(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlCanonicalWriter::WriteEscapedText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlCanonicalWriter::WriteEscapedText(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteEscapedText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlCanonicalWriter::WriteText(int32_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::XmlCanonicalWriter::WriteText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlCanonicalWriter::WriteText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlCanonicalWriter::WriteText(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chars, offset, count);
}
inline void System::Xml::XmlCanonicalWriter::ThrowIfClosed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ThrowIfClosed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::ThrowClosed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ThrowClosed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::WriteXmlnsAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "WriteXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlnsAttribute);
}
inline void System::Xml::XmlCanonicalWriter::SortAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "SortAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlCanonicalWriter::AddAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::XmlCanonicalWriter::AddXmlnsAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "AddXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlnsAttribute);
}
inline void System::Xml::XmlCanonicalWriter::ResolvePrefix(int32_t prefixOffset, int32_t prefixLength, ::ByRef<int32_t> nsOffset, ::ByRef<int32_t> nsLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefixOffset, prefixLength, nsOffset, nsLength);
}
inline void System::Xml::XmlCanonicalWriter::ResolvePrefix(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::XmlCanonicalWriter::ResolvePrefixes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "ResolvePrefixes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlCanonicalWriter::Compare(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute1,
                                                        ::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, xmlnsAttribute1, xmlnsAttribute2);
}
inline int32_t System::Xml::XmlCanonicalWriter::Compare(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute1, ::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlCanonicalWriter_Attribute>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, attribute1, attribute2);
}
inline int32_t System::Xml::XmlCanonicalWriter::Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset1, int32_t length1, int32_t offset2, int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset1, length1, offset2, length2);
}
inline int32_t System::Xml::XmlCanonicalWriter::Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer1, int32_t offset1, int32_t length1, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer2, int32_t offset2,
                                                        int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer1, offset1, length1, buffer2, offset2, length2);
}
inline bool System::Xml::XmlCanonicalWriter::Equals(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer1, int32_t offset1, int32_t length1, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer2, int32_t offset2,
                                                    int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlCanonicalWriter*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, buffer1, offset1, length1, buffer2, offset2, length2);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCanonicalWriter::XmlCanonicalWriter() {}

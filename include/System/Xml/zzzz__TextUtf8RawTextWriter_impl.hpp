#pragma once
// IWYU pragma private; include "System/Xml/TextUtf8RawTextWriter.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_impl.hpp"
#include "System/Xml/zzzz__TextUtf8RawTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::TextUtf8RawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65daf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::TextUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::TextUtf8RawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)()>(&::System::Xml::TextUtf8RawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65daf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)()>(&::System::Xml::TextUtf8RawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65daf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteNamespaceDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.get_SupportsNamespaceDeclarationInChunks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::TextUtf8RawTextWriter::*)()>(&::System::Xml::TextUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65daf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteCData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65daf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(char16_t)>(&::System::Xml::TextUtf8RawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(char16_t, char16_t)>(&::System::Xml::TextUtf8RawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65daf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65daf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65daf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::TextUtf8RawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65dafa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::TextUtf8RawTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65dafb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TextUtf8RawTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TextUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::TextUtf8RawTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65dafcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 24 }));
    return ___internal_method;
  }
};
inline void System::Xml::TextUtf8RawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::TextUtf8RawTextWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns);
}
inline bool System::Xml::TextUtf8RawTextWriter::get_SupportsNamespaceDeclarationInChunks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteString(::StringW textBlock) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textBlock);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::TextUtf8RawTextWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TextUtf8RawTextWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::Xml::TextUtf8RawTextWriter* System::Xml::TextUtf8RawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::TextUtf8RawTextWriter*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::TextUtf8RawTextWriter::TextUtf8RawTextWriter() {}

#pragma once
// IWYU pragma private; include "System\Data\DataTextWriter.hpp"
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/Data/zzzz__DataTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Data::DataTextWriter.CreateWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWriter* (*)(::System::Xml::XmlWriter*)>(&::System::Data::DataTextWriter::CreateWriter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x607dee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::System::Xml::XmlWriter*)>(&::System::Data::DataTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6082e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.get_BaseStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::get_BaseStream)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x607ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { "get_BaseStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteStartDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(bool)>(&::System::Data::DataTextWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6082eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteEndDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Data::DataTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Data::DataTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Data::DataTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6082f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6082f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteCData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6082fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6082fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW, ::StringW)>(&::System::Data::DataTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6082fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(char16_t)>(&::System::Data::DataTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(char16_t, char16_t)>(&::System::Data::DataTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Data::DataTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60830a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Data::DataTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60830c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60830e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Data::DataTextWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Data::DataTextWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WriteState (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.WriteQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTextWriter::*)(::StringW, ::StringW)>(&::System::Data::DataTextWriter::WriteQualifiedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60831a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextWriter::*)(::StringW)>(&::System::Data::DataTextWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60831c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60831e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTextWriter.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTextWriter::*)()>(&::System::Data::DataTextWriter::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6083200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ::i2c::class_of<::System::Data::DataTextWriter*>(), 32 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Data::DataTextWriter::__cordl_internal_get__xmltextWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmltextWriter;
}
constexpr ::System::Xml::XmlWriter* const& System::Data::DataTextWriter::__cordl_internal_get__xmltextWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmltextWriter;
}
constexpr void System::Data::DataTextWriter::__cordl_internal_set__xmltextWriter(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmltextWriter = value;
}
inline ::System::Xml::XmlWriter* System::Data::DataTextWriter::CreateWriter(::System::Xml::XmlWriter* xw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { "CreateWriter", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWriter*>(nullptr, ___internal_method, xw);
}
inline void System::Data::DataTextWriter::_ctor(::System::Xml::XmlWriter* w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::System::IO::Stream* System::Data::DataTextWriter::get_BaseStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTextWriter*>(), { "get_BaseStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteStartDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteStartDocument(bool standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Data::DataTextWriter::WriteEndDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Data::DataTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Data::DataTextWriter::WriteEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteFullEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Data::DataTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteCData(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Data::DataTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Data::DataTextWriter::WriteProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, text);
}
inline void System::Data::DataTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Data::DataTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void System::Data::DataTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Data::DataTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Data::DataTextWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Data::DataTextWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Data::DataTextWriter::WriteRaw(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Data::DataTextWriter::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Data::DataTextWriter::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline ::System::Xml::WriteState System::Data::DataTextWriter::get_WriteState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WriteState>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataTextWriter::WriteQualifiedName(::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localName, ns);
}
inline ::StringW System::Data::DataTextWriter::LookupPrefix(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ns);
}
inline ::System::Xml::XmlSpace System::Data::DataTextWriter::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Data::DataTextWriter::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTextWriter*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Data::DataTextWriter* System::Data::DataTextWriter::New_ctor(::System::Xml::XmlWriter* w) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTextWriter*>(w));
}
// Ctor Parameters []
constexpr ::System::Data::DataTextWriter::DataTextWriter() {}

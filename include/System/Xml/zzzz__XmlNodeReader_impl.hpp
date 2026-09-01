#pragma once
// IWYU pragma private; include "System\Xml\XmlNodeReader.hpp"
#include "System/Xml/zzzz__ReadState_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlNodeReader_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNodeReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNodeReader::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62cb618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.IsInReadingStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::IsInReadingStates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62cb6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "IsInReadingStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62cb70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62cb728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_LocalName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62cb760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62cb798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_Prefix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62cb7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62cb838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cb870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62cb878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cb8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62cb8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62cb8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62cb904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62cb948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62cb998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62cb9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(::StringW)>(&::System::Xml::XmlNodeReader::GetAttribute)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62cba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlNodeReader::GetAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62cba40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(int32_t)>(&::System::Xml::XmlNodeReader::GetAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62cba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(::StringW)>(&::System::Xml::XmlNodeReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62cbaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlNodeReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62cbbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)(int32_t)>(&::System::Xml::XmlNodeReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x62cbcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62cbeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62cbf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::MoveToElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62cc07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cc15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(bool)>(&::System::Xml::XmlNodeReader::Read)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x62cc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "Read", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadNextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(bool)>(&::System::Xml::XmlNodeReader::ReadNextNode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x62cc274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadNextNode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.SetEndOfFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::SetEndOfFile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62cc568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "SetEndOfFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadAtZeroLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(bool)>(&::System::Xml::XmlNodeReader::ReadAtZeroLevel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62cc580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadAtZeroLevel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)(bool)>(&::System::Xml::XmlNodeReader::ReadForward)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x62cc468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadForward", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReSetReadingMarks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::ReSetReadingMarks)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62cc444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReSetReadingMarks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_EOF)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62cc5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::Close)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62cc61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_ReadState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cc628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::Skip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62cc630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::ReadString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62cc638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_HasAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_HasAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62cc6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_NameTable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62cc6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(::StringW)>(&::System::Xml::XmlNodeReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62cc710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62cc74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62cc7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlNodeReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62cc810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNodeReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlNodeReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62cc894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.FinishReadBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::FinishReadBinary)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62cbbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "FinishReadBinary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Xml::XmlNodeReader::*)(::System::Xml::XmlNamespaceScope)>(
    &::System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62cc918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(),
                                                             { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(::StringW)>(&::System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62cc930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlNodeReader::*)(::StringW)>(&::System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62cc948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReader.get_DtdInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlNodeReader::*)()>(&::System::Xml::XmlNodeReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62cc9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 74 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNodeReaderNavigator*& System::Xml::XmlNodeReader::__cordl_internal_get_readerNav() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerNav;
}
constexpr ::System::Xml::XmlNodeReaderNavigator* const& System::Xml::XmlNodeReader::__cordl_internal_get_readerNav() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerNav;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_readerNav(::System::Xml::XmlNodeReaderNavigator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerNav = value;
}
constexpr ::System::Xml::XmlNodeType& System::Xml::XmlNodeReader::__cordl_internal_get_nodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::XmlNodeReader::__cordl_internal_get_nodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_nodeType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeType = value;
}
constexpr int32_t& System::Xml::XmlNodeReader::__cordl_internal_get_curDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr int32_t const& System::Xml::XmlNodeReader::__cordl_internal_get_curDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_curDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curDepth = value;
}
constexpr ::System::Xml::ReadState& System::Xml::XmlNodeReader::__cordl_internal_get_readState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr ::System::Xml::ReadState const& System::Xml::XmlNodeReader::__cordl_internal_get_readState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_readState(::System::Xml::ReadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readState = value;
}
constexpr bool& System::Xml::XmlNodeReader::__cordl_internal_get_fEOF() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fEOF;
}
constexpr bool const& System::Xml::XmlNodeReader::__cordl_internal_get_fEOF() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fEOF;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_fEOF(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fEOF = value;
}
constexpr bool& System::Xml::XmlNodeReader::__cordl_internal_get_bResolveEntity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bResolveEntity;
}
constexpr bool const& System::Xml::XmlNodeReader::__cordl_internal_get_bResolveEntity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bResolveEntity;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_bResolveEntity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bResolveEntity = value;
}
constexpr bool& System::Xml::XmlNodeReader::__cordl_internal_get_bStartFromDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bStartFromDocument;
}
constexpr bool const& System::Xml::XmlNodeReader::__cordl_internal_get_bStartFromDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bStartFromDocument;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_bStartFromDocument(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bStartFromDocument = value;
}
constexpr bool& System::Xml::XmlNodeReader::__cordl_internal_get_bInReadBinary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bInReadBinary;
}
constexpr bool const& System::Xml::XmlNodeReader::__cordl_internal_get_bInReadBinary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bInReadBinary;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_bInReadBinary(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bInReadBinary = value;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper*& System::Xml::XmlNodeReader::__cordl_internal_get_readBinaryHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper* const& System::Xml::XmlNodeReader::__cordl_internal_get_readBinaryHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr void System::Xml::XmlNodeReader::__cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readBinaryHelper = value;
}
inline void System::Xml::XmlNodeReader::_ctor(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool System::Xml::XmlNodeReader::IsInReadingStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "IsInReadingStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlNodeReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNodeReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::get_CanResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlNodeReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlNodeReader::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNodeReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlNodeReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XmlNodeReader::GetAttribute(int32_t attributeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, attributeIndex);
}
inline bool System::Xml::XmlNodeReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XmlNodeReader::MoveToAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, namespaceURI);
}
inline void System::Xml::XmlNodeReader::MoveToAttribute(int32_t attributeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeIndex);
}
inline bool System::Xml::XmlNodeReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::Read(bool fSkipChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "Read", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fSkipChildren);
}
inline bool System::Xml::XmlNodeReader::ReadNextNode(bool fSkipChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadNextNode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fSkipChildren);
}
inline void System::Xml::XmlNodeReader::SetEndOfFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "SetEndOfFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::ReadAtZeroLevel(bool fSkipChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadAtZeroLevel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fSkipChildren);
}
inline bool System::Xml::XmlNodeReader::ReadForward(bool fSkipChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReadForward", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fSkipChildren);
}
inline void System::Xml::XmlNodeReader::ReSetReadingMarks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "ReSetReadingMarks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlNodeReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReader::Skip() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::ReadString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::get_HasAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlNodeReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlNodeReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNodeReader::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::XmlNodeReader::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::XmlNodeReader::FinishReadBinary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "FinishReadBinary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, namespaceName);
}
inline ::StringW System::Xml::XmlNodeReader::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNodeReader*>(), { "System.Xml.IXmlNamespaceResolver.LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlNodeReader::get_DtdInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNodeReader*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeReader* System::Xml::XmlNodeReader::New_ctor(::System::Xml::XmlNode* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNodeReader*>(node));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlNodeReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlNodeReader::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeReader::XmlNodeReader() {}

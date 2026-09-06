#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapter.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_NameTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_NamespaceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IXmlNamespaceResolver* (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_NamespaceResolver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_BaseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_BaseUri)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_ParsingBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_ParsingBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_ParsingBufferLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_ParsingBufferLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_CurrentPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_CurrentPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.set_CurrentPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(int32_t)>(&::System::Xml::IDtdParserAdapter::set_CurrentPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_LineNo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_LineNo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_LineStartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_LineStartPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_IsEof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_IsEof)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_EntityStackLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_EntityStackLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.get_IsEntityEolNormalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::get_IsEntityEolNormalized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.ReadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)()>(&::System::Xml::IDtdParserAdapter::ReadData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.OnNewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(int32_t)>(&::System::Xml::IDtdParserAdapter::OnNewLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.ParseNumericCharRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)(::System::Text::StringBuilder*)>(&::System::Xml::IDtdParserAdapter::ParseNumericCharRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.ParseNamedCharRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdParserAdapter::*)(bool, ::System::Text::StringBuilder*)>(&::System::Xml::IDtdParserAdapter::ParseNamedCharRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.ParsePI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::System::Text::StringBuilder*)>(&::System::Xml::IDtdParserAdapter::ParsePI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.ParseComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::System::Text::StringBuilder*)>(&::System::Xml::IDtdParserAdapter::ParseComment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.PushEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapter::*)(::System::Xml::IDtdEntityInfo*, ::by_ref<int32_t>)>(&::System::Xml::IDtdParserAdapter::PushEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.PopEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapter::*)(::by_ref<::System::Xml::IDtdEntityInfo*>, ::by_ref<int32_t>)>(
    &::System::Xml::IDtdParserAdapter::PopEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.PushExternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapter::*)(::StringW, ::StringW)>(&::System::Xml::IDtdParserAdapter::PushExternalSubset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.PushInternalDtd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::StringW, ::StringW)>(&::System::Xml::IDtdParserAdapter::PushInternalDtd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.OnSystemId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(
    &::System::Xml::IDtdParserAdapter::OnSystemId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.OnPublicId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::StringW, ::System::Xml::LineInfo, ::System::Xml::LineInfo)>(
    &::System::Xml::IDtdParserAdapter::OnPublicId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapter.Throw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IDtdParserAdapter::*)(::System::Exception*)>(&::System::Xml::IDtdParserAdapter::Throw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 24 }));
    return ___internal_method;
  }
};
inline ::System::Xml::XmlNameTable* System::Xml::IDtdParserAdapter::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::IXmlNamespaceResolver* System::Xml::IDtdParserAdapter::get_NamespaceResolver() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlNamespaceResolver*>(this, ___internal_method);
}
inline ::System::Uri* System::Xml::IDtdParserAdapter::get_BaseUri() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Xml::IDtdParserAdapter::get_ParsingBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdParserAdapter::get_ParsingBufferLength() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdParserAdapter::get_CurrentPosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::IDtdParserAdapter::set_CurrentPosition(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::IDtdParserAdapter::get_LineNo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdParserAdapter::get_LineStartPosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapter::get_IsEof() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdParserAdapter::get_EntityStackLength() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapter::get_IsEntityEolNormalized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdParserAdapter::ReadData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::IDtdParserAdapter::OnNewLine(int32_t pos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline int32_t System::Xml::IDtdParserAdapter::ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, internalSubsetBuilder);
}
inline int32_t System::Xml::IDtdParserAdapter::ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, expand, internalSubsetBuilder);
}
inline void System::Xml::IDtdParserAdapter::ParsePI(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline void System::Xml::IDtdParserAdapter::ParseComment(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline bool System::Xml::IDtdParserAdapter::PushEntity(::System::Xml::IDtdEntityInfo* entity, ::by_ref<int32_t> entityId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entity, entityId);
}
inline bool System::Xml::IDtdParserAdapter::PopEntity(::by_ref<::System::Xml::IDtdEntityInfo*> oldEntity, ::by_ref<int32_t> newEntityId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, oldEntity, newEntityId);
}
inline bool System::Xml::IDtdParserAdapter::PushExternalSubset(::StringW systemId, ::StringW publicId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, systemId, publicId);
}
inline void System::Xml::IDtdParserAdapter::PushInternalDtd(::StringW baseUri, ::StringW internalDtd) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri, internalDtd);
}
inline void System::Xml::IDtdParserAdapter::OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, systemId, keywordLineInfo, systemLiteralLineInfo);
}
inline void System::Xml::IDtdParserAdapter::OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicId, keywordLineInfo, publicLiteralLineInfo);
}
inline void System::Xml::IDtdParserAdapter::Throw(::System::Exception* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}

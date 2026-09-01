#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Platform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__Platform_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.GetNewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Org::BouncyCastle::Utilities::Platform::GetNewLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363de28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetNewLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.EqualsIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Utilities::Platform::EqualsIgnoreCase)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x363de30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "EqualsIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.GetEnvironmentVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Platform::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x363df1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetEnvironmentVariable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateNotImplementedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Platform::CreateNotImplementedException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x363dfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateNotImplementedException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)()>(&::Org::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x363e010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(int32_t)>(&::Org::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x363e068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Collections::ICollection*)>(&::Org::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x363e0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x363e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateHashtable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)()>(&::Org::BouncyCastle::Utilities::Platform::CreateHashtable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363e424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateHashtable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(int32_t)>(&::Org::BouncyCastle::Utilities::Platform::CreateHashtable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x363e480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.CreateHashtable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Utilities::Platform::CreateHashtable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x363e4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.ToLowerInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Platform::ToLowerInvariant)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x363e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "ToLowerInvariant", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.ToUpperInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Utilities::Platform::ToUpperInvariant)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x363deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "ToUpperInvariant", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Utilities::Platform::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x363a1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "Dispose", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*)>(&::Org::BouncyCastle::Utilities::Platform::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x363e5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "Dispose", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Utilities::Platform::IndexOf)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x363e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Utilities::Platform::LastIndexOf)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x363e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Utilities::Platform::StartsWith)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x363e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Utilities::Platform::EndsWith)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x363e768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform.GetTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Org::BouncyCastle::Utilities::Platform::GetTypeName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x363e7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetTypeName", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Platform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Platform::*)()>(&::Org::BouncyCastle::Utilities::Platform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363e8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Platform::setStaticF_InvariantCompareInfo(::System::Globalization::CompareInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CompareInfo*, "InvariantCompareInfo", ::Org::BouncyCastle::Utilities::Platform*>(
      std::forward<::System::Globalization::CompareInfo*>(value));
}
inline ::System::Globalization::CompareInfo* Org::BouncyCastle::Utilities::Platform::getStaticF_InvariantCompareInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::CompareInfo*, "InvariantCompareInfo", ::Org::BouncyCastle::Utilities::Platform*>();
}
inline void Org::BouncyCastle::Utilities::Platform::setStaticF_NewLine(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NewLine", ::Org::BouncyCastle::Utilities::Platform*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::getStaticF_NewLine() {
  return ::cordl_internals::getStaticField<::StringW, "NewLine", ::Org::BouncyCastle::Utilities::Platform*>();
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::GetNewLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetNewLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Platform::EqualsIgnoreCase(::StringW a, ::StringW b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "EqualsIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::GetEnvironmentVariable(::StringW variable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetEnvironmentVariable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variable);
}
inline ::System::Exception* Org::BouncyCastle::Utilities::Platform::CreateNotImplementedException(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateNotImplementedException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, message);
}
inline ::System::Collections::IList* Org::BouncyCastle::Utilities::Platform::CreateArrayList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Utilities::Platform::CreateArrayList(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, capacity);
}
inline ::System::Collections::IList* Org::BouncyCastle::Utilities::Platform::CreateArrayList(::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, collection);
}
inline ::System::Collections::IList* Org::BouncyCastle::Utilities::Platform::CreateArrayList(::System::Collections::IEnumerable* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateArrayList", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, collection);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Utilities::Platform::CreateHashtable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Utilities::Platform::CreateHashtable(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, capacity);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Utilities::Platform::CreateHashtable(::System::Collections::IDictionary* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "CreateHashtable", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, dictionary);
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::ToLowerInvariant(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "ToLowerInvariant", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::ToUpperInvariant(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "ToUpperInvariant", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline void Org::BouncyCastle::Utilities::Platform::Dispose(::System::IO::Stream* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "Dispose", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s);
}
inline void Org::BouncyCastle::Utilities::Platform::Dispose(::System::IO::TextWriter* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "Dispose", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline int32_t Org::BouncyCastle::Utilities::Platform::IndexOf(::StringW source, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value);
}
inline int32_t Org::BouncyCastle::Utilities::Platform::LastIndexOf(::StringW source, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value);
}
inline bool Org::BouncyCastle::Utilities::Platform::StartsWith(::StringW source, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, prefix);
}
inline bool Org::BouncyCastle::Utilities::Platform::EndsWith(::StringW source, ::StringW suffix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, suffix);
}
inline ::StringW Org::BouncyCastle::Utilities::Platform::GetTypeName(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { "GetTypeName", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Utilities::Platform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Platform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Platform* Org::BouncyCastle::Utilities::Platform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Platform*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Platform::Platform() {}

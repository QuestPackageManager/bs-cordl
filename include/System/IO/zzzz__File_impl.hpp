#pragma once
// IWYU pragma private; include "System\IO\File.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__File_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__FileSecurity_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::File.OpenText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamReader* (*)(::StringW)>(&::System::IO::File::OpenText)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c077e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.CreateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&::System::IO::File::CreateText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c078a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "CreateText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.AppendText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&::System::IO::File::AppendText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c0794c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "AppendText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c079f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, int32_t)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c07a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::File::Delete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c07a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Delete", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::File::Exists)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bfa48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Exists", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode)>(&::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c07b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(
    &::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c07b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::File*>(),
            { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&::System::IO::File::GetAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c07be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "GetAttributes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.OpenRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::OpenRead)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c07c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenRead", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.OpenWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::OpenWrite)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c07cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenWrite", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::File::ReadAllText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c07d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalReadAllText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::File::InternalReadAllText)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c07dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalReadAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::WriteAllText)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c07f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&::System::IO::File::WriteAllText)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5c08178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                             { "WriteAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::IO::File::ReadAllBytes)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c083ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllBytes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytesUnknownLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::FileStream*)>(&::System::IO::File::ReadAllBytesUnknownLength)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5c08650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllBytesUnknownLength", {}, { ::i2c::type_of<::System::IO::FileStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::WriteAllBytes)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c08b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllBytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalWriteAllBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::InternalWriteAllBytes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c08c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalWriteAllBytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::File::ReadAllLines)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c08de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllLines", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalReadAllLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::File::InternalReadAllLines)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c08ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalReadAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>)>(&::System::IO::File::WriteAllLines)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0910c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::System::IO::File::WriteAllLines)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c09110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                             { "WriteAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalWriteAllLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::System::IO::File::InternalWriteAllLines)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5c0923c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                            { "InternalWriteAllLines", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::System::IO::File::Replace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c095c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::File::Replace)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c095cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                             { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::Move)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5c096f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Move", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetAccessControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::FileSecurity* (*)(::StringW)>(&::System::IO::File::GetAccessControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "GetAccessControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetAccessControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::FileSecurity* (*)(::StringW, ::System::Security::AccessControl::AccessControlSections)>(
    &::System::IO::File::GetAccessControl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c09934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                             { "GetAccessControl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
    return ___internal_method;
  }
};
inline ::System::IO::StreamReader* System::IO::File::OpenText(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*>(nullptr, ___internal_method, path);
}
inline ::System::IO::StreamWriter* System::IO::File::CreateText(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "CreateText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(nullptr, ___internal_method, path);
}
inline ::System::IO::StreamWriter* System::IO::File::AppendText(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "AppendText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW path, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, bufferSize);
}
inline void System::IO::File::Delete(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Delete", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline bool System::IO::File::Exists(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Exists", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW path, ::System::IO::FileMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::File*>(),
          { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode, access, share);
}
inline ::System::IO::FileAttributes System::IO::File::GetAttributes(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "GetAttributes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::OpenRead(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenRead", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::OpenWrite(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "OpenWrite", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::ReadAllText(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalReadAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, encoding);
}
inline void System::IO::File::WriteAllText(::StringW path, ::StringW contents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline void System::IO::File::WriteAllText(::StringW path, ::StringW contents, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents, encoding);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytes(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllBytes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytesUnknownLength(::System::IO::FileStream* fs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllBytesUnknownLength", {}, { ::i2c::type_of<::System::IO::FileStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, fs);
}
inline void System::IO::File::WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllBytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline void System::IO::File::InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalWriteAllBytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline ::ArrayW<::StringW> System::IO::File::ReadAllLines(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "ReadAllLines", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::File::InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "InternalReadAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, encoding);
}
inline void System::IO::File::WriteAllLines(::StringW path, ::ArrayW<::StringW> contents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "WriteAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline void System::IO::File::WriteAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                           { "WriteAllLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline void System::IO::File::InternalWriteAllLines(::System::IO::TextWriter* writer, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                       { "InternalWriteAllLines", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, contents);
}
inline void System::IO::File::Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destinationFileName, destinationBackupFileName);
}
inline void System::IO::File::Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                           { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destinationFileName, destinationBackupFileName, ignoreMetadataErrors);
}
inline void System::IO::File::Move(::StringW sourceFileName, ::StringW destFileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "Move", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destFileName);
}
inline ::System::Security::AccessControl::FileSecurity* System::IO::File::GetAccessControl(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(), { "GetAccessControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::FileSecurity*>(nullptr, ___internal_method, path);
}
inline ::System::Security::AccessControl::FileSecurity* System::IO::File::GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::File*>(),
                                                           { "GetAccessControl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::FileSecurity*>(nullptr, ___internal_method, path, includeSections);
}
// Ctor Parameters []
constexpr ::System::IO::File::File() {}

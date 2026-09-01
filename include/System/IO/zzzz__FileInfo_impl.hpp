#pragma once
// IWYU pragma private; include "System\IO\FileInfo.hpp"
#include "System/IO/zzzz__FileSystemInfo_impl.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c099ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::StringW)>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c099b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bf63b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_Length)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c099c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.CreateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::CreateText)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c09a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "CreateText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.AppendText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::AppendText)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c09ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "AppendText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.OpenRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::OpenRead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c09b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "OpenRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c09b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c09b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { ::i2c::class_of<::System::IO::FileInfo*>(), 9 }));
    return ___internal_method;
  }
};
inline void System::IO::FileInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileInfo::_ctor(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline void System::IO::FileInfo::_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline int64_t System::IO::FileInfo::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::IO::StreamWriter* System::IO::FileInfo::CreateText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "CreateText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(this, ___internal_method);
}
inline ::System::IO::StreamWriter* System::IO::FileInfo::AppendText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "AppendText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(this, ___internal_method);
}
inline ::System::IO::FileStream* System::IO::FileInfo::OpenRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(), { "OpenRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(this, ___internal_method);
}
inline void System::IO::FileInfo::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileInfo*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>());
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::StringW fileName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(fileName));
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(originalPath, fullPath, fileName, isNormalized));
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::FileInfo::FileInfo() {}

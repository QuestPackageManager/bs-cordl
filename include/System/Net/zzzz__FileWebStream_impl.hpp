#pragma once
// IWYU pragma private; include "System\Net\FileWebStream.hpp"
#include "System/IO/zzzz__FileStream_impl.hpp"
#include "System/Net/zzzz__FileWebStream_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::FileWebStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(::System::Net::FileWebRequest*, ::StringW, ::System::IO::FileMode, ::System::IO::FileAccess,
                                                                                              ::System::IO::FileShare)>(&::System::Net::FileWebStream::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64232f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(),
                                                                 ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(::System::Net::FileWebRequest*, ::StringW, ::System::IO::FileMode, ::System::IO::FileAccess,
                                                                                              ::System::IO::FileShare, int32_t, bool)>(&::System::Net::FileWebStream::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6423f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(),
                                                    ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(bool)>(&::System::Net::FileWebStream::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x642403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.System_Net_ICloseEx_CloseEx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(::System::Net::CloseExState)>(&::System::Net::FileWebStream::System_Net_ICloseEx_CloseEx)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64240e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { "System.Net.ICloseEx.CloseEx", {}, { ::i2c::type_of<::System::Net::CloseExState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::FileWebStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x642412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::FileWebStream::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6424270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebStream::BeginRead)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6424334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FileWebStream::*)(::System::IAsyncResult*)>(&::System::Net::FileWebStream::EndRead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6424410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebStream::BeginWrite)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64244ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)(::System::IAsyncResult*)>(&::System::Net::FileWebStream::EndWrite)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6424588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ::i2c::class_of<::System::Net::FileWebStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebStream.CheckError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebStream::*)()>(&::System::Net::FileWebStream::CheckError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64241f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { "CheckError", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::FileWebRequest*& System::Net::FileWebStream::__cordl_internal_get_m_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_request;
}
constexpr ::System::Net::FileWebRequest* const& System::Net::FileWebStream::__cordl_internal_get_m_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_request;
}
constexpr void System::Net::FileWebStream::__cordl_internal_set_m_request(::System::Net::FileWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_request = value;
}
inline void System::Net::FileWebStream::_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { ".ctor",
                                                                              {},
                                                                              { ::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(),
                                                                                ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, path, mode, access, sharing);
}
inline void System::Net::FileWebStream::_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing,
                                              int32_t length, bool async) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(),
                                                  ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, path, mode, access, sharing, length, async);
}
inline void System::Net::FileWebStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::FileWebStream::System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { "System.Net.ICloseEx.CloseEx", {}, { ::i2c::type_of<::System::Net::CloseExState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeState);
}
inline int32_t System::Net::FileWebStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::FileWebStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline ::System::IAsyncResult* System::Net::FileWebStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::FileWebStream::EndRead(::System::IAsyncResult* ar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ar);
}
inline ::System::IAsyncResult* System::Net::FileWebStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::FileWebStream::EndWrite(::System::IAsyncResult* ar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline void System::Net::FileWebStream::CheckError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebStream*>(), { "CheckError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::FileWebStream* System::Net::FileWebStream::New_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access,
                                                                          ::System::IO::FileShare sharing) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebStream*>(request, path, mode, access, sharing));
}
inline ::System::Net::FileWebStream* System::Net::FileWebStream::New_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access,
                                                                          ::System::IO::FileShare sharing, int32_t length, bool async) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebStream*>(request, path, mode, access, sharing, length, async));
}
/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr System::Net::FileWebStream::operator ::System::Net::ICloseEx*() noexcept {
  return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICloseEx"
constexpr ::System::Net::ICloseEx* System::Net::FileWebStream::i___System__Net__ICloseEx() noexcept {
  return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FileWebStream::FileWebStream() {}

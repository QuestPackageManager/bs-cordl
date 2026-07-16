#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRIOBuffer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Open::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRIOBuffer__Open::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3fc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Open::*)(::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t,
                                                                                                                           ::by_ref<uint64_t>)>(&::OVR::OpenVR::IVRIOBuffer__Open::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3fd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__Open::*)(::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t, ::by_ref<uint64_t>,
                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRIOBuffer__Open::BeginInvoke)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e3fd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Open::*)(::by_ref<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Open::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3fe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Open::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Open::Invoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements,
                                                                            ::by_ref<uint64_t> pulBuffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Open::BeginInvoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements,
                                                                           ::by_ref<uint64_t> pulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Open::EndInvoke(::by_ref<uint64_t> pulBuffer, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Open*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, pulBuffer, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Open* OVR::OpenVR::IVRIOBuffer__Open::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRIOBuffer__Open*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Open::IVRIOBuffer__Open() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Close::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRIOBuffer__Close::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Close::*)(uint64_t)>(&::OVR::OpenVR::IVRIOBuffer__Close::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3fe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__Close::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRIOBuffer__Close::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3fea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Close::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRIOBuffer__Close::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3fef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Close::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Close::Invoke(uint64_t ulBuffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Close::BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulBuffer, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Close::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Close*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Close* OVR::OpenVR::IVRIOBuffer__Close::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRIOBuffer__Close*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Close::IVRIOBuffer__Close() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Read::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRIOBuffer__Read::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3ff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Read::*)(uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRIOBuffer__Read::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__Read::*)(uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>, ::System::AsyncCallback*,
                                                                                                                     ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__Read::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Read::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Read::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Read::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Read::Invoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::by_ref<uint32_t> punRead) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer, pDst, unBytes, punRead);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Read::BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::by_ref<uint32_t> punRead, ::System::AsyncCallback* callback,
                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulBuffer, pDst, unBytes, punRead, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Read::EndInvoke(::by_ref<uint32_t> punRead, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Read*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, punRead, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Read* OVR::OpenVR::IVRIOBuffer__Read::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRIOBuffer__Read*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Read::IVRIOBuffer__Read() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Write::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRIOBuffer__Write::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e40068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Write::*)(uint64_t, ::System::IntPtr, uint32_t)>(
    &::OVR::OpenVR::IVRIOBuffer__Write::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e400d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__Write::*)(uint64_t, ::System::IntPtr, uint32_t, ::System::AsyncCallback*,
                                                                                                                      ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__Write::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e400e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Write::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRIOBuffer__Write::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Write::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Write::Invoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, ulBuffer, pSrc, unBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Write::BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulBuffer, pSrc, unBytes, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Write::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__Write*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Write* OVR::OpenVR::IVRIOBuffer__Write::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRIOBuffer__Write*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Write::IVRIOBuffer__Write() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(uint64_t)>(&::OVR::OpenVR::IVRIOBuffer__PropertyContainer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e40208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e4021c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__PropertyContainer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRIOBuffer__PropertyContainer::Invoke(uint64_t ulBuffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, ulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__PropertyContainer::BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulBuffer, callback, object);
}
inline uint64_t OVR::OpenVR::IVRIOBuffer__PropertyContainer::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* OVR::OpenVR::IVRIOBuffer__PropertyContainer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__PropertyContainer::IVRIOBuffer__PropertyContainer() {}
// Ctor Parameters [CppParam { name: "Open", ty: "::OVR::OpenVR::IVRIOBuffer__Open*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Close", ty: "::OVR::OpenVR::IVRIOBuffer__Close*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Read", ty: "::OVR::OpenVR::IVRIOBuffer__Read*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Write", ty:
// "::OVR::OpenVR::IVRIOBuffer__Write*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PropertyContainer", ty: "::OVR::OpenVR::IVRIOBuffer__PropertyContainer*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::OVR::OpenVR::IVRIOBuffer::IVRIOBuffer(::OVR::OpenVR::IVRIOBuffer__Open* Open, ::OVR::OpenVR::IVRIOBuffer__Close* Close, ::OVR::OpenVR::IVRIOBuffer__Read* Read,
                                                  ::OVR::OpenVR::IVRIOBuffer__Write* Write, ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* PropertyContainer) noexcept {
  this->Open = Open;
  this->Close = Close;
  this->Read = Read;
  this->Write = Write;
  this->PropertyContainer = PropertyContainer;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer::IVRIOBuffer() {}

#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GraphicsBuffer_Target::GraphicsBuffer_Target(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer_Target::GraphicsBuffer_Target() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Vertex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Index{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::CopySource{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::CopyDestination{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Structured{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Raw{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Append{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Counter{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::IndirectArguments{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Constant{ static_cast<int32_t>(0x200) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags::GraphicsBuffer_UsageFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags::GraphicsBuffer_UsageFlags() {}
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags UnityEngine::GraphicsBuffer_UsageFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags UnityEngine::GraphicsBuffer_UsageFlags::LockBufferForWrite{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer_BindingsMarshaller.ConvertToManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6aa0180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::GraphicsBuffer_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aa01d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::GraphicsBuffer* UnityEngine::GraphicsBuffer_BindingsMarshaller::ConvertToManaged(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::GraphicsBuffer_BindingsMarshaller::ConvertToNative(::UnityEngine::GraphicsBuffer* graphicsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, graphicsBuffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer_BindingsMarshaller::GraphicsBuffer_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a9f180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a9f298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(bool)>(&::UnityEngine::GraphicsBuffer::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a9f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.RequiresCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::GraphicsBuffer::RequiresCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a9f348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "RequiresCompute", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.IsVertexIndexOrCopyOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::GraphicsBuffer::IsVertexIndexOrCopyOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a9f354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsVertexIndexOrCopyOnly", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InitBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::InitBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a9f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InitBuffer",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.DestroyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::GraphicsBuffer::DestroyBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a9f300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "DestroyBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a9f3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::UnityEngine::GraphicsBuffer_Target, int32_t, int32_t)>(&::UnityEngine::GraphicsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a9f400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a9f738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { ".ctor",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InternalInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::InternalInitialization)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6a9f414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalInitialization",
                                                                                 {},
                                                                                 { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a9f73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.IsValidBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::GraphicsBuffer::IsValidBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a9f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValidBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::IsValid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a9f7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::get_count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a9f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_stride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::get_stride)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a9f8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_stride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.GetUsageFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_UsageFlags (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::GetUsageFlags)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a9f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "GetUsageFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_usageFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_UsageFlags (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::get_usageFlags)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a9f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_usageFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_bufferHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBufferHandle (::UnityEngine::GraphicsBuffer::*)()>(&::UnityEngine::GraphicsBuffer::get_bufferHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a9f9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_bufferHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::System::Array*, int32_t, int32_t, int32_t)>(&::UnityEngine::GraphicsBuffer::SetData)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6a9fa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                { "SetData", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InternalSetNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::InternalSetNativeData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a9fd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
            { "InternalSetNativeData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InternalSetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::InternalSetData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a9fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
            { "InternalSetData", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.BeginBufferWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::GraphicsBuffer::*)(int32_t, int32_t)>(&::UnityEngine::GraphicsBuffer::BeginBufferWrite)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a9fe8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "BeginBufferWrite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.EndBufferWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(int32_t)>(&::UnityEngine::GraphicsBuffer::EndBufferWrite)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a9ff48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "EndBufferWrite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::StringW)>(&::UnityEngine::GraphicsBuffer::set_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a9ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.SetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GraphicsBuffer::*)(::StringW)>(&::UnityEngine::GraphicsBuffer::SetName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6a9ffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "SetName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.DestroyBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::DestroyBuffer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a9f3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "DestroyBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.IsValidBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::IsValidBuffer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a9f788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValidBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_count_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::get_count_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a9f864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_count_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_stride_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::get_stride_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a9f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_stride_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.GetUsageFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_UsageFlags (*)(::System::IntPtr)>(&::UnityEngine::GraphicsBuffer::GetUsageFlags_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a9f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "GetUsageFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.get_bufferHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::GraphicsBufferHandle>)>(&::UnityEngine::GraphicsBuffer::get_bufferHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a9fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                { "get_bufferHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InternalSetNativeData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::GraphicsBuffer::InternalSetNativeData_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a9fda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalSetNativeData_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.InternalSetData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Array*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::GraphicsBuffer::InternalSetData_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a9fe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalSetData_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.BeginBufferWrite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::GraphicsBuffer::BeginBufferWrite_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a9fef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                             { "BeginBufferWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.EndBufferWrite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::GraphicsBuffer::EndBufferWrite_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a9ffa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "EndBufferWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBuffer.SetName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GraphicsBuffer::SetName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aa013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                { "SetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::GraphicsBuffer::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::GraphicsBuffer::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GraphicsBuffer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GraphicsBuffer::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool UnityEngine::GraphicsBuffer::RequiresCompute(::UnityEngine::GraphicsBuffer_Target target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "RequiresCompute", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target);
}
inline bool UnityEngine::GraphicsBuffer::IsVertexIndexOrCopyOnly(::UnityEngine::GraphicsBuffer_Target target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsVertexIndexOrCopyOnly", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target);
}
inline ::System::IntPtr UnityEngine::GraphicsBuffer::InitBuffer(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags, int32_t count, int32_t stride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InitBuffer",
                                                                               {},
                                                                               { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, target, usageFlags, count, stride);
}
inline void UnityEngine::GraphicsBuffer::DestroyBuffer(::UnityEngine::GraphicsBuffer* buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "DestroyBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf);
}
inline void UnityEngine::GraphicsBuffer::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline void UnityEngine::GraphicsBuffer::_ctor(::UnityEngine::GraphicsBuffer_Target target, int32_t count, int32_t stride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, count, stride);
}
inline void UnityEngine::GraphicsBuffer::_ctor(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags, int32_t count, int32_t stride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { ".ctor",
                                                                               {},
                                                                               { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, usageFlags, count, stride);
}
inline void UnityEngine::GraphicsBuffer::InternalInitialization(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags, int32_t count, int32_t stride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalInitialization",
                                                                               {},
                                                                               { ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, usageFlags, count, stride);
}
inline void UnityEngine::GraphicsBuffer::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::GraphicsBuffer::IsValidBuffer(::UnityEngine::GraphicsBuffer* buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValidBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buf);
}
inline bool UnityEngine::GraphicsBuffer::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::GraphicsBuffer::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::GraphicsBuffer::get_stride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_stride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_UsageFlags UnityEngine::GraphicsBuffer::GetUsageFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "GetUsageFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_UsageFlags>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_UsageFlags UnityEngine::GraphicsBuffer::get_usageFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_usageFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_UsageFlags>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBufferHandle UnityEngine::GraphicsBuffer::get_bufferHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_bufferHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBufferHandle>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::GraphicsBuffer::SetData(::Unity::Collections::NativeArray_1<T> data) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "SetData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::GraphicsBuffer::SetData(::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                              { "SetData", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, managedBufferStartIndex, graphicsBufferStartIndex, count);
}
template <typename T> inline void UnityEngine::GraphicsBuffer::SetData(::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
          { "SetData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void UnityEngine::GraphicsBuffer::InternalSetNativeData(::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
          { "InternalSetNativeData", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline void UnityEngine::GraphicsBuffer::InternalSetData(::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                       { "InternalSetData", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, managedBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline void* UnityEngine::GraphicsBuffer::BeginBufferWrite(int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "BeginBufferWrite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, offset, size);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::GraphicsBuffer::LockBufferForWrite(int32_t bufferStartIndex, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "LockBufferForWrite", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, bufferStartIndex, count);
}
inline void UnityEngine::GraphicsBuffer::EndBufferWrite(int32_t bytesWritten) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "EndBufferWrite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesWritten);
}
template <typename T> inline void UnityEngine::GraphicsBuffer::UnlockBufferAfterWrite(int32_t countWritten) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "UnlockBufferAfterWrite", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countWritten);
}
inline void UnityEngine::GraphicsBuffer::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GraphicsBuffer::SetName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "SetName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::GraphicsBuffer::DestroyBuffer_Injected(::System::IntPtr buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "DestroyBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf);
}
inline bool UnityEngine::GraphicsBuffer::IsValidBuffer_Injected(::System::IntPtr buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "IsValidBuffer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buf);
}
inline int32_t UnityEngine::GraphicsBuffer::get_count_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_count_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::GraphicsBuffer::get_stride_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "get_stride_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::GraphicsBuffer_UsageFlags UnityEngine::GraphicsBuffer::GetUsageFlags_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "GetUsageFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_UsageFlags>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GraphicsBuffer::get_bufferHandle_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::GraphicsBufferHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                              { "get_bufferHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::GraphicsBuffer::InternalSetNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                                        int32_t count, int32_t elemSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalSetNativeData_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline void UnityEngine::GraphicsBuffer::InternalSetData_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                                                  int32_t elemSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "InternalSetData_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, data, managedBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline void* UnityEngine::GraphicsBuffer::BeginBufferWrite_Injected(::System::IntPtr _unity_self, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                                           { "BeginBufferWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, _unity_self, offset, size);
}
inline void UnityEngine::GraphicsBuffer::EndBufferWrite_Injected(::System::IntPtr _unity_self, int32_t bytesWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(), { "EndBufferWrite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, bytesWritten);
}
inline void UnityEngine::GraphicsBuffer::SetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBuffer*>(),
                                              { "SetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::GraphicsBuffer::New_ctor(::System::IntPtr ptr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GraphicsBuffer*>(ptr));
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::GraphicsBuffer::New_ctor(::UnityEngine::GraphicsBuffer_Target target, int32_t count, int32_t stride) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GraphicsBuffer*>(target, count, stride));
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::GraphicsBuffer::New_ctor(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags, int32_t count,
                                                                            int32_t stride) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GraphicsBuffer*>(target, usageFlags, count, stride));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::GraphicsBuffer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::GraphicsBuffer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer::GraphicsBuffer() {}

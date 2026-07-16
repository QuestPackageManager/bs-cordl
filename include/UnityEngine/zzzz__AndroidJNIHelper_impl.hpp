#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNIHelper_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.get_debug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AndroidJNIHelper::get_debug)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a197c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "get_debug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.set_debug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AndroidJNIHelper::set_debug)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a197e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "set_debug", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetConstructorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a19824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetConstructorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a19870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a19ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a19bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                             { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a19b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetFieldID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a19de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetFieldID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a19ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                             { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::AndroidJNIHelper::GetFieldID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a19e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJavaRunnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaRunnable*)>(&::UnityEngine::AndroidJNIHelper::CreateJavaRunnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a1a188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJavaRunnable", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJavaProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaProxy*)>(&::UnityEngine::AndroidJNIHelper::CreateJavaProxy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a1a23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJavaProxy", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.ConvertToJNIArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Array*)>(&::UnityEngine::AndroidJNIHelper::ConvertToJNIArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a1a424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "ConvertToJNIArray", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::jvalue> (*)(::ArrayW<::System::Object*>)>(&::UnityEngine::AndroidJNIHelper::CreateJNIArgArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a1b130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.CreateJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNIHelper::CreateJNIArgArray)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6a1b708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.DeleteJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNIHelper::DeleteJNIArgArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a1b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                             { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.DeleteJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNIHelper::DeleteJNIArgArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a1ba40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetConstructorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::ArrayW<::System::Object*>)>(&::UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1bab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::ArrayW<::System::Object*>, bool)>(&::UnityEngine::AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a1bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                            { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::UnityEngine::AndroidJNIHelper::GetSignature)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a1bc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::UnityEngine::AndroidJNIHelper::GetSignature)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a1caf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::jvalue, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a1ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                             { "Box", {}, { ::i2c::type_of<::UnityEngine::jvalue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int8_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1cf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int16_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1cf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int64_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1d06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(float_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a1d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(double_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a1d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1d1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a1d21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.GetUnboxMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNIHelper::GetUnboxMethod)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6a1d284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                             { "GetUnboxMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int8_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int16_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int64_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<float_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<double_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1d974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<char16_t>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a1da80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<bool>)>(&::UnityEngine::AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a1db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::AndroidJNIHelper::get_debug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "get_debug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNIHelper::set_debug(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "set_debug", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetConstructorID(::System::IntPtr javaClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetConstructorID(::System::IntPtr javaClass, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr javaClass, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, methodName);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr javaClass, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, methodName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr javaClass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                              { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr javaClass, ::StringW fieldName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, fieldName);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, ::StringW signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, fieldName, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr javaClass, ::StringW fieldName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                              { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, javaClass, fieldName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJavaRunnable", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jrunnable);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::CreateJavaProxy(::UnityEngine::AndroidJavaProxy* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJavaProxy", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, proxy);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::ConvertToJNIArray(::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "ConvertToJNIArray", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::UnityEngine::jvalue> UnityEngine::AndroidJNIHelper::CreateJNIArgArray(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::jvalue>>(nullptr, ___internal_method, args);
}
inline void UnityEngine::AndroidJNIHelper::CreateJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline void UnityEngine::AndroidJNIHelper::DeleteJNIArgArray(::ArrayW<::System::Object*> args, ::ArrayW<::UnityEngine::jvalue> jniArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline void UnityEngine::AndroidJNIHelper::DeleteJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                          { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
inline ::StringW UnityEngine::AndroidJNIHelper::GetSignature(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::StringW UnityEngine::AndroidJNIHelper::GetSignature(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, args);
}
template <typename ArrayType> inline ArrayType UnityEngine::AndroidJNIHelper::ConvertFromJNIArray(::System::IntPtr array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "ConvertFromJNIArray", { ::i2c::class_of<ArrayType>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ArrayType>() })));
  return ::cordl_internals::RunMethodRethrow<ArrayType>(nullptr, ___internal_method, array);
}
template <typename ReturnType> inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                              { "GetMethodID",
                                                { ::i2c::class_of<ReturnType>() },
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ReturnType>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
template <typename FieldType> inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                              { "GetFieldID", { ::i2c::class_of<FieldType>() }, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<FieldType>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, fieldName, isStatic);
}
template <typename ReturnType> inline ::StringW UnityEngine::AndroidJNIHelper::GetSignature(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "GetSignature", { ::i2c::class_of<ReturnType>() }, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ReturnType>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(::UnityEngine::jvalue val, ::StringW boxedClass, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<::UnityEngine::jvalue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, val, boxedClass, signature);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::Box(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::AndroidJNIHelper::GetUnboxMethod(::System::IntPtr obj, ::StringW methodName, ::StringW signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(),
                                                           { "GetUnboxMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodName, signature);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<int8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<int16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
inline void UnityEngine::AndroidJNIHelper::Unbox(::System::IntPtr obj, ::by_ref<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNIHelper::AndroidJNIHelper() {}

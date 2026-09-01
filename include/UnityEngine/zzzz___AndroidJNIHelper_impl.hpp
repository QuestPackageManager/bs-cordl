#pragma once
// IWYU pragma private; include "UnityEngine\_AndroidJNIHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz___AndroidJNIHelper_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.CreateJavaProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::AndroidJavaProxy*)>(
    &::UnityEngine::_AndroidJNIHelper::CreateJavaProxy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a1fbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                         { "CreateJavaProxy", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.CreateJavaRunnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaRunnable*)>(&::UnityEngine::_AndroidJNIHelper::CreateJavaRunnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a1f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "CreateJavaRunnable", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.InvokeJavaProxyMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AndroidJavaProxy*, ::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a32440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                            { "InvokeJavaProxyMethod", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.CreateJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::_AndroidJNIHelper::CreateJNIArgArray)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x6a20a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.UnboxArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::AndroidJavaObject*)>(&::UnityEngine::_AndroidJNIHelper::UnboxArray)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0x6a32530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "UnboxArray", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.Unbox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::AndroidJavaObject*)>(&::UnityEngine::_AndroidJNIHelper::Unbox)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x6a2f28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::System::Object*)>(&::UnityEngine::_AndroidJNIHelper::Box)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x6a2e5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.DeleteJNIArgArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6a210e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.ConvertToJNIArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Array*)>(&::UnityEngine::_AndroidJNIHelper::ConvertToJNIArray)> {
  constexpr static std::size_t size = 0xcb4;
  constexpr static std::size_t addrs = 0x6a1fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "ConvertToJNIArray", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetConstructorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::ArrayW<::System::Object*>)>(&::UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a21330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::ArrayW<::System::Object*>, bool)>(&::UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a21420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                            { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetConstructorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6a1f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6a1f3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetMethodIDFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::_AndroidJNIHelper::GetMethodIDFallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a32d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                         { "GetMethodIDFallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW, bool)>(&::UnityEngine::_AndroidJNIHelper::GetFieldID)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6a1f6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::UnityEngine::_AndroidJNIHelper::GetSignature)> {
  constexpr static std::size_t size = 0xe0c;
  constexpr static std::size_t addrs = 0x6a21500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::UnityEngine::_AndroidJNIHelper::GetSignature)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6a22364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_AndroidJNIHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::_AndroidJNIHelper::*)()>(&::UnityEngine::_AndroidJNIHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a32e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::_AndroidJNIHelper::setStaticF_FRAME_SIZE_FOR_ARRAYS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "FRAME_SIZE_FOR_ARRAYS", ::UnityEngine::_AndroidJNIHelper*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::_AndroidJNIHelper::getStaticF_FRAME_SIZE_FOR_ARRAYS() {
  return ::cordl_internals::getStaticField<int32_t, "FRAME_SIZE_FOR_ARRAYS", ::UnityEngine::_AndroidJNIHelper*>();
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::CreateJavaProxy(::System::IntPtr player, ::System::IntPtr delegateHandle, ::UnityEngine::AndroidJavaProxy* proxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                       { "CreateJavaProxy", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, player, delegateHandle, proxy);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* jrunnable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "CreateJavaRunnable", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaRunnable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jrunnable);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy* proxy, ::System::IntPtr jmethodName, ::System::IntPtr jargs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                          { "InvokeJavaProxyMethod", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaProxy*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, proxy, jmethodName, jargs);
}
inline void UnityEngine::_AndroidJNIHelper::CreateJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                           { "CreateJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, ret);
}
inline ::System::Object* UnityEngine::_AndroidJNIHelper::UnboxArray(::UnityEngine::AndroidJavaObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "UnboxArray", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj);
}
inline ::System::Object* UnityEngine::_AndroidJNIHelper::Unbox(::UnityEngine::AndroidJavaObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "Unbox", {}, { ::i2c::type_of<::UnityEngine::AndroidJavaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::_AndroidJNIHelper::Box(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "Box", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray(::ArrayW<::System::Object*> args, ::System::Span_1<::UnityEngine::jvalue> jniArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                                           { "DeleteJNIArgArray", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, jniArgs);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::ConvertToJNIArray(::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "ConvertToJNIArray", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
template <typename ArrayType> inline ArrayType UnityEngine::_AndroidJNIHelper::ConvertFromJNIArray(::System::IntPtr array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "ConvertFromJNIArray", { ::i2c::class_of<ArrayType>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ArrayType>() })));
  return ::cordl_internals::RunMethodRethrow<ArrayType>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetConstructorID(::System::IntPtr jclass, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, args);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                          { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
template <typename ReturnType> inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::ArrayW<::System::Object*> args, bool isStatic) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                              { "GetMethodID",
                                                { ::i2c::class_of<ReturnType>() },
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ReturnType>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, args, isStatic);
}
template <typename ReturnType> inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetFieldID(::System::IntPtr jclass, ::StringW fieldName, bool isStatic) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                              { "GetFieldID", { ::i2c::class_of<ReturnType>() }, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ReturnType>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, fieldName, isStatic);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetConstructorID(::System::IntPtr jclass, ::StringW signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetConstructorID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, signature);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetMethodID(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                              { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetMethodIDFallback(::System::IntPtr jclass, ::StringW methodName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                       { "GetMethodIDFallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, methodName, signature, isStatic);
}
inline ::System::IntPtr UnityEngine::_AndroidJNIHelper::GetFieldID(::System::IntPtr jclass, ::StringW fieldName, ::StringW signature, bool isStatic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(),
                                              { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, jclass, fieldName, signature, isStatic);
}
inline ::StringW UnityEngine::_AndroidJNIHelper::GetSignature(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::StringW UnityEngine::_AndroidJNIHelper::GetSignature(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetSignature", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, args);
}
template <typename ReturnType> inline ::StringW UnityEngine::_AndroidJNIHelper::GetSignature(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { "GetSignature", { ::i2c::class_of<ReturnType>() }, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<ReturnType>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, args);
}
inline void UnityEngine::_AndroidJNIHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::_AndroidJNIHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::_AndroidJNIHelper* UnityEngine::_AndroidJNIHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::_AndroidJNIHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::_AndroidJNIHelper::_AndroidJNIHelper() {}

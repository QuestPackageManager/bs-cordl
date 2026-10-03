#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerFile.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerFile_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerFile*, ::StringW, bool)>(
    &::UnityEngine::Networking::DownloadHandlerFile::Create)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x72c4404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerFile*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.InternalCreateVFS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerFile::*)(::StringW, bool)>(&::UnityEngine::Networking::DownloadHandlerFile::InternalCreateVFS)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x72c459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { "InternalCreateVFS", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::DownloadHandlerFile::*)(::StringW, bool)>(&::UnityEngine::Networking::DownloadHandlerFile::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72c463c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.GetNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::Networking::DownloadHandlerFile::*)()>(
    &::UnityEngine::Networking::DownloadHandlerFile::GetNativeData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x72c4640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::DownloadHandlerFile::*)()>(&::UnityEngine::Networking::DownloadHandlerFile::GetData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x72c468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::DownloadHandlerFile::*)()>(&::UnityEngine::Networking::DownloadHandlerFile::GetText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x72c46d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadHandlerFile.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerFile*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(
    &::UnityEngine::Networking::DownloadHandlerFile::Create_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x72c4548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(),
                                                                                           { "Create_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerFile*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerFile::Create(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::UnityEngine::Networking::DownloadHandlerFile* obj,
                                                                             ::StringW path, bool append) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(),
                                              { "Create", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerFile*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, path, append);
}
inline void UnityEngine::Networking::DownloadHandlerFile::InternalCreateVFS(::StringW path, bool append) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { "InternalCreateVFS", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, append);
}
inline void UnityEngine::Networking::DownloadHandlerFile::_ctor(::StringW path, bool append) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, append);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::Networking::DownloadHandlerFile::GetNativeData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::DownloadHandlerFile::GetData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::DownloadHandlerFile::GetText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Networking::DownloadHandlerFile::Create_Injected(::UnityEngine::Networking::DownloadHandlerFile* obj, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path,
                                                                                      bool append) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::DownloadHandlerFile*>(),
                          { "Create_Injected",
                            {},
                            { ::i2c::type_of<::UnityEngine::Networking::DownloadHandlerFile*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, path, append);
}
inline ::UnityEngine::Networking::DownloadHandlerFile* UnityEngine::Networking::DownloadHandlerFile::New_ctor(::StringW path, bool append) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::DownloadHandlerFile*>(path, append));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadHandlerFile::DownloadHandlerFile() {}

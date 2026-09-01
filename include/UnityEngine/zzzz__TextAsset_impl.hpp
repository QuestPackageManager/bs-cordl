#pragma once
// IWYU pragma private; include "UnityEngine\TextAsset.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextAsset_CreateOptions::TextAsset_CreateOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset_CreateOptions::TextAsset_CreateOptions() {}
constexpr ::UnityEngine::TextAsset_CreateOptions UnityEngine::TextAsset_CreateOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextAsset_CreateOptions UnityEngine::TextAsset_CreateOptions::CreateNativeObject{ static_cast<int32_t>(0x1) };
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>, ::System::Text::Encoding*>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>, ::System::Text::Encoding*>>, "encodingLookup",
                                    ::UnityEngine::TextAsset_EncodingUtility*>(
      std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>, ::System::Text::Encoding*>>>(value));
}
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>, ::System::Text::Encoding*>> UnityEngine::TextAsset_EncodingUtility::getStaticF_encodingLookup() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>, ::System::Text::Encoding*>>, "encodingLookup",
                                           ::UnityEngine::TextAsset_EncodingUtility*>();
}
inline void UnityEngine::TextAsset_EncodingUtility::setStaticF_targetEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "targetEncoding", ::UnityEngine::TextAsset_EncodingUtility*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* UnityEngine::TextAsset_EncodingUtility::getStaticF_targetEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "targetEncoding", ::UnityEngine::TextAsset_EncodingUtility*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset_EncodingUtility::TextAsset_EncodingUtility() {}
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_bytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae6f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_bytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetPreviewBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::TextAsset::*)(int32_t)>(&::UnityEngine::TextAsset::GetPreviewBytes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ae7024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreviewBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::StringW)>(&::UnityEngine::TextAsset::Internal_CreateInstance)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6ae70f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "Internal_CreateInstance", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstanceFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::System::ReadOnlySpan_1<uint8_t>)>(&::UnityEngine::TextAsset::Internal_CreateInstanceFromBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ae7270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                                                { "Internal_CreateInstanceFromBytes", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataPtr)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae735c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae7418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_text)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ae74d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_dataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_dataSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae77a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_dataSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae77a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ::i2c::class_of<::UnityEngine::TextAsset*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ae77a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)(::StringW)>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ae7838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ae7844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)(::UnityEngine::TextAsset_CreateOptions, ::StringW)>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ae77b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset_CreateOptions>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextAsset::*)(::UnityEngine::TextAsset_CreateOptions, ::System::ReadOnlySpan_1<uint8_t>)>(
    &::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ae7854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset_CreateOptions>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetPreview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextAsset::*)(int32_t)>(&::UnityEngine::TextAsset::GetPreview)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ae78ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreview", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.DecodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::UnityEngine::TextAsset::DecodeString)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6ae750c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "DecodeString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::get_bytes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae6fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_bytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetPreviewBytes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TextAsset::GetPreviewBytes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae70b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreviewBytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextAsset::Internal_CreateInstance_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                            { "Internal_CreateInstance_Injected", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstanceFromBytes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextAsset*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextAsset::Internal_CreateInstanceFromBytes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae7318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextAsset*>(),
            { "Internal_CreateInstanceFromBytes_Injected", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::GetDataPtr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae73dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::TextAsset::GetDataSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae7498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::get_bytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_bytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::GetPreviewBytes(int32_t maxByteCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreviewBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, maxByteCount);
}
inline void UnityEngine::TextAsset::Internal_CreateInstance(::UnityEngine::TextAsset* self, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "Internal_CreateInstance", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, text);
}
inline void UnityEngine::TextAsset::Internal_CreateInstanceFromBytes(::UnityEngine::TextAsset* self, ::System::ReadOnlySpan_1<uint8_t> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                                              { "Internal_CreateInstanceFromBytes", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, bytes);
}
inline ::System::IntPtr UnityEngine::TextAsset::GetDataPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int64_t UnityEngine::TextAsset::GetDataSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t UnityEngine::TextAsset::get_dataSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_dataSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextAsset*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextAsset::_ctor(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void UnityEngine::TextAsset::_ctor(::System::ReadOnlySpan_1<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void UnityEngine::TextAsset::_ctor(::UnityEngine::TextAsset_CreateOptions options, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset_CreateOptions>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, text);
}
inline void UnityEngine::TextAsset::_ctor(::UnityEngine::TextAsset_CreateOptions options, ::System::ReadOnlySpan_1<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset_CreateOptions>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, bytes);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::TextAsset::GetData() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetData", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::GetPreview(int32_t maxChars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreview", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, maxChars);
}
inline ::StringW UnityEngine::TextAsset::DecodeString(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "DecodeString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::get_bytes_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "get_bytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<uint8_t> UnityEngine::TextAsset::GetPreviewBytes_Injected(::System::IntPtr _unity_self, int32_t maxByteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetPreviewBytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, _unity_self, maxByteCount);
}
inline void UnityEngine::TextAsset::Internal_CreateInstance_Injected(::UnityEngine::TextAsset* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(),
                          { "Internal_CreateInstance_Injected", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, text);
}
inline void UnityEngine::TextAsset::Internal_CreateInstanceFromBytes_Injected(::UnityEngine::TextAsset* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::TextAsset*>(),
                       { "Internal_CreateInstanceFromBytes_Injected", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, bytes);
}
inline ::System::IntPtr UnityEngine::TextAsset::GetDataPtr_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int64_t UnityEngine::TextAsset::GetDataSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextAsset*>(), { "GetDataSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>());
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>(text));
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::System::ReadOnlySpan_1<uint8_t> bytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>(bytes));
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::UnityEngine::TextAsset_CreateOptions options, ::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>(options, text));
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::UnityEngine::TextAsset_CreateOptions options, ::System::ReadOnlySpan_1<uint8_t> bytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextAsset*>(options, bytes));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset::TextAsset() {}

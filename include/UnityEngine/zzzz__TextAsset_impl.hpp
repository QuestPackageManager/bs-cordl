#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__TextAsset__CreateOptions::__TextAsset__CreateOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextAsset__CreateOptions::__TextAsset__CreateOptions() {}
constexpr ::UnityEngine::__TextAsset__CreateOptions UnityEngine::__TextAsset__CreateOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__TextAsset__CreateOptions UnityEngine::__TextAsset__CreateOptions::CreateNativeObject{ static_cast<int32_t>(0x1) };
inline void
UnityEngine::__TextAsset__EncodingUtility::setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                                              ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
                                                                         value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                             ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>,
                                    "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TextAsset__EncodingUtility*>::get>(
      std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                            ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
UnityEngine::__TextAsset__EncodingUtility::getStaticF_encodingLookup() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                    ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>,
                                           "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TextAsset__EncodingUtility*>::get>();
}
inline void UnityEngine::__TextAsset__EncodingUtility::setStaticF_targetEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TextAsset__EncodingUtility*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* UnityEngine::__TextAsset__EncodingUtility::getStaticF_targetEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TextAsset__EncodingUtility*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::__TextAsset__EncodingUtility::__TextAsset__EncodingUtility() {}
//  Writing Method size for method: ::UnityEngine::TextAsset.get_bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_bytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2dc344c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_bytes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetPreviewBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::TextAsset::*)(int32_t)>(
    &::UnityEngine::TextAsset::GetPreviewBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2dc3488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetPreviewBytes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.Internal_CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextAsset*, ::StringW)>(&::UnityEngine::TextAsset::Internal_CreateInstance)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2dc34cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "Internal_CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2dc3510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetDataPtr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetDataSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::GetDataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2dc354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetDataSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2dc3588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.get_dataSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::get_dataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2dc384c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_dataSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2dc3888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAsset::*)()>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dc388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAsset::*)(::StringW)>(&::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dc3944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAsset::*)(::UnityEngine::__TextAsset__CreateOptions, ::StringW)>(
    &::UnityEngine::TextAsset::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2dc3898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextAsset__CreateOptions>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.GetPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextAsset::*)(int32_t)>(&::UnityEngine::TextAsset::GetPreview)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dc3950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetPreview", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAsset.DecodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::UnityEngine::TextAsset::DecodeString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2dc35c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "DecodeString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::TextAsset::get_bytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_bytes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::TextAsset::GetPreviewBytes(int32_t maxByteCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetPreviewBytes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, maxByteCount);
}
inline void UnityEngine::TextAsset::Internal_CreateInstance(::UnityEngine::TextAsset* self, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "Internal_CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, text);
}
inline void* UnityEngine::TextAsset::GetDataPtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetDataPtr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline int64_t UnityEngine::TextAsset::GetDataSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetDataSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int64_t UnityEngine::TextAsset::get_dataSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "get_dataSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextAsset*>());
}
inline void UnityEngine::TextAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::StringW text) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextAsset*>(text));
}
inline void UnityEngine::TextAsset::_ctor(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline ::UnityEngine::TextAsset* UnityEngine::TextAsset::New_ctor(::UnityEngine::__TextAsset__CreateOptions options, ::StringW text) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextAsset*>(options, text));
}
inline void UnityEngine::TextAsset::_ctor(::UnityEngine::__TextAsset__CreateOptions options, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__TextAsset__CreateOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, options, text);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::TextAsset::GetData() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::TextAsset::GetPreview(int32_t maxChars) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "GetPreview", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, maxChars);
}
inline ::StringW UnityEngine::TextAsset::DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAsset*>::get(), "DecodeString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAsset::TextAsset() {}

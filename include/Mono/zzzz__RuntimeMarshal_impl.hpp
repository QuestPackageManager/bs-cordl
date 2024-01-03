#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__RuntimeMarshal_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "Mono/zzzz__SafeStringMarshal_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeMarshal.PtrToUtf8String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*)>(&::Mono::RuntimeMarshal::PtrToUtf8String)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2412b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "PtrToUtf8String", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.MarshalString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::SafeStringMarshal (*)(::StringW)>(&::Mono::RuntimeMarshal::MarshalString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2412c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "MarshalString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.DecodeBlobSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, ByRef<void*>)>(&::Mono::RuntimeMarshal::DecodeBlobSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2412ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "DecodeBlobSize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.DecodeBlobArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(void*)>(&::Mono::RuntimeMarshal::DecodeBlobArray)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2412d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "DecodeBlobArray", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.AsciHexDigitValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Mono::RuntimeMarshal::AsciHexDigitValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2412e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "AsciHexDigitValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.FreeAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::MonoAssemblyName>, bool)>(&::Mono::RuntimeMarshal::FreeAssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2412e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "FreeAssemblyName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::MonoAssemblyName>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Mono::RuntimeMarshal::PtrToUtf8String(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "PtrToUtf8String", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ptr);
}
inline ::Mono::SafeStringMarshal Mono::RuntimeMarshal::MarshalString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "MarshalString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::SafeStringMarshal, false>(nullptr, ___internal_method, str);
}
inline int32_t Mono::RuntimeMarshal::DecodeBlobSize(void* in_ptr, ByRef<void*> out_ptr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "DecodeBlobSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, in_ptr, out_ptr);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::RuntimeMarshal::DecodeBlobArray(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "DecodeBlobArray", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeMarshal::AsciHexDigitValue(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "AsciHexDigitValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c);
}
inline void Mono::RuntimeMarshal::FreeAssemblyName(ByRef<::Mono::MonoAssemblyName> name, bool freeStruct) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeMarshal*>::get(), "FreeAssemblyName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::MonoAssemblyName>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, freeStruct);
}
// Ctor Parameters []
constexpr ::Mono::RuntimeMarshal::RuntimeMarshal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

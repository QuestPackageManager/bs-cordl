#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyName.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_impl.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_impl.hpp"
#include "System/Reflection/zzzz__AssemblyContentType_impl.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_impl.hpp"
#include "System/Reflection/zzzz__ProcessorArchitecture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__StrongNameKeyPair_def.hpp"
#include "System/Runtime/InteropServices/zzzz___AssemblyName_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3cca15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ParseAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::Mono::MonoAssemblyName>, ByRef<bool>, ByRef<bool>)>(
    &::System::Reflection::AssemblyName::ParseAssemblyName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3cca17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "ParseAssemblyName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::MonoAssemblyName>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)(::StringW)>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3cbc4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x3cca3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cca900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_CultureInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Reflection::AssemblyName::*)()>(
    &::System::Reflection::AssemblyName::get_CultureInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cca908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_CultureInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyNameFlags (::System::Reflection::AssemblyName::*)()>(
    &::System::Reflection::AssemblyName::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cca910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Flags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_FullName)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x3cca918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_FullName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ccad6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.set_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Version*)>(&::System::Reflection::AssemblyName::set_Version)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3ccad74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "set_Version", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ccadc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetPublicKeyToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Reflection::AssemblyName::*)()>(
    &::System::Reflection::AssemblyName::GetPublicKeyToken)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3cbc738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetPublicKeyToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_IsPublicKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_IsPublicKeyValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ccade8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                               "get_IsPublicKeyValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.InternalGetPublicKeyToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Reflection::AssemblyName::*)()>(
    &::System::Reflection::AssemblyName::InternalGetPublicKeyToken)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3ccac88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                               "InternalGetPublicKeyToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_public_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Reflection::AssemblyName::get_public_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccaef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_public_token", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ComputePublicKeyToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Reflection::AssemblyName::*)()>(
    &::System::Reflection::AssemblyName::ComputePublicKeyToken)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ccae6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                               "ComputePublicKeyToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::AssemblyName::GetObjectData)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x3ccaefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::Clone)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ccb228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Object*)>(
    &::System::Reflection::AssemblyName::OnDeserialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ccb2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetNativeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::Mono::MonoAssemblyName> (*)(::System::IntPtr)>(
    &::System::Reflection::AssemblyName::GetNativeName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccb2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetNativeName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.FillName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Reflection::AssemblyName::*)(::cordl_internals::Ptr<::Mono::MonoAssemblyName>, ::StringW, bool, bool, bool, bool)>(&::System::Reflection::AssemblyName::FillName)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3cca180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "FillName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::MonoAssemblyName>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyName* (*)(::System::Reflection::Assembly*, bool)>(
    &::System::Reflection::AssemblyName::Create)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3ccb2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Reflection::AssemblyName::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Reflection::AssemblyName::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::AssemblyName::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Reflection::AssemblyName::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_AssemblyName"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::InteropServices::_AssemblyName*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_AssemblyName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_AssemblyName"
constexpr ::System::Runtime::InteropServices::_AssemblyName* System::Reflection::AssemblyName::i___System__Runtime__InteropServices___AssemblyName() noexcept {
  return static_cast<::System::Runtime::InteropServices::_AssemblyName*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Reflection::AssemblyName::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::AssemblyName::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::AssemblyName::__cordl_internal_get_codebase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codebase;
}
constexpr ::StringW const& System::Reflection::AssemblyName::__cordl_internal_get_codebase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codebase;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_codebase(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___codebase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___major;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___major;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_major(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___major = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minor;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minor;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_minor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minor = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_build(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___build = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_revision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revision = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Reflection::AssemblyName::__cordl_internal_get_cultureinfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cultureinfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::Reflection::AssemblyName::__cordl_internal_get_cultureinfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cultureinfo;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_cultureinfo(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cultureinfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::AssemblyNameFlags& System::Reflection::AssemblyName::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Reflection::AssemblyNameFlags const& System::Reflection::AssemblyName::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_flags(::System::Reflection::AssemblyNameFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm& System::Reflection::AssemblyName::__cordl_internal_get_hashalg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashalg;
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm const& System::Reflection::AssemblyName::__cordl_internal_get_hashalg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashalg;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_hashalg(::System::Configuration::Assemblies::AssemblyHashAlgorithm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashalg = value;
}
constexpr ::System::Reflection::StrongNameKeyPair*& System::Reflection::AssemblyName::__cordl_internal_get_keypair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypair;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::StrongNameKeyPair*> const& System::Reflection::AssemblyName::__cordl_internal_get_keypair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypair;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_keypair(::System::Reflection::StrongNameKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keypair)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Reflection::AssemblyName::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Reflection::AssemblyName::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Reflection::AssemblyName::__cordl_internal_get_keyToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyToken;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Reflection::AssemblyName::__cordl_internal_get_keyToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyToken;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_keyToken(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility& System::Reflection::AssemblyName::__cordl_internal_get_versioncompat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versioncompat;
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility const& System::Reflection::AssemblyName::__cordl_internal_get_versioncompat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versioncompat;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_versioncompat(::System::Configuration::Assemblies::AssemblyVersionCompatibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versioncompat = value;
}
constexpr ::System::Version*& System::Reflection::AssemblyName::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Reflection::AssemblyName::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::ProcessorArchitecture& System::Reflection::AssemblyName::__cordl_internal_get_processor_architecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processor_architecture;
}
constexpr ::System::Reflection::ProcessorArchitecture const& System::Reflection::AssemblyName::__cordl_internal_get_processor_architecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processor_architecture;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_processor_architecture(::System::Reflection::ProcessorArchitecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processor_architecture = value;
}
constexpr ::System::Reflection::AssemblyContentType& System::Reflection::AssemblyName::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::System::Reflection::AssemblyContentType const& System::Reflection::AssemblyName::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_contentType(::System::Reflection::AssemblyContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyName*>());
}
inline void System::Reflection::AssemblyName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Reflection::AssemblyName::ParseAssemblyName(::System::IntPtr name, ByRef<::Mono::MonoAssemblyName> aname, ByRef<bool> is_version_definited, ByRef<bool> is_token_defined) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "ParseAssemblyName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::MonoAssemblyName>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, aname, is_version_definited, is_token_defined);
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor(::StringW assemblyName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyName*>(assemblyName));
}
inline void System::Reflection::AssemblyName::_ctor(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyName);
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyName*>(si, sc));
}
inline void System::Reflection::AssemblyName::_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, si, sc);
}
inline ::StringW System::Reflection::AssemblyName::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Reflection::AssemblyName::get_CultureInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_CultureInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::AssemblyNameFlags System::Reflection::AssemblyName::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Flags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyNameFlags, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::AssemblyName::get_FullName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_FullName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Version* System::Reflection::AssemblyName::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::set_Version(::System::Version* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "set_Version", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Reflection::AssemblyName::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Reflection::AssemblyName::GetPublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetPublicKeyToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool System::Reflection::AssemblyName::get_IsPublicKeyValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_IsPublicKeyValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Reflection::AssemblyName::InternalGetPublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                             "InternalGetPublicKeyToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::get_public_token(::cordl_internals::Ptr<uint8_t> token, ::cordl_internals::Ptr<uint8_t> pubkey, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "get_public_token", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, token, pubkey, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Reflection::AssemblyName::ComputePublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(),
                                                                             "ComputePublicKeyToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::AssemblyName::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline ::cordl_internals::Ptr<::Mono::MonoAssemblyName> System::Reflection::AssemblyName::GetNativeName(::System::IntPtr assembly_ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "GetNativeName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::MonoAssemblyName>, false>(nullptr, ___internal_method, assembly_ptr);
}
inline void System::Reflection::AssemblyName::FillName(::cordl_internals::Ptr<::Mono::MonoAssemblyName> native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken,
                                                       bool assemblyRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "FillName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::MonoAssemblyName>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, native, codeBase, addVersion, addPublickey, defaultToken, assemblyRef);
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::Create(::System::Reflection::Assembly* assembly, bool fillCodebase) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyName*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*, false>(nullptr, ___internal_method, assembly, fillCodebase);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyName::AssemblyName() {}

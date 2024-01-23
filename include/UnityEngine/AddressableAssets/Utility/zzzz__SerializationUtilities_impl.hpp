#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__SerializationUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__SerializationUtilities_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::__SerializationUtilities__ObjectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::__SerializationUtilities__ObjectType() {}
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::AsciiString{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::UnicodeString{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::UInt16{ static_cast<int32_t>(
    0x2) };
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::UInt32{ static_cast<int32_t>(
    0x3) };
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::Int32{ static_cast<int32_t>(
    0x4) };
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::Hash128{ static_cast<int32_t>(
    0x5) };
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::Type{ static_cast<int32_t>(
    0x6) };
constexpr ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType::JsonObject{
  static_cast<int32_t>(0x7)
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadInt32FromByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a2955c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(),
                                                 "ReadInt32FromByteArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteInt32ToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a295d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(), "WriteInt32ToByteArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadObjectFromByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2a29654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(),
                                                 "ReadObjectFromByteArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteObjectToByteList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Object*, ::System::Collections::Generic::List_1<uint8_t>*)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x2a29bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(), "WriteObjectToByteList",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(),
                                               "ReadInt32FromByteArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, offset);
}
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t val, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(), "WriteInt32ToByteArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, val, offset);
}
inline ::System::Object* UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData, int32_t dataIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(),
                                               "ReadObjectFromByteArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, keyData, dataIndex);
}
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList(::System::Object* obj, ::System::Collections::Generic::List_1<uint8_t>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>::get(),
                                               "WriteObjectToByteList", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities::SerializationUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

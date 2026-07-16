#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/SerializationUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__SerializationUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__SerializationUtilities_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::SerializationUtilities_ObjectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::SerializationUtilities_ObjectType() {}
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::AsciiString{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::UnicodeString{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::UInt16{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::UInt32{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::Int32{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::Hash128{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::Type{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType::JsonObject{ static_cast<int32_t>(
    0x7) };
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadInt32FromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x645f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                                                           { "ReadInt32FromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteInt32ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x645f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                             { "WriteInt32ToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.ReadObjectFromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>, int32_t)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x645f940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                                                           { "ReadObjectFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities.WriteObjectToByteList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::System::Collections::Generic::List_1<uint8_t>*)>(
    &::UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x645fe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                { "WriteObjectToByteList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                                                         { "ReadInt32FromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, offset);
}
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray(::ArrayW<uint8_t> data, int32_t val, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                           { "WriteInt32ToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, val, offset);
}
inline ::System::Object* UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray(::ArrayW<uint8_t> keyData, int32_t dataIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                                                                         { "ReadObjectFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, keyData, dataIndex);
}
inline int32_t UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList(::System::Object* obj, ::System::Collections::Generic::List_1<uint8_t>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::SerializationUtilities*>(),
                                              { "WriteObjectToByteList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::SerializationUtilities::SerializationUtilities() {}

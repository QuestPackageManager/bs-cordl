#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SmallEntityIdArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallEntityIdArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SmallEntityIdArray::*)()>(&::UnityEngine::Rendering::SmallEntityIdArray::get_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5cb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray.set_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallEntityIdArray::*)(bool)>(&::UnityEngine::Rendering::SmallEntityIdArray::set_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5cb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallEntityIdArray::*)(int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::SmallEntityIdArray::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6c5cb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::UnityEngine::Rendering::SmallEntityIdArray::*)(int32_t)>(&::UnityEngine::Rendering::SmallEntityIdArray::get_Item)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c5cce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallEntityIdArray::*)(int32_t, ::UnityEngine::EntityId)>(
    &::UnityEngine::Rendering::SmallEntityIdArray::set_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6c5cdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallEntityIdArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallEntityIdArray::*)()>(&::UnityEngine::Rendering::SmallEntityIdArray::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c5afe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::SmallEntityIdArray::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SmallEntityIdArray::set_Valid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SmallEntityIdArray::_ctor(int32_t length, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator);
}
inline ::UnityEngine::EntityId UnityEngine::Rendering::SmallEntityIdArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::SmallEntityIdArray::set_Item(int32_t index, ::UnityEngine::EntityId value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::SmallEntityIdArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallEntityIdArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::SmallEntityIdArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::SmallEntityIdArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FixedArray", ty: "::Unity::Collections::FixedList32Bytes_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_List", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IsEmbedded", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Valid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::SmallEntityIdArray::SmallEntityIdArray(::Unity::Collections::FixedList32Bytes_1<::UnityEngine::EntityId> m_FixedArray,
                                                                           ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId> m_List, bool m_IsEmbedded,
                                                                           bool _Valid_k__BackingField, int32_t Length) noexcept {
  this->m_FixedArray = m_FixedArray;
  this->m_List = m_List;
  this->m_IsEmbedded = m_IsEmbedded;
  this->_Valid_k__BackingField = _Valid_k__BackingField;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SmallEntityIdArray::SmallEntityIdArray() {}

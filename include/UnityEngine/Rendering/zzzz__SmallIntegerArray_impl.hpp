#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SmallIntegerArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SmallIntegerArray::*)()>(&::UnityEngine::Rendering::SmallIntegerArray::get_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6827978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray.set_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallIntegerArray::*)(bool)>(&::UnityEngine::Rendering::SmallIntegerArray::set_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6827980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallIntegerArray::*)(int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::SmallIntegerArray::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6827988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SmallIntegerArray::*)(int32_t)>(&::UnityEngine::Rendering::SmallIntegerArray::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6827b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallIntegerArray::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::SmallIntegerArray::set_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6827bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SmallIntegerArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SmallIntegerArray::*)()>(&::UnityEngine::Rendering::SmallIntegerArray::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6825ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::SmallIntegerArray::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SmallIntegerArray::set_Valid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SmallIntegerArray::_ctor(int32_t length, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator);
}
inline int32_t UnityEngine::Rendering::SmallIntegerArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::SmallIntegerArray::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::SmallIntegerArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SmallIntegerArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::SmallIntegerArray::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::SmallIntegerArray::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FixedArray", ty: "::Unity::Collections::FixedList32Bytes_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_List", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsEmbedded", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_Valid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SmallIntegerArray::SmallIntegerArray(::Unity::Collections::FixedList32Bytes_1<int32_t> m_FixedArray,
                                                                         ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t> m_List, bool m_IsEmbedded, bool _Valid_k__BackingField,
                                                                         int32_t Length) noexcept {
  this->m_FixedArray = m_FixedArray;
  this->m_List = m_List;
  this->m_IsEmbedded = m_IsEmbedded;
  this->_Valid_k__BackingField = _Valid_k__BackingField;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SmallIntegerArray::SmallIntegerArray() {}

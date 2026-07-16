#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceIndex.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceIndex::*)()>(&::UnityEngine::Rendering::GPUInstanceIndex::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUInstanceIndex::*)(int32_t)>(&::UnityEngine::Rendering::GPUInstanceIndex::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681db78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUInstanceIndex::*)()>(&::UnityEngine::Rendering::GPUInstanceIndex::get_valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x681db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUInstanceIndex::*)(::UnityEngine::Rendering::GPUInstanceIndex)>(
    &::UnityEngine::Rendering::GPUInstanceIndex::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x681dbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceIndex::*)(::UnityEngine::Rendering::GPUInstanceIndex)>(
    &::UnityEngine::Rendering::GPUInstanceIndex::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x681dc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUInstanceIndex.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::GPUInstanceIndex::*)()>(&::UnityEngine::Rendering::GPUInstanceIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x681dcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUInstanceIndex::setStaticF_Invalid(::UnityEngine::Rendering::GPUInstanceIndex value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::GPUInstanceIndex, "Invalid", ::UnityEngine::Rendering::GPUInstanceIndex>(std::forward<::UnityEngine::Rendering::GPUInstanceIndex>(value));
}
inline ::UnityEngine::Rendering::GPUInstanceIndex UnityEngine::Rendering::GPUInstanceIndex::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GPUInstanceIndex, "Invalid", ::UnityEngine::Rendering::GPUInstanceIndex>();
}
inline int32_t UnityEngine::Rendering::GPUInstanceIndex::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::GPUInstanceIndex::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::GPUInstanceIndex::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::GPUInstanceIndex::Equals(::UnityEngine::Rendering::GPUInstanceIndex other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::GPUInstanceIndex::CompareTo(::UnityEngine::Rendering::GPUInstanceIndex other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::GPUInstanceIndex>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::GPUInstanceIndex::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GPUInstanceIndex>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr UnityEngine::Rendering::GPUInstanceIndex::operator ::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>* UnityEngine::Rendering::GPUInstanceIndex::i___System__IEquatable_1___UnityEngine__Rendering__GPUInstanceIndex_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr UnityEngine::Rendering::GPUInstanceIndex::operator ::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>* UnityEngine::Rendering::GPUInstanceIndex::i___System__IComparable_1___UnityEngine__Rendering__GPUInstanceIndex_() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUInstanceIndex::GPUInstanceIndex(int32_t _index_k__BackingField) noexcept {
  this->_index_k__BackingField = _index_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUInstanceIndex::GPUInstanceIndex() {}

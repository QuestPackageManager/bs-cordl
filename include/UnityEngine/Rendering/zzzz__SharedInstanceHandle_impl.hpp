#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SharedInstanceHandle.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(&::UnityEngine::Rendering::SharedInstanceHandle::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6823194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SharedInstanceHandle::*)(int32_t)>(&::UnityEngine::Rendering::SharedInstanceHandle::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(&::UnityEngine::Rendering::SharedInstanceHandle::get_valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68231a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SharedInstanceHandle::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::SharedInstanceHandle::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6823204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::SharedInstanceHandle::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6823270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(&::UnityEngine::Rendering::SharedInstanceHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68232e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { ::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SharedInstanceHandle::setStaticF_Invalid(::UnityEngine::Rendering::SharedInstanceHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SharedInstanceHandle, "Invalid", ::UnityEngine::Rendering::SharedInstanceHandle>(
      std::forward<::UnityEngine::Rendering::SharedInstanceHandle>(value));
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::SharedInstanceHandle::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SharedInstanceHandle, "Invalid", ::UnityEngine::Rendering::SharedInstanceHandle>();
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SharedInstanceHandle::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::SharedInstanceHandle::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SharedInstanceHandle::Equals(::UnityEngine::Rendering::SharedInstanceHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::CompareTo(::UnityEngine::Rendering::SharedInstanceHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SharedInstanceHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr UnityEngine::Rendering::SharedInstanceHandle::operator ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*
UnityEngine::Rendering::SharedInstanceHandle::i___System__IEquatable_1___UnityEngine__Rendering__SharedInstanceHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr UnityEngine::Rendering::SharedInstanceHandle::operator ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*
UnityEngine::Rendering::SharedInstanceHandle::i___System__IComparable_1___UnityEngine__Rendering__SharedInstanceHandle_() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SharedInstanceHandle::SharedInstanceHandle(int32_t _index_k__BackingField) noexcept {
  this->_index_k__BackingField = _index_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SharedInstanceHandle::SharedInstanceHandle() {}

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceHandle.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceHandle::*)()>(&::UnityEngine::Rendering::InstanceHandle::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681d7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceHandle::*)(int32_t)>(&::UnityEngine::Rendering::InstanceHandle::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x681d7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.get_instanceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceHandle::*)()>(&::UnityEngine::Rendering::InstanceHandle::get_instanceIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x681b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_instanceIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceType (::UnityEngine::Rendering::InstanceHandle::*)()>(&::UnityEngine::Rendering::InstanceHandle::get_type)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x681afac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::InstanceHandle::*)()>(&::UnityEngine::Rendering::InstanceHandle::get_valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x681af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (*)(int32_t, ::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceHandle::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x681b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(),
                                                                                           { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.FromInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceHandle (*)(int32_t)>(&::UnityEngine::Rendering::InstanceHandle::FromInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6816bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "FromInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::InstanceHandle::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::InstanceHandle::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x681d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceHandle::*)(::UnityEngine::Rendering::InstanceHandle)>(
    &::UnityEngine::Rendering::InstanceHandle::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x681d864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceHandle::*)()>(&::UnityEngine::Rendering::InstanceHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x681d8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { ::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceHandle::setStaticF_Invalid(::UnityEngine::Rendering::InstanceHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::InstanceHandle, "Invalid", ::UnityEngine::Rendering::InstanceHandle>(std::forward<::UnityEngine::Rendering::InstanceHandle>(value));
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::InstanceHandle::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::InstanceHandle, "Invalid", ::UnityEngine::Rendering::InstanceHandle>();
}
inline int32_t UnityEngine::Rendering::InstanceHandle::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceHandle::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::InstanceHandle::get_instanceIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_instanceIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceHandle::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceType>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::InstanceHandle::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::InstanceHandle::Create(int32_t instanceIndex, ::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(),
                                                                                         { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(nullptr, ___internal_method, instanceIndex, instanceType);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::InstanceHandle::FromInt(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "FromInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::InstanceHandle::Equals(::UnityEngine::Rendering::InstanceHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::InstanceHandle::CompareTo(::UnityEngine::Rendering::InstanceHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::InstanceHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::InstanceHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>"
constexpr UnityEngine::Rendering::InstanceHandle::operator ::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>* UnityEngine::Rendering::InstanceHandle::i___System__IEquatable_1___UnityEngine__Rendering__InstanceHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::InstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>"
constexpr UnityEngine::Rendering::InstanceHandle::operator ::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>* UnityEngine::Rendering::InstanceHandle::i___System__IComparable_1___UnityEngine__Rendering__InstanceHandle_() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::InstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceHandle::InstanceHandle(int32_t _index_k__BackingField) noexcept {
  this->_index_k__BackingField = _index_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceHandle::InstanceHandle() {}

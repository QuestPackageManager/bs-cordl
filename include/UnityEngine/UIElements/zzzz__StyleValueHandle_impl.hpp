#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueHandle.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueType (::UnityEngine::UIElements::StyleValueHandle::*)()>(
    &::UnityEngine::UIElements::StyleValueHandle::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7119258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "get_valueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.set_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleValueHandle::*)(::UnityEngine::UIElements::StyleValueType)>(
    &::UnityEngine::UIElements::StyleValueHandle::set_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7119df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "set_valueType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleValueHandle::*)(int32_t, ::UnityEngine::UIElements::StyleValueType)>(
    &::UnityEngine::UIElements::StyleValueHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7119260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.IsVarFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleValueHandle::*)()>(&::UnityEngine::UIElements::StyleValueHandle::IsVarFunction)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x7119dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "IsVarFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleValueHandle::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleValueHandle::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7119e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleValueHandle::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleValueHandle::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x7119e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleValueHandle::*)()>(&::UnityEngine::UIElements::StyleValueHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x7119ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleValueHandle::get_valueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "get_valueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueType>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleValueHandle::set_valueType(::UnityEngine::UIElements::StyleValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "set_valueType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleValueHandle::_ctor(int32_t valueIndex, ::UnityEngine::UIElements::StyleValueType valueType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, valueIndex, valueType);
}
inline bool UnityEngine::UIElements::StyleValueHandle::IsVarFunction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "IsVarFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleValueHandle::Equals(::UnityEngine::UIElements::StyleValueHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleValueHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleValueHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleValueHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>"
constexpr UnityEngine::UIElements::StyleValueHandle::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>* UnityEngine::UIElements::StyleValueHandle::i___System__IEquatable_1___UnityEngine__UIElements__StyleValueHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueIndex", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle(::UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept {
  this->m_ValueType = m_ValueType;
  this->valueIndex = valueIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle() {}

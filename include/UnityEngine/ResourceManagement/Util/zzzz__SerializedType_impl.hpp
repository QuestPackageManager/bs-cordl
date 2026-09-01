#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\SerializedType.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.get_AssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::SerializedType::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_AssemblyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.get_ClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::SerializedType::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_ClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&::UnityEngine::ResourceManagement::Util::SerializedType::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6917c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::ResourceManagement::Util::SerializedType::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::get_Value)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6917d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::SerializedType::*)(::System::Type*)>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::set_Value)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6917ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "set_Value", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.get_ValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::SerializedType::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_ValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedType.set_ValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::SerializedType::*)(bool)>(
    &::UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "set_ValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_AssemblyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_ClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::SerializedType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::ResourceManagement::Util::SerializedType::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::SerializedType::set_Value(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "set_Value", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "get_ValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedType>(), { "set_ValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_AssemblyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClassName", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ValueChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::SerializedType::SerializedType(::StringW m_AssemblyName, ::StringW m_ClassName, ::System::Type* m_CachedType,
                                                                                  bool _ValueChanged_k__BackingField) noexcept {
  this->m_AssemblyName = m_AssemblyName;
  this->m_ClassName = m_ClassName;
  this->m_CachedType = m_CachedType;
  this->_ValueChanged_k__BackingField = _ValueChanged_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::SerializedType::SerializedType() {}

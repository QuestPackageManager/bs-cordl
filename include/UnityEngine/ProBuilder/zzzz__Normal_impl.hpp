#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Normal.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Normal_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Normal::*)()>(&::UnityEngine::ProBuilder::Normal::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d01e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.set_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Normal::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::Normal::set_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d01ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_normal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.get_tangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::ProBuilder::Normal::*)()>(&::UnityEngine::ProBuilder::Normal::get_tangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d01f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_tangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.set_tangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Normal::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::Normal::set_tangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d0204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_tangent", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.get_bitangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Normal::*)()>(&::UnityEngine::ProBuilder::Normal::get_bitangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d0210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_bitangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.set_bitangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Normal::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::Normal::set_bitangent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d021c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_bitangent", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Normal::*)(::System::Object*)>(&::UnityEngine::ProBuilder::Normal::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66d0228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Normal::*)()>(&::UnityEngine::ProBuilder::Normal::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66d0384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Normal::*)(::UnityEngine::ProBuilder::Normal)>(&::UnityEngine::ProBuilder::Normal::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66d02bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal)>(&::UnityEngine::ProBuilder::Normal::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66d03e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>(), ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normal.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal)>(&::UnityEngine::ProBuilder::Normal::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66d0418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>(), ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Normal::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Normal::set_normal(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_normal", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::ProBuilder::Normal::get_tangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_tangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Normal::set_tangent(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_tangent", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Normal::get_bitangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "get_bitangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Normal::set_bitangent(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "set_bitangent", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::Normal::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::Normal::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Normal::Equals(::UnityEngine::ProBuilder::Normal other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::Normal::op_Equality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>(), ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::Normal::op_Inequality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Normal>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Normal>(), ::i2c::type_of<::UnityEngine::ProBuilder::Normal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
constexpr UnityEngine::ProBuilder::Normal::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>* UnityEngine::ProBuilder::Normal::i___System__IEquatable_1___UnityEngine__ProBuilder__Normal_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tangent_k__BackingField", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bitangent_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Normal::Normal(::UnityEngine::Vector3 _normal_k__BackingField, ::UnityEngine::Vector4 _tangent_k__BackingField,
                                                    ::UnityEngine::Vector3 _bitangent_k__BackingField) noexcept {
  this->_normal_k__BackingField = _normal_k__BackingField;
  this->_tangent_k__BackingField = _tangent_k__BackingField;
  this->_bitangent_k__BackingField = _bitangent_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Normal::Normal() {}

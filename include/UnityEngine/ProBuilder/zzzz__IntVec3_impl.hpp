#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec3.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__IntVec3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec3::*)()>(&::UnityEngine::ProBuilder::IntVec3::get_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bd724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec3::*)()>(&::UnityEngine::ProBuilder::IntVec3::get_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bd72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.get_z
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec3::*)()>(&::UnityEngine::ProBuilder::IntVec3::get_z)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bd734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_z", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::IntVec3::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::IntVec3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66bd73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::IntVec3::*)()>(&::UnityEngine::ProBuilder::IntVec3::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x66bd748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3)>(&::UnityEngine::ProBuilder::IntVec3::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66bd820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3)>(&::UnityEngine::ProBuilder::IntVec3::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66bd8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec3::*)(::UnityEngine::ProBuilder::IntVec3)>(&::UnityEngine::ProBuilder::IntVec3::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66bd854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec3::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::IntVec3::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66bd98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec3::*)(::System::Object*)>(&::UnityEngine::ProBuilder::IntVec3::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66bda20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::IntVec3::*)()>(&::UnityEngine::ProBuilder::IntVec3::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66bdae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::ProBuilder::IntVec3::round)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66bd920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "round", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::IntVec3)>(&::UnityEngine::ProBuilder::IntVec3::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bdafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec3.op_Implicit___UnityEngine__ProBuilder__IntVec3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::IntVec3 (*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::IntVec3::op_Implicit___UnityEngine__ProBuilder__IntVec3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bdb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ProBuilder::IntVec3::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::IntVec3::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::IntVec3::get_z() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "get_z", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::IntVec3::_ctor(::UnityEngine::Vector3 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vector);
}
inline ::StringW UnityEngine::ProBuilder::IntVec3::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::IntVec3::op_Equality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::IntVec3::op_Inequality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::IntVec3::Equals(::UnityEngine::ProBuilder::IntVec3 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::IntVec3::Equals(::UnityEngine::Vector3 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::IntVec3::Equals(::System::Object* b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, b);
}
inline int32_t UnityEngine::ProBuilder::IntVec3::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::IntVec3::round(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "round", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::IntVec3::op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::IntVec3 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::ProBuilder::IntVec3 UnityEngine::ProBuilder::IntVec3::op_Implicit___UnityEngine__ProBuilder__IntVec3(::UnityEngine::Vector3 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec3>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::IntVec3>(nullptr, ___internal_method, p);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
constexpr UnityEngine::ProBuilder::IntVec3::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>* UnityEngine::ProBuilder::IntVec3::i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec3_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::IntVec3::IntVec3(::UnityEngine::Vector3 value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::IntVec3::IntVec3() {}

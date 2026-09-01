#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Triangle.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.get_a
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Triangle::*)()>(&::UnityEngine::ProBuilder::Triangle::get_a)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f88fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_a", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.get_b
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Triangle::*)()>(&::UnityEngine::ProBuilder::Triangle::get_b)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_b", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.get_c
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Triangle::*)()>(&::UnityEngine::ProBuilder::Triangle::get_c)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_c", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.get_indices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::Triangle::*)()>(
    &::UnityEngine::ProBuilder::Triangle::get_indices)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x66f8914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_indices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Triangle::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::Triangle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66f89a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::Triangle::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66f89ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Triangle::*)(::System::Object*)>(&::UnityEngine::ProBuilder::Triangle::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66f89e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Triangle::*)()>(&::UnityEngine::ProBuilder::Triangle::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66f8a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.IsAdjacent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::Triangle::IsAdjacent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66f8a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "IsAdjacent", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Triangle.ContainsEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::Triangle::ContainsEdge)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x66f8afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "ContainsEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ProBuilder::Triangle::get_a() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_a", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Triangle::get_b() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_b", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Triangle::get_c() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_c", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::Triangle::get_indices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "get_indices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Triangle::_ctor(int32_t a, int32_t b, int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline bool UnityEngine::ProBuilder::Triangle::Equals(::UnityEngine::ProBuilder::Triangle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::Triangle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::Triangle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Triangle::IsAdjacent(::UnityEngine::ProBuilder::Triangle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "IsAdjacent", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::Triangle::ContainsEdge(::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Triangle>(), { "ContainsEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, edge);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
constexpr UnityEngine::ProBuilder::Triangle::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>* UnityEngine::ProBuilder::Triangle::i___System__IEquatable_1___UnityEngine__ProBuilder__Triangle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_A", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_B", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_C", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Triangle::Triangle(int32_t m_A, int32_t m_B, int32_t m_C) noexcept {
  this->m_A = m_A;
  this->m_B = m_B;
  this->m_C = m_C;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Triangle::Triangle() {}

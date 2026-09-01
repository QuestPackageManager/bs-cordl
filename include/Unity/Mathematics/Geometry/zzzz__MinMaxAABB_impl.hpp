#pragma once
// IWYU pragma private; include "Unity\Mathematics\Geometry\MinMaxAABB.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/Geometry/zzzz__MinMaxAABB_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x661d084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.CreateFromCenterAndExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::CreateFromCenterAndExtents)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x661d094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                                { "CreateFromCenterAndExtents", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.CreateFromCenterAndHalfExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::CreateFromCenterAndHalfExtents)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x661d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                                { "CreateFromCenterAndHalfExtents", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.get_Extents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::get_Extents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x661d0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_Extents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.get_HalfExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::get_HalfExtents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x661d114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_HalfExtents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.get_Center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::get_Center)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x661d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_Center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::get_IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x661d174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.get_SurfaceArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::get_SurfaceArea)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x661d1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_SurfaceArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::Geometry::MinMaxAABB::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x661d1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Contains", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::Contains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x661d248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Contains", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Overlaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::Overlaps)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x661d2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Overlaps", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Expand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::MinMaxAABB::*)(float_t)>(&::Unity::Mathematics::Geometry::MinMaxAABB::Expand)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x661d348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Expand", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::Encapsulate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x661d370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::Geometry::MinMaxAABB::Encapsulate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x661d3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Geometry::MinMaxAABB::*)(::Unity::Mathematics::Geometry::MinMaxAABB)>(
    &::Unity::Mathematics::Geometry::MinMaxAABB::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x661d47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::MinMaxAABB.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::Geometry::MinMaxAABB::*)()>(&::Unity::Mathematics::Geometry::MinMaxAABB::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x661d4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { ::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), 3 }));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::Geometry::MinMaxAABB::_ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::MinMaxAABB::CreateFromCenterAndExtents(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 extents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                                           { "CreateFromCenterAndExtents", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB>(nullptr, ___internal_method, center, extents);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::MinMaxAABB::CreateFromCenterAndHalfExtents(::Unity::Mathematics::float3 center,
                                                                                                                           ::Unity::Mathematics::float3 halfExtents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(),
                                              { "CreateFromCenterAndHalfExtents", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB>(nullptr, ___internal_method, center, halfExtents);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Geometry::MinMaxAABB::get_Extents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_Extents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Geometry::MinMaxAABB::get_HalfExtents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_HalfExtents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Geometry::MinMaxAABB::get_Center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_Center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline bool Unity::Mathematics::Geometry::MinMaxAABB::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Unity::Mathematics::Geometry::MinMaxAABB::get_SurfaceArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "get_SurfaceArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool Unity::Mathematics::Geometry::MinMaxAABB::Contains(::Unity::Mathematics::float3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Contains", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline bool Unity::Mathematics::Geometry::MinMaxAABB::Contains(::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Contains", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, aabb);
}
inline bool Unity::Mathematics::Geometry::MinMaxAABB::Overlaps(::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Overlaps", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, aabb);
}
inline void Unity::Mathematics::Geometry::MinMaxAABB::Expand(float_t signedDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Expand", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, signedDistance);
}
inline void Unity::Mathematics::Geometry::MinMaxAABB::Encapsulate(::Unity::Mathematics::Geometry::MinMaxAABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aabb);
}
inline void Unity::Mathematics::Geometry::MinMaxAABB::Encapsulate(::Unity::Mathematics::float3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Encapsulate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point);
}
inline bool Unity::Mathematics::Geometry::MinMaxAABB::Equals(::Unity::Mathematics::Geometry::MinMaxAABB other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::MinMaxAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Mathematics::Geometry::MinMaxAABB::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::Geometry::MinMaxAABB>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>"
constexpr Unity::Mathematics::Geometry::MinMaxAABB::operator ::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>* Unity::Mathematics::Geometry::MinMaxAABB::i___System__IEquatable_1___Unity__Mathematics__Geometry__MinMaxAABB_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Max", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Mathematics::Geometry::MinMaxAABB::MinMaxAABB(::Unity::Mathematics::float3 Min, ::Unity::Mathematics::float3 Max) noexcept {
  this->Min = Min;
  this->Max = Max;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Geometry::MinMaxAABB::MinMaxAABB() {}

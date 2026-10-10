#pragma once
// IWYU pragma private; include "UnityEngine/Bounds.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bounds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Bounds::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ed1d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ed1d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { ::i2c::class_of<::UnityEngine::Bounds>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::System::Object*)>(&::UnityEngine::Bounds::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ed1dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { ::i2c::class_of<::UnityEngine::Bounds>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::UnityEngine::Bounds)>(&::UnityEngine::Bounds::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ed1ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::by_ref<::UnityEngine::Bounds const>)>(&::UnityEngine::Bounds::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ed1f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.get_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ed1f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.set_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ed1f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::get_size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ed1f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::set_size)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ed1fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.get_extents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::get_extents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ed1fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_extents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.set_extents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::set_extents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ed1fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_extents", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.get_min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::get_min)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ed1fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_min", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.set_min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::set_min)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ed2000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_min", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.get_max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::get_max)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ed2050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_max", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.set_max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::set_max)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ed2070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_max", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(&::UnityEngine::Bounds::op_Equality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ed20c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(&::UnityEngine::Bounds::op_Inequality)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ed2134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.SetMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Bounds::SetMinMax)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ed21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "SetMinMax", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.SetMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::by_ref<::UnityEngine::Vector3 const>, ::by_ref<::UnityEngine::Vector3 const>)>(
    &::UnityEngine::Bounds::SetMinMax)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ed21e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(),
                                                { "SetMinMax", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::Encapsulate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ed2230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::by_ref<::UnityEngine::Vector3 const>)>(&::UnityEngine::Bounds::Encapsulate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ed22a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Bounds)>(&::UnityEngine::Bounds::Encapsulate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6ed2324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Expand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::Expand)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ed2400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Expand", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Intersects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::UnityEngine::Bounds)>(&::UnityEngine::Bounds::Intersects)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ed2430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Intersects", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.IntersectRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::UnityEngine::Ray)>(&::UnityEngine::Bounds::IntersectRay)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ed24d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "IntersectRay", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.IntersectRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::UnityEngine::Ray, ::by_ref<float_t>)>(&::UnityEngine::Bounds::IntersectRay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ed2580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "IntersectRay", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Bounds::*)()>(&::UnityEngine::Bounds::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ed25d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { ::i2c::class_of<::UnityEngine::Bounds>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Bounds::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Bounds::ToString)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6ed25e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Internal_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::by_ref<::UnityEngine::Vector3 const>)>(&::UnityEngine::Bounds::Internal_Contains)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ed2730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Internal_Contains", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ed2774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.IntersectRayAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Ray const>, ::by_ref<::UnityEngine::Bounds const>, ::by_ref<float_t>)>(
    &::UnityEngine::Bounds::IntersectRayAABB)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ed252c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Bounds>(),
            { "IntersectRayAABB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Ray const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Internal_ClosestPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)(::by_ref<::UnityEngine::Vector3 const>)>(&::UnityEngine::Bounds::Internal_ClosestPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ed27cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Internal_ClosestPoint", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.ClosestPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&::UnityEngine::Bounds::ClosestPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ed2884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "ClosestPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bounds.Internal_ClosestPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Vector3 const>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Bounds::Internal_ClosestPoint_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ed2830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(),
                            { "Internal_ClosestPoint_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bounds::_ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline int32_t UnityEngine::Bounds::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Bounds>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Bounds::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Bounds>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Bounds::Equals(::UnityEngine::Bounds other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Bounds::Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds const> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::get_center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Bounds::set_center(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Bounds::set_size(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::get_extents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_extents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Bounds::set_extents(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_extents", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::get_min() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_min", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Bounds::set_min(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_min", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::get_max() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "get_max", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Bounds::set_max(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "set_max", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Bounds::op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Bounds::op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline void UnityEngine::Bounds::SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "SetMinMax", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void UnityEngine::Bounds::SetMinMax(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> min, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(),
                                              { "SetMinMax", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void UnityEngine::Bounds::Encapsulate(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point);
}
inline void UnityEngine::Bounds::Encapsulate(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point);
}
inline void UnityEngine::Bounds::Encapsulate(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline void UnityEngine::Bounds::Expand(::UnityEngine::Vector3 amount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Expand", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, amount);
}
inline bool UnityEngine::Bounds::Intersects(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Intersects", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bounds);
}
inline bool UnityEngine::Bounds::IntersectRay(::UnityEngine::Ray ray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "IntersectRay", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ray);
}
inline bool UnityEngine::Bounds::IntersectRay(::UnityEngine::Ray ray, ::by_ref<float_t> distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "IntersectRay", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ray, distance);
}
inline ::StringW UnityEngine::Bounds::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Bounds>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Bounds::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool UnityEngine::Bounds::Internal_Contains(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Internal_Contains", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline bool UnityEngine::Bounds::Contains(::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline bool UnityEngine::Bounds::IntersectRayAABB(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray const> ray, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds const> bounds, ::by_ref<float_t> dist) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Bounds>(),
          { "IntersectRayAABB", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Ray const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, bounds, dist);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::Internal_ClosestPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Internal_ClosestPoint", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Bounds::ClosestPoint(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "ClosestPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline void UnityEngine::Bounds::Internal_ClosestPoint_Injected(::by_ref<::UnityEngine::Bounds> _unity_self, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> point,
                                                                ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bounds>(), { "Internal_ClosestPoint_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3 const>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, point, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Bounds>"
constexpr UnityEngine::Bounds::operator ::System::IEquatable_1<::UnityEngine::Bounds>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Bounds>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Bounds>"
constexpr ::System::IEquatable_1<::UnityEngine::Bounds>* UnityEngine::Bounds::i___System__IEquatable_1___UnityEngine__Bounds_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Bounds>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr UnityEngine::Bounds::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Bounds::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Extents", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Bounds::Bounds(::UnityEngine::Vector3 m_Center, ::UnityEngine::Vector3 m_Extents) noexcept {
  this->m_Center = m_Center;
  this->m_Extents = m_Extents;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bounds::Bounds() {}

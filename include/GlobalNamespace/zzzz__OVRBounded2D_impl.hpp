#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRBounded2D.hpp"
#include "GlobalNamespace/zzzz__OVRBounded2D_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.IOVRAnchorComponent_OVRBounded2D__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRBounded2D::*)()>(
    &::GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e12ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.IOVRAnchorComponent_OVRBounded2D__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e12b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.IOVRAnchorComponent_OVRBounded2D__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRBounded2D (::GlobalNamespace::OVRBounded2D::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e12b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e12bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e12c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.IOVRAnchorComponent_OVRBounded2D__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRBounded2D::*)(bool, double_t)>(
    &::GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e12d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)(::GlobalNamespace::OVRBounded2D)>(&::GlobalNamespace::OVRBounded2D::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e12d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRBounded2D, ::GlobalNamespace::OVRBounded2D)>(&::GlobalNamespace::OVRBounded2D::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e12dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>(), ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRBounded2D, ::GlobalNamespace::OVRBounded2D)>(&::GlobalNamespace::OVRBounded2D::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e12e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>(), ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)(::System::Object*)>(&::GlobalNamespace::OVRBounded2D::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e12ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e12f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e12fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e12b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1309c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBounded2D::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRBounded2D::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e12b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.get_BoundingBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVRBounded2D::*)()>(&::GlobalNamespace::OVRBounded2D::get_BoundingBox)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e130a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_BoundingBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.ConvertRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVRBounded2D::*)(::GlobalNamespace::OVRPlugin_Rectf)>(&::GlobalNamespace::OVRBounded2D::ConvertRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e131c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "ConvertRect", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Rectf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.TryGetBoundaryPointsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)(::by_ref<int32_t>)>(&::GlobalNamespace::OVRBounded2D::TryGetBoundaryPointsCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e131e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "TryGetBoundaryPointsCount", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBounded2D.TryGetBoundaryPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBounded2D::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>)>(
    &::GlobalNamespace::OVRBounded2D::TryGetBoundaryPoints)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e13278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "TryGetBoundaryPoints", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRBounded2D::setStaticF_Null(::GlobalNamespace::OVRBounded2D value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRBounded2D, "Null", ::GlobalNamespace::OVRBounded2D>(std::forward<::GlobalNamespace::OVRBounded2D>(value));
}
inline ::GlobalNamespace::OVRBounded2D GlobalNamespace::OVRBounded2D::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRBounded2D, "Null", ::GlobalNamespace::OVRBounded2D>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRBounded2D GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(),
                                                                                         { "IOVRAnchorComponent<OVRBounded2D>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBounded2D>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRBounded2D::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRBounded2D::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRBounded2D::IOVRAnchorComponent_OVRBounded2D__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "IOVRAnchorComponent<OVRBounded2D>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRBounded2D::Equals(::GlobalNamespace::OVRBounded2D other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRBounded2D::op_Equality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>(), ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRBounded2D::op_Inequality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRBounded2D>(), ::i2c::type_of<::GlobalNamespace::OVRBounded2D>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRBounded2D::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRBounded2D::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRBounded2D::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRBounded2D::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRBounded2D::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRBounded2D::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::UnityEngine::Rect GlobalNamespace::OVRBounded2D::get_BoundingBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "get_BoundingBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline ::UnityEngine::Rect GlobalNamespace::OVRBounded2D::ConvertRect(::GlobalNamespace::OVRPlugin_Rectf openXrRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "ConvertRect", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Rectf>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method, openXrRect);
}
inline bool GlobalNamespace::OVRBounded2D::TryGetBoundaryPointsCount(::by_ref<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "TryGetBoundaryPointsCount", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, count);
}
inline bool GlobalNamespace::OVRBounded2D::TryGetBoundaryPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> positions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBounded2D>(), { "TryGetBoundaryPoints", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, positions);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>"
constexpr GlobalNamespace::OVRBounded2D::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>* GlobalNamespace::OVRBounded2D::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRBounded2D_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>"
constexpr GlobalNamespace::OVRBounded2D::operator ::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>* GlobalNamespace::OVRBounded2D::i___System__IEquatable_1___GlobalNamespace__OVRBounded2D_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRBounded2D::OVRBounded2D(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBounded2D::OVRBounded2D() {}

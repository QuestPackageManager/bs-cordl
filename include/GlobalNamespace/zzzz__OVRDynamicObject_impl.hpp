#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRDynamicObject.hpp"
#include "GlobalNamespace/zzzz__OVRDynamicObject_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.IOVRAnchorComponent_OVRDynamicObject__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRDynamicObject::*)()>(
    &::GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__get_Type)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e179d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.IOVRAnchorComponent_OVRDynamicObject__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e17a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.IOVRAnchorComponent_OVRDynamicObject__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRDynamicObject (::GlobalNamespace::OVRDynamicObject::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e17a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e17b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::get_IsEnabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e17b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.IOVRAnchorComponent_OVRDynamicObject__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRDynamicObject::*)(bool, double_t)>(
    &::GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e17c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                             { "IOVRAnchorComponent<OVRDynamicObject>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRDynamicObject::*)(::GlobalNamespace::OVRDynamicObject)>(&::GlobalNamespace::OVRDynamicObject::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e17cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRDynamicObject, ::GlobalNamespace::OVRDynamicObject)>(&::GlobalNamespace::OVRDynamicObject::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e17d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>(), ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRDynamicObject, ::GlobalNamespace::OVRDynamicObject)>(&::GlobalNamespace::OVRDynamicObject::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e17da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>(), ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRDynamicObject::*)(::System::Object*)>(&::GlobalNamespace::OVRDynamicObject::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e17e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e17ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e17f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e17a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRDynamicObject::*)()>(&::GlobalNamespace::OVRDynamicObject::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e17fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRDynamicObject::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRDynamicObject::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e17ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDynamicObject.get_TrackableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackableType (::GlobalNamespace::OVRDynamicObject::*)()>(
    &::GlobalNamespace::OVRDynamicObject::get_TrackableType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e17fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_TrackableType", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRDynamicObject::setStaticF_Null(::GlobalNamespace::OVRDynamicObject value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRDynamicObject, "Null", ::GlobalNamespace::OVRDynamicObject>(std::forward<::GlobalNamespace::OVRDynamicObject>(value));
}
inline ::GlobalNamespace::OVRDynamicObject GlobalNamespace::OVRDynamicObject::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRDynamicObject, "Null", ::GlobalNamespace::OVRDynamicObject>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRDynamicObject GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "IOVRAnchorComponent<OVRDynamicObject>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDynamicObject>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRDynamicObject::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRDynamicObject::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRDynamicObject::IOVRAnchorComponent_OVRDynamicObject__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                           { "IOVRAnchorComponent<OVRDynamicObject>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRDynamicObject::Equals(::GlobalNamespace::OVRDynamicObject other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRDynamicObject::op_Equality(::GlobalNamespace::OVRDynamicObject lhs, ::GlobalNamespace::OVRDynamicObject rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>(), ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRDynamicObject::op_Inequality(::GlobalNamespace::OVRDynamicObject lhs, ::GlobalNamespace::OVRDynamicObject rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>(), ::i2c::type_of<::GlobalNamespace::OVRDynamicObject>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRDynamicObject::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRDynamicObject::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRDynamicObject::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRDynamicObject::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRDynamicObject::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRDynamicObject::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRDynamicObject::get_TrackableType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRDynamicObject>(), { "get_TrackableType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackableType>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>"
constexpr GlobalNamespace::OVRDynamicObject::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>*
GlobalNamespace::OVRDynamicObject::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRDynamicObject_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>"
constexpr GlobalNamespace::OVRDynamicObject::operator ::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>* GlobalNamespace::OVRDynamicObject::i___System__IEquatable_1___GlobalNamespace__OVRDynamicObject_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDynamicObject::OVRDynamicObject(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDynamicObject::OVRDynamicObject() {}

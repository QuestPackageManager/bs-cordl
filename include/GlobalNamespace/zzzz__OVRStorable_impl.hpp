#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRStorable.hpp"
#include "GlobalNamespace/zzzz__OVRStorable_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.IOVRAnchorComponent_OVRStorable__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRStorable::*)()>(
    &::GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e11930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "IOVRAnchorComponent<OVRStorable>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.IOVRAnchorComponent_OVRStorable__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e1198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "IOVRAnchorComponent<OVRStorable>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.IOVRAnchorComponent_OVRStorable__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRStorable (::GlobalNamespace::OVRStorable::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e119e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(),
                                                                                           { "IOVRAnchorComponent<OVRStorable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e11a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e11adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRStorable::*)(bool, double_t)>(&::GlobalNamespace::OVRStorable::SetEnabledAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e11bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.SetEnabledSafeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRStorable::*)(bool, double_t)>(&::GlobalNamespace::OVRStorable::SetEnabledSafeAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e11e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRStorable::*)(::GlobalNamespace::OVRStorable)>(&::GlobalNamespace::OVRStorable::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e11ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRStorable, ::GlobalNamespace::OVRStorable)>(&::GlobalNamespace::OVRStorable::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e11f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>(), ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRStorable, ::GlobalNamespace::OVRStorable)>(&::GlobalNamespace::OVRStorable::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e11fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>(), ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRStorable::*)(::System::Object*)>(&::GlobalNamespace::OVRStorable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e12028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e120b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e12124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e11984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRStorable::*)()>(&::GlobalNamespace::OVRStorable::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e121e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRStorable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRStorable::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRStorable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e11a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRStorable::setStaticF_Null(::GlobalNamespace::OVRStorable value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRStorable, "Null", ::GlobalNamespace::OVRStorable>(std::forward<::GlobalNamespace::OVRStorable>(value));
}
inline ::GlobalNamespace::OVRStorable GlobalNamespace::OVRStorable::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRStorable, "Null", ::GlobalNamespace::OVRStorable>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "IOVRAnchorComponent<OVRStorable>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "IOVRAnchorComponent<OVRStorable>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRStorable GlobalNamespace::OVRStorable::IOVRAnchorComponent_OVRStorable__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "IOVRAnchorComponent<OVRStorable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRStorable>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRStorable::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRStorable::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRStorable::SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRStorable::SetEnabledSafeAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRStorable::Equals(::GlobalNamespace::OVRStorable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRStorable::op_Equality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>(), ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRStorable::op_Inequality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRStorable>(), ::i2c::type_of<::GlobalNamespace::OVRStorable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRStorable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRStorable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRStorable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRStorable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRStorable::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRStorable::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRStorable::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRStorable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
constexpr GlobalNamespace::OVRStorable::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>* GlobalNamespace::OVRStorable::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRStorable_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
constexpr GlobalNamespace::OVRStorable::operator ::System::IEquatable_1<::GlobalNamespace::OVRStorable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRStorable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRStorable>* GlobalNamespace::OVRStorable::i___System__IEquatable_1___GlobalNamespace__OVRStorable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRStorable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRStorable::OVRStorable(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRStorable::OVRStorable() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSharable.hpp"
#include "GlobalNamespace/zzzz__OVRSharable_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.IOVRAnchorComponent_OVRSharable__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSharable::*)()>(
    &::GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e121f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "IOVRAnchorComponent<OVRSharable>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.IOVRAnchorComponent_OVRSharable__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e1224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "IOVRAnchorComponent<OVRSharable>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.IOVRAnchorComponent_OVRSharable__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSharable (::GlobalNamespace::OVRSharable::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e122a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(),
                                                                                           { "IOVRAnchorComponent<OVRSharable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e1233c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e1239c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSharable::*)(bool, double_t)>(&::GlobalNamespace::OVRSharable::SetEnabledAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e12484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.SetEnabledSafeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSharable::*)(bool, double_t)>(&::GlobalNamespace::OVRSharable::SetEnabledSafeAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e12720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSharable::*)(::GlobalNamespace::OVRSharable)>(&::GlobalNamespace::OVRSharable::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e12798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSharable, ::GlobalNamespace::OVRSharable)>(&::GlobalNamespace::OVRSharable::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e12804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>(), ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSharable, ::GlobalNamespace::OVRSharable)>(&::GlobalNamespace::OVRSharable::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e12874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>(), ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSharable::*)(::System::Object*)>(&::GlobalNamespace::OVRSharable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e128e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e12978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e129e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e12244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSharable::*)()>(&::GlobalNamespace::OVRSharable::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e12aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSharable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSharable::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSharable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e122d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSharable::setStaticF_Null(::GlobalNamespace::OVRSharable value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRSharable, "Null", ::GlobalNamespace::OVRSharable>(std::forward<::GlobalNamespace::OVRSharable>(value));
}
inline ::GlobalNamespace::OVRSharable GlobalNamespace::OVRSharable::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRSharable, "Null", ::GlobalNamespace::OVRSharable>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "IOVRAnchorComponent<OVRSharable>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "IOVRAnchorComponent<OVRSharable>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRSharable GlobalNamespace::OVRSharable::IOVRAnchorComponent_OVRSharable__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "IOVRAnchorComponent<OVRSharable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSharable>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRSharable::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSharable::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSharable::SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSharable::SetEnabledSafeAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRSharable::Equals(::GlobalNamespace::OVRSharable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRSharable::op_Equality(::GlobalNamespace::OVRSharable lhs, ::GlobalNamespace::OVRSharable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>(), ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSharable::op_Inequality(::GlobalNamespace::OVRSharable lhs, ::GlobalNamespace::OVRSharable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSharable>(), ::i2c::type_of<::GlobalNamespace::OVRSharable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSharable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRSharable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRSharable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSharable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSharable::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRSharable::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSharable::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSharable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>"
constexpr GlobalNamespace::OVRSharable::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>* GlobalNamespace::OVRSharable::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSharable_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSharable>"
constexpr GlobalNamespace::OVRSharable::operator ::System::IEquatable_1<::GlobalNamespace::OVRSharable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSharable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSharable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSharable>* GlobalNamespace::OVRSharable::i___System__IEquatable_1___GlobalNamespace__OVRSharable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSharable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSharable::OVRSharable(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSharable::OVRSharable() {}

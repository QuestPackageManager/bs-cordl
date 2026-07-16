#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpace.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation() {}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpace_StorageLocation::Local{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpace_StorageLocation::Cloud{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecf4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.TryGetUuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::by_ref<::System::Guid>)>(&::GlobalNamespace::OVRSpace::TryGetUuid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ecf4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "TryGetUuid", {}, { ::i2c::type_of<::by_ref<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::get_Valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ec88c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpace::*)(uint64_t)>(&::GlobalNamespace::OVRSpace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecf550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ecf558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ecf5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::System::Object*)>(&::GlobalNamespace::OVRSpace::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ecf600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ecf67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ecf688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ecf694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Implicit___GlobalNamespace__OVRSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace (*)(uint64_t)>(&::GlobalNamespace::OVRSpace::op_Implicit___GlobalNamespace__OVRSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ec3ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Implicit_uint64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Implicit_uint64_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ec3ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
    return ___internal_method;
  }
};
inline uint64_t GlobalNamespace::OVRSpace::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::TryGetUuid(::by_ref<::System::Guid> uuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "TryGetUuid", {}, { ::i2c::type_of<::by_ref<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, uuid);
}
inline bool GlobalNamespace::OVRSpace::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpace::_ctor(uint64_t handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::StringW GlobalNamespace::OVRSpace::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::Equals(::GlobalNamespace::OVRSpace other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRSpace::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRSpace::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSpace>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::op_Equality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSpace::op_Inequality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpace::op_Implicit___GlobalNamespace__OVRSpace(uint64_t handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace>(nullptr, ___internal_method, handle);
}
inline uint64_t GlobalNamespace::OVRSpace::op_Implicit_uint64_t(::GlobalNamespace::OVRSpace space) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpace>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, space);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr GlobalNamespace::OVRSpace::operator ::System::IEquatable_1<::GlobalNamespace::OVRSpace>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSpace>* GlobalNamespace::OVRSpace::i___System__IEquatable_1___GlobalNamespace__OVRSpace_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpace::OVRSpace(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpace::OVRSpace() {}

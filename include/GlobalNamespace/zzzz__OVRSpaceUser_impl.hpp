#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSpaceUser.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::GlobalNamespace::OVRSpaceUser>)>(&::GlobalNamespace::OVRSpaceUser::TryCreate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ed3254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "TryCreate", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpaceUser>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::OVRSpaceUser>)>(&::GlobalNamespace::OVRSpaceUser::TryCreate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ed32c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "TryCreate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpaceUser>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpaceUser::*)()>(&::GlobalNamespace::OVRSpaceUser::get_Valid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ed330c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceUser::*)(uint64_t)>(&::GlobalNamespace::OVRSpaceUser::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ed33c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSpaceUser::*)()>(&::GlobalNamespace::OVRSpaceUser::get_Id)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed3334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceUser.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceUser::*)()>(&::GlobalNamespace::OVRSpaceUser::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ed342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRSpaceUser::TryCreate(uint64_t platformUserId, ::by_ref<::GlobalNamespace::OVRSpaceUser> spaceUser) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "TryCreate", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpaceUser>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platformUserId, spaceUser);
}
inline bool GlobalNamespace::OVRSpaceUser::TryCreate(::StringW platformUserId, ::by_ref<::GlobalNamespace::OVRSpaceUser> spaceUser) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "TryCreate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpaceUser>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platformUserId, spaceUser);
}
inline bool GlobalNamespace::OVRSpaceUser::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceUser::_ctor(uint64_t spaceUserId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spaceUserId);
}
inline uint64_t GlobalNamespace::OVRSpaceUser::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceUser::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceUser>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRSpaceUser::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRSpaceUser::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpaceUser::OVRSpaceUser(uint64_t _handle) noexcept {
  this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceUser::OVRSpaceUser() {}

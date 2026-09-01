#pragma once
// IWYU pragma private; include "System\TypeIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_impl.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::TypeIdentifiers_Display._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeIdentifiers_Display::*)(::StringW)>(&::System::TypeIdentifiers_Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9e738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9e740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { ::i2c::class_of<::System::TypeIdentifiers_Display*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.get_InternalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::get_InternalName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c9e748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { "get_InternalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeIdentifiers_Display.GetInternalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeIdentifiers_Display::*)()>(&::System::TypeIdentifiers_Display::GetInternalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { "GetInternalName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TypeIdentifiers_Display::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::TypeIdentifiers_Display::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::TypeIdentifiers_Display::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
constexpr ::StringW& System::TypeIdentifiers_Display::__cordl_internal_get_internal_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr ::StringW const& System::TypeIdentifiers_Display::__cordl_internal_get_internal_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_name;
}
constexpr void System::TypeIdentifiers_Display::__cordl_internal_set_internal_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internal_name = value;
}
inline void System::TypeIdentifiers_Display::_ctor(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline ::StringW System::TypeIdentifiers_Display::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeIdentifiers_Display*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TypeIdentifiers_Display::get_InternalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { "get_InternalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TypeIdentifiers_Display::GetInternalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers_Display*>(), { "GetInternalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TypeIdentifiers_Display* System::TypeIdentifiers_Display::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeIdentifiers_Display*>(displayName));
}
/// @brief Convert operator to "::System::TypeIdentifier"
constexpr System::TypeIdentifiers_Display::operator ::System::TypeIdentifier*() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeIdentifier"
constexpr ::System::TypeIdentifier* System::TypeIdentifiers_Display::i___System__TypeIdentifier() noexcept {
  return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::TypeName"
constexpr System::TypeIdentifiers_Display::operator ::System::TypeName*() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeName"
constexpr ::System::TypeName* System::TypeIdentifiers_Display::i___System__TypeName() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::TypeIdentifiers_Display::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
constexpr ::System::IEquatable_1<::System::TypeName*>* System::TypeIdentifiers_Display::i___System__IEquatable_1___System__TypeName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TypeIdentifiers_Display::TypeIdentifiers_Display() {}
//  Writing Method size for method: ::System::TypeIdentifiers.FromDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeIdentifiers::FromDisplay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c9e6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers*>(), { "FromDisplay", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::TypeIdentifier* System::TypeIdentifiers::FromDisplay(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeIdentifiers*>(), { "FromDisplay", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier*>(nullptr, ___internal_method, displayName);
}
// Ctor Parameters []
constexpr ::System::TypeIdentifiers::TypeIdentifiers() {}

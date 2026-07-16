#pragma once
// IWYU pragma private; include "System/TypeNames.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
#include "System/zzzz__TypeNames_def.hpp"
//  Writing Method size for method: ::System::TypeNames_ATypeName.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeNames_ATypeName::*)()>(&::System::TypeNames_ATypeName::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeNames_ATypeName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TypeNames_ATypeName::*)(::System::TypeName*)>(&::System::TypeNames_ATypeName::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c9c354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { "Equals", {}, { ::i2c::type_of<::System::TypeName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeNames_ATypeName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TypeNames_ATypeName::*)()>(&::System::TypeNames_ATypeName::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeNames_ATypeName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TypeNames_ATypeName::*)(::System::Object*)>(&::System::TypeNames_ATypeName::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c9c458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeNames_ATypeName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeNames_ATypeName::*)()>(&::System::TypeNames_ATypeName::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9c4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW System::TypeNames_ATypeName::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::TypeNames_ATypeName::Equals(::System::TypeName* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { "Equals", {}, { ::i2c::type_of<::System::TypeName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::TypeNames_ATypeName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::TypeNames_ATypeName::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeNames_ATypeName*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void System::TypeNames_ATypeName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNames_ATypeName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TypeNames_ATypeName* System::TypeNames_ATypeName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeNames_ATypeName*>());
}
/// @brief Convert operator to "::System::TypeName"
constexpr System::TypeNames_ATypeName::operator ::System::TypeName*() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::TypeName"
constexpr ::System::TypeName* System::TypeNames_ATypeName::i___System__TypeName() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::TypeNames_ATypeName::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
constexpr ::System::IEquatable_1<::System::TypeName*>* System::TypeNames_ATypeName::i___System__IEquatable_1___System__TypeName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TypeNames_ATypeName::TypeNames_ATypeName() {}
// Ctor Parameters []
constexpr ::System::TypeNames::TypeNames() {}

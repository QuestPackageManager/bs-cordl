#pragma once
// IWYU pragma private; include "System/Xml/IDtdDefaultAttributeInfo.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdDefaultAttributeInfo.get_DefaultValueExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::IDtdDefaultAttributeInfo::*)()>(&::System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueExpanded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdDefaultAttributeInfo.get_DefaultValueTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::IDtdDefaultAttributeInfo::*)()>(&::System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdDefaultAttributeInfo.get_ValueLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdDefaultAttributeInfo::*)()>(&::System::Xml::IDtdDefaultAttributeInfo::get_ValueLineNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdDefaultAttributeInfo.get_ValueLinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IDtdDefaultAttributeInfo::*)()>(&::System::Xml::IDtdDefaultAttributeInfo::get_ValueLinePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueExpanded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::IDtdDefaultAttributeInfo::get_DefaultValueTyped() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdDefaultAttributeInfo::get_ValueLineNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::IDtdDefaultAttributeInfo::get_ValueLinePosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdDefaultAttributeInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
constexpr System::Xml::IDtdDefaultAttributeInfo::operator ::System::Xml::IDtdAttributeInfo*() noexcept {
  return static_cast<::System::Xml::IDtdAttributeInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdAttributeInfo"
constexpr ::System::Xml::IDtdAttributeInfo* System::Xml::IDtdDefaultAttributeInfo::i___System__Xml__IDtdAttributeInfo() noexcept {
  return static_cast<::System::Xml::IDtdAttributeInfo*>(static_cast<void*>(this));
}

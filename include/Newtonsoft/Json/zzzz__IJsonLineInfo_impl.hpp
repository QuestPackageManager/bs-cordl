#pragma once
// IWYU pragma private; include "Newtonsoft\Json\IJsonLineInfo.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::IJsonLineInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::IJsonLineInfo::*)()>(&::Newtonsoft::Json::IJsonLineInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::IJsonLineInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::IJsonLineInfo::*)()>(&::Newtonsoft::Json::IJsonLineInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::IJsonLineInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::IJsonLineInfo::*)()>(&::Newtonsoft::Json::IJsonLineInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 2 }));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::IJsonLineInfo::HasLineInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::IJsonLineInfo::get_LineNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::IJsonLineInfo::get_LinePosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::IJsonLineInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}

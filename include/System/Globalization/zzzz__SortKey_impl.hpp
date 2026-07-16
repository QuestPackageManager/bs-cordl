#pragma once
// IWYU pragma private; include "System/Globalization/SortKey.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Globalization::SortKey.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Globalization::SortKey*, ::System::Globalization::SortKey*)>(&::System::Globalization::SortKey::Compare)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bcf4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                                             { "Compare", {}, { ::i2c::type_of<::System::Globalization::SortKey*>(), ::i2c::type_of<::System::Globalization::SortKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::SortKey::*)(int32_t, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::SortKey::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bcf638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::SortKey::*)(int32_t, ::StringW, ::ArrayW<uint8_t>, ::System::Globalization::CompareOptions, int32_t, int32_t,
                                                                                                  int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::SortKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bcf70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::SortKey::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions, ::ArrayW<uint8_t>)>(
    &::System::Globalization::SortKey::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bcf718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::SortKey*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey.get_OriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::SortKey::*)()>(&::System::Globalization::SortKey::get_OriginalString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ::i2c::class_of<::System::Globalization::SortKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey.get_KeyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Globalization::SortKey::*)()>(&::System::Globalization::SortKey::get_KeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcf758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ::i2c::class_of<::System::Globalization::SortKey*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::SortKey::*)(::System::Object*)>(&::System::Globalization::SortKey::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bcf760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ::i2c::class_of<::System::Globalization::SortKey*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::SortKey::*)()>(&::System::Globalization::SortKey::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bcf81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ::i2c::class_of<::System::Globalization::SortKey*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::SortKey::*)()>(&::System::Globalization::SortKey::ToString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5bcf884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ::i2c::class_of<::System::Globalization::SortKey*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::SortKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::SortKey::*)()>(&::System::Globalization::SortKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bcf9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::SortKey::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::StringW const& System::Globalization::SortKey::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Globalization::SortKey::__cordl_internal_set_source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::ArrayW<uint8_t>& System::Globalization::SortKey::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t> const& System::Globalization::SortKey::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void System::Globalization::SortKey::__cordl_internal_set_key(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::System::Globalization::CompareOptions& System::Globalization::SortKey::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::Globalization::CompareOptions const& System::Globalization::SortKey::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::Globalization::SortKey::__cordl_internal_set_options(::System::Globalization::CompareOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___options = value;
}
constexpr int32_t& System::Globalization::SortKey::__cordl_internal_get_lcid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr int32_t const& System::Globalization::SortKey::__cordl_internal_get_lcid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr void System::Globalization::SortKey::__cordl_internal_set_lcid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lcid = value;
}
inline int32_t System::Globalization::SortKey::Compare(::System::Globalization::SortKey* sortkey1, ::System::Globalization::SortKey* sortkey2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                                           { "Compare", {}, { ::i2c::type_of<::System::Globalization::SortKey*>(), ::i2c::type_of<::System::Globalization::SortKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sortkey1, sortkey2);
}
inline void System::Globalization::SortKey::_ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lcid, source, opt);
}
inline void System::Globalization::SortKey::_ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t> buffer, ::System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length,
                                                  int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength, katakanaLength,
                                                   kanaWidthLength, identLength);
}
inline void System::Globalization::SortKey::_ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t> keyData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Globalization::SortKey*>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeName, str, options, keyData);
}
inline ::StringW System::Globalization::SortKey::get_OriginalString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::SortKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Globalization::SortKey::get_KeyData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::SortKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Globalization::SortKey::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::SortKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Globalization::SortKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::SortKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::SortKey::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::SortKey*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Globalization::SortKey::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::SortKey*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::SortKey* System::Globalization::SortKey::New_ctor(int32_t lcid, ::StringW source, ::System::Globalization::CompareOptions opt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::SortKey*>(lcid, source, opt));
}
inline ::System::Globalization::SortKey* System::Globalization::SortKey::New_ctor(int32_t lcid, ::StringW source, ::ArrayW<uint8_t> buffer, ::System::Globalization::CompareOptions opt,
                                                                                  int32_t lv1Length, int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength,
                                                                                  int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::SortKey*>(lcid, source, buffer, opt, lv1Length, lv2Length, lv3Length, kanaSmallLength, markTypeLength,
                                                                                             katakanaLength, kanaWidthLength, identLength));
}
inline ::System::Globalization::SortKey* System::Globalization::SortKey::New_ctor(::StringW localeName, ::StringW str, ::System::Globalization::CompareOptions options, ::ArrayW<uint8_t> keyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::SortKey*>(localeName, str, options, keyData));
}
inline ::System::Globalization::SortKey* System::Globalization::SortKey::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::SortKey*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::SortKey::SortKey() {}

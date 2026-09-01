#pragma once
// IWYU pragma private; include "System\Security\SecurityDocument.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__SecurityDocument_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::SecurityDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityDocument::*)(int32_t)>(&::System::Security::SecurityDocument::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5aee238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.GuaranteeSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityDocument::*)(int32_t)>(&::System::Security::SecurityDocument::GuaranteeSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5aee298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GuaranteeSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.AddString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityDocument::*)(::StringW, ::by_ref<int32_t>)>(&::System::Security::SecurityDocument::AddString)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5aee348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AddString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.AppendString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityDocument::*)(::StringW, ::by_ref<int32_t>)>(&::System::Security::SecurityDocument::AppendString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5aee48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AppendString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.EncodedStringSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Security::SecurityDocument::EncodedStringSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5aee518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "EncodedStringSize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::SecurityDocument::*)(::by_ref<int32_t>, bool)>(&::System::Security::SecurityDocument::GetString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5aee534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.AddToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityDocument::*)(uint8_t, ::by_ref<int32_t>)>(&::System::Security::SecurityDocument::AddToken)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aeea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AddToken", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.GetRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::SecurityDocument::*)()>(&::System::Security::SecurityDocument::GetRootElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5aeea90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetRootElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::SecurityDocument::*)(int32_t, bool)>(
    &::System::Security::SecurityDocument::GetElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aeeaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityDocument.InternalGetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::SecurityDocument::*)(::by_ref<int32_t>, bool)>(
    &::System::Security::SecurityDocument::InternalGetElement)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5aeeac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "InternalGetElement", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::SecurityDocument::__cordl_internal_get_m_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr ::ArrayW<uint8_t> const& System::Security::SecurityDocument::__cordl_internal_get_m_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr void System::Security::SecurityDocument::__cordl_internal_set_m_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_data = value;
}
inline void System::Security::SecurityDocument::_ctor(int32_t numData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numData);
}
inline void System::Security::SecurityDocument::GuaranteeSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GuaranteeSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void System::Security::SecurityDocument::AddString(::StringW str, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AddString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, position);
}
inline void System::Security::SecurityDocument::AppendString(::StringW str, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AppendString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, position);
}
inline int32_t System::Security::SecurityDocument::EncodedStringSize(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "EncodedStringSize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline ::StringW System::Security::SecurityDocument::GetString(::by_ref<int32_t> position, bool bCreate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, position, bCreate);
}
inline void System::Security::SecurityDocument::AddToken(uint8_t b, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "AddToken", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, position);
}
inline ::System::Security::SecurityElement* System::Security::SecurityDocument::GetRootElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetRootElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Security::SecurityDocument::GetElement(int32_t position, bool bCreate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method, position, bCreate);
}
inline ::System::Security::SecurityElement* System::Security::SecurityDocument::InternalGetElement(::by_ref<int32_t> position, bool bCreate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::SecurityDocument*>(), { "InternalGetElement", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method, position, bCreate);
}
inline ::System::Security::SecurityDocument* System::Security::SecurityDocument::New_ctor(int32_t numData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::SecurityDocument*>(numData));
}
// Ctor Parameters []
constexpr ::System::Security::SecurityDocument::SecurityDocument() {}

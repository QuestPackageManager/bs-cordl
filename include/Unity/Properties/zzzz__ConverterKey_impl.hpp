#pragma once
// IWYU pragma private; include "Unity/Properties/ConverterKey.hpp"
#include "Unity/Properties/zzzz__ConverterKey_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ConverterKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::ConverterKey::*)(::System::Type*, ::System::Type*)>(&::Unity::Properties::ConverterKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x700dac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKey.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::ConverterKey::*)()>(&::Unity::Properties::ConverterKey::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x700dacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKey.PrintMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConverterKey::*)(::System::Text::StringBuilder*)>(&::Unity::Properties::ConverterKey::PrintMembers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x700dba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { "PrintMembers", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::ConverterKey::*)()>(&::Unity::Properties::ConverterKey::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x700dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConverterKey::*)(::System::Object*)>(&::Unity::Properties::ConverterKey::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x700dd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::ConverterKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::ConverterKey::*)(::Unity::Properties::ConverterKey)>(&::Unity::Properties::ConverterKey::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x700dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::ConverterKey::_ctor(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination);
}
inline ::StringW Unity::Properties::ConverterKey::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Properties::ConverterKey::PrintMembers(::System::Text::StringBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { "PrintMembers", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, builder);
}
inline int32_t Unity::Properties::ConverterKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Properties::ConverterKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ConverterKey>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Unity::Properties::ConverterKey::Equals(::Unity::Properties::ConverterKey other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ConverterKey>(), { "Equals", {}, { ::i2c::type_of<::Unity::Properties::ConverterKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::ConverterKey>"
constexpr Unity::Properties::ConverterKey::operator ::System::IEquatable_1<::Unity::Properties::ConverterKey>*() {
  return static_cast<::System::IEquatable_1<::Unity::Properties::ConverterKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Properties::ConverterKey>"
constexpr ::System::IEquatable_1<::Unity::Properties::ConverterKey>* Unity::Properties::ConverterKey::i___System__IEquatable_1___Unity__Properties__ConverterKey_() {
  return static_cast<::System::IEquatable_1<::Unity::Properties::ConverterKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Properties::ConverterKey::ConverterKey(::System::Type* SourceType, ::System::Type* DestinationType) noexcept {
  this->SourceType = SourceType;
  this->DestinationType = DestinationType;
}
// Ctor Parameters []
constexpr ::Unity::Properties::ConverterKey::ConverterKey() {}

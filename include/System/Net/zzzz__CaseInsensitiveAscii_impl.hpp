#pragma once
// IWYU pragma private; include "System/Net/CaseInsensitiveAscii.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CaseInsensitiveAscii_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::System::Object*)>(&::System::Net::CaseInsensitiveAscii::GetHashCode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x640ca2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::System::Object*, ::System::Object*)>(&::System::Net::CaseInsensitiveAscii::Compare)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x640cb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.FastGetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::StringW)>(&::System::Net::CaseInsensitiveAscii::FastGetHashCode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x640cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "FastGetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CaseInsensitiveAscii::*)(::System::Object*, ::System::Object*)>(&::System::Net::CaseInsensitiveAscii::Equals)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x640cd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CaseInsensitiveAscii::*)()>(&::System::Net::CaseInsensitiveAscii::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::CaseInsensitiveAscii::setStaticF_StaticInstance(::System::Net::CaseInsensitiveAscii* value) {
  ::cordl_internals::setStaticField<::System::Net::CaseInsensitiveAscii*, "StaticInstance", ::System::Net::CaseInsensitiveAscii*>(std::forward<::System::Net::CaseInsensitiveAscii*>(value));
}
inline ::System::Net::CaseInsensitiveAscii* System::Net::CaseInsensitiveAscii::getStaticF_StaticInstance() {
  return ::cordl_internals::getStaticField<::System::Net::CaseInsensitiveAscii*, "StaticInstance", ::System::Net::CaseInsensitiveAscii*>();
}
inline void System::Net::CaseInsensitiveAscii::setStaticF_AsciiToLower(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "AsciiToLower", ::System::Net::CaseInsensitiveAscii*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::CaseInsensitiveAscii::getStaticF_AsciiToLower() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "AsciiToLower", ::System::Net::CaseInsensitiveAscii*>();
}
inline int32_t System::Net::CaseInsensitiveAscii::GetHashCode(::System::Object* myObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, myObject);
}
inline int32_t System::Net::CaseInsensitiveAscii::Compare(::System::Object* firstObject, ::System::Object* secondObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, firstObject, secondObject);
}
inline int32_t System::Net::CaseInsensitiveAscii::FastGetHashCode(::StringW myString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "FastGetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, myString);
}
inline bool System::Net::CaseInsensitiveAscii::Equals(::System::Object* firstObject, ::System::Object* secondObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, firstObject, secondObject);
}
inline void System::Net::CaseInsensitiveAscii::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CaseInsensitiveAscii*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::CaseInsensitiveAscii* System::Net::CaseInsensitiveAscii::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CaseInsensitiveAscii*>());
}
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::Net::CaseInsensitiveAscii::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Net::CaseInsensitiveAscii::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Net::CaseInsensitiveAscii::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Net::CaseInsensitiveAscii::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::CaseInsensitiveAscii::CaseInsensitiveAscii() {}

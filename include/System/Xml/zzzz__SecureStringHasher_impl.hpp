#pragma once
// IWYU pragma private; include "System/Xml/SecureStringHasher.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SecureStringHasher_HashCodeOfStringDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::SecureStringHasher_HashCodeOfStringDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61ad99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SecureStringHasher_HashCodeOfStringDelegate::*)(::StringW, int32_t, int64_t)>(
    &::System::Xml::SecureStringHasher_HashCodeOfStringDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61ada1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::SecureStringHasher_HashCodeOfStringDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t System::Xml::SecureStringHasher_HashCodeOfStringDelegate::Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, sLen, additionalEntropy);
}
inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* System::Xml::SecureStringHasher_HashCodeOfStringDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate::SecureStringHasher_HashCodeOfStringDelegate() {}
//  Writing Method size for method: ::System::Xml::SecureStringHasher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SecureStringHasher::*)()>(&::System::Xml::SecureStringHasher::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61ad7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::SecureStringHasher::*)(::StringW, ::StringW)>(&::System::Xml::SecureStringHasher::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61ad7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SecureStringHasher::*)(::StringW)>(&::System::Xml::SecureStringHasher::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x61a6a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCodeOfString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int64_t)>(&::System::Xml::SecureStringHasher::GetHashCodeOfString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61ad958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(),
                                                             { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SecureStringHasher.GetHashCodeDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* (*)()>(&::System::Xml::SecureStringHasher::GetHashCodeDelegate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61ad810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "GetHashCodeDelegate", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::SecureStringHasher::__cordl_internal_get_hashCodeRandomizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr int32_t const& System::Xml::SecureStringHasher::__cordl_internal_get_hashCodeRandomizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr void System::Xml::SecureStringHasher::__cordl_internal_set_hashCodeRandomizer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCodeRandomizer = value;
}
inline void System::Xml::SecureStringHasher::setStaticF_hashCodeDelegate(::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* value) {
  ::cordl_internals::setStaticField<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*, "hashCodeDelegate", ::System::Xml::SecureStringHasher*>(
      std::forward<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(value));
}
inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* System::Xml::SecureStringHasher::getStaticF_hashCodeDelegate() {
  return ::cordl_internals::getStaticField<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*, "hashCodeDelegate", ::System::Xml::SecureStringHasher*>();
}
inline void System::Xml::SecureStringHasher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::SecureStringHasher::Equals(::StringW x, ::StringW y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::Xml::SecureStringHasher::GetHashCode(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t System::Xml::SecureStringHasher::GetHashCodeOfString(::StringW key, int32_t sLen, int64_t additionalEntropy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(),
                                                           { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, key, sLen, additionalEntropy);
}
inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* System::Xml::SecureStringHasher::GetHashCodeDelegate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SecureStringHasher*>(), { "GetHashCodeDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*>(nullptr, ___internal_method);
}
inline ::System::Xml::SecureStringHasher* System::Xml::SecureStringHasher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SecureStringHasher*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr System::Xml::SecureStringHasher::operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* System::Xml::SecureStringHasher::i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::SecureStringHasher::SecureStringHasher() {}

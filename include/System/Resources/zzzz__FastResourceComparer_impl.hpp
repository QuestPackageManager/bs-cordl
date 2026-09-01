#pragma once
// IWYU pragma private; include "System\Resources\FastResourceComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__FastResourceComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Resources::FastResourceComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::FastResourceComparer::*)(::System::Object*)>(&::System::Resources::FastResourceComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b74e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::FastResourceComparer::*)(::StringW)>(&::System::Resources::FastResourceComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b74f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.HashFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Resources::FastResourceComparer::HashFunction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b74ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "HashFunction", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::FastResourceComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Resources::FastResourceComparer::Compare)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b74fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::FastResourceComparer::*)(::StringW, ::StringW)>(&::System::Resources::FastResourceComparer::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b75010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::FastResourceComparer::*)(::StringW, ::StringW)>(&::System::Resources::FastResourceComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b75020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::FastResourceComparer::*)(::System::Object*, ::System::Object*)>(&::System::Resources::FastResourceComparer::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b75030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::System::Resources::FastResourceComparer::CompareOrdinal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b75098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                             { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::StringW)>(&::System::Resources::FastResourceComparer::CompareOrdinal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b7511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                             { "CompareOrdinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::StringW)>(&::System::Resources::FastResourceComparer::CompareOrdinal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b75194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                             { "CompareOrdinal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::FastResourceComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::FastResourceComparer::*)()>(&::System::Resources::FastResourceComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b751f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Resources::FastResourceComparer::setStaticF_Default(::System::Resources::FastResourceComparer* value) {
  ::cordl_internals::setStaticField<::System::Resources::FastResourceComparer*, "Default", ::System::Resources::FastResourceComparer*>(std::forward<::System::Resources::FastResourceComparer*>(value));
}
inline ::System::Resources::FastResourceComparer* System::Resources::FastResourceComparer::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::Resources::FastResourceComparer*, "Default", ::System::Resources::FastResourceComparer*>();
}
inline int32_t System::Resources::FastResourceComparer::GetHashCode(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t System::Resources::FastResourceComparer::GetHashCode(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t System::Resources::FastResourceComparer::HashFunction(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "HashFunction", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, key);
}
inline int32_t System::Resources::FastResourceComparer::Compare(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline int32_t System::Resources::FastResourceComparer::Compare(::StringW a, ::StringW b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline bool System::Resources::FastResourceComparer::Equals(::StringW a, ::StringW b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline bool System::Resources::FastResourceComparer::Equals(::System::Object* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline int32_t System::Resources::FastResourceComparer::CompareOrdinal(::StringW a, ::ArrayW<uint8_t> bytes, int32_t bCharLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                           { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, bytes, bCharLength);
}
inline int32_t System::Resources::FastResourceComparer::CompareOrdinal(::ArrayW<uint8_t> bytes, int32_t aCharLength, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                           { "CompareOrdinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes, aCharLength, b);
}
inline int32_t System::Resources::FastResourceComparer::CompareOrdinal(uint8_t* a, int32_t byteLen, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(),
                                                           { "CompareOrdinal", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, byteLen, b);
}
inline void System::Resources::FastResourceComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::FastResourceComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Resources::FastResourceComparer* System::Resources::FastResourceComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::FastResourceComparer*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Resources::FastResourceComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Resources::FastResourceComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::Resources::FastResourceComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Resources::FastResourceComparer::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::StringW>"
constexpr System::Resources::FastResourceComparer::operator ::System::Collections::Generic::IComparer_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::StringW>"
constexpr ::System::Collections::Generic::IComparer_1<::StringW>* System::Resources::FastResourceComparer::i___System__Collections__Generic__IComparer_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr System::Resources::FastResourceComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* System::Resources::FastResourceComparer::i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::FastResourceComparer::FastResourceComparer() {}

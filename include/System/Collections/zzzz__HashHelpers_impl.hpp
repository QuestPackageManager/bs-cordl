#pragma once
// IWYU pragma private; include "System\Collections\HashHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__HashHelpers_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::HashHelpers.IsPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Collections::HashHelpers::IsPrime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5be3554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "IsPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::HashHelpers.GetPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::HashHelpers::GetPrime)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5be35fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "GetPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::HashHelpers.ExpandPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::HashHelpers::ExpandPrime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5be3784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "ExpandPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::HashHelpers.get_SerializationInfoTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* (*)()>(
    &::System::Collections::HashHelpers::get_SerializationInfoTable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5be380c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "get_SerializationInfoTable", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Collections::HashHelpers::setStaticF_primes(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "primes", ::System::Collections::HashHelpers*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Collections::HashHelpers::getStaticF_primes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "primes", ::System::Collections::HashHelpers*>();
}
inline void System::Collections::HashHelpers::setStaticF_s_serializationInfoTable(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*, "s_serializationInfoTable",
                                    ::System::Collections::HashHelpers*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::HashHelpers::getStaticF_s_serializationInfoTable() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*,
                                           "s_serializationInfoTable", ::System::Collections::HashHelpers*>();
}
inline bool System::Collections::HashHelpers::IsPrime(int32_t candidate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "IsPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, candidate);
}
inline int32_t System::Collections::HashHelpers::GetPrime(int32_t min) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "GetPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, min);
}
inline int32_t System::Collections::HashHelpers::ExpandPrime(int32_t oldSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "ExpandPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldSize);
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
System::Collections::HashHelpers::get_SerializationInfoTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::HashHelpers*>(), { "get_SerializationInfoTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*>(nullptr,
                                                                                                                                                                                    ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::HashHelpers::HashHelpers() {}

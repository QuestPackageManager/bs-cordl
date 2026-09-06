#pragma once
// IWYU pragma private; include "System/Collections/IDictionaryEnumerator.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::IDictionaryEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::IDictionaryEnumerator::*)()>(&::System::Collections::IDictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::IDictionaryEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::IDictionaryEnumerator::*)()>(&::System::Collections::IDictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::IDictionaryEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Collections::IDictionaryEnumerator::*)()>(
    &::System::Collections::IDictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Collections::IDictionaryEnumerator::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::IDictionaryEnumerator::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Collections::IDictionaryEnumerator::get_Entry() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IDictionaryEnumerator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::IDictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::IDictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}

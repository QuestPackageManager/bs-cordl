#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FixupHolderList.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)()>(&::System::Runtime::Serialization::FixupHolderList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b516f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)(int32_t)>(&::System::Runtime::Serialization::FixupHolderList::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b517fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)(::System::Runtime::Serialization::FixupHolder*)>(
    &::System::Runtime::Serialization::FixupHolderList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b51860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { ::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList.EnlargeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)()>(&::System::Runtime::Serialization::FixupHolderList::EnlargeArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b51908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { "EnlargeArray", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*>& System::Runtime::Serialization::FixupHolderList::__cordl_internal_get_m_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*> const& System::Runtime::Serialization::FixupHolderList::__cordl_internal_get_m_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
constexpr void System::Runtime::Serialization::FixupHolderList::__cordl_internal_set_m_values(::ArrayW<::System::Runtime::Serialization::FixupHolder*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_values = value;
}
constexpr int32_t& System::Runtime::Serialization::FixupHolderList::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Runtime::Serialization::FixupHolderList::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void System::Runtime::Serialization::FixupHolderList::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
inline void System::Runtime::Serialization::FixupHolderList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::FixupHolderList::_ctor(int32_t startingSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startingSize);
}
inline void System::Runtime::Serialization::FixupHolderList::Add(::System::Runtime::Serialization::FixupHolder* fixup) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline void System::Runtime::Serialization::FixupHolderList::EnlargeArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FixupHolderList*>(), { "EnlargeArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::FixupHolderList* System::Runtime::Serialization::FixupHolderList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::FixupHolderList*>());
}
inline ::System::Runtime::Serialization::FixupHolderList* System::Runtime::Serialization::FixupHolderList::New_ctor(int32_t startingSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::FixupHolderList*>(startingSize));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FixupHolderList::FixupHolderList() {}

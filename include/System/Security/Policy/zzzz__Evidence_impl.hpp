#pragma once
// IWYU pragma private; include "System\Security\Policy\Evidence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Policy::Evidence_EvidenceEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Policy::Evidence_EvidenceEnumerator::*)(::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*)>(
    &::System::Security::Policy::Evidence_EvidenceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af41dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence_EvidenceEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Policy::Evidence_EvidenceEnumerator::*)()>(&::System::Security::Policy::Evidence_EvidenceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5af41e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence_EvidenceEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Policy::Evidence_EvidenceEnumerator::*)()>(&::System::Security::Policy::Evidence_EvidenceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5af4314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence_EvidenceEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::Policy::Evidence_EvidenceEnumerator::*)()>(
    &::System::Security::Policy::Evidence_EvidenceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5af4438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_currentEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEnum;
}
constexpr ::System::Collections::IEnumerator* const& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_currentEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEnum;
}
constexpr void System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_set_currentEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentEnum = value;
}
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_hostEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEnum;
}
constexpr ::System::Collections::IEnumerator* const& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_hostEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEnum;
}
constexpr void System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_set_hostEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostEnum = value;
}
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_assemblyEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEnum;
}
constexpr ::System::Collections::IEnumerator* const& System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_get_assemblyEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEnum;
}
constexpr void System::Security::Policy::Evidence_EvidenceEnumerator::__cordl_internal_set_assemblyEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyEnum = value;
}
inline void System::Security::Policy::Evidence_EvidenceEnumerator::_ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostenum, assemblyenum);
}
inline bool System::Security::Policy::Evidence_EvidenceEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Policy::Evidence_EvidenceEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::Evidence_EvidenceEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence_EvidenceEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Security::Policy::Evidence_EvidenceEnumerator* System::Security::Policy::Evidence_EvidenceEnumerator::New_ctor(::System::Collections::IEnumerator* hostenum,
                                                                                                                                ::System::Collections::IEnumerator* assemblyenum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Policy::Evidence_EvidenceEnumerator*>(hostenum, assemblyenum));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Security::Policy::Evidence_EvidenceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Security::Policy::Evidence_EvidenceEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Policy::Evidence_EvidenceEnumerator::Evidence_EvidenceEnumerator() {}
//  Writing Method size for method: ::System::Security::Policy::Evidence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af4010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_Count)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5af4014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af4070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af4078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Policy::Evidence::*)(::System::Array*, int32_t)>(&::System::Security::Policy::Evidence::CopyTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5af407c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5af4140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Policy::Evidence::__cordl_internal_get__locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr bool const& System::Security::Policy::Evidence::__cordl_internal_get__locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set__locked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locked = value;
}
constexpr ::System::Collections::ArrayList*& System::Security::Policy::Evidence::__cordl_internal_get_hostEvidenceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEvidenceList;
}
constexpr ::System::Collections::ArrayList* const& System::Security::Policy::Evidence::__cordl_internal_get_hostEvidenceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEvidenceList;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set_hostEvidenceList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostEvidenceList = value;
}
constexpr ::System::Collections::ArrayList*& System::Security::Policy::Evidence::__cordl_internal_get_assemblyEvidenceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEvidenceList;
}
constexpr ::System::Collections::ArrayList* const& System::Security::Policy::Evidence::__cordl_internal_get_assemblyEvidenceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEvidenceList;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set_assemblyEvidenceList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyEvidenceList = value;
}
inline void System::Security::Policy::Evidence::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Policy::Evidence::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Policy::Evidence::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::Evidence::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Security::Policy::Evidence::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Security::Policy::Evidence::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Policy::Evidence*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Security::Policy::Evidence* System::Security::Policy::Evidence::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Policy::Evidence*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Security::Policy::Evidence::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Security::Policy::Evidence::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Security::Policy::Evidence::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Security::Policy::Evidence::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Policy::Evidence::Evidence() {}

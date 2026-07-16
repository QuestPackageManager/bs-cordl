#pragma once
// IWYU pragma private; include "System/Security/AccessControl/GenericAcl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/AccessControl/zzzz__AceEnumerator_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAcl::*)()>(&::System::Security::AccessControl::GenericAcl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1b0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::GenericAcl::*)()>(&::System::Security::AccessControl::GenericAcl::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::GenericAcl::*)()>(&::System::Security::AccessControl::GenericAcl::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1da24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::GenericAcl::*)(int32_t)>(
    &::System::Security::AccessControl::GenericAcl::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::GenericAcl::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::AccessControl::GenericAcl::*)()>(&::System::Security::AccessControl::GenericAcl::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1da2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAcl::*)(::ArrayW<::System::Security::AccessControl::GenericAce*>, int32_t)>(
    &::System::Security::AccessControl::GenericAcl::CopyTo)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b1da30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(),
                                                             { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Security::AccessControl::GenericAce*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAcl::*)(::System::Array*, int32_t)>(
    &::System::Security::AccessControl::GenericAcl::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b1dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceEnumerator* (::System::Security::AccessControl::GenericAcl::*)()>(
    &::System::Security::AccessControl::GenericAcl::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAcl.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Security::AccessControl::GenericAcl::*)()>(
    &::System::Security::AccessControl::GenericAcl::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1dc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::GenericAcl::setStaticF_AclRevision(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "AclRevision", ::System::Security::AccessControl::GenericAcl*>(std::forward<uint8_t>(value));
}
inline uint8_t System::Security::AccessControl::GenericAcl::getStaticF_AclRevision() {
  return ::cordl_internals::getStaticField<uint8_t, "AclRevision", ::System::Security::AccessControl::GenericAcl*>();
}
inline void System::Security::AccessControl::GenericAcl::setStaticF_AclRevisionDS(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "AclRevisionDS", ::System::Security::AccessControl::GenericAcl*>(std::forward<uint8_t>(value));
}
inline uint8_t System::Security::AccessControl::GenericAcl::getStaticF_AclRevisionDS() {
  return ::cordl_internals::getStaticField<uint8_t, "AclRevisionDS", ::System::Security::AccessControl::GenericAcl*>();
}
inline void System::Security::AccessControl::GenericAcl::setStaticF_MaxBinaryLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxBinaryLength", ::System::Security::AccessControl::GenericAcl*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::AccessControl::GenericAcl::getStaticF_MaxBinaryLength() {
  return ::cordl_internals::getStaticField<int32_t, "MaxBinaryLength", ::System::Security::AccessControl::GenericAcl*>();
}
inline void System::Security::AccessControl::GenericAcl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::GenericAcl::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::AccessControl::GenericAcl::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::GenericAcl::get_Item(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(this, ___internal_method, index);
}
inline void System::Security::AccessControl::GenericAcl::set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Object* System::Security::AccessControl::GenericAcl::get_SyncRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Security::AccessControl::GenericAcl::CopyTo(::ArrayW<::System::Security::AccessControl::GenericAce*> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Security::AccessControl::GenericAce*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void System::Security::AccessControl::GenericAcl::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Security::AccessControl::AceEnumerator* System::Security::AccessControl::GenericAcl::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Security::AccessControl::GenericAcl::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAcl*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAcl* System::Security::AccessControl::GenericAcl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::GenericAcl*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Security::AccessControl::GenericAcl::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Security::AccessControl::GenericAcl::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Security::AccessControl::GenericAcl::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Security::AccessControl::GenericAcl::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::GenericAcl::GenericAcl() {}

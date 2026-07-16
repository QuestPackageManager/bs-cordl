#pragma once
// IWYU pragma private; include "System/Security/PermissionSet.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aecf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::Permissions::PermissionState)>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5aed064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Permissions::PermissionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::IPermission*)>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5aecc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::IPermission*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)(::System::Array*, int32_t)>(&::System::Security::PermissionSet::CopyTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5aed8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Demand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::Demand)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5aeda04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "Demand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CasOnlyDemand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)(int32_t)>(&::System::Security::PermissionSet::CasOnlyDemand)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5aeccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "CasOnlyDemand", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5aedfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsEmpty)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5aedc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsUnrestricted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsUnrestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aedfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "IsUnrestricted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5aedfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::ToXml)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5aed1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5aee004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5aee024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aee044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::PermissionSet::*)(::System::Object*)>(
    &::System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aee048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::PermissionSet::*)(::System::Object*)>(&::System::Security::PermissionSet::Equals)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5aed690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5aed860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ::i2c::class_of<::System::Security::PermissionSet*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Permissions::PermissionState& System::Security::PermissionSet::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Security::Permissions::PermissionState const& System::Security::PermissionSet::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Security::PermissionSet::__cordl_internal_set_state(::System::Security::Permissions::PermissionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Collections::ArrayList*& System::Security::PermissionSet::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::ArrayList* const& System::Security::PermissionSet::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Security::PermissionSet::__cordl_internal_set_list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
constexpr bool& System::Security::PermissionSet::__cordl_internal_get__declsec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declsec;
}
constexpr bool const& System::Security::PermissionSet::__cordl_internal_get__declsec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declsec;
}
constexpr void System::Security::PermissionSet::__cordl_internal_set__declsec(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____declsec = value;
}
constexpr ::ArrayW<bool>& System::Security::PermissionSet::__cordl_internal_get__ignored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignored;
}
constexpr ::ArrayW<bool> const& System::Security::PermissionSet::__cordl_internal_get__ignored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignored;
}
constexpr void System::Security::PermissionSet::__cordl_internal_set__ignored(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignored = value;
}
inline void System::Security::PermissionSet::setStaticF_psUnrestricted(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "psUnrestricted", ::System::Security::PermissionSet*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::Security::PermissionSet::getStaticF_psUnrestricted() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "psUnrestricted", ::System::Security::PermissionSet*>();
}
inline void System::Security::PermissionSet::setStaticF_action(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "action", ::System::Security::PermissionSet*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::Security::PermissionSet::getStaticF_action() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "action", ::System::Security::PermissionSet*>();
}
inline void System::Security::PermissionSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::PermissionSet::_ctor(::System::Security::Permissions::PermissionState state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Permissions::PermissionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Security::PermissionSet::_ctor(::System::Security::IPermission* perm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::IPermission*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perm);
}
inline void System::Security::PermissionSet::CopyTo(::System::Array* array, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void System::Security::PermissionSet::Demand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "Demand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::PermissionSet::CasOnlyDemand(int32_t skip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "CasOnlyDemand", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skip);
}
inline ::System::Collections::IEnumerator* System::Security::PermissionSet::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::IsUnrestricted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(), { "IsUnrestricted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Security::PermissionSet::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Security::PermissionSet::ToXml() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline int32_t System::Security::PermissionSet::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Security::PermissionSet::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::PermissionSet*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline bool System::Security::PermissionSet::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Security::PermissionSet::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::PermissionSet*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::PermissionSet*>());
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor(::System::Security::Permissions::PermissionState state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::PermissionSet*>(state));
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor(::System::Security::IPermission* perm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::PermissionSet*>(perm));
}
/// @brief Convert operator to "::System::Security::ISecurityEncodable"
constexpr System::Security::PermissionSet::operator ::System::Security::ISecurityEncodable*() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::ISecurityEncodable"
constexpr ::System::Security::ISecurityEncodable* System::Security::PermissionSet::i___System__Security__ISecurityEncodable() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Security::PermissionSet::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Security::PermissionSet::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Security::PermissionSet::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Security::PermissionSet::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Security::PermissionSet::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Security::PermissionSet::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::PermissionSet::PermissionSet() {}

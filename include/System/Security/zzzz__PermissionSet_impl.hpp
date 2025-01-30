#pragma once
// IWYU pragma private; include "System/Security/PermissionSet.hpp"
#include "System/Collections/zzzz__ICollection_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_impl.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_impl.hpp"
#include "System/Security/zzzz__ISecurityEncodable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3c96128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::Permissions::PermissionState)>(
    &::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3c9620c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Security::IPermission*)>(
    &::System::Security::PermissionSet::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3c95e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Array*, int32_t)>(&::System::Security::PermissionSet::CopyTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3c96a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Demand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::Demand)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3c96c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "Demand",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.CasOnlyDemand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(int32_t)>(&::System::Security::PermissionSet::CasOnlyDemand)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3c95e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "CasOnlyDemand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Security::PermissionSet::*)()>(
    &::System::Security::PermissionSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c971d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsEmpty)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x3c96e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.IsUnrestricted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::IsUnrestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c971c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "IsUnrestricted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c971fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.ToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::System::Security::PermissionSet::*)()>(
    &::System::Security::PermissionSet::ToXml)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x3c9639c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c97228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c9724c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c97270;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::PermissionSet::*)(::System::Object*)>(
    &::System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c97274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                               "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::PermissionSet::*)(::System::Object*)>(&::System::Security::PermissionSet::Equals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3c96884;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::PermissionSet.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::PermissionSet::*)()>(&::System::Security::PermissionSet::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c96a58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 2));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<bool, ::Array<bool>*>& System::Security::PermissionSet::__cordl_internal_get__ignored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignored;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& System::Security::PermissionSet::__cordl_internal_get__ignored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignored;
}
constexpr void System::Security::PermissionSet::__cordl_internal_set__ignored(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ignored)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::PermissionSet::setStaticF_psUnrestricted(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "psUnrestricted",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get>(
      std::forward<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Security::PermissionSet::getStaticF_psUnrestricted() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "psUnrestricted",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get>();
}
inline void System::Security::PermissionSet::setStaticF_action(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "action",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get>(
      std::forward<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Security::PermissionSet::getStaticF_action() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "action",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get>();
}
inline void System::Security::PermissionSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::PermissionSet::_ctor(::System::Security::Permissions::PermissionState state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Security::PermissionSet::_ctor(::System::Security::IPermission* perm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, perm);
}
inline void System::Security::PermissionSet::CopyTo(::System::Array* array, int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline void System::Security::PermissionSet::Demand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "Demand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::PermissionSet::CasOnlyDemand(int32_t skip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "CasOnlyDemand",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skip);
}
inline ::System::Collections::IEnumerator* System::Security::PermissionSet::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::IsUnrestricted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), "IsUnrestricted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Security::PermissionSet::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Security::PermissionSet::ToXml() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
inline int32_t System::Security::PermissionSet::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Security::PermissionSet::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Security::PermissionSet::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Security::PermissionSet::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(),
                                                                             "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline bool System::Security::PermissionSet::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Security::PermissionSet::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::PermissionSet*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::PermissionSet*>());
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor(::System::Security::Permissions::PermissionState state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::PermissionSet*>(state));
}
inline ::System::Security::PermissionSet* System::Security::PermissionSet::New_ctor(::System::Security::IPermission* perm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::PermissionSet*>(perm));
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

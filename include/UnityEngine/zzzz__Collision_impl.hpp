#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__ArticulationBody_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::GetEnumerator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e1e3e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_impactForceSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_impactForceSum)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e1e470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_impactForceSum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_frictionForceSum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_frictionForceSum)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e1e4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_frictionForceSum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_other
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_other)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e1e4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_other",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> (::UnityEngine::Collision::*)()>(
    &::UnityEngine::Collision::GetContacts_Internal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e1e570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts_Internal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_relativeVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_relativeVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e1e58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_relativeVelocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_rigidbody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_rigidbody)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e1e598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_rigidbody",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_articulationBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ArticulationBody> (::UnityEngine::Collision::*)()>(
    &::UnityEngine::Collision::get_articulationBody)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e1e614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_articulationBody",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_body
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e1e690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_body",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_collider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e1e698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_collider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_transform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e1e6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_transform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_gameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_gameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e1e730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_gameObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contactCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e1e7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_contactCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contacts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> (::UnityEngine::Collision::*)()>(
    &::UnityEngine::Collision::get_contacts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e1e3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_contacts",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ContactPoint (::UnityEngine::Collision::*)(int32_t)>(&::UnityEngine::Collision::GetContact)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2e1e7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Collision::*)(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>)>(
    &::UnityEngine::Collision::GetContacts)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e1e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Collision::*)(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*)>(
    &::UnityEngine::Collision::GetContacts)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e1e960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_impulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_impulse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e1ea34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_impulse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e1ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__cordl_internal_get_m_Impulse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Impulse;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__cordl_internal_get_m_Impulse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Impulse;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Impulse(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Impulse = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__cordl_internal_get_m_RelativeVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RelativeVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__cordl_internal_get_m_RelativeVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RelativeVelocity;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_RelativeVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RelativeVelocity = value;
}
constexpr ::UnityW<::UnityEngine::Component>& UnityEngine::Collision::__cordl_internal_get_m_Body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Body;
}
constexpr ::UnityW<::UnityEngine::Component> const& UnityEngine::Collision::__cordl_internal_get_m_Body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Body;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Body(::UnityW<::UnityEngine::Component> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::Collision::__cordl_internal_get_m_Collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::Collision::__cordl_internal_get_m_Collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Collider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Collision::__cordl_internal_get_m_ContactCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContactCount;
}
constexpr int32_t const& UnityEngine::Collision::__cordl_internal_get_m_ContactCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContactCount;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_ContactCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContactCount = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__cordl_internal_get_m_ReusedContacts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReusedContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__cordl_internal_get_m_ReusedContacts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReusedContacts;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReusedContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LegacyContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::IEnumerator* UnityEngine::Collision::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_impactForceSum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_impactForceSum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_frictionForceSum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_frictionForceSum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_other() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_other",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> UnityEngine::Collision::GetContacts_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts_Internal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_relativeVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_relativeVelocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::Collision::get_rigidbody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_rigidbody",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ArticulationBody> UnityEngine::Collision::get_articulationBody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_articulationBody",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ArticulationBody>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_body() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_body",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Collision::get_collider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_collider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Collision::get_transform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_transform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Collision::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_gameObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Collision::get_contactCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_contactCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> UnityEngine::Collision::get_contacts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_contacts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::ContactPoint UnityEngine::Collision::GetContact(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPoint, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Collision::GetContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> contacts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, contacts);
}
inline int32_t UnityEngine::Collision::GetContacts(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* contacts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "GetContacts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, contacts);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_impulse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), "get_impulse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Collision*>());
}
inline void UnityEngine::Collision::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision() {}

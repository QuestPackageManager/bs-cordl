#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ArticulationBody_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision.get_impulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_impulse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fdce94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_impulse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_relativeVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_relativeVelocity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fdcea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_relativeVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisRigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisRigidbody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fdcedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisRigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_rigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_rigidbody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fdcf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_rigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisArticulationBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ArticulationBody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisArticulationBody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fdd014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisArticulationBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_articulationBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ArticulationBody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_articulationBody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fdd098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_articulationBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisBody)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fdcf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_body)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fdcffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisCollider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fdd1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_collider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fdd2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_collider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisLinearVelocity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fdd2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisLinearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_linearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_linearVelocity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fdd320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_linearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisAngularVelocity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fdd35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_angularVelocity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fdd398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_angularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisTransform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6fdd3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_transform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6fdd400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_thisGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_thisGameObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6fdd42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_gameObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6fdd458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_Flipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_Flipped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fdd484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_Flipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.set_Flipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(bool)>(&::UnityEngine::Collision::set_Flipped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fdd48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "set_Flipped", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contactCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fdd494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contactCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ContactPoint> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contacts)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6fdd49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contacts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6fdd650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader const>, ::by_ref<::UnityEngine::ContactPair const>, bool)>(
    &::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6fdd670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Collision*>(),
            { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader const>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair const>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.Reuse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader const>, ::by_ref<::UnityEngine::ContactPair const>)>(
    &::UnityEngine::Collision::Reuse)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fdd720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                                         { "Reuse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader const>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPoint (::UnityEngine::Collision::*)(int32_t)>(&::UnityEngine::Collision::GetContact)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6fdd764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContact", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)(::ArrayW<::UnityEngine::ContactPoint>)>(&::UnityEngine::Collision::GetContacts)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fdd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContacts", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*)>(
    &::UnityEngine::Collision::GetContacts)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6fdda04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContacts", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ContactPairHeader& UnityEngine::Collision::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::UnityEngine::ContactPairHeader const& UnityEngine::Collision::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Header = value;
}
constexpr ::UnityEngine::ContactPair& UnityEngine::Collision::__cordl_internal_get_m_Pair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pair;
}
constexpr ::UnityEngine::ContactPair const& UnityEngine::Collision::__cordl_internal_get_m_Pair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pair;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Pair(::UnityEngine::ContactPair value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pair = value;
}
constexpr bool& UnityEngine::Collision::__cordl_internal_get_m_Flipped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flipped;
}
constexpr bool const& UnityEngine::Collision::__cordl_internal_get_m_Flipped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flipped;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Flipped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flipped = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint>& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint> const& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LegacyContacts = value;
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_impulse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_impulse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_relativeVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_relativeVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::Collision::get_thisRigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisRigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::Collision::get_rigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_rigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ArticulationBody> UnityEngine::Collision::get_thisArticulationBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisArticulationBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ArticulationBody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ArticulationBody> UnityEngine::Collision::get_articulationBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_articulationBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ArticulationBody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_thisBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Collision::get_thisCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Collision::get_collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_thisLinearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisLinearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_linearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_linearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_thisAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_angularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_angularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Collision::get_thisTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Collision::get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Collision::get_thisGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_thisGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Collision::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_gameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool UnityEngine::Collision::get_Flipped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_Flipped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Collision::set_Flipped(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "set_Flipped", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Collision::get_contactCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contactCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ContactPoint> UnityEngine::Collision::get_contacts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contacts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint>>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPairHeader const> header, /* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPair const> pair,
                                          bool flipped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Collision*>(),
                       { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader const>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair const>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Collision::Reuse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPairHeader const> header, /* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPair const> pair) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                                              { "Reuse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader const>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, pair);
}
inline ::UnityEngine::ContactPoint UnityEngine::Collision::GetContact(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContact", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPoint>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Collision::GetContacts(::ArrayW<::UnityEngine::ContactPoint> contacts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContacts", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, contacts);
}
inline int32_t UnityEngine::Collision::GetContacts(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* contacts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContacts", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, contacts);
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>());
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPairHeader const> header,
                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPair const> pair, bool flipped) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>(header, pair, flipped));
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision() {}

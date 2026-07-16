#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
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
  constexpr static std::size_t addrs = 0x6b6df44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_impulse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_relativeVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_relativeVelocity)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b6df50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_relativeVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_rigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_rigidbody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b6df7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_rigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_articulationBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ArticulationBody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_articulationBody)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b6e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_articulationBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_body)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b6e000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_collider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b6e154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_collider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_transform)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b6e24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_gameObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b6e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_Flipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_Flipped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6e37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_Flipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.set_Flipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(bool)>(&::UnityEngine::Collision::set_Flipped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6e384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "set_Flipped", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contactCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6e38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contactCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ContactPoint> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contacts)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b6e394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_contacts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b6e548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>, bool)>(
    &::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b6e564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.Reuse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>)>(
    &::UnityEngine::Collision::Reuse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b6e614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                                                { "Reuse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPoint (::UnityEngine::Collision::*)(int32_t)>(&::UnityEngine::Collision::GetContact)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6b6e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContact", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)(::ArrayW<::UnityEngine::ContactPoint>)>(&::UnityEngine::Collision::GetContacts)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b6e850;

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
  constexpr static std::size_t addrs = 0x6b6e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "GetContacts", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::GetEnumerator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b6ec30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { ::i2c::class_of<::UnityEngine::Collision*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_impactForceSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_impactForceSum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b6ec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_impactForceSum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_frictionForceSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_frictionForceSum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b6ec9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_frictionForceSum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_other
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_other)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b6ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_other", {}, {} })));
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
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::Collision::get_rigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_rigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ArticulationBody> UnityEngine::Collision::get_articulationBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_articulationBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ArticulationBody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Collision::get_collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Collision::get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
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
inline void UnityEngine::Collision::_ctor(::by_ref<::UnityEngine::ContactPairHeader> header, ::by_ref<::UnityEngine::ContactPair> pair, bool flipped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Collision::Reuse(::by_ref<::UnityEngine::ContactPairHeader> header, ::by_ref<::UnityEngine::ContactPair> pair) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(),
                                                           { "Reuse", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>() } })));
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
inline ::System::Collections::IEnumerator* UnityEngine::Collision::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Collision*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_impactForceSum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_impactForceSum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Collision::get_frictionForceSum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_frictionForceSum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_other() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Collision*>(), { "get_other", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>());
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor(::by_ref<::UnityEngine::ContactPairHeader> header, ::by_ref<::UnityEngine::ContactPair> pair, bool flipped) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>(header, pair, flipped));
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision() {}

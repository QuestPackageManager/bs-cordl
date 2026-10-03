#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairHeader.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairHeaderFlags_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_bodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_bodyInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_otherBodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_otherBodyInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_bodyEntityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_bodyEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyEntityId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_otherBodyEntityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_otherBodyEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyEntityId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_body)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fdd11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_otherBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_otherBody)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fdd178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_bodyLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_bodyLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ffe8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyLinearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_bodyAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_bodyAngularVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ffe8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_otherBodyLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_otherBodyLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ffe8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyLinearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_otherBodyAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_otherBodyAngularVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ffe8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_pairCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_pairCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_pairCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_hasRemovedBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_hasRemovedBody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ffb050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_hasRemovedBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.GetContactPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::ContactPair> (::UnityEngine::ContactPairHeader::*)(int32_t)>(&::UnityEngine::ContactPairHeader::GetContactPair)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ffb060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "GetContactPair", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.GetContactPair_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPair* (::UnityEngine::ContactPairHeader::*)(int32_t)>(&::UnityEngine::ContactPairHeader::GetContactPair_Internal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ffe8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "GetContactPair_Internal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_BodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_BodyInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_BodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_OtherBodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_OtherBodyInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_OtherBodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_Body)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ffe968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_OtherBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_OtherBody)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ffe96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_OtherBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPairHeader.get_PairCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPairHeader::*)()>(&::UnityEngine::ContactPairHeader::get_PairCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_PairCount", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ContactPairHeader::get_bodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPairHeader::get_otherBodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::EntityId UnityEngine::ContactPairHeader::get_bodyEntityId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyEntityId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method);
}
inline ::UnityEngine::EntityId UnityEngine::ContactPairHeader::get_otherBodyEntityId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyEntityId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::ContactPairHeader::get_body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::ContactPairHeader::get_otherBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairHeader::get_bodyLinearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyLinearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairHeader::get_bodyAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_bodyAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairHeader::get_otherBodyLinearVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyLinearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPairHeader::get_otherBodyAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_otherBodyAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPairHeader::get_pairCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_pairCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPairHeader::get_hasRemovedBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_hasRemovedBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::ContactPair> UnityEngine::ContactPairHeader::GetContactPair(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "GetContactPair", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::ContactPair>>(*this, ___internal_method, index);
}
inline ::UnityEngine::ContactPair* UnityEngine::ContactPairHeader::GetContactPair_Internal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "GetContactPair_Internal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPair*>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::ContactPairHeader::get_BodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_BodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPairHeader::get_OtherBodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_OtherBodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::ContactPairHeader::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::ContactPairHeader::get_OtherBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_OtherBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPairHeader::get_PairCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPairHeader>(), { "get_PairCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyID", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OtherBodyID", ty: "::UnityEngine::EntityId",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NbPairs",
// ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairHeaderFlags", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "m_ThisBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ThisBodyAngularVelocity", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OtherBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_OtherBodyAngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ContactPairHeader::ContactPairHeader(::UnityEngine::EntityId m_BodyID, ::UnityEngine::EntityId m_OtherBodyID, ::System::IntPtr m_StartPtr, uint32_t m_NbPairs,
                                                              ::UnityEngine::CollisionPairHeaderFlags m_Flags, ::UnityEngine::Vector3 m_ThisBodyLinearVelocity,
                                                              ::UnityEngine::Vector3 m_ThisBodyAngularVelocity, ::UnityEngine::Vector3 m_OtherBodyLinearVelocity,
                                                              ::UnityEngine::Vector3 m_OtherBodyAngularVelocity) noexcept {
  this->m_BodyID = m_BodyID;
  this->m_OtherBodyID = m_OtherBodyID;
  this->m_StartPtr = m_StartPtr;
  this->m_NbPairs = m_NbPairs;
  this->m_Flags = m_Flags;
  this->m_ThisBodyLinearVelocity = m_ThisBodyLinearVelocity;
  this->m_ThisBodyAngularVelocity = m_ThisBodyAngularVelocity;
  this->m_OtherBodyLinearVelocity = m_OtherBodyLinearVelocity;
  this->m_OtherBodyAngularVelocity = m_OtherBodyAngularVelocity;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPairHeader::ContactPairHeader() {}

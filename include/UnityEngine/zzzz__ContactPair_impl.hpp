#pragma once
// IWYU pragma private; include "UnityEngine\ContactPair.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ContactPairPoint_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPair.get_colliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_colliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b92f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_colliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_otherColliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_otherColliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b92f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_otherColliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_collider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b71764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_collider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_otherCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_otherCollider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b716f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_otherCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_contactCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_contactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b92f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_contactCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_impulseSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_impulseSum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b92f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_impulseSum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b8f73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionEnter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b8f87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionStay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionStay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b8f870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionStay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_hasRemovedCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_hasRemovedCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b8f72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_hasRemovedCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.ExtractContacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*, bool)>(
    &::UnityEngine::ContactPair::ExtractContacts)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6b71fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(),
                                                { "ExtractContacts", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.ExtractContactsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)(::ArrayW<::UnityEngine::ContactPoint>, bool)>(&::UnityEngine::ContactPair::ExtractContactsArray)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b7198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "ExtractContactsArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.CopyToNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContactPair::*)(::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairPoint>)>(
    &::UnityEngine::ContactPair::CopyToNativeArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b92fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "CopyToNativeArray", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairPoint>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.GetContactPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::ContactPairPoint> (::UnityEngine::ContactPair::*)(int32_t)>(&::UnityEngine::ContactPair::GetContactPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b92fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPoint", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.GetContactPointFaceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ContactPair::*)(int32_t)>(&::UnityEngine::ContactPair::GetContactPointFaceIndex)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b93010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPointFaceIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.GetContactPoint_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPairPoint* (::UnityEngine::ContactPair::*)(int32_t)>(&::UnityEngine::ContactPair::GetContactPoint_Internal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b71d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPoint_Internal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_ColliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_ColliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b930f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ColliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_OtherColliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_OtherColliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b93100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_OtherColliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_Collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_Collider)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b93108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_Collider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_OtherCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_OtherCollider)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b9310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_OtherCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_ContactCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_ContactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b93110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ContactCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_ImpulseSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_ImpulseSum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b93118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ImpulseSum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b93124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionEnter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b93130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionStay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionStay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b9313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionStay", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ContactPair::get_colliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_colliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::get_otherColliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_otherColliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_otherCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_otherCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::get_contactCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_contactCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPair::get_impulseSum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_impulseSum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionEnter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionEnter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionStay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_isCollisionStay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_hasRemovedCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_hasRemovedCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::ExtractContacts(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* managedContainer, bool flipped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(),
                                              { "ExtractContacts", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, managedContainer, flipped);
}
inline int32_t UnityEngine::ContactPair::ExtractContactsArray(::ArrayW<::UnityEngine::ContactPoint> managedContainer, bool flipped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "ExtractContactsArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, managedContainer, flipped);
}
inline void UnityEngine::ContactPair::CopyToNativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairPoint> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "CopyToNativeArray", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairPoint>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline ::by_ref<::UnityEngine::ContactPairPoint> UnityEngine::ContactPair::GetContactPoint(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPoint", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::ContactPairPoint>>(*this, ___internal_method, index);
}
inline uint32_t UnityEngine::ContactPair::GetContactPointFaceIndex(int32_t contactIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPointFaceIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, contactIndex);
}
inline ::UnityEngine::ContactPairPoint* UnityEngine::ContactPair::GetContactPoint_Internal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "GetContactPoint_Internal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPairPoint*>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::ContactPair::get_ColliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ColliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::get_OtherColliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_OtherColliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_Collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_Collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_OtherCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_OtherCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::get_ContactCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ContactCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPair::get_ImpulseSum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_ImpulseSum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionEnter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionEnter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionStay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPair>(), { "get_IsCollisionStay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NbPoints", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Flags", ty: "::UnityEngine::CollisionPairFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Events", ty: "::UnityEngine::CollisionPairEventFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ImpulseSum", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPair::ContactPair(int32_t m_ColliderID, int32_t m_OtherColliderID, ::System::IntPtr m_StartPtr, uint32_t m_NbPoints, ::UnityEngine::CollisionPairFlags m_Flags,
                                                  ::UnityEngine::CollisionPairEventFlags m_Events, ::UnityEngine::Vector3 m_ImpulseSum) noexcept {
  this->m_ColliderID = m_ColliderID;
  this->m_OtherColliderID = m_OtherColliderID;
  this->m_StartPtr = m_StartPtr;
  this->m_NbPoints = m_NbPoints;
  this->m_Flags = m_Flags;
  this->m_Events = m_Events;
  this->m_ImpulseSum = m_ImpulseSum;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPair::ContactPair() {}

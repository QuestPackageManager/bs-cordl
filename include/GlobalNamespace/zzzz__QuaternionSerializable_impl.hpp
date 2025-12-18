#pragma once
// IWYU pragma private; include "GlobalNamespace/QuaternionSerializable.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.get_identity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuaternionSerializable (*)()>(&::GlobalNamespace::QuaternionSerializable::get_identity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3681f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "get_identity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.ToSmallest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Quaternion, ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::GlobalNamespace::QuaternionSerializable::ToSmallest)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x3682170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "ToSmallest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.FromSmallest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::QuaternionSerializable::FromSmallest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3682564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "FromSmallest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::QuaternionSerializable::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x367e828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::QuaternionSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x367e578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3682630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::System::Object*)>(
    &::GlobalNamespace::QuaternionSerializable::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3682664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Approximately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::Approximately)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3682700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Approximately", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3682790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.GetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::GetSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x36827a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "GetSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::QuaternionSerializable::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3681fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::QuaternionSerializable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3682844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3682850;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3682780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Implicit___GlobalNamespace__QuaternionSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::QuaternionSerializable::op_Implicit___GlobalNamespace__QuaternionSerializable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x367ec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(
    ::GlobalNamespace::QuaternionSerializable, ::GlobalNamespace::QuaternionSerializable)>(&::GlobalNamespace::QuaternionSerializable::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3682890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(
    ::GlobalNamespace::QuaternionSerializable, ::GlobalNamespace::QuaternionSerializable)>(&::GlobalNamespace::QuaternionSerializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36828ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::get_identity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "get_identity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::QuaternionSerializable::ToSmallest(::UnityEngine::Quaternion q, ::ByRef<int32_t> sa, ::ByRef<int32_t> sb, ::ByRef<int32_t> sc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "ToSmallest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, q, sa, sb, sc);
}
inline ::UnityEngine::Quaternion GlobalNamespace::QuaternionSerializable::FromSmallest(int32_t sa, int32_t sb, int32_t sc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "FromSmallest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, sa, sb, sc);
}
inline void GlobalNamespace::QuaternionSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::QuaternionSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::QuaternionSerializable::Equals(::GlobalNamespace::QuaternionSerializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::QuaternionSerializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::QuaternionSerializable::Approximately(::GlobalNamespace::QuaternionSerializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "Approximately", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t GlobalNamespace::QuaternionSerializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::QuaternionSerializable::GetSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "GetSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuaternionSerializable::_ctor(::UnityEngine::Quaternion q) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, q);
}
inline void GlobalNamespace::QuaternionSerializable::_ctor(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::QuaternionSerializable::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::QuaternionSerializable::op_Implicit___UnityEngine__Quaternion(::GlobalNamespace::QuaternionSerializable q) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Implicit___GlobalNamespace__QuaternionSerializable(::UnityEngine::Quaternion q) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable, false>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Addition(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable, false>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Subtraction(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuaternionSerializable>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuaternionSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable, false>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::QuaternionSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::QuaternionSerializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
constexpr GlobalNamespace::QuaternionSerializable::operator ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>* GlobalNamespace::QuaternionSerializable::i___System__IEquatable_1___GlobalNamespace__QuaternionSerializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_b", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_c",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::QuaternionSerializable::QuaternionSerializable(int32_t _a, int32_t _b, int32_t _c) noexcept {
  this->_a = _a;
  this->_b = _b;
  this->_c = _c;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuaternionSerializable::QuaternionSerializable() {}

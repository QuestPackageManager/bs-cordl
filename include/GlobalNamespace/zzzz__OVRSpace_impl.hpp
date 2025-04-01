#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpace.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpace_StorageLocation::OVRSpace_StorageLocation() {}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpace_StorageLocation::Local{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpace_StorageLocation::Cloud{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x400f5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "get_Handle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.TryGetUuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::ByRef<::System::Guid>)>(&::GlobalNamespace::OVRSpace::TryGetUuid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x400f5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "TryGetUuid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::get_Valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4002738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "get_Valid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpace::*)(uint64_t)>(&::GlobalNamespace::OVRSpace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x400f650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x400f658;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x400f6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpace::*)(::System::Object*)>(&::GlobalNamespace::OVRSpace::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x400f6ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSpace::*)()>(&::GlobalNamespace::OVRSpace::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x400f764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x400f784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x400f790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Implicit___GlobalNamespace__OVRSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace (*)(uint64_t)>(&::GlobalNamespace::OVRSpace::op_Implicit___GlobalNamespace__OVRSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4002734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpace.op_Implicit_uint64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::GlobalNamespace::OVRSpace)>(&::GlobalNamespace::OVRSpace::op_Implicit_uint64_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40023a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
inline uint64_t GlobalNamespace::OVRSpace::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "get_Handle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::TryGetUuid(::ByRef<::System::Guid> uuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "TryGetUuid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uuid);
}
inline bool GlobalNamespace::OVRSpace::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "get_Valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpace::_ctor(uint64_t handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::StringW GlobalNamespace::OVRSpace::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::Equals(::GlobalNamespace::OVRSpace other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRSpace::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRSpace::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpace::op_Equality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSpace::op_Inequality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpace::op_Implicit___GlobalNamespace__OVRSpace(uint64_t handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace, false>(nullptr, ___internal_method, handle);
}
inline uint64_t GlobalNamespace::OVRSpace::op_Implicit_uint64_t(::GlobalNamespace::OVRSpace space) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpace>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, space);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr GlobalNamespace::OVRSpace::operator ::System::IEquatable_1<::GlobalNamespace::OVRSpace>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSpace>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSpace>* GlobalNamespace::OVRSpace::i___System__IEquatable_1___GlobalNamespace__OVRSpace_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSpace>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpace::OVRSpace(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpace::OVRSpace() {}

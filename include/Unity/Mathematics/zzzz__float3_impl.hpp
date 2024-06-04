#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::__float3__DebuggerProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::__float3__DebuggerProxy::*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::__float3__DebuggerProxy::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x321b5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::__float3__DebuggerProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr float_t const& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr float_t& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr float_t const& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr float_t& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr float_t const& Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Unity::Mathematics::__float3__DebuggerProxy::__cordl_internal_set_z(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline ::Unity::Mathematics::__float3__DebuggerProxy* Unity::Mathematics::__float3__DebuggerProxy::New_ctor(::Unity::Mathematics::float3 v) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Mathematics::__float3__DebuggerProxy*>(v));
}
inline void Unity::Mathematics::__float3__DebuggerProxy::_ctor(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::__float3__DebuggerProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::__float3__DebuggerProxy::__float3__DebuggerProxy() {}
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(float_t, float_t, float_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(float_t, ::Unity::Mathematics::float2)>(
    &::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2, float_t)>(
    &::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(float_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(bool)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x321a2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::bool3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x321a2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::bool3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(int32_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x321a300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::int3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(uint32_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x321a330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::uint3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::half)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x321a358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::half3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x321a3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(double_t)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::float3::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x321a4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::double3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321a4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(bool)>(&::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x321a4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::bool3)>(
    &::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::bool3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(int32_t)>(&::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::int3)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::int3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(uint32_t)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::uint3)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x321a544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::uint3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::half)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x321a564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::half3)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x321a5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(double_t)>(
    &::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Explicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::double3)>(
    &::Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::double3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Subtraction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321a778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Division
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x321a79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x321a804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Modulus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Modulus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x321a860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Increment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Increment)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Increment", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Decrement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Decrement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Decrement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_LessThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321a9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_GreaterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aa00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aa48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aa90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_UnaryNegation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_UnaryPlus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_UnaryPlus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x321aaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_UnaryPlus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::op_Equality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321aaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321ab10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321ab34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::bool3 (*)(float_t, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Inequality)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x321ab58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ab7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ab90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321aba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321abb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321abc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321abdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321abec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ac94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321acb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321acc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321acd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321acec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321acfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ad1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ad40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ad94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ada4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321adb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321adc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321add4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ade4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321adf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ae2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ae60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321ae74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321ae98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321af18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321af3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321af80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321af94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321afa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321afb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321afc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321afd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321afe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321aff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzxz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzyz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzx)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzzz)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x321b0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_xyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xyz", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_xzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xzy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_yxz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yxz", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_yzx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yzx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_zxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zxy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zxz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zyx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::set_zyx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zyx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zyz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zzz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x321b290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_xy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_xz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_xz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_xz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xz", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_yx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_yz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_yz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_yz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yz", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zx",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_zx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_zy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::float3::set_zy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_zz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::get_zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x321b328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zz",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Mathematics::float3::*)(int32_t)>(&::Unity::Mathematics::float3::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Mathematics::float3::*)(int32_t, float_t)>(&::Unity::Mathematics::float3::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321b33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Mathematics::float3::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::float3::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x321b344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Mathematics::float3::*)(::System::Object*)>(&::Unity::Mathematics::float3::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x321b374;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x321b40c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Mathematics::float3::*)()>(&::Unity::Mathematics::float3::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x321b450;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Mathematics::float3::*)(::StringW, ::System::IFormatProvider*)>(
    &::Unity::Mathematics::float3::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x321b514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::float3::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x321b5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::float3.op_Implicit___Unity__Mathematics__float3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Vector3)>(
    &::Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x321b5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr Unity::Mathematics::float3::operator ::System::IEquatable_1<::Unity::Mathematics::float3>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::float3>* Unity::Mathematics::float3::i___System__IEquatable_1___Unity__Mathematics__float3_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::float3>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::float3::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::float3::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Mathematics::float3::setStaticF_zero(::Unity::Mathematics::float3 value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::float3, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get>(
      std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get>();
}
inline void Unity::Mathematics::float3::_ctor(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, z);
}
inline void Unity::Mathematics::float3::_ctor(float_t x, ::Unity::Mathematics::float2 yz) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, yz);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::float2 xy, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xy, z);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xyz);
}
inline void Unity::Mathematics::float3::_ctor(float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(bool v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::bool3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::int3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::uint3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::half3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(double_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Unity::Mathematics::float3::_ctor(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::double3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(bool v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::bool3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::bool3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::int3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::int3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(uint32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::uint3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::uint3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::Unity::Mathematics::half3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::half3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(double_t v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Explicit___Unity__Mathematics__float3(::Unity::Mathematics::double3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::double3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Multiply(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Addition(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Subtraction(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Division(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Division", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Modulus(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Modulus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Increment(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Increment", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Decrement(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Decrement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThan(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_UnaryNegation(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_UnaryNegation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_UnaryPlus(::Unity::Mathematics::float3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_UnaryPlus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, val);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Equality(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(::Unity::Mathematics::float3 lhs, float_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::float3::op_Inequality(float_t lhs, ::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xxzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xyzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_xzzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yxzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yyzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_yzzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zxzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zyzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::float3::get_zzzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xyz(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xyz", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xzy(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xzy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_xzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yxz(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yxz", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yzx(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yzx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_yzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zxy(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zxy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zxz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zxz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zyx(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zyx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zyz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zyz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::get_zzz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zzz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xy(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_xz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_xz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_xz(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_xz", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yx(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_yz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_yz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_yz(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_yz", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zx",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zx(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline void Unity::Mathematics::float3::set_zy(::Unity::Mathematics::float2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_zy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::float3::get_zz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_zz",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2, false>(this, ___internal_method);
}
inline float_t Unity::Mathematics::float3::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, index);
}
inline void Unity::Mathematics::float3::set_Item(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline bool Unity::Mathematics::float3::Equals(::Unity::Mathematics::float3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::float3::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::float3::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Mathematics::float3::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Vector3 Unity::Mathematics::float3::op_Implicit___UnityEngine__Vector3(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::float3::op_Implicit___Unity__Mathematics__float3(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::float3>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, v);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::float3::float3(float_t x, float_t y, float_t z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::float3::float3() {}

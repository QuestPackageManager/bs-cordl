#pragma once
// IWYU pragma private; include "UnityEngine\AnimationCurve.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationCurve_BindingsMarshaller.ConvertToManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a669d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a66a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToManaged(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(), { "ConvertToManaged", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToNative(::UnityEngine::AnimationCurve* animationCurve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, animationCurve);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationCurve_BindingsMarshaller::AnimationCurve_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a658f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::Internal_Create)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a65930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Create", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a65a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Equals", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_CopyFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a65acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_CopyFrom", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::Finalize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a65b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimationCurve::*)(float_t)>(&::UnityEngine::AnimationCurve::Evaluate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a65be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Keyframe> (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_keys)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a65c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.set_keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::set_keys)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a65de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "set_keys", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(float_t, float_t)>(&::UnityEngine::AnimationCurve::AddKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a65ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::AddKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a65f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey", {}, { ::i2c::type_of<::UnityEngine::Keyframe>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::AddKey_Internal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a65fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey_Internal", {}, { ::i2c::type_of<::UnityEngine::Keyframe>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.MoveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(int32_t, ::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::MoveKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a66058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "MoveKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Keyframe>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.ClearKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::ClearKeys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a66114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "ClearKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.RemoveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::RemoveKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a661a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "RemoveKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a6623c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a662fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SetKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::SetKeys)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a65de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "SetKeys", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::GetKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6626c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Keyframe> (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::GetKeys)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6a65c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a66464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SmoothTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(int32_t, float_t)>(&::UnityEngine::AnimationCurve::SmoothTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a664f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "SmoothTangents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Linear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::AnimationCurve::Linear)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a665ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                             { "Linear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.EaseInOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::AnimationCurve::EaseInOut)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6a666f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                             { "EaseInOut", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a666d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a66808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::System::IntPtr, bool)>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a6682c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::System::Object*)>(&::UnityEngine::AnimationCurve::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6a66838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a6692c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve::CopyFrom)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a669bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AnimationCurve::Internal_Create_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a659f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Create_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Equals_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Equals_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Equals_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_CopyFrom_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_CopyFrom_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a65b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_CopyFrom_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Evaluate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, float_t)>(&::UnityEngine::AnimationCurve::Evaluate_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a65c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Evaluate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t)>(&::UnityEngine::AnimationCurve::AddKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a65f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                             { "AddKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::AddKey_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                             { "AddKey_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.MoveKey_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::MoveKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a660c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                { "MoveKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.ClearKeys_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::ClearKeys_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a66164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "ClearKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.RemoveKey_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AnimationCurve::RemoveKey_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a661f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "RemoveKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_length_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::get_length_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6634c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SetKeys_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AnimationCurve::SetKeys_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                { "SetKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKey_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::GetKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a663cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                { "GetKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKeys_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AnimationCurve::GetKeys_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a66420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                { "GetKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetHashCode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::GetHashCode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a664b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetHashCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SmoothTangents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AnimationCurve::SmoothTangents_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a66558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                             { "SmoothTangents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::AnimationCurve::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::AnimationCurve::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::AnimationCurve::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr bool& UnityEngine::AnimationCurve::__cordl_internal_get_m_RequiresNativeCleanup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresNativeCleanup;
}
constexpr bool const& UnityEngine::AnimationCurve::__cordl_internal_get_m_RequiresNativeCleanup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresNativeCleanup;
}
constexpr void UnityEngine::AnimationCurve::__cordl_internal_set_m_RequiresNativeCleanup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresNativeCleanup = value;
}
inline void UnityEngine::AnimationCurve::Internal_Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AnimationCurve::Internal_Create(::ArrayW<::UnityEngine::Keyframe> keys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Create", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, keys);
}
inline bool UnityEngine::AnimationCurve::Internal_Equals(::System::IntPtr other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Equals", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::Internal_CopyFrom(::System::IntPtr other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_CopyFrom", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AnimationCurve::Evaluate(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline ::ArrayW<::UnityEngine::Keyframe> UnityEngine::AnimationCurve::get_keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Keyframe>>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::set_keys(::ArrayW<::UnityEngine::Keyframe> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "set_keys", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey(float_t time, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey(::UnityEngine::Keyframe key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey", {}, { ::i2c::type_of<::UnityEngine::Keyframe>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Internal(::UnityEngine::Keyframe key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey_Internal", {}, { ::i2c::type_of<::UnityEngine::Keyframe>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t UnityEngine::AnimationCurve::MoveKey(int32_t index, ::UnityEngine::Keyframe key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "MoveKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Keyframe>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, key);
}
inline void UnityEngine::AnimationCurve::ClearKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "ClearKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::RemoveKey(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "RemoveKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::Keyframe UnityEngine::AnimationCurve::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(this, ___internal_method, index);
}
inline int32_t UnityEngine::AnimationCurve::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::SetKeys(::ArrayW<::UnityEngine::Keyframe> keys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "SetKeys", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline ::UnityEngine::Keyframe UnityEngine::AnimationCurve::GetKey(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(this, ___internal_method, index);
}
inline ::ArrayW<::UnityEngine::Keyframe> UnityEngine::AnimationCurve::GetKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Keyframe>>(this, ___internal_method);
}
inline int32_t UnityEngine::AnimationCurve::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::SmoothTangents(int32_t index, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "SmoothTangents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, weight);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::Linear(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                           { "Linear", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, timeStart, valueStart, timeEnd, valueEnd);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::EaseInOut(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                           { "EaseInOut", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, timeStart, valueStart, timeEnd, valueEnd);
}
inline void UnityEngine::AnimationCurve::_ctor(::ArrayW<::UnityEngine::Keyframe> keys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline void UnityEngine::AnimationCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::_ctor(::System::IntPtr ptr, bool ownMemory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, ownMemory);
}
inline bool UnityEngine::AnimationCurve::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AnimationCurve*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool UnityEngine::AnimationCurve::Equals(::UnityEngine::AnimationCurve* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::CopyFrom(::UnityEngine::AnimationCurve* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::IntPtr UnityEngine::AnimationCurve::Internal_Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Create_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, keys);
}
inline bool UnityEngine::AnimationCurve::Internal_Equals_Injected(::System::IntPtr _unity_self, ::System::IntPtr other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_Equals_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, other);
}
inline void UnityEngine::AnimationCurve::Internal_CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Internal_CopyFrom_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, other);
}
inline float_t UnityEngine::AnimationCurve::Evaluate_Injected(::System::IntPtr _unity_self, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "Evaluate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, time);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Injected(::System::IntPtr _unity_self, float_t time, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "AddKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, time, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Keyframe> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                           { "AddKey_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, key);
}
inline int32_t UnityEngine::AnimationCurve::MoveKey_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Keyframe> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                              { "MoveKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, index, key);
}
inline void UnityEngine::AnimationCurve::ClearKeys_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "ClearKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::RemoveKey_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "RemoveKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index);
}
inline int32_t UnityEngine::AnimationCurve::get_length_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "get_length_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::SetKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                              { "SetKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keys);
}
inline void UnityEngine::AnimationCurve::GetKey_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Keyframe> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                              { "GetKey_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline void UnityEngine::AnimationCurve::GetKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                              { "GetKeys_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::AnimationCurve::GetHashCode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(), { "GetHashCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::SmoothTangents_Injected(::System::IntPtr _unity_self, int32_t index, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                                                           { "SmoothTangents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, weight);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor(::ArrayW<::UnityEngine::Keyframe> keys) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>(keys));
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>());
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor(::System::IntPtr ptr, bool ownMemory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>(ptr, ownMemory));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr UnityEngine::AnimationCurve::operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* UnityEngine::AnimationCurve::i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationCurve::AnimationCurve() {}

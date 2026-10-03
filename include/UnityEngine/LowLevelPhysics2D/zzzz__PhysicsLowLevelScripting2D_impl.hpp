#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsLowLevelScripting2D.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsAABB_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBodyDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsCallbacks_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsChainDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsDistanceJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsFixedJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsHingeJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRelativeJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShapeDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsSliderJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWheelJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6fd37e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6fd3850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6fd3860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), 3 }));
    return ___internal_method;
  }
};
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::ToNativeArray() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "ToNativeArray", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Span_1<T> UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::ToSpan() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "ToSpan", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::ReadOnlySpan_1<T> UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::ToReadOnlySpan() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "ToReadOnlySpan", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::PhysicsLowLevelScripting2D_PhysicsBuffer(::System::IntPtr m_Buffer, int32_t m_Size,
                                                                                                                               ::Unity::Collections::Allocator m_Allocator) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_Size = m_Size;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer::PhysicsLowLevelScripting2D_PhysicsBuffer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6fd1f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsBody_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsBody)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsBody_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetBodyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType (*)(::UnityEngine::LowLevelPhysics2D::PhysicsBody)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetBodyType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd20c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsBody_GetBodyType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetCallbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::LowLevelPhysics2D::PhysicsBody)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetCallbackTarget)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd2144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsBody_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsChain_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsChain_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6fd21c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsChain_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsJoint)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsJoint_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_GetJointType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType (*)(::UnityEngine::LowLevelPhysics2D::PhysicsJoint)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetJointType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd22f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsJoint_GetJointType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_GetCallbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::LowLevelPhysics2D::PhysicsJoint)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetCallbackTarget)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsJoint_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.DistanceJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::DistanceJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6fd23e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "DistanceJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.RelativeJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::RelativeJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6fd24a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "RelativeJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.SliderJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::SliderJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6fd2560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "SliderJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.HingeJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::HingeJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6fd2618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "HingeJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.FixedJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::FixedJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6fd26d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "FixedJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.WheelJoint_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::WheelJoint_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6fd2788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "WheelJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_CreateAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsRotate (*)(float_t)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_CreateAngle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd2840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsRotate_CreateAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsRotate)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd28d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsRotate_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_GetAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LowLevelPhysics2D::PhysicsRotate)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_GetAngle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsRotate_GetAngle", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsAABB_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsAABB)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsAABB_IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd29d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsAABB_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsMath_Atan2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsMath_Atan2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsMath_Atan2", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsGlobal_GetBypassLowLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_GetBypassLowLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd2a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsGlobal_GetBypassLowLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsGlobal_IsRenderingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_IsRenderingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd2ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsGlobal_IsRenderingAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsGlobal_PopulateWorldTransformWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::System::IntPtr, ::System::Span_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>)>(
        &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_PopulateWorldTransformWrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6fd2ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsGlobal_PopulateWorldTransformWrite",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::System::Span_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6fd2bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsShape_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetDefaultSurfaceMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultSurfaceMaterial)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6fd2ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsShape_GetDefaultSurfaceMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsShape)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsShape_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetShapeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType (*)(::UnityEngine::LowLevelPhysics2D::PhysicsShape)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetShapeType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd2db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsShape_GetShapeType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetCallbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::LowLevelPhysics2D::PhysicsShape)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetCallbackTarget)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd2e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsShape_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsContactId_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsContactId_IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd2eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsContactId_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetDefaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition (*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetDefaultDefinition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6fd2f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsWorld_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_IsValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsWorld_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_SetTransformWriteTweens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>)>(
        &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_SetTransformWriteTweens)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6fd306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_SetTransformWriteTweens",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetBodyUpdateCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets (*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::Unity::Collections::Allocator)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetBodyUpdateCallbackTargets)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fd3158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
            { "PhysicsWorld_GetBodyUpdateCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetTriggerCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets (*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::Unity::Collections::Allocator)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetTriggerCallbackTargets)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd3208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "PhysicsWorld_GetTriggerCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetContactCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets (*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::Unity::Collections::Allocator)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetContactCallbackTargets)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd32c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "PhysicsWorld_GetContactCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetJointThresholdCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets (*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::Unity::Collections::Allocator)>(&::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetJointThresholdCallbackTargets)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fd3380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
            { "PhysicsWorld_GetJointThresholdCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetRenderMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::StringW, ::StringW)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetRenderMaterial)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6fd3430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsWorld_GetRenderMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_DrawAllWorlds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsAABB)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_DrawAllWorlds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd3764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                           { "PhysicsWorld_DrawAllWorlds", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                            { "PhysicsBody_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd208c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsBody_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetBodyType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetBodyType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsBody_GetBodyType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsBody_GetCallbackTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetCallbackTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsBody_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsChain_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsChain_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd222c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                            { "PhysicsChain_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd22b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsJoint_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_GetJointType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetJointType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsJoint_GetJointType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsJoint_GetCallbackTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetCallbackTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd23ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsJoint_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.DistanceJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::DistanceJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
            { "DistanceJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.RelativeJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::RelativeJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
            { "RelativeJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.SliderJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::SliderJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd25d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "SliderJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.HingeJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::HingeJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd268c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "HingeJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.FixedJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::FixedJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "FixedJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.WheelJoint_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::WheelJoint_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd27fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                         { "WheelJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_CreateAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_CreateAngle_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                         { "PhysicsRotate_CreateAngle_Injected", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd291c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsRotate_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsRotate_GetAngle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_GetAngle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsRotate_GetAngle_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsAABB_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsAABB_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsAABB_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsGlobal_PopulateWorldTransformWrite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_PopulateWorldTransformWrite_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd2b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsGlobal_PopulateWorldTransformWrite_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                            { "PhysicsShape_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetDefaultSurfaceMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultSurfaceMaterial_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                         { "PhysicsShape_GetDefaultSurfaceMaterial_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsShape_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetShapeType_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetShapeType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsShape_GetShapeType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsShape_GetCallbackTarget_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetCallbackTarget_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsShape_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsContactId_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsContactId_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd2ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsContactId_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetDefaultDefinition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetDefaultDefinition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd2fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                            { "PhysicsWorld_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_IsValid_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_IsValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd3030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_SetTransformWriteTweens_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_SetTransformWriteTweens_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd3114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                         { "PhysicsWorld_SetTransformWriteTweens_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetBodyUpdateCallbackTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::Unity::Collections::Allocator,
                                                                ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetBodyUpdateCallbackTargets_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd31b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_GetBodyUpdateCallbackTargets_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetTriggerCallbackTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::Unity::Collections::Allocator,
                                                                ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetTriggerCallbackTargets_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_GetTriggerCallbackTargets_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetContactCallbackTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::Unity::Collections::Allocator,
                                                                ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetContactCallbackTargets_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_GetContactCallbackTargets_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetJointThresholdCallbackTargets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>, ::Unity::Collections::Allocator,
                                                                ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetJointThresholdCallbackTargets_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd33dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_GetJointThresholdCallbackTargets_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_GetRenderMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetRenderMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd3720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                         { "PhysicsWorld_GetRenderMaterial_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D.PhysicsWorld_DrawAllWorlds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_DrawAllWorlds_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd37a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                             { "PhysicsWorld_DrawAllWorlds_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsBody_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(nullptr, ___internal_method, useSettings);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsBody body) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsBody_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, body);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetBodyType(::UnityEngine::LowLevelPhysics2D::PhysicsBody body) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsBody_GetBodyType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType>(nullptr, ___internal_method, body);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsBody body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsBody_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, body);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsChain_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsChain_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(nullptr, ___internal_method, useSettings);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsJoint_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, joint);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetJointType(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsJoint_GetJointType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType>(nullptr, ___internal_method, joint);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsJoint joint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsJoint_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, joint);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::DistanceJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "DistanceJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::RelativeJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "RelativeJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::SliderJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "SliderJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::HingeJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "HingeJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::FixedJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "FixedJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::WheelJoint_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "WheelJoint_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_CreateAngle(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsRotate_CreateAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>(nullptr, ___internal_method, angle);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsRotate_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rotation);
}
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_GetAngle(::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsRotate_GetAngle", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rotate);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsAABB_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsAABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsAABB_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabb);
}
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsMath_Atan2(float_t y, float_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsMath_Atan2", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, y, x);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_GetBypassLowLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsGlobal_GetBypassLowLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_IsRenderingAllowed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsGlobal_IsRenderingAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_PopulateWorldTransformWrite(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::System::IntPtr transformAccessArrayIntPtr,
    ::System::Span_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweensArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsGlobal_PopulateWorldTransformWrite",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::System::Span_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, world, transformAccessArrayIntPtr, transformWriteTweensArray);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsShape_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(nullptr, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultSurfaceMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsShape_GetDefaultSurfaceMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(nullptr, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsShape_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shape);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetShapeType(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsShape_GetShapeType", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType>(nullptr, ___internal_method, shape);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetCallbackTarget(::UnityEngine::LowLevelPhysics2D::PhysicsShape shape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsShape_GetCallbackTarget", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, shape);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsContactId_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId contactId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsContactId_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, contactId);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetDefaultDefinition(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(), { "PhysicsWorld_GetDefaultDefinition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(nullptr, ___internal_method, useSettings);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_IsValid(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsWorld_IsValid", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_SetTransformWriteTweens(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweens) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_SetTransformWriteTweens",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, transformWriteTweens);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetBodyUpdateCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                       { "PhysicsWorld_GetBodyUpdateCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>(nullptr, ___internal_method, world, allocator);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetTriggerCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsWorld_GetTriggerCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(nullptr, ___internal_method, world, allocator);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetContactCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsWorld_GetContactCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(nullptr, ___internal_method, world, allocator);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetJointThresholdCallbackTargets(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                                          ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
          { "PhysicsWorld_GetJointThresholdCallbackTargets", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>(nullptr, ___internal_method, world, allocator);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetRenderMaterial(::StringW editorResourceName, ::StringW playerResourceName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsWorld_GetRenderMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, editorResourceName, playerResourceName);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_DrawAllWorlds(::UnityEngine::LowLevelPhysics2D::PhysicsAABB drawAABB) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                                                         { "PhysicsWorld_DrawAllWorlds", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawAABB);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                  ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsBody_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsBody_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, body);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetBodyType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsBody_GetBodyType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType>(nullptr, ___internal_method, body);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsBody_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody> body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsBody_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBody>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, body);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsChain_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                   ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsChain_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsJoint_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, joint);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetJointType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsJoint_GetJointType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType>(nullptr, ___internal_method, joint);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsJoint_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint> joint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsJoint_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, joint);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::DistanceJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
          { "DistanceJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::RelativeJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
          { "RelativeJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::SliderJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                  ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                       { "SliderJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::HingeJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                 ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "HingeJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::FixedJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                 ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "FixedJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::WheelJoint_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                 ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "WheelJoint_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_CreateAngle_Injected(float_t angle, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                       { "PhysicsRotate_CreateAngle_Injected", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angle, ret);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsRotate_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rotation);
}
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsRotate_GetAngle_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsRotate_GetAngle_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rotate);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsAABB_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB> aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsAABB_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabb);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsGlobal_PopulateWorldTransformWrite_Injected(
    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::System::IntPtr transformAccessArrayIntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformWriteTweensArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsGlobal_PopulateWorldTransformWrite_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, world, transformAccessArrayIntPtr, transformWriteTweensArray);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                   ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsShape_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetDefaultSurfaceMaterial_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                       { "PhysicsShape_GetDefaultSurfaceMaterial_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsShape_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shape);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetShapeType_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsShape_GetShapeType_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType>(nullptr, ___internal_method, shape);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsShape_GetCallbackTarget_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape> shape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsShape_GetCallbackTarget_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, shape);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsContactId_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId> contactId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsContactId_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, contactId);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetDefaultDefinition_Injected(bool useSettings,
                                                                                                                   ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                          { "PhysicsWorld_GetDefaultDefinition_Injected", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useSettings, ret);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_IsValid_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_IsValid_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_SetTransformWriteTweens_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world,
                                                                                                                      ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> transformWriteTweens) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                       { "PhysicsWorld_SetTransformWriteTweens_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, transformWriteTweens);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetBodyUpdateCallbackTargets_Injected(
    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_GetBodyUpdateCallbackTargets_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, allocator, ret);
}
inline void
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetTriggerCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world,
                                                                                                            ::Unity::Collections::Allocator allocator,
                                                                                                            ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_GetTriggerCallbackTargets_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, allocator, ret);
}
inline void
UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetContactCallbackTargets_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world,
                                                                                                            ::Unity::Collections::Allocator allocator,
                                                                                                            ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_GetContactCallbackTargets_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, allocator, ret);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetJointThresholdCallbackTargets_Injected(
    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld> world, ::Unity::Collections::Allocator allocator,
    ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_GetJointThresholdCallbackTargets_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>>(), ::i2c::type_of<::Unity::Collections::Allocator>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, allocator, ret);
}
inline ::System::IntPtr UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_GetRenderMaterial_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> editorResourceName,
                                                                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> playerResourceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                       { "PhysicsWorld_GetRenderMaterial_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, editorResourceName, playerResourceName);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsWorld_DrawAllWorlds_Injected(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB> drawAABB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D*>(),
                                                           { "PhysicsWorld_DrawAllWorlds_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawAABB);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D::PhysicsLowLevelScripting2D() {}

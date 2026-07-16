#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_impl.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_impl.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_8_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType::ObjectDispatcher_TransformTrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType::ObjectDispatcher_TransformTrackingType() {}
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::GlobalTRS{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::LocalTRS{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ObjectDispatcher_TransformTrackingType UnityEngine::ObjectDispatcher_TransformTrackingType::Hierarchy{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags() {}
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::SceneObjects{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::Assets{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::EditorOnlyObjects{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::Default{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ObjectDispatcher_TypeTrackingFlags UnityEngine::ObjectDispatcher_TypeTrackingFlags::All{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)()>(&::UnityEngine::ObjectDispatcher___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ad2c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c.__cctor_b__64_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)(::ArrayW<::UnityEngine::Object*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                                                                                     ::System::Action_1<::UnityEngine::TypeDispatchData>*)>(
    &::UnityEngine::ObjectDispatcher___c::__cctor_b__64_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ad2ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(),
                                                             { "<.cctor>b__64_0",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher___c.__cctor_b__64_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher___c::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                                     ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(
    &::UnityEngine::ObjectDispatcher___c::__cctor_b__64_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6ad2d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(), { "<.cctor>b__64_1",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                         ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ObjectDispatcher___c::setStaticF___9(::UnityEngine::ObjectDispatcher___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ObjectDispatcher___c*, "<>9", ::UnityEngine::ObjectDispatcher___c*>(std::forward<::UnityEngine::ObjectDispatcher___c*>(value));
}
inline ::UnityEngine::ObjectDispatcher___c* UnityEngine::ObjectDispatcher___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ObjectDispatcher___c*, "<>9", ::UnityEngine::ObjectDispatcher___c*>();
}
inline void UnityEngine::ObjectDispatcher___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher___c::__cctor_b__64_0(::ArrayW<::UnityEngine::Object*> changed, ::System::IntPtr changedID, ::System::IntPtr destroyedID, int32_t changedCount,
                                                               int32_t destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(),
                                                           { "<.cctor>b__64_0",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changed, changedID, destroyedID, changedCount, destroyedCount, callback);
}
inline void UnityEngine::ObjectDispatcher___c::__cctor_b__64_1(::System::IntPtr transformed, ::System::IntPtr parents, ::System::IntPtr localToWorldMatrices, ::System::IntPtr positions,
                                                               ::System::IntPtr rotations, ::System::IntPtr scales, int32_t count, ::System::Action_1<::UnityEngine::TransformDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher___c*>(), { "<.cctor>b__64_1",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                       ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformed, parents, localToWorldMatrices, positions, rotations, scales, count, callback);
}
inline ::UnityEngine::ObjectDispatcher___c* UnityEngine::ObjectDispatcher___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ObjectDispatcher___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher___c::ObjectDispatcher___c() {}
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad14c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6ad14d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6ad16e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ad17b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(bool)>(&::UnityEngine::ObjectDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6ad172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateSystemHandleAndThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)()>(&::UnityEngine::ObjectDispatcher::ValidateSystemHandleAndThrow)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad1858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateSystemHandleAndThrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateTypeAndThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*)>(&::UnityEngine::ObjectDispatcher::ValidateTypeAndThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ad18b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateTypeAndThrow", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.ValidateComponentTypeAndThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*)>(&::UnityEngine::ObjectDispatcher::ValidateComponentTypeAndThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ad1984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateComponentTypeAndThrow", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::TypeDispatchData)>(&::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ad1a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::UnityEngine::TypeDispatchData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::TransformDispatchData)>(&::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6ad1b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::UnityEngine::TransformDispatchData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::ArrayW<::UnityEngine::Component*>)>(&::UnityEngine::ObjectDispatcher::DispatchCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad1c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Component*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*, ::System::Action_1<::UnityEngine::TypeDispatchData>*, bool, bool)>(
    &::UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ad1c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                            { "DispatchTypeChangesAndClear",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTransformChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::ObjectDispatcher::*)(::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(
        &::UnityEngine::ObjectDispatcher::DispatchTransformChangesAndClear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6ad1dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchTransformChangesAndClear",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(),
                                                                                     ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.GetTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TypeDispatchData (::UnityEngine::ObjectDispatcher::*)(::System::Type*, ::Unity::Collections::Allocator, bool, bool)>(
    &::UnityEngine::ObjectDispatcher::GetTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ad1ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                         { "GetTypeChangesAndClear", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.GetTransformChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TransformDispatchData (::UnityEngine::ObjectDispatcher::*)(
    ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType, ::Unity::Collections::Allocator)>(&::UnityEngine::ObjectDispatcher::GetTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ad1f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                            { "GetTransformChangesAndClear",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTypeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::ObjectDispatcher_TypeTrackingFlags, ::ArrayW<::System::Type*>)>(
    &::UnityEngine::ObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ad1f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                { "EnableTypeTracking", {}, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTransformTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ObjectDispatcher::*)(::UnityEngine::ObjectDispatcher_TransformTrackingType, ::ArrayW<::System::Type*>)>(
    &::UnityEngine::ObjectDispatcher::EnableTransformTracking)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ad20c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                         { "EnableTransformTracking", {}, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.CreateDispatchSystemHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::ObjectDispatcher::CreateDispatchSystemHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad16bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "CreateDispatchSystemHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DestroyDispatchSystemHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ObjectDispatcher::DestroyDispatchSystemHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ad181c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DestroyDispatchSystemHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTypeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TypeTrackingFlags)>(
    &::UnityEngine::ObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad2070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
            { "EnableTypeTracking", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.EnableTransformTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType)>(
    &::UnityEngine::ObjectDispatcher::EnableTransformTracking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad21c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
            { "EnableTransformTracking", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTypeChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::IntPtr, ::System::Type*,
                         ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*,
                         bool, bool, ::System::Action_1<::UnityEngine::TypeDispatchData>*)>(&::UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ad1d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                             { "DispatchTypeChangesAndClear",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                                                                                   ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectDispatcher.DispatchTransformDataChangesAndClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::IntPtr, ::System::Type*, ::UnityEngine::ObjectDispatcher_TransformTrackingType,
    ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
    ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(&::UnityEngine::ObjectDispatcher::DispatchTransformDataChangesAndClear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ad1e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                { "DispatchTransformDataChangesAndClear",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(),
                                                    ::i2c::type_of<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                      int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>(),
                                                    ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Collections::Allocator& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_DispatchAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchAllocator;
}
constexpr ::Unity::Collections::Allocator const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_DispatchAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchAllocator;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_DispatchAllocator(::Unity::Collections::Allocator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchAllocator = value;
}
constexpr ::UnityEngine::TypeDispatchData& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDispatchData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDispatchData;
}
constexpr ::UnityEngine::TypeDispatchData const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDispatchData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDispatchData;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TypeDispatchData(::UnityEngine::TypeDispatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TypeDispatchData = value;
}
constexpr ::UnityEngine::TransformDispatchData& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDispatchData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDispatchData;
}
constexpr ::UnityEngine::TransformDispatchData const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDispatchData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDispatchData;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformDispatchData(::UnityEngine::TransformDispatchData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformDispatchData = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformedComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedComponents;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformedComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformedComponents;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformedComponents(::ArrayW<::UnityW<::UnityEngine::Component>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformedComponents = value;
}
constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>*& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDataCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDataCallback;
}
constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>* const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TypeDataCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeDataCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TypeDataCallback(::System::Action_1<::UnityEngine::TypeDispatchData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TypeDataCallback = value;
}
constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>*& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDataCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDataCallback;
}
constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>* const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformDataCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformDataCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformDataCallback(::System::Action_1<::UnityEngine::TransformDispatchData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformDataCallback = value;
}
constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformComponentCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformComponentCallback;
}
constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>* const& UnityEngine::ObjectDispatcher::__cordl_internal_get_m_TransformComponentCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformComponentCallback;
}
constexpr void UnityEngine::ObjectDispatcher::__cordl_internal_set_m_TransformComponentCallback(::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformComponentCallback = value;
}
inline void UnityEngine::ObjectDispatcher::setStaticF_s_TypeDispatch(
    ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*, "s_TypeDispatch",
      ::UnityEngine::ObjectDispatcher*>(
      std::forward<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>(value));
}
inline ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*
UnityEngine::ObjectDispatcher::getStaticF_s_TypeDispatch() {
  return ::cordl_internals::getStaticField<
      ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>*, "s_TypeDispatch",
      ::UnityEngine::ObjectDispatcher*>();
}
inline void UnityEngine::ObjectDispatcher::setStaticF_s_TransformDispatch(::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                             int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                       ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
                                    "s_TransformDispatch", ::UnityEngine::ObjectDispatcher*>(
      std::forward<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                      ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>(value));
}
inline ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                          ::System::Action_1<::UnityEngine::TransformDispatchData>*>*
UnityEngine::ObjectDispatcher::getStaticF_s_TransformDispatch() {
  return ::cordl_internals::getStaticField<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                              ::System::Action_1<::UnityEngine::TransformDispatchData>*>*,
                                           "s_TransformDispatch", ::UnityEngine::ObjectDispatcher*>();
}
inline bool UnityEngine::ObjectDispatcher::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::ObjectDispatcher::ValidateSystemHandleAndThrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateSystemHandleAndThrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::ValidateTypeAndThrow(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateTypeAndThrow", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::ObjectDispatcher::ValidateComponentTypeAndThrow(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "ValidateComponentTypeAndThrow", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::UnityEngine::TypeDispatchData data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::UnityEngine::TypeDispatchData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::UnityEngine::TransformDispatchData data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::UnityEngine::TransformDispatchData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::ObjectDispatcher::DispatchCallback(::ArrayW<::UnityEngine::Component*> components) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DispatchCallback", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Component*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components);
}
inline void UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear(::System::Type* type, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback, bool sortByInstanceID,
                                                                       bool noScriptingArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                          { "DispatchTypeChangesAndClear",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback, sortByInstanceID, noScriptingArray);
}
inline void UnityEngine::ObjectDispatcher::DispatchTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                            ::System::Action_1<::UnityEngine::TransformDispatchData>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                                                         { "DispatchTransformChangesAndClear",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(),
                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, trackingType, callback);
}
inline ::UnityEngine::TypeDispatchData UnityEngine::ObjectDispatcher::GetTypeChangesAndClear(::System::Type* type, ::Unity::Collections::Allocator allocator, bool sortByInstanceID,
                                                                                             bool noScriptingArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                          { "GetTypeChangesAndClear", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TypeDispatchData>(this, ___internal_method, type, allocator, sortByInstanceID, noScriptingArray);
}
inline ::UnityEngine::TransformDispatchData UnityEngine::ObjectDispatcher::GetTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                                       ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                          { "GetTransformChangesAndClear",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransformDispatchData>(this, ___internal_method, type, trackingType, allocator);
}
inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask, ::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                              { "EnableTypeTracking", {}, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeTrackingMask, types);
}
inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType, ::ArrayW<::System::Type*> types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                       { "EnableTransformTracking", {}, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType, types);
}
template <typename T>
inline ::UnityEngine::TypeDispatchData UnityEngine::ObjectDispatcher::GetTypeChangesAndClear(::Unity::Collections::Allocator allocator, bool sortByInstanceID, bool noScriptingArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                       { "GetTypeChangesAndClear", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TypeDispatchData>(this, ___internal_method, allocator, sortByInstanceID, noScriptingArray);
}
template <typename T>
inline ::UnityEngine::TransformDispatchData UnityEngine::ObjectDispatcher::GetTransformChangesAndClear(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                                       ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                           { "GetTransformChangesAndClear",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransformDispatchData>(this, ___internal_method, trackingType, allocator);
}
template <typename T> inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                           { "EnableTypeTracking", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeTrackingMask);
}
template <typename T> inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                           { "EnableTransformTracking", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType);
}
inline ::System::IntPtr UnityEngine::ObjectDispatcher::CreateDispatchSystemHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "CreateDispatchSystemHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::ObjectDispatcher::DestroyDispatchSystemHandle(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(), { "DestroyDispatchSystemHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::ObjectDispatcher::EnableTypeTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                       { "EnableTypeTracking", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TypeTrackingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, type, typeTrackingMask);
}
inline void UnityEngine::ObjectDispatcher::EnableTransformTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
          { "EnableTransformTracking", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, type, trackingType);
}
inline void UnityEngine::ObjectDispatcher::DispatchTypeChangesAndClear(
    ::System::IntPtr ptr, ::System::Type* type,
    ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* callback,
    bool sortByInstanceID, bool noScriptingArray, ::System::Action_1<::UnityEngine::TypeDispatchData>* param) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                                           { "DispatchTypeChangesAndClear",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                                                                                 ::System::Action_1<::UnityEngine::TypeDispatchData>*>*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, type, callback, sortByInstanceID, noScriptingArray, param);
}
inline void UnityEngine::ObjectDispatcher::DispatchTransformDataChangesAndClear(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                                ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                                                   ::System::IntPtr, int32_t, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* callback,
                                                                                ::System::Action_1<::UnityEngine::TransformDispatchData>* param) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ObjectDispatcher*>(),
                                              { "DispatchTransformDataChangesAndClear",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ObjectDispatcher_TransformTrackingType>(),
                                                  ::i2c::type_of<::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                                    ::System::Action_1<::UnityEngine::TransformDispatchData>*>*>(),
                                                  ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, type, trackingType, callback, param);
}
inline ::UnityEngine::ObjectDispatcher* UnityEngine::ObjectDispatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ObjectDispatcher*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ObjectDispatcher::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ObjectDispatcher::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectDispatcher::ObjectDispatcher() {}

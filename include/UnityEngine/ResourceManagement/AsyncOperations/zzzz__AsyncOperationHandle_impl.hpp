#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69218c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c._ReleaseHandleOnCompletion_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::_ReleaseHandleOnCompletion_b__16_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69218c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(),
                                                { "<ReleaseHandleOnCompletion>b__16_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::setStaticF___9(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*, "<>9",
                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(
      std::forward<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(value));
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*, "<>9",
                                           ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>();
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::setStaticF___9__16_0(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, "<>9__16_0",
                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(
      std::forward<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(value));
}
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, "<>9__16_0",
                                           ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>();
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::_ReleaseHandleOnCompletion_b__16_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>(),
                                              { "<ReleaseHandleOnCompletion>b__16_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle___c::AsyncOperationHandle___c() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x692089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_LocationName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_LocationName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69208a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_LocationName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.set_LocationName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::set_LocationName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69208ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "set_LocationName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69208b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, int32_t)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6920984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::StringW)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6907d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, int32_t, ::StringW)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6920994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Acquire)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6909034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.add_Completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Completed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69094a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                { "add_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.remove_Completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Completed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6920aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                { "remove_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.ReleaseHandleOnCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::ReleaseHandleOnCompletion)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6920b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "ReleaseHandleOnCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6920c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                             { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_DebugName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6920c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_DebugName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.add_Destroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Destroyed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6920e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                { "add_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.remove_Destroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Destroyed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6920ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                { "remove_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDependencies)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6920f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                            { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6921054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_InternalOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* (
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_InternalOp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69209a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_InternalOp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_IsDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_IsDone)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6921084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_IsDone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::IsValid)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6920d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_OperationException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_OperationException)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6921150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_OperationException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_PercentComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_PercentComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6921200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_PercentComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69212b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "GetDownloadStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.InternalGetDownloadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)(
    ::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::InternalGetDownloadStatus)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6921350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                             { "InternalGetDownloadStatus", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_ReferenceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_ReferenceCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69214ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_ReferenceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Release)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6908f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_Result
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Result)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x691c3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Result", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus (
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Status)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x692159c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.get_Task
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Task)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x692164c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Task", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69216fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6921700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6921718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle.WaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::WaitForCompletion)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x692171c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "WaitForCompletion", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_LocationName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_LocationName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::set_LocationName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "set_LocationName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, version);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, ::StringW locationName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, locationName);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, int32_t version,
                                                                                          ::StringW locationName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, version, locationName);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Acquire() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                              { "add_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                              { "remove_Completed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::ReleaseHandleOnCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "ReleaseHandleOnCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Convert() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "Convert", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Equals(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_DebugName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                              { "add_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                              { "remove_Destroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                          { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deps);
}
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_InternalOp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_InternalOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_IsDone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_IsDone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Exception* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_OperationException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_OperationException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_PercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_PercentComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::GetDownloadStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "GetDownloadStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::InternalGetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                           { "InternalGetDownloadStatus", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(*this, ___internal_method, visited);
}
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_ReferenceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_ReferenceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::Release() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Result() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Result", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::WaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), { "WaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InternalOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocationName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* m_InternalOp,
                                                                                                         int32_t m_Version, ::StringW m_LocationName) noexcept {
  this->m_InternalOp = m_InternalOp;
  this->m_Version = m_Version;
  this->m_LocationName = m_LocationName;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle::AsyncOperationHandle() {}

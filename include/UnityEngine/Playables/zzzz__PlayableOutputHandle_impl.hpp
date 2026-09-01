#pragma once
// IWYU pragma private; include "UnityEngine\Playables\PlayableOutputHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (*)()>(&::UnityEngine::Playables::PlayableOutputHandle::get_Null)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b06088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableOutputHandle::*)()>(&::UnityEngine::Playables::PlayableOutputHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b060e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::PlayableOutputHandle::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b05f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableOutputHandle::*)(::System::Object*)>(&::UnityEngine::Playables::PlayableOutputHandle::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b06104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { ::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::PlayableOutputHandle::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b061b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.CompareVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle)>(
    &::UnityEngine::Playables::PlayableOutputHandle::CompareVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b060f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                            { "CompareVersion", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableOutputHandle::*)()>(&::UnityEngine::Playables::PlayableOutputHandle::IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b0622c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetPlayableOutputType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Playables::PlayableOutputHandle::*)()>(&::UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b06268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetPlayableOutputType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetReferenceObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b062a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetReferenceObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetUserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableOutputHandle::*)()>(
    &::UnityEngine::Playables::PlayableOutputHandle::GetUserData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b063a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetUserData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetUserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableOutputHandle::SetUserData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b06524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetUserData", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetSourcePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableOutputHandle::*)()>(
    &::UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b06568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetSourcePlayable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetSourcePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::PlayableHandle, int32_t)>(
    &::UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b0663c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                             { "SetSourcePlayable", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetSourceOutputPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableOutputHandle::*)()>(&::UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b0672c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetSourceOutputPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(float_t)>(&::UnityEngine::Playables::PlayableOutputHandle::SetWeight)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b06768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.PushNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(
    ::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::UnityEngine::Playables::PlayableOutputHandle::PushNotification)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b067b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                            { "PushNotification",
                              {},
                              { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.AddNotificationReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::INotificationReceiver*)>(
    &::UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b068b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                                                           { "AddNotificationReceiver", {}, { ::i2c::type_of<::UnityEngine::Playables::INotificationReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetReferenceObject_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b0635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                         { "SetReferenceObject_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetUserData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Playables::PlayableOutputHandle::GetUserData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b064e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                             { "GetUserData_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.GetSourcePlayable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b065f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                         { "GetSourcePlayable_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.SetSourcePlayable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(
    &::UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b066d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                                                           { "SetSourcePlayable_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableOutputHandle.PushNotification_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::Playables::INotification*, ::System::Object*)>(
        &::UnityEngine::Playables::PlayableOutputHandle::PushNotification_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b06858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                { "PushNotification_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(),
                                                    ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableOutputHandle::setStaticF_m_Null(::UnityEngine::Playables::PlayableOutputHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Playables::PlayableOutputHandle, "m_Null", ::UnityEngine::Playables::PlayableOutputHandle>(
      std::forward<::UnityEngine::Playables::PlayableOutputHandle>(value));
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::PlayableOutputHandle::getStaticF_m_Null() {
  return ::cordl_internals::getStaticField<::UnityEngine::Playables::PlayableOutputHandle, "m_Null", ::UnityEngine::Playables::PlayableOutputHandle>();
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Playables::PlayableOutputHandle::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(nullptr, ___internal_method);
}
template <typename T> inline bool UnityEngine::Playables::PlayableOutputHandle::IsPlayableOutputOfType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "IsPlayableOutputOfType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::Playables::PlayableOutputHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableOutputHandle::op_Equality(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Playables::PlayableOutputHandle::Equals(::System::Object* p) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::Playables::PlayableOutputHandle::Equals(::UnityEngine::Playables::PlayableOutputHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Playables::PlayableOutputHandle::CompareVersion(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                          { "CompareVersion", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Playables::PlayableOutputHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetPlayableOutputType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject(::UnityEngine::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetReferenceObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableOutputHandle::GetUserData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetUserData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetUserData(::UnityEngine::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetUserData", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetSourcePlayable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable(::UnityEngine::Playables::PlayableHandle target, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                           { "SetSourcePlayable", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, port);
}
inline int32_t UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "GetSourceOutputPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetWeight(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(), { "SetWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, weight);
}
inline void UnityEngine::Playables::PlayableOutputHandle::PushNotification(::UnityEngine::Playables::PlayableHandle origin, ::UnityEngine::Playables::INotification* notification,
                                                                           ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                          { "PushNotification",
                            {},
                            { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, notification, context);
}
inline void UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                                                         { "AddNotificationReceiver", {}, { ::i2c::type_of<::UnityEngine::Playables::INotificationReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, receiver);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::System::IntPtr target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                       { "SetReferenceObject_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, target);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableOutputHandle::GetUserData_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                           { "GetUserData_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> _unity_self,
                                                                                     ::by_ref<::UnityEngine::Playables::PlayableHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
          { "GetSourcePlayable_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> _unity_self,
                                                                                     ::by_ref<::UnityEngine::Playables::PlayableHandle> target, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                                                                         { "SetSourcePlayable_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, target, port);
}
inline void UnityEngine::Playables::PlayableOutputHandle::PushNotification_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle> _unity_self,
                                                                                    ::by_ref<::UnityEngine::Playables::PlayableHandle> origin, ::UnityEngine::Playables::INotification* notification,
                                                                                    ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputHandle>(),
                                              { "PushNotification_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(),
                                                  ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, origin, notification, context);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>"
constexpr UnityEngine::Playables::PlayableOutputHandle::operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*
UnityEngine::Playables::PlayableOutputHandle::i___System__IEquatable_1___UnityEngine__Playables__PlayableOutputHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableOutputHandle::PlayableOutputHandle(::System::IntPtr m_Handle, uint32_t m_Version) noexcept {
  this->m_Handle = m_Handle;
  this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableOutputHandle::PlayableOutputHandle() {}

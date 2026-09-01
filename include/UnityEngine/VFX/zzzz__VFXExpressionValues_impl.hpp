#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXExpressionValues.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::VFX::VFXExpressionValues*)>(&::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e2cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller::ConvertToNative(::UnityEngine::VFX::VFXExpressionValues* vFXExpressionValues) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXExpressionValues*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, vFXExpressionValues);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXExpressionValues_BindingsMarshaller::VFXExpressionValues_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXExpressionValues::*)()>(&::UnityEngine::VFX::VFXExpressionValues::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.CreateExpressionValuesWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXExpressionValues* (*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXExpressionValues::CreateExpressionValuesWrapper)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "CreateExpressionValuesWrapper", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::VFXExpressionValues::*)(int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetBool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetBool", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::VFXExpressionValues::*)(int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::VFX::VFXExpressionValues::*)(int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetUInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetUInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::VFX::VFXExpressionValues::*)(int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetFloat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetFloat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::VFX::VFXExpressionValues::*)(int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetVector3)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e2ca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetVector3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetBool_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetBool_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2c840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetBool_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetInt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetUInt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetUInt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2c978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::VFX::VFXExpressionValues::GetFloat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2ca14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXExpressionValues.GetVector3_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::VFX::VFXExpressionValues::GetVector3_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2cad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                                { "GetVector3_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::VFX::VFXExpressionValues::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::VFX::VFXExpressionValues::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::VFX::VFXExpressionValues::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::VFX::VFXExpressionValues::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXExpressionValues* UnityEngine::VFX::VFXExpressionValues::CreateExpressionValuesWrapper(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "CreateExpressionValuesWrapper", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXExpressionValues*>(nullptr, ___internal_method, ptr);
}
inline bool UnityEngine::VFX::VFXExpressionValues::GetBool(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetBool", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameID);
}
inline int32_t UnityEngine::VFX::VFXExpressionValues::GetInt(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nameID);
}
inline uint32_t UnityEngine::VFX::VFXExpressionValues::GetUInt(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetUInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, nameID);
}
inline float_t UnityEngine::VFX::VFXExpressionValues::GetFloat(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetFloat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, nameID);
}
inline ::UnityEngine::Vector3 UnityEngine::VFX::VFXExpressionValues::GetVector3(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetVector3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, nameID);
}
inline bool UnityEngine::VFX::VFXExpressionValues::GetBool_Injected(::System::IntPtr _unity_self, int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetBool_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, nameID);
}
inline int32_t UnityEngine::VFX::VFXExpressionValues::GetInt_Injected(::System::IntPtr _unity_self, int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, nameID);
}
inline uint32_t UnityEngine::VFX::VFXExpressionValues::GetUInt_Injected(::System::IntPtr _unity_self, int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetUInt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, nameID);
}
inline float_t UnityEngine::VFX::VFXExpressionValues::GetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(), { "GetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, nameID);
}
inline void UnityEngine::VFX::VFXExpressionValues::GetVector3_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXExpressionValues*>(),
                                              { "GetVector3_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nameID, ret);
}
inline ::UnityEngine::VFX::VFXExpressionValues* UnityEngine::VFX::VFXExpressionValues::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXExpressionValues*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXExpressionValues::VFXExpressionValues() {}
